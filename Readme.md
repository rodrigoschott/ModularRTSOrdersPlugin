# User Manual: ColonyOrders Plugin

## 1. Introduction

### 1.1. Plugin Overview & Purpose

Welcome to the ColonyOrders Plugin documentation!

The **ColonyOrders Plugin** is a comprehensive Unreal Engine plugin designed to provide a robust framework for implementing complex order and ability systems, primarily tailored for **Real-Time Strategy (RTS) games** and similar genres requiring intricate unit control and dynamic gameplay mechanics.

**Purpose:**

The core purpose of this plugin is to equip developers and designers with a powerful, extensible, and well-structured foundation for managing how in-game entities (units, buildings, etc.) receive, process, and execute commands, as well as how they utilize special abilities. It aims to:

*   **Streamline RTS Development:** By providing pre-built systems for common RTS mechanics, it significantly reduces the boilerplate code and design effort required to get sophisticated unit behaviors up and running.
*   **Enhance Unit Control:** Offer a flexible order system that supports various target types, group execution logic, and integration with AI behavior trees for nuanced unit responses.
*   **Leverage Gameplay Ability System (GAS):** Deeply integrate with Unreal Engine's native Gameplay Ability System, extending it with RTS-specific features for attributes, abilities, and status effects. This allows for powerful, data-driven ability design and character state management.
*   **Promote Modularity and Extensibility:** Be architected in a way that allows users to easily customize existing functionalities or add new types of orders, abilities, and AI behaviors to suit their specific game design needs.
*   **Facilitate AI Implementation:** Provide tools and base classes that help in creating intelligent AI agents capable of understanding and executing player-issued or self-determined orders.

**Key Systems at a Glance:**

*   **Order Management System:** Defines how actors receive and process commands like moving, attacking, stopping, or using special actions. Includes features like order queuing and behavior tree integration.
*   **RTS-Enhanced Gameplay Ability System (GAS):** Builds upon UE's GAS to provide custom ability components, gameplay abilities tailored for RTS interactions, attribute sets (e.g., for attack mechanics), and gameplay effects with UI considerations.
*   **AI Control Framework:** Includes specialized AI controllers and helpers to drive unit behavior based on the issued orders.
*   **Gameplay Tag Integration:** Utilizes Gameplay Tags extensively for managing states, conditions, and event-driven logic, crucial for complex interactions in an RTS.

This documentation will guide you through the architecture of the ColonyOrders plugin, explain how to use its various components, and provide insights into modifying and extending it for your project. Whether you are a developer looking to understand the C++ internals or a designer aiming to configure units and abilities through Blueprints, this guide is for you.


### 1.2. Core Concepts

To effectively use and modify the ColonyOrders Plugin, it's essential to understand its foundational concepts. These concepts work together to create a flexible and powerful system for your RTS game.

#### 1.2.1. The Order System

At its heart, the plugin features a robust **Order System**. An "order" is a high-level command that can be issued to an actor (e.g., a unit or a building).

*   **`URTSOrder` (Base Class):** All specific commands (like "Move", "Attack", "Use Ability") are derived from this abstract base class. Each `URTSOrder` defines:
    *   **Validity Checks:** Can a specific actor obey this order? Is the target valid?
    *   **Targeting:** Does the order require an actor, a location, a direction, or no specific target?
    *   **Execution Logic:** How is the order carried out? This often involves interaction with other components or systems.
    *   **UI Representation:** How is the order displayed to the player (icon, name, description)?
*   **`URTSOrderComponent`:** This `UActorComponent` is attached to actors that can receive orders. It manages:
    *   The **current order** being executed by the actor.
    *   An **order queue** for sequential command execution.
    *   Callbacks for when orders start, succeed, fail, or are canceled.
*   **Order Issuance & Processing:** Orders can be issued directly, enqueued, or inserted into the queue. The `URTSOrderComponent` handles the lifecycle of these orders, interacting with AI controllers or other systems to fulfill them. The `ERTSOrderProcessPolicy` enum dictates how an order interacts with the queue and ongoing actions (e.g., if it's instant, can be canceled, or must complete).
*   **`URTSAutoOrderComponent` & `IRTSAutoOrderProvider`:** These facilitate automatic order issuance, allowing units to react to their environment without direct player input (e.g., auto-attacking nearby enemies).

#### 1.2.2. Gameplay Ability System (GAS) Integration

The plugin heavily leverages and extends Unreal Engine's **Gameplay Ability System (GAS)**. GAS is a powerful framework for creating character abilities, managing attributes, and applying status effects. The ColonyOrders plugin customizes it for RTS needs:

*   **`URTSAbilitySystemComponent` (Custom ASC):** This is a specialized `UAbilitySystemComponent` attached to actors. It manages:
    *   **Attributes:** Such as health, mana, attack damage, range (via `URTSAttributeSet` and its derivatives like `URTSAttackAttributeSet`).
    *   **Abilities:** Granting, activating, and managing `URTSGameplayAbility` instances.
    *   **Gameplay Effects:** Applying and tracking `URTSGameplayEffect` instances, which can modify attributes or apply tags.
    *   **RTS-Specific State:** XP, level, and ability points for units that can level up.
*   **`URTSGameplayAbility`:** A custom base class for abilities, adding RTS-specific properties like:
    *   Targeting types (`ERTSTargetType`).
    *   UI display information (icons, descriptions).
    *   Integration with the Order System (often an ability is triggered *by* an order, e.g., `URTSUseAbilityOrder`).
*   **`URTSGameplayEffect`:** Custom gameplay effects that can also store UI information, making it easier to display active buffs/debuffs to the player.
*   **Data-Driven Design:** GAS promotes a data-driven approach. Abilities, effects, and attribute modifications can often be configured in data assets, reducing the need for extensive C++ or Blueprint coding for each new piece of content.

#### 1.2.3. AI Control & Behavior Trees

For units controlled by Artificial Intelligence, the plugin provides mechanisms to translate orders into actions:

*   **`ARTSCharacterAIController`:** A custom AI Controller responsible for driving the behavior of RTS units. It takes orders from the `URTSOrderComponent` and uses a Behavior Tree to execute them.
*   **`URTSOrderWithBehavior`:** A specialized `URTSOrder` base class designed to be executed via a Behavior Tree. It specifies which Behavior Tree asset to run for that particular order.
*   **`URTSBlackboardHelper`:** A utility class to simplify reading and writing order-specific data (like target actor, target location) to and from the Behavior Tree's Blackboard.
*   **Behavior Tree Logic:** The actual decision-making and action sequences for an order (e.g., pathfinding for a move order, engaging a target for an attack order) are typically implemented within Behavior Tree assets. The plugin provides the bridge for these trees to understand and act upon the current order.

#### 1.2.4. The Role of Gameplay Tags

**Gameplay Tags (`FGameplayTag`)** are a cornerstone of both GAS and this plugin. They are hierarchical names (e.g., `Status.Changing.Immobilized`) used to represent a wide array of states, conditions, and events in a flexible and efficient manner.

*   **Status Representation:** Tags define the state of an actor (e.g., `Status.Changing.IsAlive`, `Status.Permanent.CanAttack`, `Status.Changing.Stealthed`).
*   **Conditional Logic:** Orders and abilities use tag requirements to determine if they can be activated or if a target is valid (e.g., an attack order might require the target to *not* have `Relationship.Friendly` and to *have* `Status.Changing.IsAlive`). The `FRTSOrderTagRequirements` struct is central to this.
*   **Event Triggering:** Abilities can be triggered by Gameplay Events, which are themselves often represented by tags.
*   **Communication:** Tags provide a decoupled way for different systems to communicate or react to changes in state without direct dependencies.
*   **`URTSGlobalTags`:** A centralized C++ class that defines commonly used tags, ensuring consistency and providing easy access.

Understanding these core concepts will provide a solid foundation for working with the ColonyOrders plugin. Each of these systems is interconnected, with orders often triggering abilities, abilities affecting attributes and tags, and AI controllers using behavior trees to execute orders based on an actor's current tags and attributes.


### 1.3. Plugin Setup

Integrating the ColonyOrders plugin into your Unreal Engine project is a straightforward process, similar to adding any other engine or marketplace plugin.

**Prerequisites:**

*   Unreal Engine (ensure compatibility with the plugin version, based on your file structure, it seems to be targeting UE 5.5 or a version that has migrated GAS components).
*   A C++ Unreal Engine project (if you intend to extend the plugin with C++ or if your project isn't already C++ based, you'll need to add a C++ class to convert it).

**Installation Steps:**

1.  **Obtain the Plugin:**
    *   If this is a marketplace plugin, download and install it through the Epic Games Launcher to your desired engine version.
    *   If you have the plugin source files directly (e.g., from a Git repository or a direct download):
        *   Create a `Plugins` folder in your project's root directory if one doesn't already exist (e.g., `MyProject/Plugins/`).
        *   Copy the entire `ColonyOrders` plugin folder into this `Plugins` directory. It should look something like: `MyProject/Plugins/ColonyOrders/ColonyOrders.uplugin`.

2.  **Enable the Plugin in Your Project:**
    *   Open your Unreal Engine project.
    *   Navigate to **Edit > Plugins** from the main menu.
    *   In the Plugins window, search for "ColonyOrders".
    *   Ensure the **Enabled** checkbox next to the ColonyOrders plugin is ticked.
    *   You might be prompted to restart the editor. Click **Restart Now**.

3.  **Verify Compilation (if added from source):**
    *   If you added the plugin from source files, Unreal Engine will attempt to compile it when you next open your project or when you try to compile your project's game code.
    *   If you encounter compilation errors:
        *   Ensure your project is set up for C++ development (has a C++ code module).
        *   Right-click your project's `.uproject` file in the File Explorer, and select "Generate Visual Studio project files."
        *   Open the generated `.sln` file in Visual Studio and try to build the project. This can often provide more detailed error messages.
        *   Common issues might relate to engine version mismatches or missing dependencies if the plugin wasn't configured for your specific engine version. The provided files seem to indicate a recent engine version (UE 5.5 changes for GAS are present in `RTSAbilitySystemHelper.cpp` and `RTSAbilitySystemComponent.cpp`).

4.  **Project Configuration (Gameplay Ability System):**
    *   The ColonyOrders plugin relies heavily on the Gameplay Ability System (GAS). While the plugin itself likely handles its own module dependencies, ensure your project is aware of GAS if you plan to interact with it directly or create new GAS elements.
    *   Open your project's `YourProjectName.Build.cs` file (e.g., `MyProject/Source/MyProject/MyProject.Build.cs`).
    *   Ensure that `"GameplayAbilities"`, `"GameplayTags"`, and `"GameplayTasks"` are included in your `PublicDependencyModuleNames` or `PrivateDependencyModuleNames` array. The plugin's `ColonyOrders.Build.cs` (not provided but standard for plugins) would already list these, but if your game module also uses them directly, it's good practice to list them there too.
        ```csharp
        PublicDependencyModuleNames.AddRange(new string[] { 
            "Core", 
            "CoreUObject", 
            "Engine", 
            "InputCore", 
            "GameplayAbilities", // Add if not present
            "GameplayTags",      // Add if not present
            "GameplayTasks"      // Add if not present
        });
        ```
    *   The plugin already includes `DECLARE_LOG_CATEGORY_EXTERN(LogRTS, Log, All);` and `DEFINE_LOG_CATEGORY(LogRTS);`. If you wish to use this log category in your game module, you might need to include the plugin's public header.

**Initial Usage:**

Once the plugin is enabled and compiled, its classes and assets (if any are exposed as content) will be available for use in your project, both in C++ and Blueprints. You can start by:

*   Adding the `URTSOrderComponent` and `URTSAbilitySystemComponent` to your actor Blueprints or C++ classes.
*   Creating Blueprint classes derived from `URTSOrder` or `URTSGameplayAbility` to define custom orders and abilities.
*   Setting up `ARTSCharacterAIController` for your AI-controlled pawns.

This setup provides the basic integration. Further configuration and usage will be detailed in the subsequent sections of this manual.











## 2. Core Systems Deep Dive

This section provides an in-depth look at the major systems within the ColonyOrders Plugin. Understanding these systems is key to leveraging the plugin's full potential.

### 2.1. The Order System

The Order System is responsible for how actors (units, buildings) receive, manage, and execute commands. It's designed to be flexible and integrate seamlessly with both player input and AI decision-making.

---

**2.1.1 `URTSOrderComponent`**

**1. Overview & Purpose**

The `URTSOrderComponent` is an `UActorComponent` that serves as the central manager for an actor's ability to receive, queue, and process orders. It is the primary interface through which actors are commanded within the ColonyOrders plugin. Any actor intended to be controllable (e.g., units, buildings that can execute tasks) must have this component attached.

*   **Primary Audience:** Developers and Designers.
    *   Developers will interact with it via C++ to issue orders programmatically, extend its behavior, and integrate it with custom game logic.
    *   Designers will use it in Blueprints to monitor order states for UI, potentially issue simple orders, and configure its exposed properties (like `OrderPreviewActorClass`).

**2. Core Functionality & Features**

*   **Order Issuance:** Allows new orders to be given to the actor, replacing or interacting with existing orders based on defined policies.
*   **Order Queuing:** Supports a queue of orders to be executed sequentially.
*   **Order Lifecycle Management:** Manages the active order and transitions between queued orders.
*   **State Notification:** Broadcasts delegates when orders change, are enqueued, or the queue is cleared.
*   **Replication:** Ensures order states are synchronized across the network for multiplayer games.
*   **Order Validation:** Performs checks to ensure an actor can obey a given order and that the target is valid.
*   **Dynamic Tag Monitoring:** Listens for changes in Gameplay Tags on the owner and target, allowing orders to be automatically canceled if their requirements are no longer met.
*   **Order Preview:** (Partially implemented/commented out in provided code) Can be configured to display visual previews of current and queued orders.

**Related Concepts/Classes:**

*   [`URTSOrder`](#X.X.X-URTSOrder): The base class for all order types.
*   [`FRTSOrderData`](#X.X.X-FRTSOrderData): The struct that encapsulates all information for a given order instance.
*   [`ARTSCharacterAIController`](#X.X.X-ARTSCharacterAIController): Often works in conjunction with `URTSOrder` instances that use Behavior Trees.
*   [`URTSOrderHelper`](#X.X.X-URTSOrderHelper): Provides utility functions often used by or alongside `URTSOrderComponent`.
*   [`URTSGlobalTags`](#X.X.X-URTSGlobalTags): Used for tag requirements and status.

**3. Key Properties (Header File Analysis - `RTSOrderComponent.h`)**

*   **Public Properties:**
    *   None explicitly public UPROPERTY. Interaction is primarily through methods and delegates.

*   **Protected/Private Properties (Relevant to Modifiers):**

    *   `UPROPERTY(BlueprintReadOnly, Category = "RTS", ReplicatedUsing = ReceivedCurrentOrder, meta = (AllowPrivateAccess = true))`
        `FRTSOrderData CurrentOrder;`
        *   **Purpose:** Holds the data for the order currently being executed by the actor. It's the primary state indicator for what the actor is doing.
        *   **Replication:** `ReplicatedUsing = ReceivedCurrentOrder`. This means the property is replicated from server to clients. When a client receives an update to `CurrentOrder`, the `ReceivedCurrentOrder()` function is called.
            *   `ReceivedCurrentOrder()` calls `NotifyOnOrderChanged()`, which in turn broadcasts the `OnOrderChanged` delegate. This is crucial for UI updates on clients.
        *   **BlueprintReadOnly:** Designers can read this value in Blueprints to, for example, display the current order's icon or name in the UI.
        *   **`AllowPrivateAccess = true`:** This allows Blueprints derived from C++ classes that own this component to access it, even though it's declared in a private/protected section of the C++ header if the UPROPERTY is in the component's header. For component properties, Blueprint access is more about the specifiers like `BlueprintReadOnly`.
        *   **Default Value:** Initialized to an empty `FRTSOrderData` or the `StopOrder` in `BeginPlay()`.
        *   **Considerations for Modification:** Directly modifying `CurrentOrder` outside the component's established methods (like `IssueOrder`, `ObeyOrder`) is highly discouraged as it would bypass replication logic and internal state management. Developers extending the component might need to *read* it, but writing should go through the proper channels.

    *   `UPROPERTY(BlueprintReadOnly, Category = "RTS", ReplicatedUsing = ReceivedCurrentOrder, meta = (AllowPrivateAccess = true))`
        `FRTSOrderData LastOrder;`
        *   **Purpose:** Stores the previous `CurrentOrder` when a new order is set. This can be useful for specific logic that needs to know what the actor was doing before the current command, though its direct usage in the provided code is minimal beyond internal state tracking.
        *   **Replication:** `ReplicatedUsing = ReceivedCurrentOrder`. This is interesting as it uses the same RepNotify as `CurrentOrder`. This implies that an update to `LastOrder` on the server (which happens in `SetCurrentOrder`) would also trigger `ReceivedCurrentOrder` on clients. This might be an oversight or intentional if `CurrentOrder` always changes when `LastOrder` does. Typically, distinct RepNotifies are used if properties need independent client-side reactions.
        *   **Considerations for Modification:** Primarily an internal state variable.

    *   `UPROPERTY(BlueprintReadOnly, Category = "RTS", ReplicatedUsing = ReceivedOrderQueue, meta = (AllowPrivateAccess = true))`
        `TArray<FRTSOrderData> OrderQueue;`
        *   **Purpose:** Holds a list of `FRTSOrderData` instances that are waiting to be executed after the `CurrentOrder` completes.
        *   **Replication:** `ReplicatedUsing = ReceivedOrderQueue`. When the client receives an update to this array, `ReceivedOrderQueue()` is called.
            *   `ReceivedOrderQueue()` calls `UpdateOrderPreviews()`, which is intended to refresh visual indicators for queued orders.
        *   **BlueprintReadOnly:** Designers can inspect the queue in Blueprints, for example, to display the sequence of upcoming orders in the UI.
        *   **Considerations for Modification:** While `BlueprintReadOnly`, developers modifying the plugin could potentially add/remove from this queue in subclasses, but it's generally managed by `EnqueueOrder`, `InsertOrderAfterCurrentOrder`, etc. Direct manipulation needs to carefully consider replication and the component's internal logic for processing the queue.

    *   `UPROPERTY()`
        `TSoftClassPtr<URTSOrder> StopOrder;`
        *   **Purpose:** A soft pointer to the class of `URTSOrder` that represents the "idle" or "stop" state for the actor. This order is issued when the queue is empty or an order fails/is canceled.
        *   **Replication:** Not replicated directly. It's typically set on the server during `BeginPlay()` by querying the actor's `ARTSCharacterAIController`. Clients would rely on the replicated `CurrentOrder` being set to this stop order.
        *   **Default Value:** Null initially, set in `BeginPlay()`.
        *   **Considerations for Modification:** Developers might want to allow different actors to have different default "stop" behaviors. This could be exposed as a configurable property or determined by more complex logic.

    *   `UPROPERTY(Category = RTS, BlueprintReadOnly, EditDefaultsOnly, meta = (AllowPrivateAccess = true))`
        `TSubclassOf<AActor> OrderPreviewActorClass;`
        *   **Purpose:** Defines the Blueprint class to be spawned for visualizing orders (e.g., a decal or marker at a move location).
        *   **Replication:** Not replicated. Configuration is per-instance or per-archetype. Spawning of previews happens on the client if selection logic is active (though this part seems partially commented out or externalized).
        *   **EditDefaultsOnly:** Designers can set this in the Blueprint editor for an actor archetype that uses this component.
        *   **Considerations for Modification:** Designers will primarily set this. Developers could subclass `URTSOrderComponent` to have custom logic for choosing different preview actors based on the order type.

    *   `UPROPERTY(Category = RTS, BlueprintReadOnly, EditDefaultsOnly, meta = (AllowPrivateAccess = true))`
        `TSoftClassPtr<URTSOrder> BeginConstructionOrder;`
        *   **Purpose:** A soft pointer to an order class specifically used to initiate construction. This is referenced in `OnDeselected` to potentially keep construction previews active.
        *   **Replication:** Not replicated. Configuration is per-instance or archetype.
        *   **EditDefaultsOnly:** Designers can set this in the Blueprint editor.
        *   **Considerations for Modification:** If your game has multiple types of "begin construction" orders or a different system, this might need adjustment or to be made more generic.

    *   `URTSSelectableComponent* SelectableComponent;`
        *   **Purpose:** A pointer to the actor's `URTSSelectableComponent`. This is commented out in the provided `BeginPlay`, suggesting it might be part of a system not included in the provided files, or its integration was changed. If active, it would be used to trigger `UpdateOrderPreviews` on selection/deselection.
        *   **Considerations for Modification:** If re-enabled or a similar selection system is used, ensure it's correctly initialized and its lifetime managed.

    *   `TMap<FGameplayTag, FDelegateHandle> RegisteredOwnerTagEventHandles;`
    *   `TMap<FGameplayTag, FDelegateHandle> RegisteredTargetTagEventHandles;`
        *   **Purpose:** These maps store handles to delegates registered with the `UAbilitySystemComponent` of the owner and target actors, respectively. They are used to listen for `FGameplayTag` changes that might invalidate the current order.
        *   **Internal Logic:** Populated in `RegisterTagListeners()` and cleared in `UnregisterTagListeners()`. The callbacks (`OnOwnerTagsChanged`, `OnTargetTagsChanged`) check if the tag change violates the current order's requirements.
        *   **Considerations for Modification:** This is a key part of the dynamic order cancellation logic. Modifiers should be aware of this if they change how tag requirements work or how orders are validated.

    *   `FVector LastOrderHomeLocation;`
    *   `bool bIsHomeLocationSet;`
        *   **Purpose:** Used to preserve a "home location" across a sequence of orders, particularly when an order is inserted before the current one (`InsertOrderBeforeCurrentOrder`). The `CurrentOrder` (which becomes the inserted order) gets the actor's current location as its home, and the *next* order (the previously current one) will use `LastOrderHomeLocation`.
        *   **Considerations for Modification:** This logic is specific to how `InsertOrderBeforeCurrentOrder` manages AI context. Changes to AI behavior or how orders chain might require adjustments here.

*   **Delegates:**

    *   `DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRTSOrderComponentOrderChangedSignature, const FRTSOrderData&, NewOrder);`
        `UPROPERTY(BlueprintAssignable, Category = "RTS")`
        `FRTSOrderComponentOrderChangedSignature OnOrderChanged;`
        *   **Purpose:** Broadcasts whenever the `CurrentOrder` of the actor changes.
        *   **When Broadcast:**
            *   Server: Called from `SetCurrentOrder()` after `CurrentOrder` is updated.
            *   Client: Called from `ReceivedCurrentOrder()` (the RepNotify for `CurrentOrder`) after the client receives the updated `CurrentOrder`.
        *   **Parameters:** `const FRTSOrderData& NewOrder`: The new current order.
        *   **C++ Usage Example:**
            ```cpp
            // In MyListeningActor.h
            #include "Orders/RTSOrderComponent.h" // Assuming URTSOrderComponent is in this path
            #include "Orders/RTSOrderData.h"    // For FRTSOrderData

            // ...
            UFUNCTION()
            void HandleOrderChanged(const FRTSOrderData& NewOrder);

            // In MyListeningActor.cpp
            // Assume MyRTSActor has an OrderComponent
            // MyRTSActor->FindComponentByClass<URTSOrderComponent>()->OnOrderChanged.AddDynamic(this, &UMyListeningActor::HandleOrderChanged);
            
            void UMyListeningActor::HandleOrderChanged(const FRTSOrderData& NewOrder)
            {
                if (NewOrder.OrderType.IsValid())
                {
                    UE_LOG(LogTemp, Warning, TEXT("Actor's order changed to: %s"), *NewOrder.OrderType->GetName());
                }
                else
                {
                    UE_LOG(LogTemp, Warning, TEXT("Actor's order changed to Stop/None."));
                }
            }
            ```
        *   **Blueprint Usage Example:**
            *   In a Blueprint that has a reference to an `URTSOrderComponent`, drag a wire from the component reference and search for "Assign OnOrderChanged". This creates an event node.
            *   Alternatively, select the `URTSOrderComponent` in the Components tab of an Actor Blueprint. In the Details panel, find the `OnOrderChanged` event and click the "+" button to add the event to the graph.
            *   (ASCII Art for BP Node)
                ```
                [URTSOrderComponent Ref] ---> (Event OnOrderChanged) --Exec--> [Custom Logic]
                                                |
                                                +-- (NewOrder : FRTSOrderData)
                ```

    *   `DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRTSOrderComponentOrderEnqueuedSignature, const FRTSOrderData&, Order);`
        `UPROPERTY(BlueprintAssignable, Category = "RTS")`
        `FRTSOrderComponentOrderEnqueuedSignature OnOrderEnqueued;`
        *   **Purpose:** Broadcasts when a new order is successfully added to the `OrderQueue`.
        *   **When Broadcast:** Called from `EnqueueOrder()` after an order is added to the `OrderQueue` and if the actor is not immediately obeying it (i.e., if it's already busy or the queue wasn't empty).
        *   **Parameters:** `const FRTSOrderData& Order`: The order that was enqueued.
        *   **C++ Usage Example:** Similar to `OnOrderChanged`, using `OnOrderEnqueued.AddDynamic(...)`.
        *   **Blueprint Usage Example:** Similar to `OnOrderChanged`, using the "Assign OnOrderEnqueued" event.

    *   `DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRTSOrderComponentOrderQueueClearedSignature);`
        `UPROPERTY(BlueprintAssignable, Category = "RTS")`
        `FRTSOrderComponentOrderQueueClearedSignature OnOrderQueueCleared;`
        *   **Purpose:** Broadcasts when the `OrderQueue` is completely cleared.
        *   **When Broadcast:** Called from `IssueOrder()` (as it clears the queue before issuing) and `ClearOrderQueue()`.
        *   **Parameters:** None.
        *   **C++ Usage Example:** Similar to `OnOrderChanged`, using `OnOrderQueueCleared.AddDynamic(...)`.
        *   **Blueprint Usage Example:** Similar to `OnOrderChanged`, using the "Assign OnOrderQueueCleared" event.

**4. Key Methods (Header & Source File Analysis - `RTSOrderComponent.h` & `RTSOrderComponent.cpp`)**

*   **Public Methods:**

    *   `virtual void NotifyOnOrderChanged(const FRTSOrderData& NewOrder);`
        *   **Purpose:** A virtual function responsible for actually broadcasting the `OnOrderChanged` delegate and updating order previews.
        *   **Parameters:** `const FRTSOrderData& NewOrder`: The order that is now current.
        *   **Internal Logic (`.cpp`):**
            1.  Calls `UpdateOrderPreviews()` (which is currently responsible for destroying old and creating new preview actors, though some of its logic is selection-dependent and commented out).
            2.  Broadcasts the `OnOrderChanged` delegate with `NewOrder`.
        *   **C++ Usage Example:** Not typically called directly by users. It's called internally by `SetCurrentOrder()` and `ReceivedCurrentOrder()`.
        *   **Risks & Considerations:** If overridden, `Super::NotifyOnOrderChanged(NewOrder)` should generally be called to ensure base functionality (delegate broadcast, preview updates) is maintained.
        *   **Considerations for Modification:** Subclasses can override this to add custom logic when the order changes, *after* the core notification. For example, playing a sound or triggering a particle effect specific to the actor type when it receives a new order.
            ```cpp
            // In MyCustomOrderComponent.h
            // virtual void NotifyOnOrderChanged(const FRTSOrderData& NewOrder) override;

            // In MyCustomOrderComponent.cpp
            // void UMyCustomOrderComponent::NotifyOnOrderChanged(const FRTSOrderData& NewOrder)
            // {
            //     Super::NotifyOnOrderChanged(NewOrder); // Essential for base functionality
            //     
            //     // Custom logic: e.g., log or play a specific sound based on NewOrder
            //     if (GetOwner())
            //     {
            //         UE_LOG(LogTemp, Log, TEXT("MyCustomOrderComponent: %s received order %s"), 
            //                *GetOwner()->GetName(), 
            //                NewOrder.OrderType.IsValid() ? *NewOrder.OrderType->GetName() : TEXT("NONE"));
            //     }
            // }
            ```

    *   `void IssueOrder(const FRTSOrderData& Order);`
        *   **Purpose:** Issues a new primary order to the actor. This will clear the existing order queue and may cancel the current order.
        *   **Parameters:** `const FRTSOrderData& Order`: The order to be issued.
        *   **Internal Logic (`.cpp`):**
            1.  **Authority Check:** Ensures the call is made on the server. Logs an error if called on a client.
            2.  **Clear Queue:** Empties `OrderQueue` and broadcasts `OnOrderQueueCleared`.
            3.  **No-Op Check:** If the new `Order` is identical to `CurrentOrder`, it returns early.
            4.  **Load Order Class:** Ensures `Order.OrderType` (a `TSoftClassPtr`) is loaded.
            5.  **Home Location Reset:** Resets `bIsHomeLocationSet` to `false`.
            6.  **Current Order Handling (Crucial Logic):**
                *   If `CurrentOrder` is not the `StopOrder` AND the new `Order`'s process policy is NOT `INSTANT`:
                    *   It checks the `ERTSOrderProcessPolicy` of the `CurrentOrder`:
                        *   If `CAN_BE_CANCELED`: Calls `OrderCanceled()` (which calls `URTSOrder::OrderCanceled()` and unregisters tag listeners). Then, if `CheckOrder(Order)` is true, it calls `ObeyOrder(Order)`. Otherwise, it calls `ObeyStopOrder()`.
                        *   If `CAN_NOT_BE_CANCELED`: The new `Order` is added to the `OrderQueue`. The current uninterruptible order continues.
                        *   If `INSTANT`: This state is considered an error (an instant order shouldn't be the `CurrentOrder` that needs canceling). Triggers a `check(0)`.
                *   Else (CurrentOrder is StopOrder, or new Order is INSTANT):
                    *   If `CheckOrder(Order)` is true, it calls `ObeyOrder(Order)`. Otherwise, it calls `ObeyStopOrder()`.
        *   **C++ Usage Example:**
            ```cpp
            // Assuming 'MyActor' has an 'URTSOrderComponent* OrderComp' and 'SomeOrderData' is a valid FRTSOrderData
            // if (MyActor->HasAuthority() && OrderComp)
            // {
            //     OrderComp->IssueOrder(SomeOrderData);
            // }
            ```
        *   **Blueprint Usage Example:** This method is not `BlueprintCallable`. Issuing orders from Blueprint would typically go through a PlayerController or AI system that then calls this C++ function on the server.
        *   **Risks & Considerations:**
            *   **Server-Only:** Must only be called on the server. Clients should use RPCs to their PlayerController to request orders.
            *   Clears the queue. If you want to add to the queue, use `EnqueueOrder`.
            *   The interaction with `ERTSOrderProcessPolicy` is critical to understand how existing orders are affected.
        *   **Considerations for Modification:** Core logic for order issuance. Subclassing might involve pre/post processing but altering the main flow requires caution.

    *   `void EnqueueOrder(const FRTSOrderData& Order);`
        *   **Purpose:** Adds an order to the end of the `OrderQueue`. If the actor is currently idle (executing `StopOrder`), this new order may be obeyed immediately.
        *   **Parameters:** `const FRTSOrderData& Order`: The order to enqueue.
        *   **Internal Logic (`.cpp`):**
            1.  **Authority Check:** Server-only.
            2.  **Validation:** Calls `CheckOrder(Order)`. If it fails, the order is not enqueued.
            3.  **Immediate Execution (If Idle):** If `OrderQueue` is empty AND `CurrentOrder.OrderType` is `StopOrder`, calls `ObeyOrder(Order)`.
            4.  **Enqueue Logic:** Otherwise, if the queue is not empty and the last order in the queue is identical to the new `Order`, it does nothing (prevents duplicate spam). Otherwise, adds `Order` to `OrderQueue`, broadcasts `OnOrderEnqueued`, and calls `UpdateOrderPreviews()`.
        *   **C++ Usage Example:**
            ```cpp
            // if (MyActor->HasAuthority() && OrderComp)
            // {
            //     OrderComp->EnqueueOrder(AnotherOrderData); 
            // }
            ```
        *   **Blueprint Usage Example:** Not `BlueprintCallable`.
        *   **Risks & Considerations:** Server-only. Order validation occurs before enqueueing.
        *   **Considerations for Modification:** One might want to change the duplicate check logic or add a max queue size.

    *   `void InsertOrderAfterCurrentOrder(const FRTSOrderData& Order);`
        *   **Purpose:** Inserts an order at the beginning of the `OrderQueue`, to be executed immediately after the `CurrentOrder` finishes.
        *   **Parameters:** `const FRTSOrderData& Order`: The order to insert.
        *   **Internal Logic (`.cpp`):**
            1.  **Authority Check:** Server-only.
            2.  **Validation:** Calls `CheckOrder(Order)`. If fails, returns.
            3.  **Immediate Execution (If Idle):** If `OrderQueue` is empty AND `CurrentOrder.OrderType` is `StopOrder`, calls `ObeyOrder(Order)`.
            4.  **Home Location Reset:** Sets `bIsHomeLocationSet = false;` (This ensures the inserted order, when it eventually runs, will get a fresh home location).
            5.  **Insertion:** Inserts `Order` at index 0 of `OrderQueue`.
        *   **C++ Usage Example:**
            ```cpp
            // if (MyActor->HasAuthority() && OrderComp)
            // {
            //     OrderComp->InsertOrderAfterCurrentOrder(PriorityOrderData);
            // }
            ```
        *   **Blueprint Usage Example:** Not `BlueprintCallable`.
        *   **Risks & Considerations:** Server-only. Modifies the execution flow by prioritizing this order next.

    *   `void InsertOrderBeforeCurrentOrder(const FRTSOrderData& Order);`
        *   **Purpose:** Inserts an order to be executed immediately. The *current* order is then re-queued to be executed after this newly inserted order finishes.
        *   **Parameters:** `const FRTSOrderData& Order`: The order to insert and execute now.
        *   **Internal Logic (`.cpp`):**
            1.  **Authority Check:** Server-only.
            2.  **Validation:** Calls `CheckOrder(Order)`. If fails, returns.
            3.  **Queue Current Order:** Inserts `CurrentOrder` at index 0 of `OrderQueue`.
            4.  **Save Home Location:** If the owner is a Pawn and has an `ARTSCharacterAIController`, its current `HomeLocation` (from the blackboard) is stored in `LastOrderHomeLocation`.
            5.  **Obey New Order:** Calls `ObeyOrder(Order)` to execute the inserted order immediately.
            6.  **Set Home Location Flag:** Sets `bIsHomeLocationSet = true;`. This signals that when the *original* `CurrentOrder` (now in the queue) is eventually re-obeyed, it should use `LastOrderHomeLocation`.
        *   **C++ Usage Example:**
            ```cpp
            // Useful for "interrupting" orders like a defensive ability activation.
            // if (MyActor->HasAuthority() && OrderComp)
            // {
            //     OrderComp->InsertOrderBeforeCurrentOrder(ImmediateActionOrderData);
            // }
            ```
        *   **Blueprint Usage Example:** Not `BlueprintCallable`.
        *   **Risks & Considerations:** Server-only. This is a complex operation that significantly alters the order flow and manages AI home location context.

    *   `void ClearOrderQueue();`
        *   **Purpose:** Empties the `OrderQueue`. Does not affect the `CurrentOrder`.
        *   **Internal Logic (`.cpp`):**
            1.  **Authority Check:** Server-only.
            2.  Empties `OrderQueue`.
            3.  Broadcasts `OnOrderQueueCleared`.
        *   **C++ Usage Example:**
            ```cpp
            // if (MyActor->HasAuthority() && OrderComp)
            // {
            //     OrderComp->ClearOrderQueue();
            // }
            ```
        *   **Blueprint Usage Example:** Not `BlueprintCallable`.

    *   `UFUNCTION(Category = RTS, BlueprintPure)`
        `TSoftClassPtr<URTSOrder> GetCurrentOrderType() const;`
        *   **Purpose:** Returns the type (`TSoftClassPtr<URTSOrder>`) of the current order.
        *   **BlueprintPure:** Can be called in Blueprints without an execution pin.
        *   **C++ Usage Example:** `TSoftClassPtr<URTSOrder> CurrentType = OrderComp->GetCurrentOrderType();`
        *   **Blueprint Usage Example:**
            *   (ASCII Art for BP Node)
                ```
                [OrderComponent Ref] ---> [GetCurrentOrderType] ---> (Return Value: OrderType SoftClassPtr)
                ```

    *   `UFUNCTION(Category = RTS, BlueprintPure)`
        `bool IsIdle() const;`
        *   **Purpose:** Checks if the actor is currently idle (i.e., its `CurrentOrderType` is the `StopOrder`).
        *   **BlueprintPure:** Can be called in Blueprints without an execution pin.
        *   **C++ Usage Example:** `bool bIsUnitIdle = OrderComp->IsIdle();`
        *   **Blueprint Usage Example:**
            *   (ASCII Art for BP Node)
                ```
                [OrderComponent Ref] ---> [IsIdle] ---> (Return Value: bool)
                ```

    *   `FRTSOrderData GetCurrentOrderData() const;`
        *   **Purpose:** Returns the full `FRTSOrderData` struct for the current order.
        *   **C++ Usage Example:** `FRTSOrderData CurrentData = OrderComp->GetCurrentOrderData();`
        *   **Blueprint Usage Example:** Not `BlueprintCallable` or `BlueprintPure` directly. Use `GetCurrentOrderType`, `GetCurrentOrderTargetActor`, etc. to get specific pieces of data in BP.

    *   `TArray<FRTSOrderData> GetCurrentOrderDataQueue() const;`
        *   **Purpose:** Returns a copy of the current `OrderQueue`.
        *   **C++ Usage Example:** `TArray<FRTSOrderData> QueueCopy = OrderComp->GetCurrentOrderDataQueue();`
        *   **Blueprint Usage Example:** Not directly exposed. If needed, a `BlueprintPure` UFUNCTION could be added.

    *   `UFUNCTION(Category = RTS, BlueprintPure)`
        `AActor* GetCurrentOrderTargetActor() const;`
        *   **Purpose:** Returns the target `AActor` of the `CurrentOrder`, if any.
        *   **BlueprintPure:** Can be called in Blueprints without an execution pin.

    *   `UFUNCTION(Category = RTS, BlueprintPure)`
        `FVector2D GetCurrentOrderTargetLocation() const;`
        *   **Purpose:** Returns the target `FVector2D` location of the `CurrentOrder`, if `bUseLocation` is true.
        *   **BlueprintPure:** Can be called in Blueprints without an execution pin.

    *   `UFUNCTION(Category = RTS, BlueprintPure)`
        `int32 GetCurrentOrderTargetIndex() const;`
        *   **Purpose:** Returns the `Index` parameter of the `CurrentOrder`.
        *   **BlueprintPure:** Can be called in Blueprints without an execution pin.

*   **Protected/Virtual Methods (Relevant to Modifiers):**
    *   `virtual void BeginPlay() override;`
        *   **Purpose:** Standard `UActorComponent` lifecycle method.
        *   **Internal Logic (`.cpp`):**
            1.  Calls `Super::BeginPlay()`.
            2.  Casts Owner to `APawn`.
            3.  (Commented out) Attempts to get `URTSSelectableComponent` and bind to its selection delegates.
            4.  Resets `CurrentOrder`.
            5.  Attempts to get the `ARTSCharacterAIController` from the owning Pawn.
            6.  Sets `StopOrder` from the controller.
            7.  Sets `CurrentOrder` to `StopOrder` and calls `IssueOrder(StopOrder)` to initialize the actor into an idle state.
        *   **Guidance for Overriding:** If overriding, **always call `Super::BeginPlay()` first.** Custom initialization specific to a derived order component can then be added. Be mindful of the order of operations, especially if your initialization depends on elements set up by the base `BeginPlay`.
            ```cpp
            // In MyCustomOrderComponent.cpp
            // void UMyCustomOrderComponent::BeginPlay()
            // {
            //     Super::BeginPlay(); // CRITICAL
            //     // My custom initialization, e.g., load a special default order
            // }
            ```

    *   `void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;`
        *   **Purpose:** Standard UE method for defining which properties should be replicated.
        *   **Internal Logic (`.cpp`):**
            *   `DOREPLIFETIME(URTSOrderComponent, CurrentOrder);`
            *   `DOREPLIFETIME(URTSOrderComponent, OrderQueue);`
        *   **Guidance for Overriding:** If you add new replicated properties in a derived class, override this method, call `Super::GetLifetimeReplicatedProps(OutLifetimeProps);`, and then add your `DOREPLIFETIME` macros.

*   **Private Methods (Conceptual Understanding for Modifiers):**

    *   `void SetCurrentOrder(FRTSOrderData NewOrder);`
        *   **Purpose:** Internal setter for `CurrentOrder`. Updates `LastOrder` and `CurrentOrder`, then calls `NotifyOnOrderChanged()`.
        *   **Impact:** This is the bottleneck for changing the active order. Modifiers wanting to change how order transitions are announced would look here or at `NotifyOnOrderChanged`.

    *   `UFUNCTION() void ReceivedCurrentOrder();`
    *   `UFUNCTION() void ReceivedOrderQueue();`
        *   **Purpose:** RepNotify functions. `ReceivedCurrentOrder` calls `NotifyOnOrderChanged(CurrentOrder)`. `ReceivedOrderQueue` calls `UpdateOrderPreviews()`.
        *   **Impact:** These are critical for client-side state synchronization and UI updates.

    *   `void ObeyOrder(const FRTSOrderData& Order);`
        *   **Purpose:** The core function that actually tells the `URTSOrder` instance to execute.
        *   **Internal Logic:**
            1.  Creates `FRTSOrderTargetData`.
            2.  Determines `HomeLocation` (either actor's current location or `LastOrderHomeLocation` if `bIsHomeLocationSet`).
            3.  Switches on the `OrderProcessPolicy`:
                *   `INSTANT`: Calls `URTSOrder::IssueOrder` directly without setting it as `CurrentOrder` and without a callback.
                *   `CAN_BE_CANCELED` / `CAN_NOT_BE_CANCELED`: If a previous order existed (not StopOrder), unregisters its tag listeners. Sets the new `Order` as `CurrentOrder`. Registers tag listeners for the new order. Calls `URTSOrder::IssueOrder` with `OnOrderEndedCallback` bound.
        *   **Impact:** Central point of order execution. Modifications to how orders are initiated or how their context (like HomeLocation) is passed would involve this function.

    *   `bool CheckOrder(const FRTSOrderData& Order) const;`
        *   **Purpose:** Validates an order using `URTSOrderHelper::CanObeyOrder` and `URTSOrderHelper::IsValidTarget`. Logs detailed error messages if validation fails.
        *   **Impact:** Key for preventing invalid orders from being processed.

    *   `void OnOrderEndedCallback(ERTSOrderResult OrderResult);`
        *   **Purpose:** Callback function that is bound to an `URTSOrder`'s completion delegate.
        *   **Internal Logic:** Calls `OrderEnded(OrderResult)`.
        *   **Impact:** The bridge between an individual order finishing and the `URTSOrderComponent` deciding what to do next.

    *   `void OrderEnded(ERTSOrderResult OrderResult);`
        *   **Purpose:** Handles the logic after an order finishes.
        *   **Internal Logic:**
            *   `FAILED`: Issues `StopOrder`.
            *   `CANCELED`: Checks `CanOrderBeConsideredAsSucceeded`. If not, issues `StopOrder`.
            *   `SUCCEEDED` (or CANCELED but considered succeeded): If `OrderQueue` is not empty, validates and obeys the next order. If queue is empty, issues `StopOrder`.
        *   **Impact:** Defines the flow of control after order completion. Modifications to queuing behavior or default actions after failure/success would target this.

    *   `void OrderCanceled();`
        *   **Purpose:** Notifies the `CurrentOrder.OrderType`'s CDO that the order was canceled by calling its `OrderCanceled` virtual method.
        *   **Impact:** Allows `URTSOrder` subclasses to perform custom cleanup when an order is externally canceled by the component.

    *   `void RegisterTagListeners(const FRTSOrderData& Order);`
    *   `void UnregisterTagListeners(const FRTSOrderData& Order);`
        *   **Purpose:** Manage Gameplay Tag event listeners on the owner and target's `UAbilitySystemComponent` based on the `CurrentOrder`'s `TagRequirements`.
        *   **Impact:** Critical for the dynamic cancellation of orders if conditions change.

    *   `UFUNCTION() void OnTargetTagsChanged(const FGameplayTag Tag, int32 NewCount);`
    *   `UFUNCTION() void OnOwnerTagsChanged(const FGameplayTag Tag, int32 NewCount);`
        *   **Purpose:** Callbacks for when registered tags change on the target or owner. They check if the tag change violates the `CurrentOrder`'s requirements and call `OrderEnded(ERTSOrderResult::CANCELED)` if so.
        *   **Impact:** Implement the actual tag-based order cancellation logic.

    *   `void ObeyStopOrder();`
        *   **Purpose:** Helper to issue the `StopOrder` cleanly.

    *   `AActor* CreateOrderPreviewActor(const FRTSOrderData& Order);`
    *   `UFUNCTION() void OnSelected();`
    *   `UFUNCTION() void OnDeselected();`
    *   `void UpdateOrderPreviews();`
        *   **Purpose:** Manage the spawning and destroying of visual preview actors for orders. `OnSelected`/`OnDeselected` are intended to control visibility based on actor selection (though parts are commented out). `UpdateOrderPreviews` refreshes all previews.
        *   **Impact:** Relates to UI/UX. Modifying how previews are displayed or their lifecycle would involve these.

**5. Integration & Usage Scenarios**

*   **Typical Setup:**
    1.  Add `URTSOrderComponent` to an `AActor` Blueprint or C++ class.
    2.  Ensure the actor has an `ARTSCharacterAIController` (if it's an AI unit that uses Behavior Trees for orders like move/attack) or a custom system to handle `URTSOrder::IssueOrder` for non-AI or simpler orders.
    3.  Ensure the actor has an `URTSAbilitySystemComponent` if orders will interact with abilities or tags.
    4.  In the `ARTSCharacterAIController`, set its `StopOrder` (e.g., to `URTSStopOrder`) and `CharacterBlackboardAsset`.
    5.  Player Controllers or AI systems will construct `FRTSOrderData` and call `URTSOrderComponent::IssueOrder` (or enqueue variants) on the server.
*   **Interaction with Other Plugin Systems:**
    *   **`URTSOrder`:** The `URTSOrderComponent` calls `IssueOrder()` on `URTSOrder` CDOs. The `URTSOrder` then executes its logic and eventually calls the `FRTSOrderCallback` passed by the component.
    *   **`ARTSCharacterAIController`:** For orders derived from `URTSOrderWithBehavior`, the `URTSOrder::IssueOrder` implementation will typically interact with the `ARTSCharacterAIController` to start a specific Behavior Tree. The controller then notifies the component of the BT's result.
    *   **`URTSAbilitySystemComponent`:** Used for tag checking (`RegisterTagListeners`, `OnOwnerTagsChanged`, `OnTargetTagsChanged`).
    *   **`URTSOrderHelper`:** Used internally for validation (`CheckOrder`).
*   **Developer Workflow (C++):**
    *   Creating new `URTSOrder` subclasses that define unique behaviors.
    *   Systems (e.g., PlayerController input handling, AI decision making) will get a reference to an actor's `URTSOrderComponent` and call `IssueOrder`, `EnqueueOrder`, etc.
    *   Subscribing to delegates like `OnOrderChanged` for custom game logic responses.
    *   Potentially subclassing `URTSOrderComponent` for highly specialized order management needs, though this should be rare.
*   **Designer Workflow (Blueprint):**
    *   Adding `URTSOrderComponent` to actor Blueprints.
    *   Configuring `OrderPreviewActorClass` and `BeginConstructionOrder` on instances or archetypes.
    *   Binding to `OnOrderChanged`, `OnOrderEnqueued`, `OnOrderQueueCleared` delegates in actor Blueprints for UI updates or visual feedback.
    *   Using `BlueprintPure` getter functions (`GetCurrentOrderType`, `IsIdle`, etc.) to query state for UI or gameplay conditions.

**6. What the User Needs to Implement/Provide**

*   **`URTSOrder` Subclasses:** For every distinct order type in their game (e.g., a specific "Patrol" order, "Build X" order), users must create a C++ or Blueprint subclass of `URTSOrder` (or its derivatives like `URTSCharacterAIOrder`).
*   **Player Input System:** A system (likely in the `APlayerController`) to translate player actions (mouse clicks, key presses) into `FRTSOrderData` and then RPC to the server to call `URTSOrderComponent::IssueOrder` (or other relevant methods) on the selected actor(s).
*   **AI Logic:** For AI-controlled units, users need to:
    *   Create `ARTSCharacterAIController` subclasses if custom AI controller logic is needed beyond what `ARTSCharacterAIController` provides.
    *   Design Behavior Trees that correspond to `URTSOrderWithBehavior` types. These trees will use the Blackboard values set by the `ARTSCharacterAIController` (via `URTSBlackboardHelper` keys) to execute the order.
*   **Ability System Setup:** If orders interact with abilities, users need to set up `URTSAbilitySystemComponent` on actors, create `URTSGameplayAbility` subclasses, `URTSAttributeSet`s, and `URTSGameplayEffect`s.
*   **(Optional) Selection System:** If the commented-out selection-based preview logic is desired, a selection component (like the hinted `URTSSelectableComponent`) and its integration with `URTSOrderComponent` would be needed.
*   **(Optional) `OrderPreviewActorClass` Assets:** Blueprint Actors to serve as visual previews for different orders.

**7. Advanced Topics & Considerations**

*   **Performance:**
    *   Frequent order changes or very large order queues could have performance implications due to replication and delegate broadcasts. This is generally not an issue for typical RTS command rates.
    *   Tag listening incurs some overhead. Orders with many tag requirements on many actors could increase this.
*   **Networking:**
    *   All order issuance and state changes are server-authoritative. Client-side prediction for orders is not inherently part of this component; clients react to replicated state.
    *   Ensure RPCs from clients to issue orders are validated on the server to prevent cheating.
*   **`ERTSOrderProcessPolicy` Impact:** Understanding how `INSTANT`, `CAN_BE_CANCELED`, and `CAN_NOT_BE_CANCELED` affect order interruption and queuing is crucial for predictable behavior. For example, an "Attack Move" order might be `CAN_BE_CANCELED` by a "Stop" order, but a special ability activation might be `CAN_NOT_BE_CANCELED` until it completes its animation.
*   **Error Logging:** The `LogOrderErrorMessage` provides a basic way to see why orders fail validation. This can be expanded for more detailed debug information.
*   **Flow Diagram (Simplified Order Issuance):**
    ```mermaid
    graph TD
        A[Player Input/AI Decision] --> B{Construct FRTSOrderData};
        B --> C[URTSOrderComponent::IssueOrder (Server)];
        C --> D{Clear OrderQueue};
        D --> E{CurrentOrder Policy Check};
        E -- CAN_BE_CANCELED --> F[Call CurrentOrder.OrderCanceled()];
        F --> G{CheckOrder(NewOrder)};
        E -- CAN_NOT_BE_CANCELED --> H[Enqueue NewOrder];
        E -- Default (e.g. Idle) --> G;
        G -- Valid --> I[ObeyOrder(NewOrder)];
        G -- Invalid --> J[ObeyStopOrder()];
        I --> K[URTSOrder::IssueOrder (on Order CDO)];
        K --> L[Order Executes (e.g., AI Controller starts BT)];
        L --> M[Order Finishes, calls FRTSOrderCallback];
        M --> N[URTSOrderComponent::OnOrderEndedCallback];
        N --> O{Process Next in Queue or StopOrder};
    ```












**2.1.2 `URTSOrder` (Abstract Base)**

**1. Overview & Purpose**

`URTSOrder` is an abstract base `UObject` class that serves as the foundation for all order types within the ColonyOrders plugin. It defines the common interface and a set of virtual functions that concrete order classes must implement to specify their behavior, targeting, UI representation, and validation logic. You cannot use `URTSOrder` directly; instead, you create subclasses (either in C++ or Blueprint) for each specific command your game requires (e.g., Move, Attack, Build, UseSkill).

*   **Primary Audience:** Developers. Designers will interact with the *subclasses* of `URTSOrder` by creating Blueprint versions of them or by referencing them in data assets, but the core definition and extension of `URTSOrder` itself is a developer task.

**2. Core Functionality & Features**

*   **Defines Order Contract:** Establishes the set of functions that all order types must or can override to define their specific characteristics.
*   **Validation Logic:** Provides hooks (`CanObeyOrder`, `IsValidTarget`) for orders to determine if they can be executed by a given actor or on a specific target.
*   **Targeting Information:** Allows orders to specify what kind of target they expect (`GetTargetType`).
*   **Group Behavior:** Defines how orders apply to groups of units (`IsCreatingIndividualTargetLocations`, `GetGroupExecutionType`).
*   **UI Data:** Provides methods to fetch UI-relevant information like icons, names, and descriptions.
*   **Execution Policy:** Allows orders to define their process policy (`GetOrderProcessPolicy`), influencing how they interact with the `URTSOrderComponent`'s queue.
*   **Tag Requirements:** Specifies Gameplay Tag conditions for the source actor and target for an order to be valid or successful.
*   **Fallback Mechanism:** Can define a fallback order to issue if the primary order fails validation at a higher level.

**Related Concepts/Classes:**

*   [`URTSOrderComponent`](#2.1.1-URTSOrderComponent): Manages instances of `FRTSOrderData` which point to `URTSOrder` types. It calls the methods on `URTSOrder` CDOs (Class Default Objects) to get information and issue commands.
*   [`FRTSOrderData`](#X.X.X-FRTSOrderData): The struct holding runtime information for an order, including a `TSoftClassPtr<URTSOrder>` to the specific order class.
*   [`ARTSCharacterAIController`](#X.X.X-ARTSCharacterAIController): Often involved in the execution of orders derived from `URTSOrderWithBehavior`.
*   [`URTSOrderHelper`](#X.X.X-URTSOrderHelper): Provides static utility functions that often call methods on `URTSOrder` CDOs.
*   [`FRTSOrderTagRequirements`](#X.X.X-FRTSOrderTagRequirements): Struct used to define tag-based conditions.

**3. Key Properties (Header File Analysis - `RTSOrder.h`)**

*   **Protected Properties (Relevant to Modifiers/Subclasses):**

    *   `UPROPERTY(Category = "RTS Requirements", EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `FRTSOrderTagRequirements TagRequirements;`
        *   **Purpose:** Defines the Gameplay Tag requirements that the source actor (issuing the order) and the target actor/location must satisfy for the order to be *issued*.
        *   **`EditDefaultsOnly`:** This can be configured per `URTSOrder` subclass in the Blueprint editor (Class Defaults).
        *   **`BlueprintReadOnly`:** Designers can inspect these requirements in Blueprints.
        *   **Default Value:** The constructor initializes `TagRequirements.SourceRequiredTags` to include `URTSGlobalTags::Status_Changing_IsAlive()`.
        *   **Considerations for Modification:** Subclasses will primarily configure this property in their Class Defaults to define preconditions. For example, an "Attack" order would set `TargetRequiredTags` to include `Relationship.Hostile`.
        *   **Example `FRTSOrderTagRequirements` Structure:**
            ```cpp
            // FRTSOrderTagRequirements contains:
            // FGameplayTagContainer SourceRequiredTags;
            // FGameplayTagContainer SourceBlockedTags;
            // FGameplayTagContainer TargetRequiredTags;
            // FGameplayTagContainer TargetBlockedTags;
            ```

    *   `UPROPERTY(Category = "RTS Requirements", EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `FRTSOrderTagRequirements SuccessTagRequirements;`
        *   **Purpose:** Defines the Gameplay Tag requirements that must be met for the order to be considered *successfully completed*. This is checked by `URTSOrderHelper::CanOrderBeConsideredAsSucceeded`.
        *   **`EditDefaultsOnly` / `BlueprintReadOnly`:** Same as `TagRequirements`.
        *   **Default Value:** Empty by default.
        *   **Considerations for Modification:** Useful for orders whose success depends on a state change. For example, a "Capture Point" order might require the target point to have a `State.CapturedBy.Player` tag after completion. An "Attack" order typically sets `SuccessTagRequirements.TargetBlockedTags` to include `Status.Changing.IsAlive` (meaning the target must *not* be alive for the attack to be considered fully successful in eliminating it).

    *   `UPROPERTY(Category = "RTS", EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `ERTSOrderProcessPolicy OrderProcessPolicy;`
        *   **Purpose:** Dictates how the `URTSOrderComponent` handles this order in relation to the current order and the order queue.
            *   `INSTANT`: Executes immediately without affecting the current order or queue (e.g., toggling a stance, placing a rally point).
            *   `CAN_BE_CANCELED`: Becomes the current order; can be interrupted by a new order.
            *   `CAN_NOT_BE_CANCELED`: Becomes the current order; cannot be interrupted by a new order (the new order will be queued).
        *   **`EditDefaultsOnly` / `BlueprintReadOnly`:** Configurable in subclasses' Class Defaults.
        *   **Default Value:** `ERTSOrderProcessPolicy::CAN_BE_CANCELED`.
        *   **Considerations for Modification:** This is a crucial setting for defining order behavior. For instance, a unit's ultimate ability might be `CAN_NOT_BE_CANCELED`.

*   **Private Properties:**

    *   `UPROPERTY(Category = "RTS", EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `TSoftClassPtr<URTSOrder> FallbackOrder;`
        *   **Purpose:** Specifies another `URTSOrder` class to issue if *this* order fails higher-level validation (e.g., by player input systems before even reaching `URTSOrderComponent::CheckOrder`). For example, if a player tries to issue an "Attack" order on friendly unit, the input system might detect this and issue a "Move" order (`FallbackOrder`) to that unit's location instead.
        *   **`EditDefaultsOnly` / `BlueprintReadOnly`:** Configurable in subclasses' Class Defaults.
        *   **Default Value:** `nullptr`.
        *   **Considerations for Modification:** This provides a way to make player input more forgiving or intuitive. The actual logic to use the fallback order needs to be implemented by the system that initially processes player input and creates the `FRTSOrderData`.

**4. Key Methods (Header & Source File Analysis - `RTSOrder.h` & `RTSOrder.cpp`)**

*Note: As `URTSOrder` is an abstract class, its methods are often virtual and provide default implementations. The primary purpose is for subclasses to override them.*

*   **Public Virtual Methods (for subclasses to override):**

    *   `virtual bool CanObeyOrder(const AActor* OrderedActor, int32 Index, FRTSOrderErrorTags* OutErrorTags = nullptr) const;`
        *   **Purpose:** Checks if the `OrderedActor` is capable of executing this type of order at all, irrespective of a specific target. This is the first stage of validation specific to the order type.
        *   **Parameters:**
            *   `OrderedActor`: The actor attempting to execute the order.
            *   `Index`: An optional integer, often used if the order can have multiple variations (e.g., different abilities selected by an index).
            *   `OutErrorTags`: Optional pointer to `FRTSOrderErrorTags` to fill with reasons for failure.
        *   **Default Behavior (`.cpp`):** Returns `true`.
        *   **Internal Logic Highlights:** Base implementation is trivial. Subclasses must provide meaningful checks.
        *   **C++ Override Example (Conceptual):**
            ```cpp
            // In MySpecificOrder.h
            // virtual bool CanObeyOrder(const AActor* OrderedActor, int32 Index, FRTSOrderErrorTags* OutErrorTags = nullptr) const override;

            // In MySpecificOrder.cpp
            // bool UMySpecificOrder::CanObeyOrder(const AActor* OrderedActor, int32 Index, FRTSOrderErrorTags* OutErrorTags) const
            // {
            //     if (!Super::CanObeyOrder(OrderedActor, Index, OutErrorTags)) // Good practice
            //     {
            //         return false;
            //     }
            //     UMyUnitComponent* UnitComp = OrderedActor->FindComponentByClass<UMyUnitComponent>();
            //     if (!UnitComp || !UnitComp->HasRequiredUpgradeForThisOrder())
            //     {
            //         if (OutErrorTags) OutErrorTags->ErrorTags.AddTag(FGameplayTag::RequestGameplayTag("Order.Error.MissingUpgrade"));
            //         return false;
            //     }
            //     return true;
            // }
            ```
        *   **Blueprint Override Example:** If `URTSOrder` was `Blueprintable` (it's `Abstract, Blueprintable`), you could override this in a Blueprint child class.
            *   (ASCII Art for BP Node if applicable)
                ```
                Event CanObeyOrder (OrderedActor, Index) -> [Custom Logic] -> Return Node (bool, OutErrorTags)
                ```
        *   **Risks & Considerations:** This is called frequently by `URTSOrderHelper::CanObeyOrder`. Keep it efficient. `OutErrorTags` is useful for providing UI feedback.
        *   **Guidance for Overriding:** Check actor-specific conditions (e.g., has enough resources, possesses a required component, isn't in a state that prevents this order type).

    *   `virtual bool IsValidTarget(const AActor* OrderedActor, const FRTSOrderTargetData& TargetData, int32 Index, FRTSOrderErrorTags* OutErrorTags = nullptr) const;`
        *   **Purpose:** Checks if the provided `TargetData` (which can be an actor, location, or none) is a valid target for *this* order, given the `OrderedActor`. This is called after `CanObeyOrder` and basic tag checks pass.
        *   **Parameters:**
            *   `OrderedActor`: The actor that would execute the order.
            *   `TargetData`: Contains the potential target actor, location, and pre-calculated target tags.
            *   `Index`: Optional order index.
            *   `OutErrorTags`: Optional pointer for error reasons.
        *   **Default Behavior (`.cpp`):** Returns `true`.
        *   **C++ Override Example (Conceptual for an Attack Order):**
            ```cpp
            // In MyAttackOrder.cpp
            // bool UMyAttackOrder::IsValidTarget(const AActor* OrderedActor, const FRTSOrderTargetData& TargetData, int32 Index, FRTSOrderErrorTags* OutErrorTags) const
            // {
            //     if (!Super::IsValidTarget(OrderedActor, TargetData, OutErrorTags)) return false;
            //
            //     if (GetTargetType(OrderedActor, Index) == ERTSTargetType::ACTOR && !TargetData.Actor)
            //     {
            //         if (OutErrorTags) OutErrorTags->ErrorTags.AddTag(FGameplayTag::RequestGameplayTag("Order.Error.TargetActorRequired"));
            //         return false; 
            //     }
            //     // Further checks: e.g., line of sight, target not already destroyed, etc.
            //     // if (TargetData.Actor && TargetData.Actor->IsPendingKill()) return false; 
            //     return true;
            // }
            ```
        *   **Blueprint Override Example:** Similar to `CanObeyOrder`.
        *   **Risks & Considerations:** Called frequently by `URTSOrderHelper::IsValidTarget`. Efficiency is important.
        *   **Guidance for Overriding:** Implement logic specific to the order's targeting needs. For location-based orders, check if the location is pathable or within map bounds. For actor-based, check visibility, specific actor type, etc.

    *   `virtual void CreateIndividualTargetLocations(const TArray<AActor*>& OrderedActors, const FRTSOrderTargetData& TargetData, TArray<FVector2D>& OutTargetLocations) const;`
        *   **Purpose:** For orders issued to a group of actors, this method calculates an individual target `FVector2D` location for each actor in the group.
        *   **Parameters:**
            *   `OrderedActors`: The group of actors receiving the order.
            *   `TargetData`: The overall target data for the group order.
            *   `OutTargetLocations`: An array to be filled with one `FVector2D` per actor in `OrderedActors`. **The order of locations in this array must match the order of actors in `OrderedActors`**.
        *   **Default Behavior (`.cpp`):** Adds `TargetData.Location` to `OutTargetLocations` for each actor in `OrderedActors`. This means all units go to the exact same spot by default.
        *   **C++ Override Example:** See `URTSMoveOrder::CreateIndividualTargetLocations` for a sophisticated example that calculates a formation.
        *   **Risks & Considerations:** The `OutTargetLocations` array *must* have the same number of elements as `OrderedActors`, and the indices must correspond. Failure to do so will lead to incorrect targeting.
        *   **Guidance for Overriding:** Implement formation logic (line, box, spread) or any other custom positioning for groups.

    *   `virtual void IssueOrder(AActor* OrderedActor, const FRTSOrderTargetData& TargetData, int32 Index, FRTSOrderCallback Callback, const FVector& HomeLocation) const;`
        *   **Purpose:** This is the core execution method for the order. Subclasses implement their specific logic here (e.g., telling an AI to move, activating an ability).
        *   **Parameters:**
            *   `OrderedActor`: The actor executing the order.
            *   `TargetData`: The validated target.
            *   `Index`: Optional order index.
            *   `Callback`: An `FRTSOrderCallback` delegate that **must be broadcast** when the order is considered finished (succeeded, failed, or canceled). `URTSOrderComponent` listens to this.
            *   `HomeLocation`: A reference location, often used by AI for leash behavior or context.
        *   **Default Behavior (`.cpp`):** `check(0);` This means concrete subclasses **must** override this method.
        *   **C++ Override Example (Conceptual for a simple non-AI order):**
            ```cpp
            // In MySimpleOrder.cpp
            // void UMySimpleOrder::IssueOrder(AActor* OrderedActor, const FRTSOrderTargetData& TargetData, int32 Index, FRTSOrderCallback Callback, const FVector& HomeLocation) const
            // {
            //     // Perform some instant action
            //     LogEvent(OrderedActor, TEXT("MySimpleOrder Executed!"));
            //     if (Callback.IsBound())
            //     {
            //         Callback.Broadcast(ERTSOrderResult::SUCCEEDED); // CRITICAL: Always broadcast result
            //     }
            // }
            ```
        *   **Risks & Considerations:** **The `Callback` MUST be broadcast eventually.** Failure to do so will leave the `URTSOrderComponent` in a waiting state, potentially blocking further orders. For long-running orders (e.g., those handled by AI Behavior Trees), the callback is usually broadcast by the AI Controller when the Behavior Tree finishes.
        *   **Guidance for Overriding:** This is where the order "does its thing." For AI-driven orders (like in `URTSOrderWithBehavior`), this usually involves getting the `ARTSCharacterAIController` and telling it to run a Behavior Tree, passing `TargetData`, `Index`, `HomeLocation`, and the `Callback`.

    *   `virtual void OrderCanceled(AActor* OrderedActor, const FRTSOrderTargetData& TargetData, int32 Index) const;`
        *   **Purpose:** Called by `URTSOrderComponent` when an active order is being canceled (e.g., because a new order was issued, or tag requirements are no longer met). Allows the order to perform any necessary cleanup.
        *   **Default Behavior (`.cpp`):** Does nothing.
        *   **Guidance for Overriding:** If `IssueOrder` starts an asynchronous task (like a latent Blueprint action or a looping timer), this method should stop/clean up that task. For AI orders, this might involve stopping the current Behavior Tree.

    *   `virtual ERTSTargetType GetTargetType(const AActor* OrderedActor, int32 Index) const;`
        *   **Purpose:** Returns the type of target this order expects (None, Actor, Location, Direction, Passive).
        *   **Default Behavior (`.cpp`):** Returns `ERTSTargetType::NONE`.
        *   **Guidance for Overriding:** Subclasses must set this according to their needs. This informs UI systems about what kind of target selection to enable.

    *   `virtual bool IsCreatingIndividualTargetLocations(const AActor* OrderedActor, int32 Index) const;`
        *   **Purpose:** Indicates if `CreateIndividualTargetLocations` should be called for this order when issued to a group.
        *   **Default Behavior (`.cpp`):** Returns `false`.
        *   **Guidance for Overriding:** Set to `true` if your order implements custom group positioning in `CreateIndividualTargetLocations`.

    *   `virtual UTexture2D* GetNormalIcon(const AActor* OrderedActor, int32 Index) const;` (and `GetHoveredIcon`, `GetPressedIcon`, `GetDisabledIcon`)
        *   **Purpose:** Returns UI icons for different states.
        *   **Default Behavior (`.cpp`):** Returns `nullptr`.
        *   **Guidance for Overriding:** Subclasses (especially those not deriving from `URTSOrderWithDisplay`) can implement logic to return different icons based on `OrderedActor` state or `Index`.

    *   `virtual FText GetName(const AActor* OrderedActor, int32 Index) const;`
    *   `virtual FText GetDescription(const AActor* OrderedActor, int32 Index) const;`
        *   **Purpose:** Returns UI display name and description.
        *   **Default Behavior (`.cpp`):** `GetName` returns the class name. `GetDescription` returns empty text.
        *   **Guidance for Overriding:** Provide user-friendly text. Can be dynamic based on actor/index.

    *   `virtual int32 GetOrderButtonIndex() const;`
    *   `virtual bool HasFixedOrderButtonIndex() const;`
        *   **Purpose:** For UI systems that arrange order buttons in a grid. Allows specifying a fixed slot or letting the UI auto-arrange.
        *   **Default Behavior (`.cpp`):** `GetOrderButtonIndex` returns -1. `HasFixedOrderButtonIndex` returns `false`.

    *   `virtual FRTSOrderPreviewData GetOrderPreviewData(const AActor* OrderedActor, int32 Index) const;`
        *   **Purpose:** Returns data needed to display a preview for this order while the player is selecting a target (e.g., range indicators, placement previews).
        *   **Default Behavior (`.cpp`):** Returns an empty `FRTSOrderPreviewData`.

    *   `virtual void GetTagRequirements(const AActor* OrderedActor, int32 Index, FRTSOrderTagRequirements& OutTagRequirements) const;`
        *   **Purpose:** Fills `OutTagRequirements` with the tag conditions required to *issue* this order.
        *   **Default Behavior (`.cpp`):** Assigns the `this->TagRequirements` property to `OutTagRequirements`.
        *   **Guidance for Overriding:** Can be overridden to provide dynamic tag requirements based on `OrderedActor` or `Index`.

    *   `virtual void GetSuccessTagRequirements(const AActor* OrderedActor, int32 Index, FRTSOrderTagRequirements& OutTagRequirements) const;`
        *   **Purpose:** Fills `OutTagRequirements` with the tag conditions required for this order to be considered *successful*.
        *   **Default Behavior (`.cpp`):** Assigns `this->SuccessTagRequirements` property.
        *   **Guidance for Overriding:** Can be made dynamic.

    *   `virtual float GetRequiredRange(const AActor* OrderedActor, int32 Index) const;`
        *   **Purpose:** Returns the minimum range (in cm) needed between the `OrderedActor` and its target for this order. Used by AI to know when to stop approaching.
        *   **Default Behavior (`.cpp`):** Returns `0`.

    *   `virtual bool GetAcquisitionRadiusOverride(const AActor* OrderedActor, int32 Index, float& OutAcquisitionRadius) const;`
        *   **Purpose:** Allows an order to specify a custom acquisition radius for auto-targeting, overriding default unit behavior.
        *   **Default Behavior (`.cpp`):** Returns `false` (no override).

    *   `virtual ERTSOrderProcessPolicy GetOrderProcessPolicy(const AActor* OrderedActor, int32 Index) const;`
        *   **Purpose:** Returns the processing policy for this order.
        *   **Default Behavior (`.cpp`):** Returns the `this->OrderProcessPolicy` property.
        *   **Guidance for Overriding:** Can be made dynamic.

    *   `TSoftClassPtr<URTSOrder> GetFallbackOrder() const;` (Not virtual)
        *   **Purpose:** Returns the `FallbackOrder` property.
        *   **Default Behavior (`.cpp`):** Returns the `this->FallbackOrder` property.

    *   `virtual float GetTargetScore(const AActor* OrderedActor, const FRTSOrderTargetData& TargetData, int32 Index) const;`
        *   **Purpose:** Evaluates a potential target and returns a score. Higher scores mean better targets. Used by AI for target selection or by systems determining the "most suitable unit" for an order.
        *   **Default Behavior (`.cpp`):** Calculates a basic score based on distance to target, normalized by acquisition radius.
        *   **Guidance for Overriding:** Implement custom scoring logic. E.g., an anti-tank unit might score tanks higher.

    *   `virtual ERTSOrderGroupExecutionType GetGroupExecutionType(const AActor* OrderedActor, int32 Index) const;`
        *   **Purpose:** Defines how this order should be applied when issued to a group of selected units (e.g., all units, only the selected subgroup, only the most suitable unit).
        *   **Default Behavior (`.cpp`):** Returns `ERTSOrderGroupExecutionType::ALL`.

    *   `virtual bool IsHumanPlayerAutoOrder(const AActor* OrderedActor, int32 Index) const;`
    *   `virtual bool GetHumanPlayerAutoOrderInitialState(const AActor* OrderedActor, int32 Index) const;`
    *   `virtual bool IsAIPlayerAutoOrder(const AActor* OrderedActor, int32 Index) const;`
        *   **Purpose:** These methods determine if an order can be used as an auto-cast/auto-order by human or AI players, and its default enabled state for humans.
        *   **Default Behavior (`.cpp`):** All return `false`.
        *   **Guidance for Overriding:** Set these in subclasses to enable auto-order functionality for specific orders.

    *   `virtual bool AreAutoOrdersAllowedDuringOrder() const;`
        *   **Purpose:** If this order is active, should the `URTSAutoOrderComponent` still attempt to issue automatic orders?
        *   **Default Behavior (`.cpp`):** Returns `false`.
        *   **Guidance for Overriding:** For example, a "Move" order might return `true` to allow attacking enemies encountered en route, while a "Hold Position" order might return `false`.

**5. Integration & Usage Scenarios**

*   **Typical Setup:**
    1.  Create a new C++ class inheriting from `URTSOrder` (or a more specific child like `URTSCharacterAIOrder`).
    2.  Override necessary virtual functions (especially `IssueOrder`, `GetTargetType`, `CanObeyOrder`, `IsValidTarget`).
    3.  Configure default properties like `TagRequirements`, `OrderProcessPolicy` in the constructor or Class Defaults if making a Blueprint subclass.
    4.  Optionally, create a Blueprint child class from your C++ order class for further Blueprint-specific logic or easier configuration.
*   **Interaction with Other Plugin Systems:**
    *   The `URTSOrderComponent` is the primary consumer of `URTSOrder` types. It gets the CDO of an order class and calls its virtual functions.
    *   `FRTSOrderData` carries a `TSoftClassPtr` to a `URTSOrder` subclass.
    *   `URTSOrderHelper` provides static functions that often wrap calls to `URTSOrder` CDO methods.
*   **Developer Workflow:**
    *   Define the core logic of new commands by subclassing `URTSOrder`.
    *   Implement `IssueOrder` to interface with AI, activate abilities, or perform other game actions.
    *   Implement validation and UI methods.
*   **Designer Workflow:**
    *   Create Blueprint child classes of existing C++ `URTSOrder` types to configure properties (icons, names, tag requirements) without C++ changes.
    *   If an order is fully implementable in Blueprint (and its base C++ class supports `BlueprintImplementableEvent` for key methods like `IssueOrder`), designers can create entire orders in Blueprint. However, `IssueOrder` is not `BlueprintImplementableEvent` in the base `URTSOrder`.
    *   Assign `URTSOrder` subclasses to units via abilities that grant `URTSUseAbilityOrder` or other game systems.

**6. What the User Needs to Implement/Provide**

*   **Concrete Subclasses:** Users *must* create subclasses of `URTSOrder` (or its children) for every functional order in their game. The base `URTSOrder` does nothing on its own.
*   **Overrides:** Implementations for key virtual functions like `IssueOrder`, `CanObeyOrder`, `IsValidTarget`, `GetTargetType`, and UI-related methods.
*   **Assets:** Icons, and potentially preview actors if `GetOrderPreviewData` is implemented.

**7. Advanced Topics & Considerations**

*   **CDO Usage:** The system primarily interacts with the Class Default Object (CDO) of `URTSOrder` subclasses. This means orders are generally stateless in themselves; all state is passed via parameters or derived from the `OrderedActor`.
*   **Performance:** Keep overridden virtual functions, especially validation checks (`CanObeyOrder`, `IsValidTarget`) and `GetTargetScore`, as efficient as possible, as they might be called frequently.
*   **Network:** `URTSOrder` objects themselves are not replicated. The `FRTSOrderData` (which contains a *class pointer* to a `URTSOrder`) is replicated by `URTSOrderComponent`. Execution always happens server-side.
*   **Blueprintable Orders:** While `URTSOrder` is `Abstract, Blueprintable`, to make an order fully implementable in Blueprint (especially its execution logic), the C++ base would need to expose `BlueprintImplementableEvent` versions of critical functions like `IssueOrder`. Currently, `URTSOrderWithBehavior` is `Abstract, Blueprintable` and expects a `BehaviorTree` property, while `URTSCharacterAIOrder` is also `Abstract, Blueprintable`. `URTSUseAbilityOrder` is `NotBlueprintType, Abstract, Blueprintable`. The `Blueprintable` specifier on an abstract class means you can create Blueprint *children* of it.








### 2.1.3. Order Hierarchy & Specializations

The base `URTSOrder` class provides a generic contract. The plugin then defines a hierarchy of more specialized order classes, each adding specific functionalities or catering to particular use cases.

---

**2.1.3.1 `URTSOrderWithDisplay`**

**1. Overview & Purpose**

`URTSOrderWithDisplay` is an abstract class that inherits from `URTSOrder`. Its primary purpose is to simplify the provision of display information (icons, name, description) for orders that have fixed UI elements, independent of runtime context like the `OrderedActor` or `Index` parameter. Many concrete order types will derive from this if their UI representation is static.

*   **Primary Audience:** Developers creating base order types. Designers will interact with subclasses of this by configuring their display properties in Blueprint Class Defaults.

**2. Core Functionality & Features**

*   **Static UI Data:** Provides properties to directly store `UTexture2D*` for icons and `FText` for name/description.
*   **Simplified UI Retrieval:** Overrides the UI-related virtual functions from `URTSOrder` (`GetNormalIcon`, `GetName`, etc.) to simply return these stored properties, removing the need for subclasses to implement custom logic for static UI.
*   **Fixed Button Indexing:** Allows an order to specify a fixed position in a UI command card.

**Related Concepts/Classes:**

*   [`URTSOrder`](#2.1.2-URTSOrder): The parent class from which it inherits the basic order contract.
*   Subsequent specializations like [`URTSOrderWithBehavior`](#X.X.X-URTSOrderWithBehavior) often inherit from `URTSOrderWithDisplay` if they also benefit from static UI data.

**3. Key Properties (Header File Analysis - `RTSOrderWithDisplay.h`)**

*   **Private Properties (Exposed via `EditDefaultsOnly` and accessed by overridden getters):**

    *   `UPROPERTY(Category = "RTS Display", EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `UTexture2D* NormalIcon;`
        *   **Purpose:** The standard icon displayed for this order in the UI.
        *   **`EditDefaultsOnly`:** This is the primary way to set this property – in the Class Defaults of a Blueprint subclass of an order derived from `URTSOrderWithDisplay`.
        *   **`BlueprintReadOnly`:** While the property itself is private in C++, its value (once set in defaults) can be read in Blueprints if a `BlueprintPure` getter was made (which `GetNormalIcon` effectively serves as).
        *   **Considerations for Modification:** Designers will set this in Blueprint. Developers making C++ subclasses would typically set this in the constructor of their derived class if not making it Blueprint-configurable.

    *   `UPROPERTY(Category = "RTS Display", EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `UTexture2D* HoveredIcon;`
        *   **Purpose:** Icon displayed when the mouse hovers over the order button.
        *   **Configuration:** Same as `NormalIcon`.

    *   `UPROPERTY(Category = "RTS Display", EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `UTexture2D* PressedIcon;`
        *   **Purpose:** Icon displayed when the order button is being pressed.
        *   **Configuration:** Same as `NormalIcon`.

    *   `UPROPERTY(Category = "RTS Display", EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `UTexture2D* DisabledIcon;`
        *   **Purpose:** Icon displayed when the order is not currently available or valid.
        *   **Configuration:** Same as `NormalIcon`.

    *   `UPROPERTY(Category = "RTS Display", EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `FText Name;`
        *   **Purpose:** The display name of the order shown in the UI (e.g., "Move", "Attack").
        *   **Configuration:** Same as `NormalIcon`. Supports localization as it's an `FText`.

    *   `UPROPERTY(Category = "RTS Display", EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `FText Description;`
        *   **Purpose:** The tooltip or detailed description for the order.
        *   **Configuration:** Same as `NormalIcon`. Supports localization.

    *   `UPROPERTY(Category = "RTS Display", EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `bool bUseFixedOrderButtonIndex;`
        *   **Purpose:** If `true`, this order will attempt to use the `OrderButtonIndex` for its position in a command card UI. If `false`, the UI system would typically auto-arrange it.
        *   **Configuration:** Same as `NormalIcon`.
        *   **Default Value:** Not explicitly set in the header, so likely defaults to `false`.

    *   `UPROPERTY(Category = "RTS Display", EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `int32 OrderButtonIndex;`
        *   **Purpose:** The specific index (e.g., 0-11 for a 3x4 grid) where this order's button should appear if `bUseFixedOrderButtonIndex` is `true`.
        *   **Configuration:** Same as `NormalIcon`. Only relevant if `bUseFixedOrderButtonIndex` is true.
        *   **Default Value:** Not explicitly set, likely `0` or `-1` by default.

**4. Key Methods (Header & Source File Analysis - `RTSOrderWithDisplay.h` & `RTSOrderWithDisplay.cpp`)**

*   **Public Virtual Methods (Overrides from `URTSOrder`):**

    *   `virtual UTexture2D* GetNormalIcon(const AActor* OrderedActor, int32 Index) const override;`
        *   **Purpose:** Returns the normal icon for the order.
        *   **Default Behavior (`.cpp`):** Returns the `this->NormalIcon` property.
        *   **Parameters:** `OrderedActor`, `Index` are ignored in this implementation as the icon is static.
        *   **Considerations for Modification:** If a subclass needs a dynamic normal icon *despite* inheriting from `URTSOrderWithDisplay` (which is somewhat counter-intuitive but possible), it would override this again. Otherwise, no override is needed; just set the `NormalIcon` property.

    *   `virtual UTexture2D* GetHoveredIcon(const AActor* OrderedActor, int32 Index) const override;`
        *   **Default Behavior (`.cpp`):** Returns `this->HoveredIcon`.

    *   `virtual UTexture2D* GetPressedIcon(const AActor* OrderedActor, int32 Index) const override;`
        *   **Default Behavior (`.cpp`):** Returns `this->PressedIcon`.

    *   `virtual UTexture2D* GetDisabledIcon(const AActor* OrderedActor, int32 Index) const override;`
        *   **Default Behavior (`.cpp`):** Returns `this->DisabledIcon`.

    *   `virtual FText GetName(const AActor* OrderedActor, int32 Index) const override;`
        *   **Purpose:** Returns the display name for the order.
        *   **Default Behavior (`.cpp`):** Returns `this->Name`.
        *   **Parameters:** `OrderedActor`, `Index` are ignored.

    *   `virtual FText GetDescription(const AActor* OrderedActor, int32 Index) const override;`
        *   **Default Behavior (`.cpp`):** Returns `this->Description`.

    *   `virtual int32 GetOrderButtonIndex() const override;`
        *   **Default Behavior (`.cpp`):** Returns `this->OrderButtonIndex`.

    *   `virtual bool HasFixedOrderButtonIndex() const override;`
        *   **Default Behavior (`.cpp`):** Returns `this->bUseFixedOrderButtonIndex`.

**5. Integration & Usage Scenarios**

*   **Typical Setup:**
    1.  When creating a new C++ order class that has static UI, inherit from `URTSOrderWithDisplay` instead of `URTSOrder` directly.
        ```cpp
        // In MyStaticDisplayOrder.h
        #include "Orders/RTSOrderWithDisplay.h"
        #include "MyStaticDisplayOrder.generated.h"

        UCLASS(Abstract, Blueprintable) // Still Abstract if it doesn't implement IssueOrder, etc.
        class UMyStaticDisplayOrder : public URTSOrderWithDisplay
        {
            GENERATED_BODY()
        public:
            UMyStaticDisplayOrder();
            // Override other necessary methods like IssueOrder, GetTargetType, etc.
        };

        // In MyStaticDisplayOrder.cpp
        UMyStaticDisplayOrder::UMyStaticDisplayOrder()
        {
            // Optionally set defaults in C++ constructor if not purely Blueprint configured
            // Name = NSLOCTEXT("MyOrders", "MyStaticOrderName", "My Static Order");
            // OrderProcessPolicy = ERTSOrderProcessPolicy::INSTANT; 
            // TargetType = ERTSTargetType::NONE;
        }
        ```
    2.  Create a Blueprint child class from `UMyStaticDisplayOrder` (or directly from `URTSOrderWithDisplay` if no further C++ logic is needed for this specific order type beyond what a more specific parent like `URTSCharacterAIOrder` provides).
    3.  In the Blueprint Class Defaults of this child, configure the `NormalIcon`, `Name`, `Description`, etc. properties.
*   **Interaction with Other Plugin Systems:**
    *   UI systems will call these `Get...Icon/Name/Description` methods (likely via `URTSOrderHelper`) to populate command buttons.
*   **Developer Workflow:**
    *   Choose to inherit from `URTSOrderWithDisplay` when the order's UI is fixed.
    *   Avoid overriding the UI getter methods unless truly dynamic UI is needed for a specific case that still benefits from the other properties.
*   **Designer Workflow:**
    *   Primarily involves creating Blueprint child classes of orders derived from `URTSOrderWithDisplay` and populating the "RTS Display" category properties in the Class Defaults. This is the main way designers will define the look and feel of orders.

**6. What the User Needs to Implement/Provide**

*   **Concrete Subclasses:** Users still need to create concrete subclasses (C++ or Blueprint) that derive from `URTSOrderWithDisplay` (or a class further down the hierarchy that itself derives from `URTSOrderWithDisplay`, like `URTSOrderWithBehavior`).
*   **Asset Population:** Populate the icon, text, and button index properties in the Class Defaults of these Blueprint subclasses.
*   **Implementation of Core Order Logic:** `URTSOrderWithDisplay` only handles the display aspect. The subclass still needs to implement `IssueOrder`, `CanObeyOrder`, `IsValidTarget`, `GetTargetType`, etc., or inherit them from another intermediate base class.

**7. Advanced Topics & Considerations**

*   **When Not to Use:** If an order's icon, name, or description needs to change dynamically based on the `OrderedActor`'s state (e.g., "Build Barracks" vs. "Upgrade Barracks" using the same order slot but different icons/text based on context), then inheriting directly from `URTSOrder` and implementing custom logic in `GetName()`, `GetNormalIcon()`, etc., would be more appropriate than using `URTSOrderWithDisplay`. The `URTSUseAbilityOrder` is an example of this, as it fetches display information from the `URTSGameplayAbility` it's associated with.
*   **Localization:** `Name` and `Description` are `FText`, so they automatically support Unreal's localization system.
*   **Performance:** Accessing these properties is very fast as it's just returning member variables.















**2.1.3.2 `URTSOrderWithBehavior`**

**1. Overview & Purpose**

`URTSOrderWithBehavior` is an abstract class that inherits from `URTSOrderWithDisplay`. Its key role is to bridge the Order System with Unreal Engine's Behavior Tree system. Orders derived from this class are intended to be executed by an AI-controlled actor whose actions are defined within a `UBehaviorTree` asset. This class provides the necessary linkage to specify which Behavior Tree should run for the order.

*   **Primary Audience:** Developers creating AI-driven orders. Designers will interact by assigning `UBehaviorTree` assets to the properties of Blueprint subclasses derived from these C++ order types.

**2. Core Functionality & Features**

*   **Behavior Tree Association:** Allows a specific `UBehaviorTree` asset to be linked with an order type.
*   **Behavior Tree Execution Control:**
    *   Determines if the Behavior Tree should be restarted if the same order type is issued again while it's already running.
    *   Provides a standardized implementation of `IssueOrder` that interfaces with an `ARTSCharacterAIController` to run the associated Behavior Tree.
*   **Acquisition Radius Override:** Can specify a custom acquisition radius for this order, overriding the unit's default.
*   **Inherits Display Properties:** Since it derives from `URTSOrderWithDisplay`, it also benefits from static UI data configuration.

**Related Concepts/Classes:**

*   [`URTSOrderWithDisplay`](#2.1.3.1-URTSOrderWithDisplay): The parent class, providing UI property handling.
*   [`ARTSCharacterAIController`](#X.X.X-ARTSCharacterAIController): The AI controller responsible for actually running the Behavior Tree specified by this order.
*   `UBehaviorTree`: The Unreal Engine asset type that defines the AI logic.
*   [`URTSOrderComponent`](#2.1.1-URTSOrderComponent): The component that will call `IssueOrder` on this order type.
*   [`FRTSOrderData`](#X.X.X-FRTSOrderData), [`FRTSOrderTargetData`](#X.X.X-FRTSOrderTargetData): Data structs passed into the Behavior Tree via the Blackboard.

**3. Key Properties (Header File Analysis - `RTSOrderWithBehavior.h`)**

*   **Private Properties (Exposed via `EditDefaultsOnly` and accessed by methods):**

    *   `UPROPERTY(Category = "RTS Behavior", EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `UBehaviorTree* BehaviorTree;`
        *   **Purpose:** A direct pointer to the `UBehaviorTree` asset that defines the logic for this order. When this order is issued, the `ARTSCharacterAIController` will attempt to run this Behavior Tree.
        *   **`EditDefaultsOnly`:** This is typically set in the Class Defaults of a Blueprint subclass derived from an order type that inherits `URTSOrderWithBehavior`.
        *   **`BlueprintReadOnly`:** Its value can be read in Blueprints.
        *   **Considerations for Modification:** This is the core link to the AI logic. Designers will assign the appropriate Behavior Tree asset here. If this is null for an order that's meant to be AI-driven, the order will likely fail when issued.

    *   `UPROPERTY(Category = "RTS Behavior", EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `bool bShouldRestartBehaviourTree;`
        *   **Purpose:** If an actor is already executing this type of order (i.e., running this `BehaviorTree`), and the same order is issued again (perhaps with a new target), this flag determines if the Behavior Tree should be completely restarted.
        *   If `true`, the tree restarts from its root.
        *   If `false`, the `ARTSCharacterAIController` might not restart the tree, allowing the tree's existing logic to potentially adapt to new Blackboard values (if the tree is designed to do so). The default `ApplyOrder` logic in `ARTSCharacterAIController` *will* restart if the tree is the same and this is true. If false, it doesn't explicitly stop/start.
        *   **`EditDefaultsOnly` / `BlueprintReadOnly`:** Configurable in Class Defaults.
        *   **Default Value (`.cpp` constructor):** `true`.
        *   **Considerations for Modification:** Set to `false` if your Behavior Tree is designed to dynamically update its target or goal based on Blackboard changes without needing a full restart (e.g., a "Move" order where the target location in the Blackboard is updated, and a service in the BT picks up the new location). Most commonly, `true` is safer and simpler.

    *   `UPROPERTY(Category = "RTS Behavior", EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true, EditCondition = bIsAcquisitionRadiusOverridden))`
        `float AcquisitionRadiusOverride;`
        *   **Purpose:** If `bIsAcquisitionRadiusOverridden` is `true`, this value will be used as the acquisition radius for this specific order, potentially overriding a unit's default attack or ability acquisition radius. Useful for abilities or orders that have a unique engagement range.
        *   **`EditDefaultsOnly` / `BlueprintReadOnly`:** Configurable in Class Defaults. The `EditCondition` means it's only editable if `bIsAcquisitionRadiusOverridden` is checked.
        *   **Default Value (`.cpp` constructor):** `0.0f`.
        *   **Considerations for Modification:** Use this for orders that need a special range for automatically finding targets (e.g., a long-range spell that should auto-acquire targets further than the unit's basic attack).

    *   `UPROPERTY(Category = "RTS Behavior", EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true, InlineEditConditionToggle = true))`
        `bool bIsAcquisitionRadiusOverridden;`
        *   **Purpose:** A boolean flag that enables or disables the `AcquisitionRadiusOverride` property.
        *   **`EditDefaultsOnly` / `BlueprintReadOnly`:** Configurable in Class Defaults. `InlineEditConditionToggle` allows this to act as the checkbox that enables/disables editing of `AcquisitionRadiusOverride`.
        *   **Default Value (`.cpp` constructor):** `false`.

**4. Key Methods (Header & Source File Analysis - `RTSOrderWithBehavior.h` & `RTSOrderWithBehavior.cpp`)**

*   **Public Methods:**

    *   `UBehaviorTree* GetBehaviorTree() const;`
        *   **Purpose:** Public getter for the `BehaviorTree` property.
        *   **Default Behavior (`.cpp`):** Returns `this->BehaviorTree`.
        *   **C++ Usage Example:**
            ```cpp
            // URTSOrderWithBehavior* MyOrderCDO = ...;
            // UBehaviorTree* BTAsset = MyOrderCDO->GetBehaviorTree();
            ```
        *   **Blueprint Usage Example:** If this were `BlueprintCallable` (it's not by default for UObject CDOs unless exposed via a helper), you could get the BT asset. Typically, this is read internally or by helper functions.

    *   `bool ShouldRestartBehaviourTree() const;`
        *   **Purpose:** Public getter for the `bShouldRestartBehaviourTree` property.
        *   **Default Behavior (`.cpp`):** Returns `this->bShouldRestartBehaviourTree`.

*   **Public Virtual Methods (Overrides):**

    *   `virtual void IssueOrder(AActor* OrderedActor, const FRTSOrderTargetData& TargetData, int32 Index, FRTSOrderCallback Callback, const FVector& HomeLocation) const override;`
        *   **Purpose:** This is the core execution method. For `URTSOrderWithBehavior`, it specifically handles issuing the order to an `ARTSCharacterAIController`.
        *   **Parameters:** Same as `URTSOrder::IssueOrder`.
        *   **Default Behavior (`.cpp`):**
            1.  **Validity Checks:**
                *   Checks if `OrderedActor` is valid. If not, broadcasts `Callback` with `ERTSOrderResult::FAILED` and returns.
                *   Casts `OrderedActor` to `APawn`. If fails, logs error, broadcasts FAILED, and returns.
                *   Gets the Pawn's Controller and casts it to `ARTSCharacterAIController`. If fails, logs error, broadcasts FAILED, and returns.
            2.  **Construct `FRTSOrderData`:** Creates an `FRTSOrderData` instance using `GetClass()` (to get the concrete order type), `Index`, `TargetData.Actor`, and `TargetData.Location`.
            3.  **Set `bUseLocation`:** Sets `Order.bUseLocation` based on `GetTargetType()`.
            4.  **Issue to AI Controller:** Calls `Controller->IssueOrder(Order, Callback, HomeLocation)`. The `ARTSCharacterAIController` is then responsible for setting up its Blackboard with this data and running the `BehaviorTree` associated with `Order.OrderType` (which is `this->BehaviorTree`). The `Callback` is passed along for the AI Controller to eventually invoke.
        *   **C++ Override Example:** While subclasses *could* override this, the provided implementation is quite standard for AI-driven orders. Overriding might be done if pre/post processing around the call to the AI controller is needed, or if a different type of AI controller is used.
            ```cpp
            // In MyCustomAIOrder.cpp (if needing to add extra steps)
            // void UMyCustomAIOrder::IssueOrder(AActor* OrderedActor, const FRTSOrderTargetData& TargetData, int32 Index, FRTSOrderCallback Callback, const FVector& HomeLocation) const
            // {
            //     // Custom pre-logic, e.g., play a sound on the OrderedActor
            //     UGameplayStatics::PlaySoundAtLocation(OrderedActor, ConfirmationSound, OrderedActor->GetActorLocation());
            //
            //     Super::IssueOrder(OrderedActor, TargetData, Index, Callback, HomeLocation); // Calls base URTSOrderWithBehavior logic
            //
            //     // Custom post-logic (though usually callback handles completion)
            // }
            ```
        *   **Risks & Considerations:**
            *   Relies on the `OrderedActor` being a `APawn` controlled by an `ARTSCharacterAIController`. If not, it will fail.
            *   The `Callback` is passed to the `ARTSCharacterAIController`, which must ensure it's eventually broadcast when the Behavior Tree finishes (succeeds, fails, or is aborted and translated to an `ERTSOrderResult`).
        *   **Guidance for Overriding:** Usually, subclasses will not need to override this. Instead, they will define a `BehaviorTree` asset and implement the order's actual logic within that tree.

    *   `virtual bool GetAcquisitionRadiusOverride(const AActor* OrderedActor, int32 Index, float& OutAcquisitionRadius) const override;`
        *   **Purpose:** Allows this order to provide a custom acquisition radius.
        *   **Default Behavior (`.cpp`):** Sets `OutAcquisitionRadius = this->AcquisitionRadiusOverride;` and returns `this->bIsAcquisitionRadiusOverridden;`.
        *   **Guidance for Overriding:** Subclasses typically don't override this; they configure the `AcquisitionRadiusOverride` and `bIsAcquisitionRadiusOverridden` properties in their Class Defaults.

**5. Integration & Usage Scenarios**

*   **Typical Setup:**
    1.  Create a new C++ class inheriting from `URTSOrderWithBehavior` (or a more specific child like `URTSCharacterAIOrder`).
        ```cpp
        // In MyAIBehaviorOrder.h
        #include "Orders/RTSOrderWithBehavior.h" // Or RTSCharacterAIOrder if more appropriate
        #include "MyAIBehaviorOrder.generated.h"

        UCLASS(Blueprintable) // Typically Blueprintable to assign BT in Blueprint
        class UMyAIBehaviorOrder : public URTSOrderWithBehavior 
        {
            GENERATED_BODY()
        public:
            UMyAIBehaviorOrder();
            // Override other necessary non-behavior/non-display methods if needed (e.g. CanObeyOrder, IsValidTarget if they have special conditions)
            virtual ERTSTargetType GetTargetType(const AActor* OrderedActor, int32 Index) const override;
        };

        // In MyAIBehaviorOrder.cpp
        UMyAIBehaviorOrder::UMyAIBehaviorOrder()
        {
            // Set defaults for properties from URTSOrderWithDisplay & URTSOrder if needed
            Name = NSLOCTEXT("MyOrders", "MyAIOrderName", "My AI Order");
            // TargetType might be set here or overridden in GetTargetType
        }
        ERTSTargetType UMyAIBehaviorOrder::GetTargetType(const AActor* OrderedActor, int32 Index) const
        {
            return ERTSTargetType::LOCATION; // Example
        }
        ```
    2.  Create a Blueprint child class from your new C++ order class.
    3.  In the Class Defaults of this Blueprint:
        *   Assign a `UBehaviorTree` asset to the `BehaviorTree` property.
        *   Configure `bShouldRestartBehaviourTree`.
        *   Optionally configure `AcquisitionRadiusOverride` and `bIsAcquisitionRadiusOverridden`.
        *   Configure display properties inherited from `URTSOrderWithDisplay` (icons, name, etc.).
    4.  The `UBehaviorTree` asset itself will use Blackboard keys (defined in `URTSBlackboardHelper`) like `Order_Target`, `Order_Location`, etc., to get the specifics of the current order.
*   **Interaction with Other Plugin Systems:**
    *   When `IssueOrder` is called (ultimately by `URTSOrderComponent`), it triggers the `ARTSCharacterAIController` to run the specified `BehaviorTree`.
    *   The `BehaviorTree` performs the actual actions (pathfinding, playing animations, calling abilities).
    *   The `ARTSCharacterAIController` is responsible for monitoring the Behavior Tree and invoking the `FRTSOrderCallback` when the tree concludes.
*   **Developer Workflow:**
    *   Define the C++ class structure for orders that are executed via AI.
    *   Implement any necessary C++ overrides for validation or specific parameter retrieval.
*   **Designer Workflow:**
    *   Create and configure Behavior Tree assets.
    *   Create Blueprint child classes of C++ order types derived from `URTSOrderWithBehavior`.
    *   Assign the correct Behavior Tree to the `BehaviorTree` property of the order Blueprint.
    *   Configure UI and other behavioral properties on the order Blueprint.

**6. What the User Needs to Implement/Provide**

*   **Concrete Subclasses:** C++ or Blueprint subclasses deriving from `URTSOrderWithBehavior`.
*   **Behavior Tree Assets:** For each such order, a `UBehaviorTree` asset must be created and assigned. This Behavior Tree contains the actual logic to execute the order.
*   **AI Controller Setup:** Actors receiving these orders must be pawns controlled by an `ARTSCharacterAIController` (or a compatible custom AI controller). The controller needs a `BlackboardData` asset configured with keys like `Order_Target`, `Order_Location`, etc. (see `URTSBlackboardHelper`).
*   **(From Parent Classes):** All necessary overrides for `CanObeyOrder`, `IsValidTarget`, `GetTargetType`, etc., and UI asset population.

**7. Advanced Topics & Considerations**

*   **Behavior Tree Design:** The effectiveness of an order derived from `URTSOrderWithBehavior` is entirely dependent on the quality and correctness of its associated Behavior Tree. The tree must correctly read from and potentially write to the Blackboard, and properly signal its completion (success/failure) to the `ARTSCharacterAIController`.
*   **Blackboard Synchronization:** The `ARTSCharacterAIController::SetBlackboardValues` method is responsible for populating the Blackboard before the Behavior Tree starts. Ensure your Behavior Tree uses the correct keys (defined in `URTSBlackboardHelper`).
*   **Callback Path:** `URTSOrderComponent` -> `URTSOrderWithBehavior::IssueOrder` -> `ARTSCharacterAIController::IssueOrder` (passes Callback) -> AI Controller runs BT -> BT finishes -> AI Controller calls `BehaviorTreeEnded` -> AI Controller's Tick invokes `Callback`. This chain must remain intact.
*   **Non-AI Usage:** While designed for AI, if an order has a `BehaviorTree` but is issued to a player-controlled unit with an `ARTSCharacterAIController`, it would still attempt to run the BT. This is usually not the intended use case for player units unless they have autonomous sub-behaviors.





Understood! I'll aim for more accessible language in the "Primary Audience" sections going forward, explaining *why* it's relevant to each group in simpler terms. Thanks for the feedback.

Let's proceed with `URTSCharacterAIOrder`.

---

**2.1.3.3 `URTSCharacterAIOrder`**

**1. Overview & Purpose**

`URTSCharacterAIOrder` is an abstract class that inherits from `URTSOrderWithBehavior`. It serves as a more specialized base class for orders specifically intended for pawn actors that are controlled by an `ARTSCharacterAIController`. While `URTSOrderWithBehavior` links an order to *any* Behavior Tree, `URTSCharacterAIOrder` adds default assumptions about targeting and group execution commonly found in character-centric RTS commands.

*   **Primary Audience:**
    *   **Developers:** Will use this as a base when creating new C++ order classes for AI-controlled units (like soldiers, workers, heroes) that involve standard RTS targeting paradigms (e.g., point-and-click, target unit). It provides sensible defaults they can build upon.
    *   **Designers:** Will typically work with Blueprint subclasses derived from these C++ orders. They'll configure the specific Behavior Tree, UI elements, and the targeting properties (`TargetType`, `GroupExecutionType`, `bIsCreatingIndividualTargetLocations`) in the Blueprint Class Defaults.

**2. Core Functionality & Features**

*   **Defaulted Targeting Properties:** Provides default values and configuration options for:
    *   `TargetType`: How the order targets (actor, location, none).
    *   `GroupExecutionType`: How the order applies to a group of selected units.
    *   `bIsCreatingIndividualTargetLocations`: Whether the order needs unique target points for each unit in a group.
*   **Inherits Behavior Tree & Display Features:** As it derives from `URTSOrderWithBehavior`, it includes all functionalities for linking a Behavior Tree and configuring display properties.

**Related Concepts/Classes:**

*   [`URTSOrderWithBehavior`](#2.1.3.2-URTSOrderWithBehavior): The parent class, providing Behavior Tree linkage and UI features.
*   [`ARTSCharacterAIController`](#X.X.X-ARTSCharacterAIController): The AI controller that executes orders derived from this class.
*   Concrete orders like `URTSMoveOrder`, `URTSAttackOrder`, `URTSStopOrder` inherit from `URTSCharacterAIOrder`.

**3. Key Properties (Header File Analysis - `RTSCharacterAIOrder.h`)**

*   **Protected Properties (Exposed via `EditDefaultsOnly` and accessed by overridden getters):**

    *   `UPROPERTY(Category = RTS, EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `ERTSTargetType TargetType;`
        *   **Purpose:** Defines the default kind of target this order expects (e.g., a point on the ground, another unit, or no specific target). This directly influences how player input is interpreted for this order and what kind of target selection UI might be presented.
        *   **`EditDefaultsOnly` / `BlueprintReadOnly`:** Configurable in the Class Defaults of Blueprint subclasses. Its value is retrieved by the overridden `GetTargetType` method.
        *   **Default Value (`.cpp` constructor):** `ERTSTargetType::NONE`. Subclasses (like `URTSMoveOrder` or `URTSAttackOrder`) will typically set this to a more specific value in their own constructors or Class Defaults.
        *   **Considerations for Modification:** Designers will set this in Blueprint Class Defaults to match the order's intent. For example, a "Move" order would have this set to `LOCATION`, while an "Attack" order would have it set to `ACTOR`.

    *   `UPROPERTY(Category = RTS, EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `ERTSOrderGroupExecutionType GroupExecutionType;`
        *   **Purpose:** Determines how the order is applied when multiple units are selected and given this command. For example:
            *   `ALL`: Every selected unit gets the order.
            *   `SELECTED_SUB_GROUP`: Only the current subgroup (if your game supports subgroups) gets the order.
            *   `SELECTED_UNIT`: Only the primary selected unit gets the order.
            *   `MOST_SUITABLE_UNIT`: The system tries to pick the best unit among the selection to execute the order (e.g., the closest one, or one with a specific ability).
        *   **`EditDefaultsOnly` / `BlueprintReadOnly`:** Configurable in Blueprint Class Defaults. Retrieved by the overridden `GetGroupExecutionType` method.
        *   **Default Value (`.cpp` constructor):** `ERTSOrderGroupExecutionType::ALL`.
        *   **Considerations for Modification:** Designers choose this based on how the order should behave with group selections. A "Move" order is usually `ALL`, while a special hero ability might be `SELECTED_UNIT`.

    *   `UPROPERTY(Category = RTS, EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `bool bIsCreatingIndividualTargetLocations;`
        *   **Purpose:** If `true`, when this order is given to a group of units, the system will call `CreateIndividualTargetLocations` to generate a unique target point for each unit (e.g., for formations). If `false`, all units in the group will typically share the exact same target point or actor.
        *   **`EditDefaultsOnly` / `BlueprintReadOnly`:** Configurable in Blueprint Class Defaults. Retrieved by the overridden `IsCreatingIndividualTargetLocations` method.
        *   **Default Value (`.cpp` constructor):** `false`.
        *   **Considerations for Modification:** Set to `true` for orders like "Move" or "Attack-Move" where units should spread out or form up. Set to `false` for orders where all units target the exact same entity or point without specific positioning (e.g., all selected healers healing the same target).

**4. Key Methods (Header & Source File Analysis - `RTSCharacterAIOrder.h` & `RTSCharacterAIOrder.cpp`)**

*   **Public Virtual Methods (Overrides from `URTSOrder`):**

    *   `virtual ERTSTargetType GetTargetType(const AActor* OrderedActor, int32 Index) const override;`
        *   **Purpose:** Returns the target type for this order.
        *   **Default Behavior (`.cpp`):** Returns the value of `this->TargetType` property.
        *   **Parameters:** `OrderedActor`, `Index` are ignored by this base implementation, as the target type is determined by the configured property.
        *   **Considerations for Modification:** Subclasses could override this again if they need the target type to be dynamic based on `OrderedActor` or `Index`, but typically they will just configure the `TargetType` property.

    *   `virtual bool IsCreatingIndividualTargetLocations(const AActor* OrderedActor, int32 Index) const override;`
        *   **Purpose:** Indicates if this order generates individual target locations for group movement.
        *   **Default Behavior (`.cpp`):** Returns the value of `this->bIsCreatingIndividualTargetLocations` property.
        *   **Parameters:** `OrderedActor`, `Index` are ignored.

    *   `virtual ERTSOrderGroupExecutionType GetGroupExecutionType(const AActor* OrderedActor, int32 Index) const override;`
        *   **Purpose:** Returns how this order should be executed for a group of units.
        *   **Default Behavior (`.cpp`):** Returns the value of `this->GroupExecutionType` property.
        *   **Parameters:** `OrderedActor`, `Index` are ignored.

    *   **Other Overrides:** Methods like `IssueOrder`, UI getters (`GetNormalIcon`, etc.), `GetAcquisitionRadiusOverride` are inherited from `URTSOrderWithBehavior` and `URTSOrderWithDisplay` and are not further specialized in `URTSCharacterAIOrder` itself. Subclasses like `URTSMoveOrder` will then override these as needed.

**5. Integration & Usage Scenarios**

*   **Typical Setup:**
    1.  Developers create new C++ order classes that are meant for AI-controlled pawns by inheriting from `URTSCharacterAIOrder`. Examples include `URTSMoveOrder`, `URTSAttackOrder`, `URTSStopOrder`.
        ```cpp
        // In MyCustomPawnOrder.h
        #include "Orders/RTSCharacterAIOrder.h"
        #include "MyCustomPawnOrder.generated.h"

        UCLASS(Blueprintable) 
        class UMyCustomPawnOrder : public URTSCharacterAIOrder
        {
            GENERATED_BODY()
        public:
            UMyCustomPawnOrder();
            // Must implement IssueOrder if not Abstract, or rely on parent if suitable.
            // Often, the main work is setting properties in constructor and assigning a BehaviorTree in Blueprint.
        };

        // In MyCustomPawnOrder.cpp
        UMyCustomPawnOrder::UMyCustomPawnOrder()
        {
            // Set defaults for properties from URTSOrderWithDisplay, URTSOrderWithBehavior,
            // and URTSCharacterAIOrder
            Name = NSLOCTEXT("MyOrders", "MyPawnOrderName", "Custom Pawn Order");
            TargetType = ERTSTargetType::LOCATION; // Example
            GroupExecutionType = ERTSOrderGroupExecutionType::ALL; // Example
            bIsCreatingIndividualTargetLocations = true; // Example, if this order uses formations

            // bShouldRestartBehaviourTree = true; (inherited default)
            // OrderProcessPolicy = ERTSOrderProcessPolicy::CAN_BE_CANCELED; (inherited default)
        }
        ```
    2.  Designers create Blueprint child classes from these C++ types.
    3.  In the Blueprint Class Defaults, designers:
        *   Assign the specific `UBehaviorTree` asset.
        *   Configure the `TargetType`, `GroupExecutionType`, and `bIsCreatingIndividualTargetLocations`.
        *   Set up all display properties (icons, name, description).
*   **Interaction with Other Plugin Systems:**
    *   Primarily serves as a convenient base for AI-driven character orders, packaging common property configurations.
    *   Its instances (via `FRTSOrderData`) are processed by `URTSOrderComponent` and executed by `ARTSCharacterAIController` using the linked Behavior Tree.
*   **Developer Workflow:**
    *   Use as a direct parent for most standard unit commands that will be driven by Behavior Trees.
*   **Designer Workflow:**
    *   Focus on configuring the exposed properties (`TargetType`, `GroupExecutionType`, `bIsCreatingIndividualTargetLocations`, `BehaviorTree`, and display settings) in Blueprint children of these C++ order types. This allows significant control over order behavior without C++ coding.

**6. What the User Needs to Implement/Provide**

*   **Concrete Subclasses:** Users must create concrete C++ or Blueprint subclasses deriving from `URTSCharacterAIOrder` (e.g., `URTSMoveOrder` already does this).
*   **Property Configuration:** In these subclasses (especially Blueprint ones), correctly configure `TargetType`, `GroupExecutionType`, `bIsCreatingIndividualTargetLocations`, the `BehaviorTree` asset, and all UI display properties.
*   **Behavior Tree Assets:** Implement the actual AI logic within the `UBehaviorTree` assets assigned to these orders.
*   **(From Parent Classes):** Implementations for any other necessary virtual functions from `URTSOrder` if their default behavior or the behavior from `URTSOrderWithBehavior` is not sufficient. Often, the main logic is in the Behavior Tree.

**7. Advanced Topics & Considerations**

*   **Abstract Nature:** `URTSCharacterAIOrder` itself is abstract. You cannot directly use it; you must subclass it. The plugin already provides concrete examples like `URTSMoveOrder`.
*   **Simplicity for Common Cases:** This class exists to make defining new AI character orders simpler by providing common properties upfront. If an AI order has very unusual targeting or group execution needs not covered by these properties, one might consider inheriting directly from `URTSOrderWithBehavior` and implementing custom getter logic.
*   **Relationship to Concrete Orders:**
    *   `URTSMoveOrder`: Sets `TargetType = ERTSTargetType::LOCATION`, `bIsCreatingIndividualTargetLocations = true`, and implements `CreateIndividualTargetLocations` for formation logic.
    *   `URTSAttackOrder`: Sets `TargetType = ERTSTargetType::ACTOR`, `bIsCreatingIndividualTargetLocations = true` (though its `CreateIndividualTargetLocations` calls super, suggesting it might be intended for ranged units to form up, or melee units to surround), and customizes `GetRequiredRange` and `GetTargetScore`.
    *   `URTSStopOrder`: Sets `TargetType = ERTSTargetType::NONE`, `bIsCreatingIndividualTargetLocations = false`.




















### 2.1.4. Concrete Order Types & Their Usage

While the abstract order classes define the framework, concrete order types implement specific game commands. These are the classes you'll typically use or derive from to create the actual orders units can execute.

---

**2.1.4.1 `URTSMoveOrder` (Movement & Formations)**

**1. Overview & Purpose**

`URTSMoveOrder` is a concrete class derived from `URTSCharacterAIOrder`. Its purpose is to command one or more AI-controlled characters to move to a specified target location on the map. A key feature of `URTSMoveOrder` is its ability to calculate and assign individual destination points for each unit in a group, allowing them to arrange into a basic block formation at the target.

*   **Primary Audience:**
    *   **Developers:** Will use this class as is, or potentially subclass it if very specialized movement logic is required (though most movement nuances are typically handled in the associated Behavior Tree).
    *   **Designers:** Will create Blueprint child classes of `URTSMoveOrder` (or a game-specific C++ child) to assign a specific Behavior Tree for movement and configure its display properties (icon, name).

**2. Core Functionality & Features**

*   **Location-Based Targeting:** Designed to target a specific `FVector2D` location on the game map.
*   **Group Formation Logic:** Implements `CreateIndividualTargetLocations` to arrange multiple units into a block formation around the target location. This logic considers a "formation rank" for units.
*   **AI-Driven Execution:** Relies on an associated Behavior Tree (specified in a subclass, typically via the `BehaviorTree` property inherited from `URTSOrderWithBehavior`) to handle the actual pathfinding and movement execution for each unit.
*   **Standard RTS Command:** Represents one of the most fundamental commands in an RTS game.

**Related Concepts/Classes:**

*   [`URTSCharacterAIOrder`](#2.1.3.3-URTSCharacterAIOrder): The parent class.
*   [`ARTSCharacterAIController`](#X.X.X-ARTSCharacterAIController): Executes the Behavior Tree associated with this move order.
*   `UBehaviorTree`: The asset containing the actual move logic (e.g., pathfinding using "Move To" tasks).
*   Commented-out `URTSFormationRankComponent`: The formation logic in `CreateIndividualTargetLocations` attempts to use a formation rank, hinting at a component that might exist in the full project to give units different priorities or positions within a formation.

**3. Key Properties (Header File Analysis - `RTSMoveOrder.h`)**

`URTSMoveOrder` itself does not declare new `UPROPERTY` members. It inherits properties from its parent classes (`URTSCharacterAIOrder`, `URTSOrderWithBehavior`, `URTSOrderWithDisplay`).

Key inherited properties configured by its constructor or relevant to its function:

*   From `URTSCharacterAIOrder`:
    *   `TargetType`: Set to `ERTSTargetType::LOCATION` in the `URTSMoveOrder` constructor.
    *   `bIsCreatingIndividualTargetLocations`: Set to `true` in the `URTSMoveOrder` constructor, enabling its custom formation logic.
*   From `URTSOrderWithBehavior`:
    *   `BehaviorTree`: This **must be set** in a Blueprint subclass of `URTSMoveOrder` (or a C++ child) to a Behavior Tree that can handle movement commands.
*   From `URTSOrderWithDisplay`:
    *   `Name`, `NormalIcon`, etc.: These should be configured in a Blueprint subclass to define the UI for the move order.

**Constructor Defaults (`RTSMoveOrder.cpp`):**

```cpp
URTSMoveOrder::URTSMoveOrder()
{
    TargetType = ERTSTargetType::LOCATION;
    bIsCreatingIndividualTargetLocations = true;

    // These Gameplay Tags define conditions under which a unit *cannot* move.
    TagRequirements.SourceBlockedTags.AddTag(URTSGlobalTags::Status_Changing_Immobilized());
    TagRequirements.SourceBlockedTags.AddTag(URTSGlobalTags::Status_Changing_Constructing());
}
```
*   **`TargetType = ERTSTargetType::LOCATION;`**: Confirms this order expects a point on the map.
*   **`bIsCreatingIndividualTargetLocations = true;`**: Activates the formation logic.
*   **`TagRequirements.SourceBlockedTags`**:
    *   `URTSGlobalTags::Status_Changing_Immobilized()`: Units that are immobilized (e.g., stunned, rooted) cannot execute a move order.
    *   `URTSGlobalTags::Status_Changing_Constructing()`: Units that are busy constructing cannot execute a move order.

**4. Key Methods (Header & Source File Analysis - `RTSMoveOrder.h` & `RTSMoveOrder.cpp`)**

*   **Public Virtual Methods (Overrides):**

    *   `virtual void CreateIndividualTargetLocations(const TArray<AActor*>& OrderedActors, const FRTSOrderTargetData& TargetData, TArray<FVector2D>& OutTargetLocations) const override;`
        *   **Purpose:** Calculates a unique destination point for each actor in the `OrderedActors` list, arranging them in a block formation around `TargetData.Location`.
        *   **Parameters:**
            *   `OrderedActors`: The group of actors to move.
            *   `TargetData`: Contains the central target location for the group.
            *   `OutTargetLocations`: Will be filled with individual target locations, one for each actor.
        *   **Internal Logic (`.cpp`):**
            1.  **Sort Actors:** Sorts `OrderedActors` based on their "formation rank" (obtained via `GetFormationRank`). Actors with higher ranks are processed first/differently in some internal logic (though the final slot assignment tries to maintain relative positions).
            2.  **Get Centers:** Calculates the current center of the group (`StartingCenterOfFormation`) and the target center (`TargetCenterOfFormation` which is `TargetData.Location`).
            3.  **`CalculateFormation()`:** Calls a private helper method to generate a grid of local formation points based on the number of units and the direction of movement.
                *   `CalculateFormation` determines an appropriate grid size (e.g., for 10 units, it might be a 4x3 grid).
                *   It calculates offsets for units within this grid, ensuring centering if rows/columns are not full.
                *   It rotates this local grid to align with the direction of movement (from `StartingCenterOfFormation` to `TargetCenterOfFormation`) and translates it to be centered on `TargetCenterOfFormation`.
            4.  **Assign Locations:** Iterates through the sorted `OrderedActors` (grouped by formation rank) and assigns them to the generated `TargetLocations` from `CalculateFormation`. It tries to assign units to formation slots in a way that minimizes crossover by comparing their current relative position to their target relative position within the formation.
                *   For each formation slot, it finds the best-matching unit (among those with the current highest rank not yet assigned) based on minimizing the change in their relative position to the group's center.
        *   **C++ Usage Example:** This method is called internally by the order system when a group of units is issued a `URTSMoveOrder`. Users don't call it directly.
        *   **Risks & Considerations:**
            *   The quality of the formation depends on the `CalculateFormation` logic and the `GetFormationRank` values.
            *   The current formation is a basic block/grid. More complex formations (e.g., wedge, staggered line) would require significantly more complex logic here or in `CalculateFormation`.
            *   The `GetFormationRank` method currently returns `0` as `URTSFormationRankComponent` is commented out. This means all units are treated as having the same rank, simplifying the sorting but potentially not leveraging the full intent of the original design.
        *   **Considerations for Modification:**
            *   To change the formation shape, `CalculateFormation` is the primary target.
            *   To introduce unit priorities in formations, `GetFormationRank` needs to return meaningful values (e.g., by re-implementing a formation rank component or deriving rank from unit type/tags).
            *   The assignment logic (matching units to slots) could be tweaked for different behaviors.

*   **Private Helper Methods (Conceptual Understanding for Modifiers):**

    *   `void CalculateFormation(int32 UnitCount, const FVector2D Direction, const FVector2D TargetLocation, TArray<FVector2D>& OutLocations) const;`
        *   **Purpose:** Generates the raw grid of formation points, rotates, and translates them.
        *   **Internal Logic:**
            *   Determines grid dimensions (`EdgeLengthX`, `EdgeLengthY`) based on `UnitCount`.
            *   Uses hardcoded `UnitSpacingX/Y` (300cm) for spacing between units.
            *   Calculates offsets to center the grid.
            *   Populates `OutLocations` with local grid coordinates.
            *   Corrects positions in the last row if it's not full to keep it centered.
            *   Rotates all points based on `Direction` and translates them to `TargetLocation`.
        *   **Impact:** Modifying `UnitSpacingX/Y` or the grid calculation logic directly impacts the density and shape of the formation.

    *   `FVector2D GetCenterOfGroup(const TArray<AActor*>& Actors) const;`
        *   **Purpose:** Calculates the average 2D location of a group of actors.
        *   **Impact:** Used to determine the starting point and direction for the formation.

    *   `int32 GetFormationRank(const AActor* Unit) const;`
        *   **Purpose:** Intended to return a rank for a unit, influencing its position in formation.
        *   **Internal Logic (`.cpp`):** Currently returns `0` due to commented-out `URTSFormationRankComponent` logic.
        *   **Impact:** If re-enabled with a component, this would allow for more structured formations (e.g., melee units in front, ranged behind).

**5. Integration & Usage Scenarios**

*   **Typical Setup:**
    1.  Create a Blueprint child class derived from `URTSMoveOrder` (e.g., `BP_Order_Move`).
    2.  In `BP_Order_Move`'s Class Defaults:
        *   Assign a `BehaviorTree` asset that contains logic for a unit to move to a target location (e.g., using a "Move To" Behavior Tree task that reads `Order_Location` from the Blackboard).
        *   Configure the "RTS Display" properties (Name: "Move", appropriate icons).
        *   Other properties like `TargetType` and `bIsCreatingIndividualTargetLocations` are already correctly set by the C++ constructor of `URTSMoveOrder`.
*   **Issuing the Order:**
    *   A player clicks on the ground.
    *   The Player Controller determines the world location of the click.
    *   An `FRTSOrderData` is created:
        ```cpp
        // In PlayerController, server-side or RPC to server
        // FRTSOrderData MoveOrderData;
        // MoveOrderData.OrderType = BP_Order_Move_C::StaticClass(); // Or a TSoftClassPtr to it
        // MoveOrderData.Location = ClickedGroundLocation2D;
        // MoveOrderData.bUseLocation = true;
        // SelectedActor->FindComponentByClass<URTSOrderComponent>()->IssueOrder(MoveOrderData);
        ```
    *   If multiple units are selected, the `URTSOrderComponent` (or a higher-level selection manager) would iterate, and the `CreateIndividualTargetLocations` method would be invoked to give each unit its specific spot in the formation.
*   **Developer Workflow:**
    *   Ensure a suitable movement Behavior Tree exists.
    *   If custom pre/post movement actions are needed that aren't part of the Behavior Tree, consider subclassing `URTSMoveOrder` in C++.
*   **Designer Workflow:**
    *   Create/assign the movement Behavior Tree.
    *   Create the `BP_Order_Move` Blueprint and configure its UI and BT.
    *   Ensure units have an `ARTSCharacterAIController` capable of running the BT and a `URTSOrderComponent`.

**6. What the User Needs to Implement/Provide**

*   **Behavior Tree for Movement:** A `UBehaviorTree` asset that takes a target location (usually from `URTSBlackboardHelper::BLACKBOARD_KEY_LOCATION`) and makes the unit pathfind and move to it. This tree should correctly report success or failure to the `ARTSCharacterAIController`.
*   **Blueprint Subclass:** A Blueprint child of `URTSMoveOrder` where the above Behavior Tree and UI properties are assigned.
*   **(Optional) `URTSFormationRankComponent`:** If differentiated formation ranks are desired, the user would need to implement or uncomment and integrate a component like `URTSFormationRankComponent` and ensure `GetFormationRank` in `URTSMoveOrder.cpp` reads from it.
*   **Navigation System:** A working UE Navigation Mesh (`NavMeshBoundsVolume`) in levels where movement occurs.

**7. Advanced Topics & Considerations**

*   **Formation Spacing:** The `UnitSpacingX` and `UnitSpacingY` (currently 300) are hardcoded in `CalculateFormation`. For more flexibility, these could be exposed as properties of `URTSMoveOrder` or read from a global configuration.
*   **Obstacle Avoidance within Formation:** The current formation logic generates target points. It does not handle complex scenarios where units might be blocked by terrain or other units *while trying to reach their specific formation slot relative to other moving units*. The underlying UE pathfinding will handle individual unit movement to their assigned slots, but inter-unit collision within the moving group can still lead to shuffling.
*   **Dynamic Formations:** More advanced formations (e.g., based on unit types, facing a specific threat) would require a much more sophisticated `CreateIndividualTargetLocations` implementation.
*   **Performance:** For very large groups of units, the sorting and iteration in `CreateIndividualTargetLocations` could have a minor performance cost, but it's generally called once per group order.



















**2.1.4.2 `URTSAttackOrder` (Combat Initiation)**

**1. Overview & Purpose**

`URTSAttackOrder` is a concrete class derived from `URTSCharacterAIOrder`. Its primary function is to command one or more AI-controlled characters to engage and attack a specified target actor (a unit or building). This order is fundamental for combat scenarios in an RTS game.

*   **Primary Audience:**
    *   **Developers:** Will use this class as provided for standard attack commands. They might subclass it for highly specialized attack behaviors not covered by Gameplay Abilities or Behavior Tree modifications.
    *   **Designers:** Will create Blueprint child classes of `URTSAttackOrder` (or a game-specific C++ child) to assign a specific Behavior Tree for attack logic and configure its display properties (icon, name) and targeting parameters.

**2. Core Functionality & Features**

*   **Actor-Based Targeting:** Designed to target a specific `AActor`.
*   **Group Attack:** Can manage group attacks, with a basic formation logic inherited for positioning (though often attack positioning is more dynamic based on range and line of sight, handled by the Behavior Tree).
*   **Range Consideration:** Overrides `GetRequiredRange` to use the attacking unit's `RangeAttribute` from its `URTSAttackAttributeSet`.
*   **Target Scoring:** Provides a basic `GetTargetScore` implementation that can prioritize certain types of targets (e.g., deprioritizing workers or buildings slightly).
*   **Auto-Order Friendly:** The `AreAutoOrdersAllowedDuringOrder` method returns `true`, meaning if a unit is executing an attack order, its `URTSAutoOrderComponent` can still trigger other auto-orders (like using an auto-cast ability if an enemy gets close).
*   **AI-Driven Execution:** Relies on an associated Behavior Tree for the actual attack execution (e.g., moving into range, playing attack animations, triggering damage application via abilities).

**Related Concepts/Classes:**

*   [`URTSCharacterAIOrder`](#2.1.3.3-URTSCharacterAIOrder): The parent class.
*   [`URTSAttackAttributeSet`](#X.X.X-URTSAttackAttributeSet): Provides the `RangeAttribute` used by this order.
*   [`URTSAbilitySystemHelper`](#X.X.X-URTSAbilitySystemHelper): Used to get attribute values.
*   [`ARTSCharacterAIController`](#X.X.X-ARTSCharacterAIController): Executes the Behavior Tree associated with this attack order.
*   `UBehaviorTree`: The asset containing the attack logic.
*   [`URTSGlobalTags`](#X.X.X-URTSGlobalTags): Used extensively in `TagRequirements` and `SuccessTagRequirements`.

**3. Key Properties (Header File Analysis - `RTSAttackOrder.h`)**

`URTSAttackOrder` itself does not declare new `UPROPERTY` members. It inherits properties from its parent classes.

Key inherited properties configured by its constructor or relevant to its function:

*   From `URTSCharacterAIOrder`:
    *   `TargetType`: Set to `ERTSTargetType::ACTOR` in the `URTSAttackOrder` constructor.
    *   `bIsCreatingIndividualTargetLocations`: Set to `true` in the constructor. This means `CreateIndividualTargetLocations` will be called for group attacks.
*   From `URTSOrderWithBehavior`:
    *   `BehaviorTree`: **Must be set** in a Blueprint subclass to a Behavior Tree that handles attack logic.
*   From `URTSOrderWithDisplay`:
    *   `Name`, `NormalIcon`, etc.: Should be configured in a Blueprint subclass.

**Constructor Defaults (`RTSAttackOrder.cpp`):**

```cpp
URTSAttackOrder::URTSAttackOrder()
{
    TargetType = ERTSTargetType::ACTOR;
    bIsCreatingIndividualTargetLocations = true; // For positioning around a target

    // Source (Attacker) Requirements:
    TagRequirements.SourceRequiredTags.AddTag(URTSGlobalTags::Status_Permanent_CanAttack());
    TagRequirements.SourceBlockedTags.AddTag(URTSGlobalTags::Status_Changing_Unarmed());
    TagRequirements.SourceBlockedTags.AddTag(URTSGlobalTags::Status_Changing_Constructing());

    // Target Requirements:
    TagRequirements.TargetRequiredTags.AddTag(URTSGlobalTags::Status_Changing_IsAlive());
    TagRequirements.TargetRequiredTags.AddTag(URTSGlobalTags::Relationship_Visible()); // Target must be visible
    TagRequirements.TargetBlockedTags.AddTag(URTSGlobalTags::Status_Changing_Invulnerable());
    TagRequirements.TargetBlockedTags.AddTag(URTSGlobalTags::Relationship_Friendly()); // Cannot attack friends

    // Success Condition:
    // The order is considered successful if the target is NO LONGER alive.
    SuccessTagRequirements.TargetBlockedTags.AddTag(URTSGlobalTags::Status_Changing_IsAlive());
}
```
*   **`TargetType = ERTSTargetType::ACTOR;`**: This order requires an actor as a target.
*   **`bIsCreatingIndividualTargetLocations = true;`**: When attacking as a group, individual positions will be calculated. The base implementation of `CreateIndividualTargetLocations` (from `URTSMoveOrder`, as `URTSAttackOrder` calls `Super`) will be used, which creates a block formation. This might be suitable for ranged units attacking a static target or for melee units to surround a point near the target. Dynamic positioning based on attack range is typically handled by the Behavior Tree.
*   **`TagRequirements`**:
    *   **Source:** Attacker must be able to attack (`Status.Permanent.CanAttack`), not be unarmed (`Status.Changing.Unarmed`), and not be busy constructing (`Status.Changing.Constructing`).
    *   **Target:** Target must be alive (`Status.Changing.IsAlive`), visible (`Relationship.Visible`), not invulnerable (`Status.Changing.Invulnerable`), and not friendly (`Relationship.Friendly`).
*   **`SuccessTagRequirements`**:
    *   The attack order is considered fully successful if the target is no longer alive (`TargetBlockedTags` includes `Status.Changing.IsAlive`). This means if the target is destroyed, the order ends with success. If the target moves out of range or the attacker is given another order, it might end as `CANCELED`.

**4. Key Methods (Header & Source File Analysis - `RTSAttackOrder.h` & `RTSAttackOrder.cpp`)**

*   **Public Virtual Methods (Overrides):**

    *   `virtual void CreateIndividualTargetLocations(const TArray<AActor*>& OrderedActors, const FRTSOrderTargetData& TargetData, TArray<FVector2D>& OutTargetLocations) const override;`
        *   **Purpose:** Calculates individual target locations for a group of attackers.
        *   **Default Behavior (`.cpp`):** `Super::CreateIndividualTargetLocations(OrderedActors, TargetData, OutTargetLocations);`
            *   This calls the implementation from `URTSMoveOrder` (its grandparent via `URTSCharacterAIOrder` which doesn't override it). This means it will attempt to create a block formation around the `TargetData.Location` (which for an actor target, is the actor's location).
        *   **Considerations for Modification:**
            *   For ranged units, forming up at a distance from the target actor makes sense. The actual engagement and maintaining range is then handled by the Behavior Tree.
            *   For melee units, a block formation around the target's current location might be a starting point, but the Behavior Tree would need to handle dynamically engaging and surrounding the (potentially moving) target.
            *   A more sophisticated implementation here could involve calculating positions in an arc around the target, considering unit attack ranges, or ensuring line of sight. However, much of this dynamic positioning is often better suited to the Behavior Tree's per-tick execution.

    *   `virtual float GetRequiredRange(const AActor* OrderedActor, int32 Index) const override;`
        *   **Purpose:** Returns the effective attack range for the `OrderedActor`. This is used by the AI Behavior Tree (e.g., in a "Move To" task) to know when to stop approaching the target and begin attacking.
        *   **Default Behavior (`.cpp`):** `return URTSAbilitySystemHelper::GetAttributeValue(OrderedActor, URTSAttackAttributeSet::RangeAttribute());`
            *   It fetches the `Range` attribute from the `OrderedActor`'s `URTSAttackAttributeSet` via the `URTSAbilitySystemHelper`.
        *   **Considerations for Modification:** This correctly ties the order's range to the unit's stats. If an attack order could use different weapons or abilities with varying ranges (selected by `Index`), this method would need to be overridden to query the correct range based on `Index`.

    *   `virtual float GetTargetScore(const AActor* OrderedActor, const FRTSOrderTargetData& TargetData, int32 Index) const override;`
        *   **Purpose:** Provides a score for `TargetData` indicating its suitability as an attack target for `OrderedActor`. Used by AI for target prioritization if multiple valid targets are available.
        *   **Default Behavior (`.cpp`):**
            1.  Calls `Super::GetTargetScore(OrderedActor, TargetData, Index)` (which calculates a base score, likely distance-based from `URTSOrder`).
            2.  If the target has the `Status.Permanent.CanGather` tag (i.e., is a worker unit), the score is multiplied by `0.7f` (making them slightly less prioritized).
            3.  If the target has the `Building` tag, the score is multiplied by `0.5f` (making buildings less prioritized than units).
        *   **Considerations for Modification:** This provides a simple prioritization. More complex scoring could be implemented:
            *   Factor in target's current health (prioritize low-health enemies).
            *   Factor in threat level (prioritize dangerous enemies).
            *   Consider unit counters (e.g., anti-air units score flying targets much higher).
            *   This is a key area for customizing AI target selection behavior.
            ```cpp
            // In MyAdvancedAttackOrder.cpp
            // float UMyAdvancedAttackOrder::GetTargetScore(const AActor* OrderedActor, const FRTSOrderTargetData& TargetData, int32 Index) const
            // {
            //     float Score = Super::GetTargetScore(OrderedActor, TargetData, Index); // Gets base class scoring (distance, worker/building penalties)
            //     
            //     if (TargetData.Actor && OrderedActor)
            //     {
            //         // Example: Prioritize targets that are already attacking the OrderedActor's owner (if it's a defensive structure)
            //         // This requires more game-specific context.
            //         // if (IsTargetAttackingMyCommander(TargetData.Actor, OrderedActor)) Score *= 1.5f;
            //
            //         // Example: Factor in target's threat level (requires ThreatComponent or similar on target)
            //         // UMyThreatComponent* TargetThreat = TargetData.Actor->FindComponentByClass<UMyThreatComponent>();
            //         // if (TargetThreat) Score *= (1.0f + TargetThreat->GetCurrentThreat() * 0.1f); 
            //     }
            //     return Score;
            // }
            ```

    *   `virtual bool AreAutoOrdersAllowedDuringOrder() const override;`
        *   **Purpose:** Determines if the `URTSAutoOrderComponent` should continue trying to issue auto-orders while this attack order is active.
        *   **Default Behavior (`.cpp`):** Returns `true`.
        *   **Considerations for Modification:** `true` is generally good for attack orders, as it allows units to, for example, automatically use a defensive or offensive ability if the conditions are met while they are engaged in attacking. If a specific attack mode should suppress all other automatic actions, this could be overridden to return `false`.

**5. Integration & Usage Scenarios**

*   **Typical Setup:**
    1.  Create a Blueprint child class derived from `URTSAttackOrder` (e.g., `BP_Order_Attack`).
    2.  In `BP_Order_Attack`'s Class Defaults:
        *   Assign a `BehaviorTree` asset designed for attack logic. This tree would typically:
            *   Move the unit within `GetRequiredRange()` of the target (`Order_Target` from Blackboard).
            *   Face the target.
            *   Repeatedly trigger an attack ability/animation.
            *   Check if the target is still valid/alive.
            *   Report success (target destroyed) or failure (target lost, out of range indefinitely).
        *   Configure "RTS Display" properties (Name: "Attack", appropriate icons).
*   **Issuing the Order:**
    *   Player right-clicks on an enemy unit.
    *   The Player Controller identifies the target actor.
    *   An `FRTSOrderData` is created:
        ```cpp
        // In PlayerController, server-side or RPC to server
        // FRTSOrderData AttackOrderData;
        // AttackOrderData.OrderType = BP_Order_Attack_C::StaticClass(); 
        // AttackOrderData.Target = ClickedEnemyActor;
        // SelectedActor->FindComponentByClass<URTSOrderComponent>()->IssueOrder(AttackOrderData);
        ```
*   **Developer Workflow:**
    *   Design the attack Behavior Tree.
    *   Ensure units have an `URTSAttackAttributeSet` with a `Range` attribute.
    *   Ensure units have a way to deal damage, often through a Gameplay Ability triggered by the Behavior Tree.
*   **Designer Workflow:**
    *   Create/assign the attack Behavior Tree.
    *   Create the `BP_Order_Attack` Blueprint and configure its UI and BT.
    *   Set up unit attributes (`Range`) and damage-dealing abilities.

**6. What the User Needs to Implement/Provide**

*   **Behavior Tree for Attacking:** A `UBehaviorTree` asset that handles:
    *   Moving to the target (respecting `RangeAttribute`).
    *   Playing attack animations.
    *   Triggering damage application (e.g., by sending a Gameplay Event to activate an attack `URTSGameplayAbility`).
    *   Checking for target death or loss.
    *   Reporting success/failure to the `ARTSCharacterAIController`.
*   **Blueprint Subclass:** A Blueprint child of `URTSAttackOrder` where the Behavior Tree and UI properties are assigned.
*   **Attack Attributes:** Units need an `URTSAttackAttributeSet` with `Range` (and likely `Damage`, `Cooldown` for the attack ability itself).
*   **Damage Dealing Mechanism:** A `URTSGameplayAbility` or other system to actually apply damage, usually triggered from the Behavior Tree.

**7. Advanced Topics & Considerations**

*   **Melee vs. Ranged Behavior:** The same `URTSAttackOrder` can be used for both, but the Behavior Tree will differ significantly.
    *   **Melee:** BT needs to move into very close range, potentially surround the target, and continuously attack.
    *   **Ranged:** BT needs to move to attack range, maintain that range (kiting if necessary), and handle line of sight.
*   **Target Reacquisition:** If the primary target is destroyed or becomes invalid, the Behavior Tree associated with the attack order might include logic to find a new nearby enemy, or it might simply report failure/success, letting the `URTSAutoOrderComponent` potentially issue a new attack order.
*   **Special Attack Orders:** For "Attack Move" (A-Move) commands, you might create a separate order or have complex logic in the Player Controller that issues a `URTSMoveOrder` first, and then the unit's `URTSAutoOrderComponent` (with an auto-attack order) handles engaging enemies along the way. Alternatively, an "Attack Move" Behavior Tree could handle both movement and opportunistic attacking.
*   **Focus Fire:** The current `GroupExecutionType` (defaulting to `ALL` via `URTSCharacterAIOrder`) means all selected units will try to attack the same target. The `CreateIndividualTargetLocations` calling `URTSMoveOrder`'s version will try to position them in a block formation *around the target's location*. The Behavior Tree then fine-tunes positioning for attack.







**2.1.4.3 `URTSStopOrder` (Halting Actions)**

**1. Overview & Purpose**

`URTSStopOrder` is a concrete class derived from `URTSCharacterAIOrder`. Its primary and straightforward purpose is to command an AI-controlled character to cease its current action and enter an idle or 'stopped' state. This is a fundamental command used to halt units, cancel their current activities, and often serves as the default order when no other commands are active.

*   **Primary Audience:**
    *   **Developers:** Will typically use this class as is. The `ARTSCharacterAIController` uses a `TSoftClassPtr<URTSStopOrder>` to know which order represents the idle state.
    *   **Designers:** Will create a Blueprint child class of `URTSStopOrder` to assign a specific Behavior Tree that defines the unit's idle behavior (e.g., playing an idle animation, periodically scanning for threats if it's not a "Hold Position" type of stop). They will also configure its display properties.

**2. Core Functionality & Features**

*   **Halts Current Action:** When issued, it typically causes the unit's AI controller to stop its current Behavior Tree (if it's cancellable) and switch to the Behavior Tree associated with this `URTSStopOrder`.
*   **Idle State Trigger:** Represents the transition to an idle or default non-active state.
*   **Allows Auto-Orders:** Crucially, `AreAutoOrdersAllowedDuringOrder()` returns `true`, meaning when a unit is "stopped" (i.e., executing this order), its `URTSAutoOrderComponent` is active and can issue automatic orders like auto-attacking nearby enemies or auto-casting abilities. This differentiates a generic "Stop" from a "Hold Position" where auto-orders might be suppressed.
*   **AI-Driven Execution:** Relies on an associated Behavior Tree to define what "stopped" or "idle" means for the unit.

**Related Concepts/Classes:**

*   [`URTSCharacterAIOrder`](#2.1.3.3-URTSCharacterAIOrder): The parent class.
*   [`ARTSCharacterAIController`](#X.X.X-ARTSCharacterAIController): This controller has a `StopOrder` property (a `TSoftClassPtr<URTSStopOrder>`) which it uses as its default/idle order. It executes the Behavior Tree associated with this stop order.
*   [`URTSOrderComponent`](#2.1.1-URTSOrderComponent): Often issues this order when the order queue becomes empty or when an active order is cancelled or fails.
*   `UBehaviorTree`: The asset defining the unit's behavior while in the "stopped" state.
*   [`URTSAutoOrderComponent`](#X.X.X-URTSAutoOrderComponent): Is explicitly allowed to function while this order is active.

**3. Key Properties (Header File Analysis - `RTSStopOrder.h`)**

`URTSStopOrder` itself does not declare new `UPROPERTY` members. It inherits properties from its parent classes.

Key inherited properties configured by its constructor or relevant to its function:

*   From `URTSCharacterAIOrder`:
    *   `TargetType`: Set to `ERTSTargetType::NONE` in the `URTSStopOrder` constructor, as stopping doesn't require a specific target.
    *   `bIsCreatingIndividualTargetLocations`: Set to `false` in the constructor.
*   From `URTSOrderWithBehavior`:
    *   `BehaviorTree`: **Must be set** in a Blueprint subclass of `URTSStopOrder` to a Behavior Tree that defines the unit's idle/stopped behavior.
*   From `URTSOrderWithDisplay`:
    *   `Name`, `NormalIcon`, etc.: Should be configured in a Blueprint subclass.

**Constructor Defaults (`RTSStopOrder.cpp`):**

```cpp
URTSStopOrder::URTSStopOrder()
{
    TargetType = ERTSTargetType::NONE;
    bIsCreatingIndividualTargetLocations = false;

    // Unit cannot execute a stop order if it's currently constructing something.
    // This prevents a builder from being stopped mid-construction easily,
    // though a more forceful cancel might be needed for that interaction.
    TagRequirements.SourceBlockedTags.AddTag(URTSGlobalTags::Status_Changing_Constructing());
}
```
*   **`TargetType = ERTSTargetType::NONE;`**: A stop order does not require a target.
*   **`bIsCreatingIndividualTargetLocations = false;`**: Not relevant as there's no target location for a formation.
*   **`TagRequirements.SourceBlockedTags`**:
    *   `URTSGlobalTags::Status_Changing_Constructing()`: A unit that is actively constructing something cannot be easily stopped by this order. This implies that construction is a state that this "Stop" order respects and won't interrupt. A different, more forceful "CancelConstruction" order might be needed if that's desired.

**4. Key Methods (Header & Source File Analysis - `RTSStopOrder.h` & `RTSStopOrder.cpp`)**

*   **Public Virtual Methods (Overrides):**

    *   `virtual bool AreAutoOrdersAllowedDuringOrder() const override;`
        *   **Purpose:** Determines if the `URTSAutoOrderComponent` should attempt to issue automatic orders while this `URTSStopOrder` is the active order.
        *   **Default Behavior (`.cpp`):** Returns `true`.
        *   **Significance:** This is a key design choice. By returning `true`, a unit that is "stopped" is still reactive to its environment (e.g., it will auto-attack enemies that come into its acquisition radius). If this were to return `false`, it would behave more like a "Hold Position and Do Nothing" command.
        *   **Considerations for Modification:** If you need a "Hold Position" command that explicitly prevents any auto-reactions, you would create a new order (e.g., `URTSHoldPositionOrder`) that derives from `URTSStopOrder` (or `URTSCharacterAIOrder`) and overrides this method to return `false`.

**5. Integration & Usage Scenarios**

*   **Typical Setup:**
    1.  Create a Blueprint child class derived from `URTSStopOrder` (e.g., `BP_Order_Stop`).
    2.  In `BP_Order_Stop`'s Class Defaults:
        *   Assign a `BehaviorTree` asset that defines the unit's idle behavior. This tree might:
            *   Play an idle animation.
            *   Periodically run an EQS query or sphere overlap to scan for enemies if the unit is supposed to be aggressive even when stopped (though `URTSAutoOrderComponent` often handles this).
            *   Simply wait or do nothing if it's a purely passive idle.
        *   Configure "RTS Display" properties (Name: "Stop", appropriate icons).
    3.  The `ARTSCharacterAIController` for your units should have its `StopOrder` TSoftClassPtr property (in its Blueprint defaults or C++ constructor) point to this `BP_Order_Stop` class.
*   **Issuing the Order:**
    *   Player presses a "Stop" hotkey or clicks a "Stop" button in the UI.
    *   The Player Controller or UI system creates an `FRTSOrderData`:
        ```cpp
        // In PlayerController, server-side or RPC to server
        // FRTSOrderData StopOrderData;
        // StopOrderData.OrderType = BP_Order_Stop_C::StaticClass(); 
        // SelectedActor->FindComponentByClass<URTSOrderComponent>()->IssueOrder(StopOrderData);
        ```
    *   The `URTSOrderComponent` also issues this order internally when the order queue is empty or an order fails/is canceled.
*   **Developer Workflow:**
    *   Ensure all `ARTSCharacterAIController` subclasses are configured with a valid `StopOrder` class.
    *   Design an appropriate "Idle" Behavior Tree.
*   **Designer Workflow:**
    *   Create/assign the "Idle" Behavior Tree.
    *   Create the `BP_Order_Stop` Blueprint and configure its UI and BT.
    *   Set this `BP_Order_Stop` as the default `StopOrder` on AI Controllers.

**6. What the User Needs to Implement/Provide**

*   **Behavior Tree for Idle/Stopped State:** A `UBehaviorTree` asset that defines what a unit does when it's not actively pursuing another command.
*   **Blueprint Subclass:** A Blueprint child of `URTSStopOrder` where the above Behavior Tree and UI properties are assigned.
*   **AI Controller Configuration:** The game's `ARTSCharacterAIController` (or its subclasses) must have its `StopOrder` property set to the created `URTSStopOrder` Blueprint subclass.

**7. Advanced Topics & Considerations**

*   **"Stop" vs. "Hold Position":** As mentioned, `URTSStopOrder` allows auto-orders.
    *   To create a "Hold Position" (where the unit stops and does *not* auto-react), you would:
        1.  Create a new order class, say `URTSHoldPositionOrder`, inheriting from `URTSStopOrder`.
        2.  In `URTSHoldPositionOrder`, override `AreAutoOrdersAllowedDuringOrder()` to return `false`.
        3.  Assign a potentially different (or same) "Idle" Behavior Tree to it.
        4.  Provide a separate UI button/hotkey for this "Hold Position" command.
*   **Interrupting Construction:** The `TagRequirements` block stopping a unit that is `Status.Changing.Constructing`. If a "Stop" command *should* interrupt construction, that specific interaction needs to be handled by a dedicated "Cancel Construction" order or by modifying the tag requirements (though the latter might be too broad).
*   **Idle Animations and Behavior:** The associated Behavior Tree is key. A simple idle might just be a "Wait" node with an animation task. A more complex idle could involve units fidgeting, scanning their surroundings, or having subtle variations in their idle poses.


























**2.1.4.4 `URTSUseAbilityOrder` (Bridging Orders and Abilities)**

**1. Overview & Purpose**

`URTSUseAbilityOrder` is an abstract class (though `NotBlueprintType, Abstract, Blueprintable` - the `NotBlueprintType` means you can't create Blueprint *instances* of it directly, but `Blueprintable` means you can create Blueprint *child classes* if it weren't also `Abstract`. It's typically used as a C++ base) derived from `URTSOrderWithBehavior`. Its fundamental purpose is to allow a `UGameplayAbility` (specifically, an `URTSGameplayAbility`) to be issued and managed as if it were a standard `URTSOrder`. This class dynamically pulls much of its configuration (icons, name, target type, range, requirements) from the associated `URTSGameplayAbility`.

*   **Primary Audience:**
    *   **Developers:** This class is primarily a C++ construct. Developers will use it as the `OrderType` in an `FRTSOrderData` when an ability needs to be activated via the order system. They need to understand how it uses the `Index` parameter to identify which ability on an actor's `URTSAbilitySystemComponent` to trigger.
    *   **Designers:** Will interact with this indirectly. When they set up abilities on an `URTSAbilitySystemComponent` (e.g., in a unit's Blueprint), those abilities can be targeted by this order. The `Index` in `FRTSOrderData` will correspond to an ability's position in the `URTSAbilitySystemComponent`'s `InitialAndUnlockableAbilities` array. UI systems will often be configured to create `FRTSOrderData` instances using `URTSUseAbilityOrder` as the type, with the correct `Index` for the chosen ability.

**2. Core Functionality & Features**

*   **Ability Abstraction:** Treats a Gameplay Ability as an order.
*   **Dynamic Property Retrieval:** Most of its properties (icon, name, description, target type, range, tag requirements, etc.) are not static but are queried at runtime from the specific `URTSGameplayAbility` identified by the `Index` parameter on the `OrderedActor`.
*   **Index-Based Ability Selection:** The `Index` field in `FRTSOrderData` is crucial; it specifies which ability from the `OrderedActor`'s `URTSAbilitySystemComponent::GetInitialAndUnlockableAbilities()` array is to be used.
*   **Process Policy Adaptation:** Adapts the `ERTSOrderProcessPolicy` based on the `ERTSAbilityProcessPolicy` of the target ability. For instance, an instant ability with no target might be issued as an `INSTANT` order.
*   **Integration with Behavior Trees:** As it inherits from `URTSOrderWithBehavior`, it can be associated with a Behavior Tree, which is often used to move the unit into range before activating the ability. The default `UseAbilityOrder` (configured on `URTSAbilitySystemComponent`) usually points to a generic "use ability" Behavior Tree.

**Related Concepts/Classes:**

*   [`URTSOrderWithBehavior`](#2.1.3.2-URTSOrderWithBehavior): The parent class.
*   [`URTSGameplayAbility`](#X.X.X-URTSGameplayAbility): The class of ability that this order will trigger. This order class heavily queries properties from the `URTSGameplayAbility` CDO.
*   [`URTSAbilitySystemComponent`](#X.X.X-URTSAbilitySystemComponent): The component on the `OrderedActor` that owns and manages the abilities. This order uses the `Index` to find the ability within this component.
*   [`FRTSOrderData`](#X.X.X-FRTSOrderData): The `Index` field here is paramount for `URTSUseAbilityOrder`.
*   [`ARTSCharacterAIController`](#X.X.X-ARTSCharacterAIController): Executes the Behavior Tree associated with using an ability (e.g., moving into range).

**3. Key Properties (Header File Analysis - `RTSUseAbilityOrder.h`)**

`URTSUseAbilityOrder` itself does not declare new `UPROPERTY` members. Its behavior is almost entirely driven by dynamically querying the associated `URTSGameplayAbility` based on the `Index` passed in `FRTSOrderData`. The significant configuration for `URTSUseAbilityOrder` typically happens on the `URTSAbilitySystemComponent` where a `TSoftClassPtr<URTSUseAbilityOrder>` (named `UseAbilityOrder`) is defined. This soft class pointer is the *specific subclass* of `URTSUseAbilityOrder` (often a Blueprint child) that has a Behavior Tree assigned to it for handling ability usage.

**Constructor Defaults (`RTSUseAbilityOrder.cpp`):**
The constructor `URTSUseAbilityOrder::URTSUseAbilityOrder()` is empty. Defaults are inherited or determined dynamically.

**4. Key Methods (Header & Source File Analysis - `RTSUseAbilityOrder.h` & `RTSUseAbilityOrder.cpp`)**

*   **Protected Virtual Method (for internal use/extension):**

    *   `virtual UGameplayAbility* GetAbility(const URTSAbilitySystemComponent* AbilitySystem, int32 Index) const;`
        *   **Purpose:** A helper method to retrieve the `UGameplayAbility` CDO from the `AbilitySystem` component using the provided `Index`.
        *   **Parameters:**
            *   `AbilitySystem`: The `URTSAbilitySystemComponent` of the actor that will execute the ability.
            *   `Index`: The index into the `AbilitySystem->GetInitialAndUnlockableAbilities()` array.
        *   **Default Behavior (`.cpp`):**
            1.  Calls `AbilitySystem->GetInitialAndUnlockableAbilities()` to get a combined list of all abilities the actor could potentially use.
            2.  Checks if `Index` is valid for this array.
            3.  If valid and the `TSubclassOf<UGameplayAbility>` at that index is not null, it returns the CDO of that ability class (`Abilities[Index]->GetDefaultObject<UGameplayAbility>()`).
            4.  Otherwise, returns `nullptr`.
        *   **Considerations for Modification:** If your game categorizes abilities differently or has multiple sources beyond `InitialAndUnlockableAbilities` that should be targetable by index, this method would need to be overridden in a subclass of `URTSUseAbilityOrder`.

*   **Private Helper Method:**

    *   `UTexture2D* GetIcon(const AActor* OrderedActor, int32 Index) const;`
        *   **Purpose:** Retrieves the icon from the `URTSGameplayAbility` specified by `Index`.
        *   **Internal Logic (`.cpp`):**
            1.  Gets the `URTSAbilitySystemComponent` from `OrderedActor`.
            2.  Calls `this->GetAbility(AbilitySystem, Index)` to get the `UGameplayAbility` CDO.
            3.  Casts it to `URTSGameplayAbility`.
            4.  If successful, returns `RTSAbility->GetIcon()`. Otherwise, returns `nullptr`.
        *   **Impact:** This is called by the overridden `GetNormalIcon`, `GetHoveredIcon`, etc.

*   **Public Virtual Methods (Overrides from `URTSOrder` and its parents):**

    *   `virtual bool CanObeyOrder(const AActor* OrderedActor, int32 Index, FRTSOrderErrorTags* OutErrorTags = nullptr) const override;`
        *   **Purpose:** Checks if the `OrderedActor` can execute the ability specified by `Index`.
        *   **Default Behavior (`.cpp`):**
            1.  Gets the `URTSAbilitySystemComponent` and the target `UGameplayAbility` CDO using `GetAbility(AbilitySystem, Index)`.
            2.  If the ability is valid:
                *   Iterates through the `AbilitySystem->GetActivatableAbilities()` to find the `FGameplayAbilitySpec` for this ability.
                *   **Checks Level:** If `Spec.Level <= 0`, returns `false` (ability not learned/active).
                *   **Calls `Ability->CanActivateAbility()`:** This is a crucial GAS function that checks if the ability can be activated based on costs, cooldowns, and its own internal logic (ignoring source/target tags here, as those are checked by `URTSOrderHelper` before this via `GetTagRequirements`). If it fails, `OutErrorTags` is populated with `FailureTags` from `CanActivateAbility`.
                *   **Construction Check:** Specifically checks if the `AbilitySystem` has the `URTSGlobalTags::Status_Changing_Constructing()` tag. If so, returns `false` (units can't use abilities while constructing).
                *   If all checks pass, returns `true`.
            3.  If the ability is not found or invalid, returns `false`.
        *   **Risks & Considerations:** Relies heavily on the correct implementation of `CanActivateAbility` in the `URTSGameplayAbility` subclasses. The hardcoded check against `Status_Changing_Constructing` is a specific game rule embedded here.

    *   `virtual ERTSTargetType GetTargetType(const AActor* OrderedActor, int32 Index) const override;`
        *   **Default Behavior (`.cpp`):** Gets the `URTSGameplayAbility` (via `GetAbility`) and returns its `TargetType` by calling `Ability->GetTargetType()`. Returns `NONE` if the ability is invalid.

    *   `virtual void IssueOrder(AActor* OrderedActor, const FRTSOrderTargetData& TargetData, int32 Index, FRTSOrderCallback Callback, const FVector& HomeLocation) const override;`
        *   **Purpose:** Executes the ability order.
        *   **Default Behavior (`.cpp`):**
            1.  Validates `OrderedActor`.
            2.  Gets the `UGameplayAbility` CDO.
            3.  **Checks `OrderProcessPolicy` (derived from the ability's process policy, see below):**
                *   If `ERTSOrderProcessPolicy::INSTANT`:
                    *   Creates `FGameplayEventData` using `URTSAbilitySystemHelper::CreateGameplayEventData` (which packages source, target, ability class for the event system).
                    *   Sends this event to the `OrderedActor` using `URTSAbilitySystemHelper::SendGameplayEvent`.
                    *   Broadcasts `Callback` with `SUCCEEDED` if `SendGameplayEvent` triggered any abilities, `FAILED` otherwise.
                *   Else (if it's `CAN_BE_CANCELED` or `CAN_NOT_BE_CANCELED`, meaning it needs AI/Behavior Tree handling, e.g., to move into range):
                    *   Calls `Super::IssueOrder(...)`. This invokes `URTSOrderWithBehavior::IssueOrder`, which will find the `ARTSCharacterAIController` and tell it to run the Behavior Tree associated with *this* `URTSUseAbilityOrder` instance (or rather, its Blueprint child that has a BT assigned). The Behavior Tree is then responsible for eventually activating the ability.
        *   **Risks & Considerations:**
            *   The distinction between `INSTANT` and Behavior Tree-driven execution is key. Simple, no-target, instant-cast abilities are handled directly. Abilities requiring movement or complex sequencing go through the BT.
            *   The Behavior Tree assigned to the `URTSUseAbilityOrder` subclass (e.g., `BP_Order_UseAbilityMain`) must be generic enough to handle various abilities or use Blackboard information (like `Order_Index`) to adapt. It typically moves the unit into `GetRequiredRange()` and then could send a Gameplay Event or directly try to activate the ability.

    *   `virtual UTexture2D* GetNormalIcon(const AActor* OrderedActor, int32 Index) const override;` (and `Hovered`, `Pressed`, `Disabled`)
        *   **Default Behavior (`.cpp`):** All call the private `GetIcon(OrderedActor, Index)` method, which retrieves the icon from the `URTSGameplayAbility`.

    *   `virtual FText GetName(const AActor* OrderedActor, int32 Index) const override;`
        *   **Default Behavior (`.cpp`):** Retrieves the `URTSGameplayAbility` and returns `Ability->GetName()`.

    *   `virtual FText GetDescription(const AActor* OrderedActor, int32 Index) const override;`
        *   **Default Behavior (`.cpp`):** Retrieves the `URTSGameplayAbility` and returns `Ability->GetDescription(OrderedActor)`.

    *   `virtual FRTSOrderPreviewData GetOrderPreviewData(const AActor* OrderedActor, int32 Index) const override;`
        *   **Default Behavior (`.cpp`):** Retrieves the `URTSGameplayAbility` and returns `Ability->GetAbilityPreviewData()`.

    *   `virtual ERTSOrderProcessPolicy GetOrderProcessPolicy(const AActor* OrderedActor, int32 Index) const override;`
        *   **Purpose:** Determines how this ability order interacts with the `URTSOrderComponent` queue.
        *   **Default Behavior (`.cpp`):**
            1.  Gets the `URTSGameplayAbility` (via `GetAbility`).
            2.  Gets the ability's `ERTSAbilityProcessPolicy`.
            3.  **Translation Logic:**
                *   If `Ability->TargetType` is `NONE` or `PASSIVE` AND `AbilityProcessPolicy` is `INSTANT`, this order returns `ERTSOrderProcessPolicy::INSTANT`.
                *   If `AbilityProcessPolicy` is `CAN_NOT_BE_CANCELED`, this order returns `ERTSOrderProcessPolicy::CAN_NOT_BE_CANCELED`.
                *   If `AbilityProcessPolicy` is `CAN_BE_CANCELED`, this order returns `ERTSOrderProcessPolicy::CAN_BE_CANCELED`.
                *   If `AbilityProcessPolicy` is `CAN_BE_CANCELED_WHEN_NO_GAMEPLAY_TASK_IS_RUNNING`:
                    *   Checks if the ability is instanced per actor. If not, returns `CAN_BE_CANCELED`.
                    *   Finds the `FGameplayAbilitySpec`.
                    *   Iterates through active instances of the ability. If any `URTSGameplayAbility` instance `AreAbilityTasksActive()`, returns `CAN_NOT_BE_CANCELED`.
                    *   Otherwise, returns `CAN_BE_CANCELED`.
                *   Defaults to `CAN_BE_CANCELED`.
        *   **Significance:** This complex logic translates the ability's own processing needs into the order system's framework.

    *   `virtual ERTSOrderGroupExecutionType GetGroupExecutionType(const AActor* OrderedActor, int32 Index) const override;`
        *   **Default Behavior (`.cpp`):** Retrieves the `URTSGameplayAbility` and returns `Ability->GetGroupExecutionType()`.

    *   `virtual bool IsHumanPlayerAutoOrder(const AActor* OrderedActor, int32 Index) const override;`
        *   **Default Behavior (`.cpp`):** Retrieves `URTSGameplayAbility`, returns `Ability->IsHumanPlayerAutoAbility()`.

    *   `virtual bool GetHumanPlayerAutoOrderInitialState(const AActor* OrderedActor, int32 Index) const override;`
        *   **Default Behavior (`.cpp`):** Retrieves `URTSGameplayAbility`, returns `Ability->GetHumanPlayerAutoAutoAbilityInitialState()`.

    *   `virtual bool IsAIPlayerAutoOrder(const AActor* OrderedActor, int32 Index) const override;`
        *   **Default Behavior (`.cpp`):** Retrieves `URTSGameplayAbility`, returns `Ability->IsAIPlayerAutoAbility()`.

    *   `virtual bool GetAcquisitionRadiusOverride(const AActor* OrderedActor, int32 Index, float& OutAcquisitionRadius) const override;`
        *   **Default Behavior (`.cpp`):** Retrieves `URTSGameplayAbility`, calls `Ability->GetAcquisitionRadiusOverride(OutAcquisitionRadius)` and returns its result.

    *   `virtual float GetTargetScore(const AActor* OrderedActor, const FRTSOrderTargetData& TargetData, int32 Index) const override;`
        *   **Default Behavior (`.cpp`):**
            1.  Retrieves `URTSGameplayAbility`.
            2.  If ability is null or `!Ability->IsTargetScoreOverridden()`, calls `Super::GetTargetScore()`.
            3.  Otherwise, calls `Ability->GetTargetScore(...)` to let the ability define its own target scoring.

    *   `virtual void GetTagRequirements(const AActor* OrderedActor, int32 Index, FRTSOrderTagRequirements& OutTagRequirements) const override;`
        *   **Default Behavior (`.cpp`):** Retrieves `URTSGameplayAbility` and calls `Ability->GetOrderTagRequirements(OutTagRequirements)`. This effectively merges the ability's own source/target tag requirements into the order's requirements.

    *   `virtual float GetRequiredRange(const AActor* OrderedActor, int32 Index) const override;`
        *   **Default Behavior (`.cpp`):** Retrieves `URTSAbilitySystemComponent` and `UGameplayAbility`. Calls `AbilitySystem->GetAbilityRange(Ability->GetClass())`. This delegates range calculation to the `URTSAbilitySystemComponent`, which in turn calls `URTSGameplayAbility::GetRange()`.

**5. Integration & Usage Scenarios**

*   **Typical Setup:**
    1.  An `URTSAbilitySystemComponent` on an actor is configured with a `TSoftClassPtr<URTSUseAbilityOrder> UseAbilityOrder` property. This property should point to a Blueprint child class of `URTSUseAbilityOrder` (e.g., `BP_Order_UseAbilityBase`) that has a generic "Use Ability" Behavior Tree assigned to it.
    2.  The actor also has various `URTSGameplayAbility` subclasses granted to it (e.g., "Fireball", "Heal"). These are stored in its `URTSAbilitySystemComponent` and accessible via an index.
    3.  When the player clicks an ability button in the UI:
        *   The UI determines the `Index` of the ability.
        *   An `FRTSOrderData` is created:
            ```cpp
            // In PlayerController or UI, server-side or RPC to server
            // URTSAbilitySystemComponent* UnitASC = SelectedActor->FindComponentByClass<URTSAbilitySystemComponent>();
            // if (UnitASC && UnitASC->UseAbilityOrder.IsValid())
            // {
            //     FRTSOrderData AbilityOrderData;
            //     AbilityOrderData.OrderType = UnitASC->UseAbilityOrder; // This is TSoftClassPtr<URTSUseAbilityOrder>
            //     AbilityOrderData.Index = ClickedAbilityIndex;
            //     AbilityOrderData.Target = CurrentTargetActor; // If ability needs a target
            //     AbilityOrderData.Location = CurrentTargetLocation; // If ability needs a location
            //     AbilityOrderData.bUseLocation = (AbilityTargetType == ERTSTargetType::LOCATION);
            //
            //     SelectedActor->FindComponentByClass<URTSOrderComponent>()->IssueOrder(AbilityOrderData);
            // }
            ```
*   **Interaction with Other Plugin Systems:**
    *   `URTSAbilitySystemComponent`: Provides the list of abilities and the `UseAbilityOrder` class reference. It's also where ability activation costs are paid and cooldowns are applied.
    *   `URTSGameplayAbility`: Defines the actual effects, targeting, range, and other properties of the ability being used.
    *   `ARTSCharacterAIController` & Behavior Tree: For non-instant abilities, the BT assigned to the `URTSUseAbilityOrder` subclass handles moving into range, facing the target, and then usually sends a Gameplay Event to trigger the ability specified by `Order_Index` in the Blackboard.
*   **Developer Workflow:**
    *   Ensure `URTSAbilitySystemComponent` has its `UseAbilityOrder` property set (usually to a Blueprint subclass of `URTSUseAbilityOrder`).
    *   Implement `URTSGameplayAbility` subclasses for all game abilities.
    *   Design a generic "Use Ability" Behavior Tree that can:
        *   Read `Order_Index`, `Order_Target`, `Order_Location` from the Blackboard.
        *   Move to range (using `GetRequiredRange` which queries the ability at `Order_Index`).
        *   Trigger the ability (e.g., via `UAbilitySystemBlueprintLibrary::SendGameplayEventToActor` using the ability's event tag, or directly attempting activation if appropriate).
*   **Designer Workflow:**
    *   Create Blueprint subclasses of `URTSGameplayAbility` for each ability, configuring their properties.
    *   Grant these abilities to unit Blueprints via their `URTSAbilitySystemComponent`.
    *   Create a Blueprint subclass of `URTSUseAbilityOrder` (e.g., `BP_Order_UseAbilityBase`), assign the generic "Use Ability" Behavior Tree to it.
    *   Set the `UseAbilityOrder` property on the `URTSAbilitySystemComponent` of unit archetypes to point to `BP_Order_UseAbilityBase`.
    *   Design UI to list abilities and, when clicked, create the appropriate `FRTSOrderData` with the correct `Index`.

**6. What the User Needs to Implement/Provide**

*   **`URTSGameplayAbility` Subclasses:** For every ability in the game.
*   **A "Use Ability" Behavior Tree:** A generic BT that can handle moving into range and triggering an ability based on an index.
*   **A Blueprint Child of `URTSUseAbilityOrder`:** This Blueprint class will have the "Use Ability" Behavior Tree assigned to it.
*   **Configuration on `URTSAbilitySystemComponent`:** The `UseAbilityOrder` property on each unit's `URTSAbilitySystemComponent` must be set to point to the aforementioned Blueprint child of `URTSUseAbilityOrder`.
*   **UI System:** To display abilities and construct the `FRTSOrderData` with the correct `Index` when an ability is chosen by the player.

**7. Advanced Topics & Considerations**

*   **Complexity of `Index`:** The `Index` refers to the combined list from `URTSAbilitySystemComponent::GetInitialAndUnlockableAbilities()`. Managing these indices if abilities are frequently added/removed or granted dynamically can be complex for UI. A more robust system might use Gameplay Tags to identify abilities rather than array indices.
*   **Generic Behavior Tree:** The Behavior Tree assigned to the `URTSUseAbilityOrder` subclass needs to be quite flexible. It often relies on the ability itself (queried via `Index`) to provide all necessary parameters like range, target type, etc. The BT might just have nodes like "Move To Target In Ability Range", "Face Target", "Execute Ability Event".
*   **Instant vs. Non-Instant Abilities:** The `IssueOrder` and `GetOrderProcessPolicy` methods correctly differentiate these. Instant, no-target abilities are fired off immediately. Others go through the Behavior Tree. This distinction is vital.
*   **Error Handling:** If an invalid `Index` is provided, the order will likely fail silently or throw errors when trying to access a null ability. Robust UI and input systems should validate the `Index` before creating the order.







### 2.1.5. Automatic Orders

Automatic orders allow units to react to their environment and perform actions without direct, continuous player micromanagement. This system is crucial for making units feel more alive and reducing the player's cognitive load for common tasks like attacking nearby enemies or automatically using certain abilities.

---

**2.1.5.1 `URTSAutoOrderComponent`**

**1. Overview & Purpose**

The `URTSAutoOrderComponent` is an `UActorComponent` responsible for managing and potentially issuing orders automatically to its owning actor. It periodically checks a list of "auto-order candidates" (typically abilities that can be cast automatically or default attack orders) and, if conditions are met, issues one of them. This component works in conjunction with `IRTSAutoOrderProvider` interfaces found on the owner or its other components to gather the list of potential auto-orders.

*   **Primary Audience:**
    *   **Developers:** Will interact with this component by ensuring units that need auto-behaviors have it attached. They might also create new `IRTSAutoOrderProvider` implementations to supply custom auto-order logic or conditions. Understanding its interaction with the main `URTSOrderComponent` is key.
    *   **Designers:** Will configure which abilities on a unit are marked as "auto-cast" (e.g., via `URTSGameplayAbility` properties like `bHumanPlayerAutoAbility` or `bAIPlayerAutoAbility`). They will also observe the effects of auto-orders and tune acquisition radii or ability parameters to achieve the desired autonomous behavior.

**2. Core Functionality & Features**

*   **Auto-Order Candidate Discovery:** In `BeginPlay`, it queries its owner and other components that implement the `IRTSAutoOrderProvider` interface to gather a list of potential `FRTSOrderTypeWithIndex` entries that can be issued automatically.
*   **Periodic Checks:** The `CheckAutoOrders()` method is intended to be called periodically (e.g., by a manager system or a timer, though the provided code hints at a `ARTSGameMode::AddAutoOrderActor` for bucketed updates, which is a common performance optimization).
*   **Conditional Issuance:**
    *   Checks if auto-orders are currently allowed based on the main `URTSOrderComponent`'s current order (via `URTSOrderHelper::AreAutoOrdersAllowedDuringOrder`).
    *   For each potential auto-order, it verifies if the unit can obey it (`URTSOrderHelper::CanObeyOrder`).
    *   Determines an appropriate acquisition radius for the order.
    *   For orders requiring targets, it attempts to find a valid target within the acquisition radius using `URTSOrderHelper::FindTargetForOrder`.
    *   If a valid order and target (if needed) are found, it issues the order using `URTSOrderComponent::InsertOrderBeforeCurrentOrder`, effectively interrupting the current action to perform the auto-order, then queuing the interrupted action.
*   **Player Toggling (Human Players):** Supports enabling/disabling specific auto-orders for human players via `SetHumanPlayerAutoOrderState` and `GetHumanPlayerAutoOrderState`. The initial state is determined by the `URTSGameplayAbility`'s `bHumanPlayerAutoAutoAbilityInitialState`.
*   **AI Player Behavior:** AI players typically have their auto-orders always considered "enabled" if the ability/order is marked as `bAIPlayerAutoAbility`.
*   **Replication:** `HumanPlayerAutoOrderStates` is replicated so clients know the toggle state for UI purposes. The actual decision to issue an auto-order is server-authoritative.

**Related Concepts/Classes:**

*   [`IRTSAutoOrderProvider`](#X.X.X-IRTSAutoOrderProvider): The interface components implement to tell `URTSAutoOrderComponent` which orders they can provide for auto-casting. `URTSAbilitySystemComponent` is a key implementer.
*   [`URTSOrderComponent`](#2.1.1-URTSOrderComponent): The component that actually executes the orders issued by `URTSAutoOrderComponent`.
*   [`URTSOrderHelper`](#X.X.X-URTSOrderHelper): Used extensively for checking order validity, finding targets, and getting order properties.
*   [`URTSGameplayAbility`](#X.X.X-URTSGameplayAbility): Abilities often define if they can be auto-cast via properties like `bHumanPlayerAutoAbility`, `bAIPlayerAutoAbility`, `bHumanPlayerAutoAutoAbilityInitialState`.
*   [`FRTSOrderTypeWithIndex`](#X.X.X-FRTSOrderTypeWithIndex): The struct used to identify an order class and its specific index (crucial for `URTSUseAbilityOrder`).

**3. Key Properties (Header File Analysis - `RTSAutoOrderComponent.h`)**

*   **Private Properties:**

    *   `TArray<FRTSOrderTypeWithIndex> Orders;`
        *   **Purpose:** Stores the list of all potential auto-orders (type and index) gathered from `IRTSAutoOrderProvider`s on the owning actor during `BeginPlay`. This is the master list the component iterates through during `CheckAutoOrders`.
        *   **Considerations for Modification:** This list is populated once at `BeginPlay`. If an actor gains or loses auto-order capabilities at runtime (e.g., an upgrade grants a new auto-cast ability), this component would need a mechanism to refresh this `Orders` list.

    *   `TArray<bool> HumanPlayerAutoOrders;`
        *   **Purpose:** A parallel array to `Orders`, indicating if the corresponding order at the same index is considered a toggleable auto-order for human players. Populated based on `URTSOrderHelper::IsHumanPlayerAutoOrder`.
        *   **Considerations for Modification:** Tied to the `Orders` list population.

    *   `TArray<bool> AIPlayerAutoOrders;`
        *   **Purpose:** A parallel array to `Orders`, indicating if the corresponding order should be automatically considered by AI players. Populated based on `URTSOrderHelper::IsAIPlayerAutoOrder`.
        *   **Considerations for Modification:** Tied to the `Orders` list population.

    *   `UPROPERTY(replicated)`
        `TArray<bool> HumanPlayerAutoOrderStates;`
        *   **Purpose:** A parallel array to `Orders`, storing the *current toggle state* (enabled/disabled) for each human player auto-order. This is what `SetHumanPlayerAutoOrderState` modifies.
        *   **Replication:** Replicated from server to clients. This allows UI on clients to accurately reflect which auto-casts are active for a selected unit owned by the local player.
        *   **Default Value:** Initialized in `BeginPlay` based on `URTSOrderHelper::GetHumanPlayerAutoOrderInitialState` for human-relevant orders.
        *   **Considerations for Modification:** Developers extending this might want different replication conditions or more complex state management if auto-order states are influenced by more than just player toggles (e.g., temporary buffs that enable/disable auto-casts).

    *   `bool bCheckAutoOrders;`
        *   **Purpose:** A flag to control whether `CheckAutoOrders()` should actually perform its logic. It's set based on whether the current primary order (from `URTSOrderComponent`) allows auto-orders (`URTSOrderHelper::AreAutoOrdersAllowedDuringOrder`) and if there are any auto-orders configured for the unit's current owner type (human/AI).
        *   **Considerations for Modification:** This acts as a global on/off switch for the component's activity based on the unit's primary task.

**4. Key Methods (Header & Source File Analysis - `RTSAutoOrderComponent.h` & `RTSAutoOrderComponent.cpp`)**

*   **Public Methods:**

    *   `void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;`
        *   **Internal Logic (`.cpp`):** `DOREPLIFETIME(URTSAutoOrderComponent, HumanPlayerAutoOrderStates);`
        *   **Purpose:** Standard UE method to define `HumanPlayerAutoOrderStates` for replication.

    *   `UFUNCTION(Category = RTS, BlueprintPure)`
        `bool IsHumanPlayerAutoOrder(const FRTSOrderTypeWithIndex& Order);`
        *   **Purpose:** Checks if the given `Order` (type and index) is configured as a human-player auto-order in its internal `HumanPlayerAutoOrders` list.
        *   **C++ Usage Example:**
            ```cpp
            // URTSAutoOrderComponent* AutoOrderComp = ...;
            // FRTSOrderTypeWithIndex SomeOrderToTest = ...;
            // if (AutoOrderComp->IsHumanPlayerAutoOrder(SomeOrderToTest)) { /* UI can show toggle */ }
            ```
        *   **Blueprint Usage Example:** (Node: Is Human Player Auto Order)
            ```
            [AutoOrderComponent Ref] --(Order: FRTSOrderTypeWithIndex)--> [IsHumanPlayerAutoOrder] ---> (Return Value: bool)
            ```

    *   `UFUNCTION(Category = RTS, BlueprintCallable)`
        `void SetHumanPlayerAutoOrderState(const FRTSOrderTypeWithIndex& Order, bool bEnable);`
        *   **Purpose:** Allows the player (or game logic) to enable or disable a specific human-player auto-order. This modifies the `HumanPlayerAutoOrderStates` array.
        *   **Parameters:**
            *   `Order`: The auto-order to modify.
            *   `bEnable`: The new state (true to enable, false to disable).
        *   **Internal Logic (`.cpp`):**
            1.  Iterates through its internal `Orders` list.
            2.  If a match for `Order` is found, updates the corresponding `HumanPlayerAutoOrderStates[i]` to `bEnable`.
            3.  If `bEnable` is true, it sets `bCheckAutoOrders = true` to ensure the component becomes active if it wasn't already (though other conditions from `OnOrderChanged` also apply).
        *   **C++ Usage Example:**
            ```cpp
            // Called typically from UI, RPC'd to server
            // URTSAutoOrderComponent* AutoOrderComp = ServerControlledActor->FindComponentByClass<URTSAutoOrderComponent>();
            // FRTSOrderTypeWithIndex AbilityOrderToToggle = ...;
            // if (AutoOrderComp) AutoOrderComp->SetHumanPlayerAutoOrderState(AbilityOrderToToggle, true);
            ```
        *   **Blueprint Usage Example:** (Node: Set Human Player Auto Order State)
            ```
            [AutoOrderComponent Ref] --Exec--> [SetHumanPlayerAutoOrderState] --Exec-->
                                        |                             ^
                                        +--(Order: FRTSOrderTypeWithIndex)
                                        |                             ^
                                        +--(bEnable: bool)------------+
            ```
        *   **Risks & Considerations:** This function should be called on the server to maintain authority over game state. The `HumanPlayerAutoOrderStates` array will then replicate to clients.

    *   `UFUNCTION(Category = RTS, BlueprintPure)`
        `bool GetHumanPlayerAutoOrderState(const FRTSOrderTypeWithIndex& Order);`
        *   **Purpose:** Retrieves the current enabled/disabled state of a specific human-player auto-order from `HumanPlayerAutoOrderStates`.
        *   **C++ Usage Example:**
            ```cpp
            // URTSAutoOrderComponent* AutoOrderComp = ...;
            // FRTSOrderTypeWithIndex SomeOrderToQuery = ...;
            // bool bIsEnabled = AutoOrderComp->GetHumanPlayerAutoOrderState(SomeOrderToQuery);
            // // UI can use bIsEnabled to show correct toggle state
            ```
        *   **Blueprint Usage Example:** (Node: Get Human Player Auto Order State)
            ```
            [AutoOrderComponent Ref] --(Order: FRTSOrderTypeWithIndex)--> [GetHumanPlayerAutoOrderState] ---> (Return Value: bool)
            ```

    *   `void CheckAutoOrders();`
        *   **Purpose:** This is the core logic loop for the component. It iterates through configured auto-orders and attempts to issue one if conditions are met.
        *   **Internal Logic (`.cpp`):**
            1.  If `!bCheckAutoOrders`, returns immediately.
            2.  Determines if the owner is AI-controlled (currently simplified to `bool bIsAIUnit = false;` in the provided snippet, but in a full game this would check the owner's controller type).
            3.  Iterates through the `Orders` list:
                *   Checks if the current order in the loop is active for the current player type (human and toggled on, or AI and configured for AI).
                *   If active, calls `IssueAutoOrder(Order)` for that specific `FRTSOrderTypeWithIndex`.
                *   If `IssueAutoOrder` returns `true` (meaning an order was successfully issued), the loop breaks (typically, only one auto-order is issued per check cycle).
        *   **C++ Usage Example:** This method is intended to be called periodically by an external system.
            ```cpp
            // In a manager class or GameMode tick (potentially bucketed for performance)
            // for (AActor* AutoOrderActor : AllActorsWithAutoOrderComponents)
            // {
            //     URTSAutoOrderComponent* Comp = AutoOrderActor->FindComponentByClass<URTSAutoOrderComponent>();
            //     if (Comp && AutoOrderActor->HasAuthority()) Comp->CheckAutoOrders();
            // }
            ```
        *   **Risks & Considerations:**
            *   **Frequency of Calls:** Calling `CheckAutoOrders` too frequently on many units can be performance-intensive due to target scanning. A "bucketed update" system (updating a subset of units each frame/tick) is highly recommended for games with many units. The commented-out `ARTSGameMode* GameMode = Cast<ARTSGameMode>(UGameplayStatics::GetGameMode(this)); if (IsValid(GameMode)) { GameMode->AddAutoOrderActor(Owner); }` hints at such a system.
            *   **Order of Evaluation:** The order of `FRTSOrderTypeWithIndex` entries in the `Orders` array determines priority if multiple auto-orders are valid simultaneously. The first one that successfully issues will be chosen.
        *   **Considerations for Modification:**
            *   The logic for `bIsAIUnit` would need to be correctly implemented.
            *   A priority system could be added if simple array order isn't sufficient for choosing between multiple valid auto-orders.

*   **Protected/Virtual Methods:**
    *   `virtual void BeginPlay() override;`
        *   **Internal Logic (`.cpp`):**
            1.  Gets the owning actor and its `URTSOrderComponent`. Returns if not found.
            2.  **Gathers Auto-Orders:** Iterates through components of the owner that implement `IRTSAutoOrderProvider` and calls `Execute_GetAutoOrders` to populate its internal `Orders` list. `URTSAbilitySystemComponent` is a key provider, typically returning `URTSUseAbilityOrder` entries for abilities marked as auto-cast.
            3.  Populates `HumanPlayerAutoOrders` based on `URTSOrderHelper::IsHumanPlayerAutoOrder`.
            4.  **Server-Side Initialization:**
                *   Initializes `HumanPlayerAutoOrderStates` based on `URTSOrderHelper::GetHumanPlayerAutoOrderInitialState`.
                *   Initializes `AIPlayerAutoOrders` based on `URTSOrderHelper::IsAIPlayerAutoOrder`.
                *   Sets `bHasAutoCastOrders` flag if any auto-orders are configured.
            5.  Subscribes `OnOrderChanged` to the main `URTSOrderComponent::OnOrderChanged` delegate to update `bCheckAutoOrders` when the primary order changes.
            6.  (Commented out) Subscribes `OnOwnerChanged` if an `URTSOwnerComponent` exists.
            7.  Initializes `bCheckAutoOrders` based on initial conditions.
            8.  (Commented out) Registers actor with a game mode system for potentially bucketed updates of `CheckAutoOrders`.
        *   **Guidance for Overriding:** Call `Super::BeginPlay()` first. Useful for custom logic to gather auto-orders from sources other than `IRTSAutoOrderProvider` or for different initialization of auto-order states.

*   **Private Methods (Conceptual Understanding for Modifiers):**

    *   `UFUNCTION() void OnOrderChanged(const FRTSOrderData& NewOrder);`
        *   **Purpose:** Callback for when the actor's main order (from `URTSOrderComponent`) changes.
        *   **Internal Logic (`.cpp`):** Updates `bCheckAutoOrders = URTSOrderHelper::AreAutoOrdersAllowedDuringOrder(NewOrder.OrderType);`. This ensures auto-orders are only attempted if the unit's current primary task allows for it (e.g., a "Move" order might allow auto-attacks, but a "Channeling Spell" order might not).

    *   `UFUNCTION() void OnOwnerChanged(APlayerState* PreviousOwner, APlayerState* NewOwner);`
        *   **Purpose:** (Currently commented out) Intended to re-evaluate `bCheckAutoOrders` if the unit's owner changes (e.g., from AI to human player if a unit is "charmed" or "converted").
        *   **Impact:** If implemented, this would make the component responsive to changes in player control type concerning which auto-orders are active.

    *   `bool IssueAutoOrder(const FRTSOrderTypeWithIndex& Order);`
        *   **Purpose:** Attempts to issue a single auto-order. This is called by `CheckAutoOrders`.
        *   **Internal Logic (`.cpp`):**
            1.  Gets an acquisition radius for the `Order` (via `GetAcquisitionRadius`).
            2.  Checks `URTSOrderHelper::CanObeyOrder`.
            3.  Determines the `ERTSTargetType` of the `Order`.
            4.  **Targeting Logic:**
                *   `NONE`: If an enemy is in acquisition radius (`URTSOrderHelper::IsEnemyInAcquisitionRadius`), issues the order with no specific target.
                *   `ACTOR`, `LOCATION`, `DIRECTION`: Calls `URTSOrderHelper::FindTargetForOrder` to find a suitable target actor. If found, issues the order targeting that actor and its location.
                *   `PASSIVE`: Does nothing.
            5.  If an order is successfully formulated and conditions met, it calls `OrderComponent->InsertOrderBeforeCurrentOrder(...)`.
            6.  Returns `true` if an order was issued, `false` otherwise.
        *   **Impact:** This is where the decision to fire a specific auto-order is made based on target availability and type.

    *   `float GetAcquisitionRadius(const FRTSOrderTypeWithIndex& Order);`
        *   **Purpose:** Determines the acquisition radius for a given auto-order.
        *   **Internal Logic (`.cpp`):**
            1.  First, checks if the `Order` itself provides an override radius via `URTSOrderHelper::GetAcquisitionRadiusOverride`.
            2.  If not, it falls back to a default acquisition radius (commented-out code suggests this would come from an `URTSAttackComponent`'s `GetAcquisitionRadius()`, which is a common RTS pattern for default engagement range). Currently, it returns `0.0f` if no order override.
        *   **Impact:** The acquisition radius directly affects how far a unit will "see" or "sense" targets for its auto-orders. Incorrect or zero values here (if no override and no fallback component) would prevent auto-orders from finding targets.

**5. Integration & Usage Scenarios**

*   **Typical Setup:**
    1.  Add `URTSAutoOrderComponent` to an actor Blueprint or C++ class that also has a `URTSOrderComponent` and an `URTSAbilitySystemComponent`.
    2.  Ensure the `URTSAbilitySystemComponent` implements `IRTSAutoOrderProvider` (it does by default) and has abilities configured with appropriate `bHumanPlayerAutoAbility`/`bAIPlayerAutoAbility` flags.
    3.  (Crucial for `CheckAutoOrders` to run) Ensure an external system calls `CheckAutoOrders()` periodically for actors with this component. This is often a manager class in the GameMode or GameState that iterates over registered actors in "buckets" to distribute the load.
*   **Example Use Cases:**
    *   **Auto-Attack:** A unit's basic attack ability is marked as an AI and/or Human auto-order. When an enemy enters its acquisition radius and the unit is idle (or its current order allows auto-orders), `URTSAutoOrderComponent` issues an `URTSAttackOrder` (or a `URTSUseAbilityOrder` for the attack ability).
    *   **Auto-Heal (Self or Ally):** A Medic unit has a "Heal" ability marked as auto-cast. If it or a nearby friendly unit is injured (checked by `IsValidTarget` and potentially `GetTargetScore` of the heal ability/order), it automatically issues a `URTSUseAbilityOrder` to heal.
    *   **Automatic Buffs:** A Paladin unit has an aura buff ability that it auto-casts if enemies are nearby or if allies need the buff.
*   **Developer Workflow:**
    *   Implement `IRTSAutoOrderProvider` on new components if they need to expose custom auto-order types or logic.
    *   Design abilities (`URTSGameplayAbility`) with auto-cast properties.
    *   Implement the system that periodically calls `CheckAutoOrders()` (e.g., bucketed update manager).
*   **Designer Workflow:**
    *   Add `URTSAutoOrderComponent` to unit Blueprints.
    *   Configure abilities in `URTSAbilitySystemComponent` to be auto-castable (set `bHumanPlayerAutoAbility`, `bAIPlayerAutoAbility`, `bHumanPlayerAutoAutoAbilityInitialState` on the `URTSGameplayAbility` assets).
    *   Tune acquisition radii (either on the ability/order via override, or on a component like `URTSAttackComponent` for fallback).
    *   Observe and test unit autonomous behaviors. For human players, provide UI to toggle auto-cast states for abilities that support it.

**6. What the User Needs to Implement/Provide**

*   **`IRTSAutoOrderProvider` Implementations:** While `URTSAbilitySystemComponent` is a primary provider, custom components might also provide orders.
*   **Configuration of `URTSGameplayAbility`:** Abilities intended for auto-use must have their auto-cast flags (`bHumanPlayerAutoAbility`, etc.) set correctly.
*   **Acquisition Radii:** Units need defined acquisition radii, either through order overrides (via `GetAcquisitionRadiusOverride` on the `URTSOrder` or `URTSGameplayAbility`) or a fallback mechanism (like an `URTSAttackComponent`).
*   **Periodic Calling of `CheckAutoOrders()`:** A system to invoke `CheckAutoOrders()` on relevant actors. **Without this, the component will do nothing beyond initialization.**
*   **(Optional) `URTSOwnerComponent`:** For the `OnOwnerChanged` logic to function if units can change player control.
*   **(Optional) `URTSAttackComponent` or similar:** For providing a default acquisition radius if not overridden by the order/ability.

**7. Advanced Topics & Considerations**

*   **Performance of `CheckAutoOrders`:** This is the most critical aspect. Target scanning (`FindTargetForOrder`) can be expensive if done for many units every frame.
    *   **Bucketed Updates:** Group units and update a fraction of them each tick.
    *   **Spatial Partitioning:** Use Octrees or similar to narrow down potential targets before detailed checks.
    *   **Caching:** Cache results of `CanObeyOrder` or target scans if conditions haven't changed significantly.
*   **Priority of Auto-Orders:** The current implementation iterates through the `Orders` list and issues the *first* valid one. More complex prioritization might be needed (e.g., a life-saving heal should take precedence over an auto-attack). This could be achieved by:
    *   Sorting the `Orders` list by a priority value during `BeginPlay`.
    *   Modifying `CheckAutoOrders` to find *all* valid auto-orders and then pick the highest priority one.
*   **Combining with Behavior Trees:** Auto-orders often *interrupt* the main Behavior Tree via `InsertOrderBeforeCurrentOrder`. The interrupted BT task is then resumed. Ensure your main Behavior Trees are robust to such interruptions and resumptions.
*   **"Smart" Auto-Casting Conditions:** The current `IssueAutoOrder` relies on `URTSOrderHelper::FindTargetForOrder` which uses `URTSOrder::GetTargetScore` and `IsValidTarget`. To make auto-casting smarter (e.g., "only auto-cast heal if target is below 50% health"), this logic needs to be in the `IsValidTarget` or `GetTargetScore` implementations of the `URTSUseAbilityOrder` (which delegates to the ability) or the `URTSGameplayAbility` itself.
*   **Debugging:** Visualizing acquisition radii and the targets considered by `FindTargetForOrder` can be very helpful for debugging why an auto-order is (or isn't) firing.

**Example Extension: Prioritized Auto-Orders**

1.  **Add Priority to `FRTSOrderTypeWithIndex` or a parallel array:**
    ```cpp
    // Potentially extend FRTSOrderTypeWithIndex or have a separate struct
    // struct FAutoOrderEntry { FRTSOrderTypeWithIndex Order; float Priority; };
    // TArray<FAutoOrderEntry> PrioritizedOrders; 
    ```
2.  **Populate priorities in `BeginPlay`:** When gathering orders from providers, also get a priority for each.
3.  **Modify `CheckAutoOrders`:**
    ```cpp
    // Conceptual change in CheckAutoOrders
    // ...
    // TArray<FRTSOrderTypeWithIndex> ValidCandidates;
    // TArray<float> CandidateScores; // Or use target score from FindTargetForOrder
    // for (/* each configured and active auto-order */)
    // {
    //    if (/* CanObeyOrder and (is no-target or FindTargetForOrder succeeds) */)
    //    {
    //        ValidCandidates.Add(Order);
    //        // CandidateScores.Add(GetPriorityFor(Order) + TargetScoreIfApplicable);
    //    }
    // }
    // if (!ValidCandidates.IsEmpty())
    // {
    //    // Sort ValidCandidates by CandidateScores (or their inherent priority)
    //    // IssueAutoOrder(HighestPriorityValidCandidate);
    // }
    ```

This component is powerful for creating dynamic and responsive units, but careful attention to performance and clear AI/ability design is essential.







**2.1.5.2 `IRTSAutoOrderProvider` Interface**

**1. Overview & Purpose**

`IRTSAutoOrderProvider` is a C++ interface (`UInterface`) that defines a contract for actor components (or actors themselves) to supply a list of orders that can be considered for automatic execution by the `URTSAutoOrderComponent`. It allows different systems on an actor to declare their "auto-castable" actions in a decoupled way.

*   **Primary Audience:**
    *   **Developers:** Will implement this interface on `UActorComponent` subclasses (or `AActor` subclasses) that manage functionalities which should have an auto-use behavior. For example, the `URTSAbilitySystemComponent` implements this to provide abilities marked as auto-cast. A custom "TurretAIComponent" might implement it to provide an "AutoAttack" order.
    *   **Designers:** Will not interact with this interface directly. They interact with components that *implement* this interface (like `URTSAbilitySystemComponent` by configuring which abilities are auto-castable).

**2. Core Functionality & Features**

*   **Single Function Contract:** Defines one primary function: `GetAutoOrders`.
*   **Decoupled Order Sourcing:** Allows `URTSAutoOrderComponent` to discover potential auto-orders without needing to know the concrete types of all components that might provide them. It simply queries for this interface.

**Related Concepts/Classes:**

*   [`URTSAutoOrderComponent`](#2.1.5.1-URTSAutoOrderComponent): The primary consumer of this interface. It calls `GetAutoOrders` on components that implement it.
*   [`URTSAbilitySystemComponent`](#X.X.X-URTSAbilitySystemComponent): A key implementer of this interface, providing `URTSUseAbilityOrder` entries for abilities.
*   [`FRTSOrderTypeWithIndex`](#X.X.X-FRTSOrderTypeWithIndex): The data structure returned by `GetAutoOrders`, specifying the order class and its relevant index.

**3. Key Properties (Header File Analysis - `RTSAutoOrderProvider.h`)**

Interfaces in Unreal Engine do not have `UPROPERTY` members in the same way UObjects do. They define function signatures.

**4. Key Methods (Header File Analysis - `RTSAutoOrderProvider.h`)**

*   **Public Method (to be implemented by concrete classes):**

    *   `UFUNCTION(Category = RTS, BlueprintNativeEvent, BlueprintCallable)`
        `void GetAutoOrders(TArray<FRTSOrderTypeWithIndex>& OutAutoOrders);`
        *   **Purpose:** This function is called by `URTSAutoOrderComponent` (during its `BeginPlay`) on any component (or actor) that implements this interface. The implementer is responsible for populating the `OutAutoOrders` array with all `FRTSOrderTypeWithIndex` entries that it wants to make available for automatic ordering.
        *   **Parameters:**
            *   `TArray<FRTSOrderTypeWithIndex>& OutAutoOrders`: An output array that the implementing function should fill. Each entry represents a potential auto-order.
        *   **`BlueprintNativeEvent`:** This means the interface function can have a C++ base implementation (e.g., `FunctionName_Implementation`) and can also be overridden in Blueprints. If a Blueprint implements the interface and overrides this event, the Blueprint version is called. If not, and a C++ `_Implementation` exists, that is called.
        *   **`BlueprintCallable`:** Allows this function to be called from Blueprints (though its primary consumer, `URTSAutoOrderComponent`, calls it from C++).
        *   **C++ Implementation Example (`URTSAbilitySystemComponent::GetAutoOrders_Implementation`):**
            ```cpp
            // In RTSAbilitySystemComponent.cpp
            void URTSAbilitySystemComponent::GetAutoOrders_Implementation(TArray<FRTSOrderTypeWithIndex>& OutAutoOrders)
            {
                // Gets basic attack abilities (marked with Event_Attack tag)
                TArray<TSubclassOf<UGameplayAbility>> BasicAttackAbilities = URTSAbilitySystemHelper::GetBasicAttackAbilities(this);
                // Gets all initial and unlockable abilities
                TArray<TSubclassOf<UGameplayAbility>> InitialAndUnlockableAbilities = GetInitialAndUnlockableAbilities();

                for (int32 Index = 0; Index < InitialAndUnlockableAbilities.Num(); ++Index)
                {
                    TSubclassOf<UGameplayAbility> AbilityType = InitialAndUnlockableAbilities[Index];

                    if (AbilityType == nullptr)
                    {
                        continue;
                    }

                    URTSGameplayAbility* Ability = AbilityType->GetDefaultObject<URTSGameplayAbility>();
                    if (Ability == nullptr)
                    {
                        continue;
                    }

                    // Only add abilities that are not passive and are not basic attacks 
                    // (basic attacks might be handled by a dedicated AttackOrder or a different auto-order provider)
                    if (Ability->GetTargetType() != ERTSTargetType::PASSIVE && !BasicAttackAbilities.Contains(AbilityType))
                    {
                        // It adds an FRTSOrderTypeWithIndex, using the 'UseAbilityOrder' class 
                        // (a TSoftClassPtr<URTSUseAbilityOrder> configured on URTSAbilitySystemComponent)
                        // and the current 'Index' of the ability in the list.
                        OutAutoOrders.Add(FRTSOrderTypeWithIndex(UseAbilityOrder, Index));
                    }
                }
            }
            ```
            *   **Explanation of `URTSAbilitySystemComponent`'s implementation:**
                *   It iterates through all of its `InitialAndUnlockableAbilities`.
                *   For each ability, it checks if it's not `PASSIVE` and not a "basic attack" ability (as basic attacks are often handled by a separate auto-attack logic, e.g., an `URTSAttackOrder` provided by an attack component, or handled by the `URTSAutoOrderComponent`'s target finding for a default attack).
                *   If these conditions are met, it adds an `FRTSOrderTypeWithIndex` to `OutAutoOrders`. The `OrderType` is set to `this->UseAbilityOrder` (which is a `TSoftClassPtr<URTSUseAbilityOrder>` property on `URTSAbilitySystemComponent`, usually pointing to a Blueprint subclass of `URTSUseAbilityOrder` that has a generic "use ability" Behavior Tree). The `Index` is the current ability's index in the `InitialAndUnlockableAbilities` array. This `Index` is crucial for `URTSUseAbilityOrder` to know *which* ability to actually try and use.

        *   **Blueprint Override Example (Conceptual - if an Actor Blueprint implemented the interface):**
            *   In your Actor Blueprint, go to Class Settings -> Interfaces. Add `RTSAutoOrderProvider`.
            *   In the "My Blueprint" panel, under "Interfaces", you'll see `GetAutoOrders`. Right-click and implement it.
            *   (ASCII Art for BP Node)
                ```
                Event GetAutoOrders --Exec--> [Logic to create FRTSOrderTypeWithIndex structs] --+
                                       ^                                                         |
                                       +-- (OutAutoOrders: TArray<FRTSOrderTypeWithIndex>) <-----+-- [Add To Array]
                ```
            *   In the Blueprint, you would construct `FRTSOrderTypeWithIndex` structs (e.g., using `Make RTSOrderTypeWithIndex`) and add them to the `OutAutoOrders` array. You'd specify the `URTSOrder` class (e.g., a specific `URTSUseAbilityOrder` subclass, or a custom order) and any relevant `Index`.

        *   **Risks & Considerations:**
            *   The `Index` provided in `FRTSOrderTypeWithIndex` must be meaningful to the `OrderType` specified. For `URTSUseAbilityOrder`, it's an index into the ability list. For other custom orders, it might mean something else or be unused (`-1`).
            *   The `OrderType` itself must be a valid `URTSOrder` subclass that `URTSAutoOrderComponent` can process (i.e., it usually expects something derived from `URTSCharacterAIOrder` if it's to be executed by the standard AI).
        *   **Guidance for Overriding/Implementing:**
            *   Clearly define which actions your component/actor should offer for auto-use.
            *   For each, determine the correct `URTSOrder` subclass (often `URTSUseAbilityOrder` if it's an ability) and the `Index` if applicable.
            *   Ensure that the abilities or orders you are providing also have their `IsHumanPlayerAutoOrder` / `IsAIPlayerAutoOrder` flags set correctly (on the `URTSGameplayAbility` or `URTSOrder` CDO) so `URTSAutoOrderComponent` knows if they are relevant for the current owner type.

**5. Integration & Usage Scenarios**

*   **Typical Setup:**
    1.  A developer creates a new `UActorComponent` (e.g., `UMySpecialEquipmentComponent`) that manages a unique set of actions.
    2.  This component implements `IRTSAutoOrderProvider`.
    3.  In its `GetAutoOrders_Implementation` method, it adds `FRTSOrderTypeWithIndex` entries for actions it manages that should be auto-usable. These might be custom `URTSOrder` subclasses specific to this component's functionality.
        ```cpp
        // In MySpecialEquipmentComponent.h
        #include "Orders/RTSAutoOrderProvider.h"
        #include "MySpecialEquipmentComponent.generated.h"
        
        UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
        class UMySpecialEquipmentComponent : public UActorComponent, public IRTSAutoOrderProvider
        {
            GENERATED_BODY()
        public:
            // ... other component logic ...

            // IRTSAutoOrderProvider interface
            virtual void GetAutoOrders_Implementation(TArray<FRTSOrderTypeWithIndex>& OutAutoOrders) override;

            UPROPERTY(EditDefaultsOnly, Category="RTS|AutoOrder")
            TSoftClassPtr<URTSOrder> DeployShieldOrderClass; // Custom order for deploying a shield

            UPROPERTY(EditDefaultsOnly, Category="RTS|AutoOrder")
            TSoftClassPtr<URTSOrder> OverchargeWeaponOrderClass; // Custom order
        };

        // In MySpecialEquipmentComponent.cpp
        #include "Orders/RTSOrderTypeWithIndex.h" // For FRTSOrderTypeWithIndex

        void UMySpecialEquipmentComponent::GetAutoOrders_Implementation(TArray<FRTSOrderTypeWithIndex>& OutAutoOrders)
        {
            // Example: This component provides two specific auto-orders.
            // These orders might not use an 'Index' if they are unique.
            if (DeployShieldOrderClass.IsValid())
            {
                OutAutoOrders.Add(FRTSOrderTypeWithIndex(DeployShieldOrderClass, -1));
            }
            if (OverchargeWeaponOrderClass.IsValid())
            {
                OutAutoOrders.Add(FRTSOrderTypeWithIndex(OverchargeWeaponOrderClass, -1));
            }
        }
        ```
    4.  When an actor with both `UMySpecialEquipmentComponent` and `URTSAutoOrderComponent` spawns, the `URTSAutoOrderComponent` will query `UMySpecialEquipmentComponent` and add these custom orders to its list of potential auto-orders.
*   **Interaction with `URTSAutoOrderComponent`:** This interface is the sole method for `URTSAutoOrderComponent` to discover auto-order candidates beyond what it might be hardcoded to check for (which it isn't; it relies entirely on providers).
*   **Developer Workflow:**
    *   Identify systems/components that should provide auto-orders.
    *   Implement `IRTSAutoOrderProvider` on them.
    *   Correctly populate `OutAutoOrders` in `GetAutoOrders_Implementation`.
*   **Designer Workflow:**
    *   Primarily involves configuring the components that *implement* this interface. For example, for `URTSAbilitySystemComponent`, designers mark abilities as auto-castable. If a custom component like `UMySpecialEquipmentComponent` above exposed its `DeployShieldOrderClass` as `EditDefaultsOnly`, designers could assign the specific `URTSOrder` Blueprint to it.

**6. What the User Needs to Implement/Provide**

*   **Implementations of the Interface:** For any component or actor that wishes to provide actions to the `URTSAutoOrderComponent`, it must implement `IRTSAutoOrderProvider` and the `GetAutoOrders` function.
*   **`URTSOrder` Subclasses:** The `FRTSOrderTypeWithIndex` entries provided must point to valid `URTSOrder` subclasses that the system can execute.
*   **Configuration of Provider Components:** The components implementing the interface (like `URTSAbilitySystemComponent`) need to be configured correctly (e.g., abilities marked as auto-cast).

**7. Advanced Topics & Considerations**

*   **Dynamic Auto-Orders:** The current `URTSAutoOrderComponent` populates its list of auto-orders once at `BeginPlay`. If an actor gains or loses components that provide auto-orders, or if a component's available auto-orders change at runtime (e.g., due to an upgrade), the `URTSAutoOrderComponent` would need a mechanism to refresh its list. This could be an explicit "RefreshAutoOrders" function called when such changes occur.
*   **Filtering/Prioritization at Source:** The `GetAutoOrders` implementation can itself contain logic to only provide certain orders based on the actor's current state or upgrades, effectively pre-filtering what `URTSAutoOrderComponent` even considers.
*   **Multiple Providers on One Actor:** An actor can have multiple components that implement `IRTSAutoOrderProvider`. `URTSAutoOrderComponent` will query all of them and aggregate the results. The order in which components are iterated might affect the final order in `URTSAutoOrderComponent::Orders` list, which could impact implicit priority if multiple auto-orders become valid simultaneously.

This interface is simple but powerful, enabling a modular approach to defining the sources of automatic behaviors for units.



### 2.1.6. Order Data Structures

The Order System relies on several key USTRUCTs to define and manage order information. These structures are passed between components, used in replication, and form the data payload for order execution.

---

**2.1.6.1 `FRTSOrderData`**

**1. Overview & Purpose**

`FRTSOrderData` is the primary structure used to represent an instance of an order that can be issued to an actor. It encapsulates all necessary information for an `URTSOrderComponent` to understand and process a command, including the type of order, its target (if any), and an optional index for variants.

*   **File:** `RTSOrderData.h`
*   **Primary Audience:** Developers and Designers (indirectly via Blueprint nodes that might expose or require this struct).

**2. Core Functionality & Features**

*   **Identifies Order Type:** Specifies which `URTSOrder` class defines the behavior of this order instance.
*   **Targeting Information:** Can store a target actor and/or a target location.
*   **Optional Index:** Allows for differentiation if an order type has multiple sub-actions or targets (e.g., an ability at a specific slot).
*   **Replication:** Instances of this struct are replicated as part of `URTSOrderComponent`'s `CurrentOrder` and `OrderQueue`.

**3. Member Variables (from `RTSOrderData.h`)**

*   `UPROPERTY(Category = RTS, EditAnywhere, BlueprintReadWrite)`
    `TSoftClassPtr<URTSOrder> OrderType;`
    *   **Purpose:** A soft class pointer to the specific `URTSOrder` subclass that defines this order's logic (e.g., `URTSMoveOrder`, `URTSAttackOrder`, a Blueprint child of these).
    *   **`EditAnywhere` / `BlueprintReadWrite`:** While instances of `FRTSOrderData` can be created and modified in Blueprints (e.g., using a "Make FRTSOrderData" node), this property is typically set programmatically when an order is being constructed based on player input or AI decision.
    *   **Usage:** This is the most critical field, telling the system what kind of order this is. It must point to a valid, loadable `URTSOrder` class.

*   `UPROPERTY(Category = RTS, EditAnywhere, BlueprintReadWrite, meta = (InlineEditConditionToggle = true))`
    `uint8 bUseLocation : 1;`
    *   **Purpose:** A boolean flag (packed as a bitfield) indicating whether the `Location` member of this struct is valid and should be used by the order.
    *   **`InlineEditConditionToggle`:** In the Details panel (if this struct were directly editable on an actor, which it usually isn't as a standalone property), this would control the editability of the `Location` field.
    *   **Usage:** Must be set to `true` if the order targets a specific point on the map. Orders like "Move" or location-targeted abilities will require this.

*   `UPROPERTY(Category = RTS, EditAnywhere, BlueprintReadWrite, meta = (EditCondition = bUseLocation))`
    `FVector2D Location;`
    *   **Purpose:** The 2D target location for the order (X, Y).
    *   **`EditCondition = bUseLocation`:** This field is typically only relevant and editable/visible in UI if `bUseLocation` is true.
    *   **Usage:** Used by orders whose `TargetType` is `LOCATION` or `DIRECTION`. The Z component is usually determined later, either by ground snapping or based on the actor's current Z.

*   `UPROPERTY(Category = RTS, EditAnywhere, BlueprintReadWrite)`
    `AActor* Target;`
    *   **Purpose:** A direct pointer to an `AActor` that is the target of this order.
    *   **Usage:** Used by orders whose `TargetType` is `ACTOR` (e.g., attacking a specific unit, healing a specific unit). Can be `nullptr` if the order doesn't target an actor.

*   `UPROPERTY(Category = RTS, EditAnywhere, BlueprintReadWrite)`
    `int32 Index;`
    *   **Purpose:** An additional integer index. Its meaning is context-dependent based on the `OrderType`.
    *   **Default Value:** `-1` (often indicating "no specific index" or "default variant").
    *   **Usage:**
        *   For `URTSUseAbilityOrder`: This `Index` specifies which ability in the actor's `URTSAbilitySystemComponent`'s list to activate.
        *   For construction orders: Might indicate which building type in a list to construct.
        *   For production orders: Might indicate which unit type in a queue to produce or which slot to produce it from.

**4. Key Methods (from `RTSOrderData.cpp`)**

*   **Constructors:**
    *   `FRTSOrderData();` (Default constructor: null `OrderType`, `bUseLocation=false`, null `Target`, `Index=-1`)
    *   `FRTSOrderData(TSoftClassPtr<URTSOrder> InOrderType);`
    *   `FRTSOrderData(TSoftClassPtr<URTSOrder> InOrderType, AActor* InTarget);`
    *   `FRTSOrderData(TSoftClassPtr<URTSOrder> InOrderType, FVector2D InLocation);`
    *   `FRTSOrderData(TSoftClassPtr<URTSOrder> InOrderType, AActor* InTarget, FVector2D InLocation);`
    *   `FRTSOrderData(TSoftClassPtr<URTSOrder> InOrderType, int32 InIndex);`
    *   `FRTSOrderData(TSoftClassPtr<URTSOrder> InOrderType, int32 InIndex, AActor* InTarget);`
    *   `FRTSOrderData(TSoftClassPtr<URTSOrder> InOrderType, int32 InIndex, FVector2D InLocation);`
    *   `FRTSOrderData(TSoftClassPtr<URTSOrder> InOrderType, int32 InIndex, AActor* InTarget, FVector2D InLocation);`
        *   **Purpose:** Provide convenient ways to initialize an `FRTSOrderData` struct with common combinations of parameters.
        *   **C++ Usage Example:**
            ```cpp
            // TSoftClassPtr<URTSOrder> MoveOrderClass = LoadMoveOrderClass(); // Assume this gets UMyMoveOrder::StaticClass()
            // AActor* TargetUnit = GetSomeEnemyUnit();
            // FVector2D Destination = FVector2D(1000.f, 500.f);
            // int32 AbilitySlotIndex = 0;

            // FRTSOrderData Order1(MoveOrderClass, Destination); // Move order
            // Order1.bUseLocation = true; // Important for location-based orders if not set by constructor

            // FRTSOrderData Order2(AttackOrderClass, TargetUnit);       // Attack order
            // FRTSOrderData Order3(UseAbilityOrderClass, AbilitySlotIndex, TargetUnit); // Ability on target
            ```

*   `FString ToString() const;`
    *   **Purpose:** Returns a human-readable string representation of the order data, useful for logging and debugging.
    *   **Output Example:** `"MyMoveOrderClassName (Location: X=100.0 Y=200.0)"` or `"MyAttackOrderClassName (Target: EnemyUnit_0)"`
    *   **C++ Usage Example:** `UE_LOG(LogRTS, Log, TEXT("Issuing order: %s"), *MyOrderData.ToString());`

*   `bool operator==(const FRTSOrderData& Other) const;`
*   `bool operator!=(const FRTSOrderData& Other) const;`
    *   **Purpose:** Equality and inequality operators. Used by `URTSOrderComponent` to check if a newly issued order is identical to the current one (to prevent redundant processing) or if the last enqueued order is a duplicate.
    *   **Logic:** Compares `OrderType`, `bUseLocation`, `Target`, `Index`, and `Location` (if `bUseLocation` is true).

**5. Integration & Usage Scenarios**

*   **Order Creation:** Instances of `FRTSOrderData` are created by player input handling systems (e.g., in `APlayerController` after a mouse click) or by AI decision-making systems.
*   **Passing to `URTSOrderComponent`:** This struct is the primary argument to `URTSOrderComponent::IssueOrder`, `EnqueueOrder`, etc.
*   **Storage:** `URTSOrderComponent` stores `FRTSOrderData` in its `CurrentOrder` and `OrderQueue` properties.
*   **Replication:** Replicated as part of `URTSOrderComponent` to keep clients informed.
*   **Blueprint Interaction:**
    *   Blueprints can create `FRTSOrderData` using "Make FRTSOrderData" nodes.
    *   Blueprints can break an `FRTSOrderData` struct to get its members.
    *   Custom Blueprint events or functions might take `FRTSOrderData` as a parameter.
    *   (ASCII Art for BP Make/Break Nodes)
        ```
        (Make FRTSOrderData) --> [OrderData Output]
         ^  ^  ^  ^  ^
         |  |  |  |  +-- OrderType
         |  |  |  +-- bUseLocation
         |  |  +-- Location
         |  +-- Target
         +-- Index

        [OrderData Input] --> (Break FRTSOrderData) --> OrderType
                                                | --> bUseLocation
                                                | --> Location
                                                | --> Target
                                                | --> Index
        ```

**6. What the User Needs to Implement/Provide**

*   **Logic to Populate:** Users need to write the game-specific code (C++ or Blueprint) that determines the correct `OrderType`, `Target`, `Location`, and `Index` based on player actions or AI logic and then construct `FRTSOrderData` instances.
*   **`URTSOrder` Subclasses:** The `OrderType` member must point to valid `URTSOrder` subclasses that define the actual order behaviors.

**7. Advanced Topics & Considerations**

*   **Soft Class Pointer (`TSoftClassPtr`):** Using `TSoftClassPtr<URTSOrder>` for `OrderType` means the actual `URTSOrder` class asset doesn't need to be loaded into memory until the `FRTSOrderData` is actually processed or its `OrderType` is explicitly accessed (e.g., by calling `.LoadSynchronous()` or when the system tries to get its CDO). This can be good for memory management if you have many order types.
*   **2D Location:** The `Location` is `FVector2D`. For 3D worlds, the Z component is typically determined at the point of use (e.g., by the `ARTSCharacterAIController` raycasting to the ground, or by the unit using its current Z). See the previous discussion on `URTSMoveOrder` for 3D considerations.
*   **Target Actor Lifetime:** The `Target` is an `AActor*`. If the target actor is destroyed while an order referencing it is in the queue or active, systems handling the order need to be robust to a null or pending-kill target. `URTSOrderComponent`'s tag listening mechanism helps with this for active orders.
*   **Extensibility:** If more complex or varied data is needed for certain orders, one might consider:
    *   Adding more optional fields to `FRTSOrderData` (can make the struct large).
    *   Having `URTSOrder` subclasses define their own specific data structs, and then `FRTSOrderData` might include a generic payload property (e.g., `UObject* OptionalOrderPayload`) that specific orders can cast and use. This is more complex to manage. For most RTS scenarios, the existing fields are quite comprehensive.





**2.1.6.2 `FRTSOrderTargetData`**

**1. Overview & Purpose**

`FRTSOrderTargetData` is a USTRUCT designed to encapsulate all relevant information about the target of an order *at the moment the order is being considered or executed*. It includes not only the target actor and/or location (similar to `FRTSOrderData`) but also a pre-calculated set of `FGameplayTagContainer` representing the target's current state and relationship to the ordering actor. This pre-calculation is a key optimization and convenience.

*   **File:** `RTSOrderTargetData.h`
*   **Primary Audience:** Developers. This struct is primarily created and consumed internally by the order system, particularly by `URTSOrderComponent` and `URTSOrderHelper` when validating or issuing orders.

**2. Core Functionality & Features**

*   **Comprehensive Target Snapshot:** Holds the target actor pointer, target location, and a container of relevant Gameplay Tags for the target.
*   **Pre-Calculated Tags:** The `TargetTags` member is populated by `URTSOrderHelper::CreateOrderTargetData` which calls `URTSAbilitySystemHelper::GetSourceAndTargetTags`. This means that when an `URTSOrder`'s `IsValidTarget` or `GetTargetScore` method is called, it already has the necessary tags without needing to query the `UAbilitySystemComponent` of the target repeatedly.
*   **Facilitates Validation and Scoring:** Makes it easier and more efficient for `URTSOrder` subclasses to perform complex validation and scoring based on the target's state.

**3. Member Variables (from `RTSOrderTargetData.h`)**

*   `UPROPERTY(Category = RTS, EditDefaultsOnly, BlueprintReadWrite)`
    `AActor* Actor;`
    *   **Purpose:** A direct pointer to the `AActor` that is the target. Can be `nullptr` if the order targets a location or has no specific target.
    *   **Usage:** Accessed by `URTSOrder` methods to interact with or query the target actor.

*   `UPROPERTY(Category = RTS, EditDefaultsOnly, BlueprintReadWrite)`
    `FVector2D Location;`
    *   **Purpose:** The 2D target location. If `Actor` is not null, this `Location` is typically set to `FVector2D(Actor->GetActorLocation())` by `URTSOrderHelper::CreateOrderTargetData`. If `Actor` is null, this is the primary location target.
    *   **Usage:** Used for distance calculations, positioning, or as the direct target for location-based orders.

*   `UPROPERTY(Category = RTS, EditDefaultsOnly, BlueprintReadWrite)`
    `FGameplayTagContainer TargetTags;`
    *   **Purpose:** A container of `FGameplayTag`s relevant to the `Actor` target. This includes the target's own intrinsic tags (from its `UAbilitySystemComponent`) as well as relationship tags (e.g., `Relationship.Hostile`, `Relationship.Friendly`, `Relationship.Visible`) relative to the actor *issuing* the order.
    *   **Population:** Filled by `URTSOrderHelper::CreateOrderTargetData` which uses `URTSAbilitySystemHelper::GetSourceAndTargetTags`.
    *   **Usage:** This is heavily used in `URTSOrder::IsValidTarget`, `URTSOrder::GetTargetScore`, and by `URTSOrderHelper` for checking an order's `TargetRequiredTags` and `TargetBlockedTags`.

**4. Key Methods (from `RTSOrderTargetData.cpp`)**

*   **Constructors:**
    *   `FRTSOrderTargetData();`
        *   **Default Behavior:** Initializes `Actor` to `nullptr`, `Location` to `FVector2D::ZeroVector`, and `TargetTags` to an empty container.
    *   `FRTSOrderTargetData(AActor* InActor, const FVector2D InLocation, const FGameplayTagContainer& InTargetTags);`
        *   **Purpose:** Allows direct construction with all members specified.
        *   **Usage:** Primarily used internally or in tests. Game code typically uses `URTSOrderHelper::CreateOrderTargetData` to ensure `TargetTags` are correctly populated.

*   `FString ToString() const;`
    *   **Purpose:** Returns a human-readable string representation of the target data, useful for logging and debugging.
    *   **Output Example:** `"(Actor: EnemyUnit_1, Location: X=120.5 Y=300.0, Tags:(Relationship.Hostile, Status.Changing.IsAlive, ...))"`
    *   **C++ Usage Example:** `UE_LOG(LogRTS, Log, TEXT("Targeting: %s"), *MyTargetData.ToString());`

**5. Integration & Usage Scenarios**

*   **Creation by `URTSOrderHelper`:** The most common way `FRTSOrderTargetData` is created is via `URTSOrderHelper::CreateOrderTargetData(const AActor* OrderedActor, AActor* TargetActor, const FVector2D& TargetLocation)`. This helper function ensures that `TargetTags` are correctly populated with both the target's own tags and its relationship tags relative to the `OrderedActor`.
    ```cpp
    // Inside URTSOrderComponent::ObeyOrder or URTSOrderHelper::CheckOrder
    // FRTSOrderData CurrentOrder = ...;
    // AActor* Owner = GetOwner();
    // FRTSOrderTargetData TargetDataForOrder = URTSOrderHelper::CreateOrderTargetData(
    //     Owner, 
    //     CurrentOrder.Target, 
    //     CurrentOrder.Location
    // );
    ```
*   **Consumption by `URTSOrder`:** Instances of `FRTSOrderTargetData` are passed to various methods of `URTSOrder` CDOs:
    *   `URTSOrder::IsValidTarget(..., const FRTSOrderTargetData& TargetData, ...)`
    *   `URTSOrder::CreateIndividualTargetLocations(..., const FRTSOrderTargetData& TargetData, ...)`
    *   `URTSOrder::IssueOrder(..., const FRTSOrderTargetData& TargetData, ...)`
    *   `URTSOrder::GetTargetScore(..., const FRTSOrderTargetData& TargetData, ...)`
    The `URTSOrder` methods then use the `Actor`, `Location`, and especially the `TargetTags` from this struct to perform their logic.
*   **Blueprint Interaction:**
    *   While `FRTSOrderData` is often made and broken in Blueprints, `FRTSOrderTargetData` is less commonly directly manipulated by designers. It's more of an internal data carrier for the C++ order system.
    *   If needed, "Make FRTSOrderTargetData" and "Break FRTSOrderTargetData" nodes could be used, but care must be taken to populate `TargetTags` correctly if not using the C++ helper.

**6. What the User Needs to Implement/Provide**

*   **Nothing directly for this struct.** Users interact with it via the `URTSOrderHelper::CreateOrderTargetData` function and by implementing `URTSOrder` methods that receive it as a parameter. The primary responsibility is ensuring that actors have `URTSAbilitySystemComponent`s that provide meaningful tags, which are then collected into `TargetTags`.

**7. Advanced Topics & Considerations**

*   **Snapshot in Time:** `TargetTags` represents the target's state *at the time `CreateOrderTargetData` was called*. If the target's state changes significantly between this point and when an order's logic deeply inspects it, the cached tags might be stale for very fine-grained checks. However, for most validation (which happens close to order issuance) and for the `URTSOrderComponent`'s dynamic tag listening on active orders, this is generally not an issue. The dynamic tag listening handles ongoing state changes.
*   **Performance:** Pre-calculating `TargetTags` in `CreateOrderTargetData` is a performance optimization. Instead of every `URTSOrder` method needing to query the target's `UAbilitySystemComponent` for tags, they can just read the `TargetTags` container. This is beneficial when many orders are being validated or scored.
*   **Extensibility:** If an order needs even more specialized data about a target that isn't covered by tags, `Actor`, or `Location`, a developer might:
    *   Add more fields to `FRTSOrderTargetData` (can make it bulky).
    *   Have the `URTSOrder`'s `IssueOrder` method query the `TargetData.Actor` for specific components or properties if it passes initial validation. This is often the cleaner approach for highly specific data.




**2.1.6.3 `FRTSOrderTagRequirements`**

**1. Overview & Purpose**

`FRTSOrderTagRequirements` is a USTRUCT used to define a set of conditions based on Gameplay Tags that must be met by the actor issuing an order (the "Source") and the target of the order (the "Target"). These requirements are fundamental for determining if an order can be issued and, in some cases, if it has been successfully completed.

*   **File:** `RTSOrderTagRequirements.h`
*   **Primary Audience:** Developers and Designers.
    *   Developers define these requirements as properties within `URTSOrder` subclasses (either in C++ constructors or by exposing them for Blueprint configuration).
    *   Designers configure these tag requirements in the Class Defaults of `URTSOrder` Blueprint subclasses to control order validity and behavior.

**2. Core Functionality & Features**

*   **Condition Definition:** Specifies required tags (all must be present) and blocked tags (none must be present) for both the source and the target.
*   **Granular Control:** Allows fine-grained control over order availability based on actor states, relationships, or capabilities represented by Gameplay Tags.
*   **Two Sets of Requirements per Order:** `URTSOrder` contains two instances of this struct:
    *   `TagRequirements`: Checked before an order is issued.
    *   `SuccessTagRequirements`: Checked to determine if a completed or canceled order can be considered a success.

**3. Member Variables (from `RTSOrderTagRequirements.h`)**

*   `UPROPERTY(Category = Tags, EditDefaultsOnly, BlueprintReadWrite)`
    `FGameplayTagContainer SourceRequiredTags;`
    *   **Purpose:** The actor attempting to issue the order *must possess all* Gameplay Tags in this container.
    *   **`EditDefaultsOnly` / `BlueprintReadWrite`:** Designers can edit this tag container directly in the Class Defaults of an `URTSOrder` Blueprint. Developers can set it in C++ constructors.
    *   **Example Usage:** A "Build" order might require the source actor to have a `Status.Permanent.CanConstruct` tag. An ability order might require `Status.Changing.Mana.Sufficient`.

*   `UPROPERTY(Category = Tags, EditDefaultsOnly, BlueprintReadWrite)`
    `FGameplayTagContainer SourceBlockedTags;`
    *   **Purpose:** The actor attempting to issue the order *must not possess any* of the Gameplay Tags in this container.
    *   **`EditDefaultsOnly` / `BlueprintReadWrite`:** Configurable like `SourceRequiredTags`.
    *   **Example Usage:** A "Move" order might be blocked if the source actor has `Status.Changing.Immobilized`. Most orders are blocked by `Status.Changing.Constructing`.

*   `UPROPERTY(Category = Tags, EditDefaultsOnly, BlueprintReadWrite)`
    `FGameplayTagContainer TargetRequiredTags;`
    *   **Purpose:** If the order targets an actor or location, the target (represented by `FRTSOrderTargetData.TargetTags`) *must possess all* Gameplay Tags in this container.
    *   **`EditDefaultsOnly` / `BlueprintReadWrite`:** Configurable like `SourceRequiredTags`.
    *   **Example Usage:** An "Attack" order requires the target to have `Relationship.Hostile` and `Status.Changing.IsAlive`. A "Heal" ability order might require `Relationship.Friendly` and `Status.Changing.Injured`.

*   `UPROPERTY(Category = Tags, EditDefaultsOnly, BlueprintReadWrite)`
    `FGameplayTagContainer TargetBlockedTags;`
    *   **Purpose:** If the order targets an actor or location, the target *must not possess any* of the Gameplay Tags in this container.
    *   **`EditDefaultsOnly` / `BlueprintReadWrite`:** Configurable like `SourceRequiredTags`.
    *   **Example Usage:** An "Attack" order is blocked if the target has `Status.Changing.Invulnerable` or `Relationship.Friendly`.

*   **Static Member:**
    *   `static const FRTSOrderTagRequirements EMPTY_TAG_REQUIREMENTS;`
        *   **Purpose:** Provides a convenient, const, empty instance of `FRTSOrderTagRequirements`. Useful for functions that need to return default requirements if none are specified.

**4. Key Methods (from `RTSOrderTagRequirements.cpp`)**

`FRTSOrderTagRequirements` itself does not have methods defined in a `.cpp` file beyond what `USTRUCT`s get by default (like constructors, comparison operators if generated). Its primary role is as a data container. The logic for *checking* these requirements resides in `URTSAbilitySystemHelper::DoesSatisfyTagRequirements` and `URTSAbilitySystemHelper::DoesSatisfyTagRequirementsWithResult`.

**5. Integration & Usage Scenarios**

*   **Configuration in `URTSOrder` Subclasses:**
    *   Developers set default tag requirements in the C++ constructor of their `URTSOrder` subclasses.
        ```cpp
        // In URTSAttackOrder.cpp constructor
        // TagRequirements.SourceRequiredTags.AddTag(URTSGlobalTags::Status_Permanent_CanAttack());
        // TagRequirements.TargetRequiredTags.AddTag(URTSGlobalTags::Relationship_Hostile());
        // SuccessTagRequirements.TargetBlockedTags.AddTag(URTSGlobalTags::Status_Changing_IsAlive()); 
        ```
    *   Designers further customize these requirements in the Class Defaults of Blueprint children derived from these C++ order classes. This allows for game-specific tuning without recompiling C++.
        *   *(Image/Description of GameplayTagContainer editor in Blueprint Class Defaults)*
*   **Validation by the System:**
    *   `URTSOrderHelper::CanObeyOrder` uses the `SourceRequiredTags` and `SourceBlockedTags` from the order's `TagRequirements` property to check against the issuing actor's tags.
    *   `URTSOrderHelper::IsValidTarget` uses the `TargetRequiredTags` and `TargetBlockedTags` from the order's `TagRequirements` property to check against the `FRTSOrderTargetData::TargetTags`.
    *   `URTSOrderComponent::RegisterTagListeners` uses these tags to monitor for changes that would invalidate an active order.
    *   `URTSOrderHelper::CanOrderBeConsideredAsSucceeded` uses the `SuccessTagRequirements` to evaluate an order's outcome.
*   **Dynamic Requirements:** While typically configured statically on the order class, `URTSOrder::GetTagRequirements()` and `URTSOrder::GetSuccessTagRequirements()` are virtual. This allows C++ subclasses to provide dynamic tag requirements based on the `OrderedActor` or `Index` if needed, though this is less common.

**6. What the User Needs to Implement/Provide**

*   **Gameplay Tag Definitions:** A comprehensive set of `URTSGlobalTags` (or game-specific tags) that accurately represent actor states, capabilities, and relationships.
*   **Tagging Actors:** Actors must have an `URTSAbilitySystemComponent` that correctly applies and removes these Gameplay Tags based on their state and actions.
*   **Configuration on `URTSOrder` Subclasses:** Users (primarily designers via Blueprint Class Defaults, or developers in C++) must carefully configure the four `FGameplayTagContainer` members for both `TagRequirements` and `SuccessTagRequirements` on each `URTSOrder` subclass to define its specific conditions.

**7. Advanced Topics & Considerations**

*   **Specificity vs. Generality:** Be mindful of making tag requirements too specific or too general.
    *   Too specific might make orders rarely usable.
    *   Too general might allow orders in unintended situations.
*   **Clarity of Tags:** The meaning of each Gameplay Tag should be clear and well-documented (e.g., in `URTSGlobalTags` or a game design document) to ensure requirements are set up correctly.
*   **Debugging Failed Orders:** When an order fails, `URTSOrderHelper::K2_CanObeyOrderWithErrorTags` or `K2_IsValidTargetWithErrorTags` can populate `FRTSOrderErrorTags`, which will list the missing required tags or present blocking tags. This is invaluable for debugging.
*   **Interaction with `FRTSOrderErrorTags`:** If `URTSAbilitySystemHelper::DoesSatisfyTagRequirementsWithResult` is used, it populates an `FRTSOrderErrorTags` struct with the specific tags that caused the failure (missing required tags, or existing blocking tags). This allows for more precise feedback to the player or for debugging.
*   **Performance:** Tag checking via `FGameplayTagContainer::HasTag`, `HasAll`, `HasAny` is generally efficient. However, if an order has an extremely large number of required/blocked tags, and this is checked very frequently, it could contribute to overhead. This is usually not a concern for typical RTS order validation.

This struct is a cornerstone of the data-driven validation within the ColonyOrders plugin, enabling complex conditional logic for orders based on the rich state information provided by Gameplay Tags.









**2.1.6.4 `FRTSOrderErrorTags`**

**1. Overview & Purpose**

`FRTSOrderErrorTags` is a USTRUCT designed to provide detailed feedback when an order fails validation due to Gameplay Tag requirements. Instead of just a boolean success/failure, this struct can report *which specific tags* caused the validation to fail, differentiating between missing required tags and present blocking tags.

*   **File:** `RTSOrderErrorTags.h`
*   **Primary Audience:** Developers. This struct is primarily populated by validation functions (like those in `URTSOrderHelper` or `URTSAbilitySystemHelper`) and consumed by systems that need to understand *why* an order failed, for purposes like UI feedback to the player or detailed logging.

**2. Core Functionality & Features**

*   **Detailed Failure Reasons:** Separates failed tag checks into:
    *   `MissingTags`: Tags that were required but not found.
    *   `BlockingTags`: Tags that were found but should have been absent.
    *   `ErrorTags`: A generic container for any other error conditions represented by tags (e.g., "No Target," "Cooldown Active" from ability activation failures).
*   **Facilitates User Feedback:** Enables UI systems to provide more informative messages to players (e.g., "Cannot issue order: Unit is Stunned" instead of just "Order Failed").
*   **Debugging Aid:** Helps developers pinpoint the exact tag conditions causing an order to be invalid.

**3. Member Variables (from `RTSOrderErrorTags.h`)**

*   `UPROPERTY(Category = RTS, EditAnywhere, BlueprintReadWrite)`
    `FGameplayTagContainer MissingTags;`
    *   **Purpose:** Stores a list of Gameplay Tags that were required by an order's `FRTSOrderTagRequirements` (either `SourceRequiredTags` or `TargetRequiredTags`) but were *not* present on the respective actor/target.
    *   **`EditAnywhere` / `BlueprintReadWrite`:** While technically editable, this is almost always populated by functions like `URTSAbilitySystemHelper::DoesSatisfyTagRequirementsWithResult` or `URTSOrderHelper::K2_CanObeyOrderWithErrorTags`.
    *   **Example:** If an order requires `Status.HasWeapon` and the unit doesn't have it, this container would include `Status.HasWeapon`.

*   `UPROPERTY(Category = RTS, EditAnywhere, BlueprintReadWrite)`
    `FGameplayTagContainer BlockingTags;`
    *   **Purpose:** Stores a list of Gameplay Tags that were present on the actor/target but were listed in the order's `FRTSOrderTagRequirements` (either `SourceBlockedTags` or `TargetBlockedTags`).
    *   **Example:** If an order is blocked by `Status.Changing.Stunned` and the unit has this tag, this container would include `Status.Changing.Stunned`.

*   `UPROPERTY(Category = RTS, EditAnywhere, BlueprintReadWrite)`
    `FGameplayTagContainer ErrorTags;`
    *   **Purpose:** A more general container for other error conditions that can be represented by Gameplay Tags but aren't strictly about missing/blocking requirements from an `FRTSOrderTagRequirements` check.
    *   **Example Usage:**
        *   `URTSUseAbilityOrder::CanObeyOrder` populates this with `FailureTags` from `UGameplayAbility::CanActivateAbility` (which might include tags like `AbilityActivationFailure.Cooldown` or `AbilityActivationFailure.Cost`).
        *   `URTSOrderHelper::K2_IsValidTargetWithErrorTags` might add `URTSGlobalTags::AbilityActivationFailure_NoTarget()` if an actor-targeting order has no target actor.

**4. Key Methods (from `RTSOrderErrorTags.cpp`)**

*   `bool IsEmpty() const;`
    *   **Purpose:** Checks if all three tag containers (`MissingTags`, `BlockingTags`, `ErrorTags`) are empty.
    *   **Return Value:** `true` if no error tags are present, `false` otherwise.
    *   **Usage:** A quick way to see if any validation errors were recorded.
        ```cpp
        // FRTSOrderErrorTags MyErrorTags;
        // if (URTSOrderHelper::K2_CanObeyOrderWithErrorTags(OrderType, Actor, Index, MyErrorTags))
        // {
        //     // Order can be obeyed
        // }
        // else if (!MyErrorTags.IsEmpty())
        // {
        //     UE_LOG(LogRTS, Warning, TEXT("Order failed validation: %s"), *MyErrorTags.ToString());
        // }
        ```

*   `FString ToString() const;`
    *   **Purpose:** Returns a human-readable string representation of all contained error tags, useful for logging and debugging.
    *   **Output Example:** `"Missing Tags: (Status.HasWeapon), Blocking Tags: (Status.Changing.Stunned), Error Tags: (AbilityActivationFailure.Cooldown)"`
    *   **C++ Usage Example:** `UE_LOG(LogRTS, Warning, TEXT("Order validation errors: %s"), *ErrorTags.ToString());`

**5. Integration & Usage Scenarios**

*   **Population by Validation Functions:**
    *   `URTSOrderHelper::K2_CanObeyOrderWithErrorTags` and `URTSOrderHelper::K2_IsValidTargetWithErrorTags` are key Blueprint-exposed functions that take an `FRTSOrderErrorTags& OutErrorTags` parameter. If validation fails, they populate this struct.
    *   Internal C++ validation functions, like `URTSAbilitySystemHelper::DoesSatisfyTagRequirementsWithResult`, also populate similar out parameters.
    *   `URTSOrderComponent::CheckOrder` and `URTSOrderComponent::LogOrderErrorMessage` use this struct to provide more detailed log messages.
*   **UI Feedback:**
    *   A game's UI system can call the `K2_...WithErrorTags` validation functions. If they return false, the UI can inspect the `FRTSOrderErrorTags` struct.
    *   Based on the tags present (e.g., `ErrorTags.HasTag(URTSGlobalTags::AbilityActivationFailure_Cooldown())`), the UI can display specific messages like "Ability is on cooldown!" or "Unit is stunned."
    *   This is far more user-friendly than a generic "Cannot perform action."
    ```cpp
    // Hypothetical Blueprint logic after trying to issue an order via PlayerController
    // (Assume ValidateOrderAndGetErrors is a BP function wrapping K2_CanObeyOrderWithErrorTags & K2_IsValidTargetWithErrorTags)
    // 
    // [Button Click] -> [ValidateOrderAndGetErrors] --(OutSuccess: bool)--> [Branch]
    //                               |                                         | (False)
    //                               +--(OutErrorTags: FRTSOrderErrorTags) ----+--> [DisplayErrorMessageToPlayer(OutErrorTags)]
    //                                                                         | (True)
    //                                                                         +--> [IssueOrderToServer_RPC]
    ```
*   **Debugging:** When an order isn't working as expected, developers can use these validation functions in C++ or Blueprint debug sessions, inspect the returned `FRTSOrderErrorTags`, and see exactly which tag conditions are failing.
*   **AI Decision Making:** AI could potentially use this information. If an AI tries to issue an order and it fails with specific error tags, the AI might try a different order or target, or wait for a condition (like a cooldown) to pass.

**6. What the User Needs to Implement/Provide**

*   **UI Systems for Feedback:** If detailed user feedback is desired, the game's UI code (Blueprint or C++) needs to:
    *   Call the appropriate validation functions from `URTSOrderHelper` that output `FRTSOrderErrorTags`.
    *   Interpret the tags in the struct to display localized, user-friendly error messages.
*   **Comprehensive Tagging:** The accuracy and usefulness of `FRTSOrderErrorTags` depend on actors having their Gameplay Tags correctly managed by their `URTSAbilitySystemComponent` and other game systems.

**7. Advanced Topics & Considerations**

*   **Localization of Error Messages:** The tags themselves are developer-facing. A mapping from specific error tags (e.g., `AbilityActivationFailure.Cooldown`) to localized `FText` (e.g., "Ability is on cooldown ({TimeRemaining}s)") would be needed in the UI layer.
*   **Prioritizing Error Messages:** If multiple error tags are present (e.g., a missing tag AND a blocking tag AND another error tag), the UI might need logic to decide which error message is most relevant to show the player.
*   **Extending Error Conditions:** While primarily focused on tags, the `ErrorTags` container is generic. If other non-tag-based error conditions are critical, they could potentially be mapped to unique Gameplay Tags and added to this container by custom validation logic.

This struct greatly enhances the observability and user-friendliness of the order validation process by providing specific reasons for failure.





**2.1.6.5 `FRTSOrderTypeWithIndex`**

**1. Overview & Purpose**

`FRTSOrderTypeWithIndex` is a simple USTRUCT designed to bundle a `TSoftClassPtr<URTSOrder>` (representing an order type) with an integer `Index`. This structure is primarily used by systems that deal with lists or collections of potential orders where each order might have a specific variant or slot identifier, most notably the `URTSAutoOrderComponent` and its `IRTSAutoOrderProvider` interface.

*   **File:** `RTSOrderTypeWithIndex.h`
*   **Primary Audience:** Developers. This struct is used as a data carrier, particularly when systems like `URTSAutoOrderComponent` gather potential auto-orders or when UI needs to reference a specific ability/order by more than just its class.

**2. Core Functionality & Features**

*   **Combines Order Type and Index:** Provides a convenient way to associate an order class with a relevant integer index.
*   **Facilitates Indexed Orders:** Essential for scenarios where an `URTSOrder` class (like `URTSUseAbilityOrder`) uses an index to determine which specific sub-action or variant to perform.

**3. Member Variables (from `RTSOrderTypeWithIndex.h`)**

*   `UPROPERTY(Category = RTS, EditAnywhere, BlueprintReadWrite)`
    `TSoftClassPtr<URTSOrder> OrderType;`
    *   **Purpose:** A soft class pointer to the specific `URTSOrder` subclass (e.g., `URTSUseAbilityOrder`, `URTSAttackOrder`).
    *   **`EditAnywhere` / `BlueprintReadWrite`:** Allows this struct to be created and modified in Blueprints (e.g., using a "Make FRTSOrderTypeWithIndex" node).
    *   **Usage:** Identifies the class of order.

*   `UPROPERTY(Category = RTS, EditAnywhere, BlueprintReadWrite)`
    `int32 Index;`
    *   **Purpose:** An integer index whose meaning is dependent on the `OrderType`.
    *   **Default Value:** `-1` (often indicating "no specific index" or "default variant").
    *   **Usage Examples:**
        *   If `OrderType` is `URTSUseAbilityOrder`, this `Index` specifies which ability in the actor's `URTSAbilitySystemComponent`'s list to activate.
        *   If `OrderType` refers to a generic "Produce Unit" order for a factory, `Index` might refer to the type of unit to produce from a list.
        *   If an order doesn't use an index (e.g., a simple `URTSMoveOrder`), this is often left as `-1`.

**4. Key Methods (from `RTSOrderTypeWithIndex.cpp`)**

*   **Constructors:**
    *   `FRTSOrderTypeWithIndex();` (Default constructor: null `OrderType`, `Index = -1`)
    *   `FRTSOrderTypeWithIndex(TSoftClassPtr<URTSOrder> InOrderType, int32 InIndex = -1);`
        *   **Purpose:** Provides a convenient way to initialize the struct.
        *   **C++ Usage Example:**
            ```cpp
            // TSoftClassPtr<URTSOrder> UseAbilityOrderClass = URTSUseAbilityOrder::StaticClass(); // Or a specific subclass
            // int32 FireballAbilityIndex = 0;
            // FRTSOrderTypeWithIndex AutoCastFireball(UseAbilityOrderClass, FireballAbilityIndex);
            ```

*   `FString ToString() const;`
    *   **Purpose:** Returns a human-readable string representation of the struct, useful for logging and debugging.
    *   **Output Example:** `"MyUseAbilityOrderClassName (Index: 0)"` or `"MyMoveOrderClassName (Index: -1)"`

*   `bool operator==(const FRTSOrderTypeWithIndex& Other) const;`
*   `bool operator!=(const FRTSOrderTypeWithIndex& Other) const;`
    *   **Purpose:** Equality and inequality operators.
    *   **Logic:** Compares both `OrderType` and `Index`.
    *   **Usage:** Used by `URTSAutoOrderComponent` for managing its internal lists (e.g., `IsHumanPlayerAutoOrder`, `SetHumanPlayerAutoOrderState`).

**5. Integration & Usage Scenarios**

*   **`IRTSAutoOrderProvider::GetAutoOrders`:** Implementations of this interface method populate an array of `FRTSOrderTypeWithIndex`.
    *   For example, `URTSAbilitySystemComponent::GetAutoOrders_Implementation` iterates through its abilities and for each auto-castable ability, it adds an `FRTSOrderTypeWithIndex` where `OrderType` is its configured "Use Ability Order" class and `Index` is the ability's slot.
*   **`URTSAutoOrderComponent` Internal Storage:** The `URTSAutoOrderComponent` stores its collected auto-order candidates as `TArray<FRTSOrderTypeWithIndex> Orders;`.
*   **UI Systems:** A UI displaying a list of abilities might internally map each ability button to an `FRTSOrderTypeWithIndex`. When the button is clicked (for toggling auto-cast, for instance), this struct can be passed to functions like `URTSAutoOrderComponent::SetHumanPlayerAutoOrderState`.
*   **Blueprint Interaction:**
    *   Blueprints can create `FRTSOrderTypeWithIndex` using "Make FRTSOrderTypeWithIndex" nodes.
    *   Blueprints can break an `FRTSOrderTypeWithIndex` struct to get its `OrderType` and `Index`.
    *   Functions exposed to Blueprints (like those on `URTSAutoOrderComponent`) take or return this struct.
    *   (ASCII Art for BP Make/Break Nodes)
        ```
        (Make FRTSOrderTypeWithIndex) --> [OrderTypeWithIndex Output]
         ^  ^
         |  +-- OrderType
         +-- Index

        [OrderTypeWithIndex Input] --> (Break FRTSOrderTypeWithIndex) --> OrderType
                                                                    | --> Index
        ```

**6. What the User Needs to Implement/Provide**

*   **Correct Population:** When implementing `IRTSAutoOrderProvider` or creating these structs for UI interaction, users must ensure that the `OrderType` and `Index` are set correctly and meaningfully for how they will be consumed (e.g., by `URTSUseAbilityOrder` or a custom order).
*   **Handling in `URTSOrder` Subclasses:** If a custom `URTSOrder` subclass is designed to use the `Index` from `FRTSOrderData` (which is populated from this struct's `Index` if used in an `FRTSOrderData` constructor), that order class must correctly interpret the `Index`.

**7. Advanced Topics & Considerations**

*   **Index Ambiguity:** The meaning of `Index` is entirely dependent on the `OrderType`. There's no global registry or enforcement of what an index means for a particular order. This requires careful design if multiple systems are creating these structs.
*   **Alternative to Indexing (Tags):** For more complex scenarios, especially with dynamically granted abilities, identifying abilities/orders by Gameplay Tags instead of array indices can be more robust, though it might require changes to how `URTSUseAbilityOrder` or similar orders find their target action. `FRTSOrderTypeWithIndex` is simpler for fixed lists.
*   **Use with `FRTSOrderData`:** When an auto-order is to be issued, the `URTSAutoOrderComponent` will typically construct an `FRTSOrderData` using the `OrderType` and `Index` from an `FRTSOrderTypeWithIndex` entry.
    ```cpp
    // Inside URTSAutoOrderComponent::IssueAutoOrder (conceptual)
    // FRTSOrderTypeWithIndex AutoOrderToIssue = ...; // From its internal list
    // FRTSOrderData OrderToExecute(AutoOrderToIssue.OrderType, AutoOrderToIssue.Index);
    // // ... then set target, location, etc., on OrderToExecute ...
    // OrderComp->InsertOrderBeforeCurrentOrder(OrderToExecute);
    ```

This struct is a small but important utility for linking an order class with a specific sub-identifier, particularly useful for systems managing collections of potential actions like auto-casting abilities.



### 2.1.7. Visualizing Orders: `ARTSOrderPreview` & `FRTSOrderPreviewData`

Visual feedback is crucial in RTS games to inform the player about command targets and areas of effect. The ColonyOrders plugin provides a basic framework for this through `ARTSOrderPreview` (an actor for the visual itself) and `FRTSOrderPreviewData` (a struct to configure how previews are shown).

---

**2.1.7.1 `FRTSOrderPreviewData` Struct**

**1. Overview & Purpose**

`FRTSOrderPreviewData` is a USTRUCT that holds configuration information for how an order's target or effect should be visually previewed in the game world while the player is selecting a target or when an order is active/queued. It specifies which actor class to use for the preview and how it should snap to the cursor or owner.

*   **File:** `RTSOrderPreviewData.h`
*   **Primary Audience:**
    *   **Developers:** Will have `URTSOrder` or `URTSGameplayAbility` subclasses return instances of this struct (often configured in those classes' defaults).
    *   **Designers:** Will configure the properties of `FRTSOrderPreviewData` (like `OrderPreviewClass` and `SnapMode`) within the Class Defaults of `URTSOrder` or `URTSGameplayAbility` Blueprint subclasses.

**2. Core Functionality & Features**

*   **Defines Preview Actor:** Specifies the `TSubclassOf<ARTSOrderPreview>` to be spawned for the visual.
*   **Snap Behavior:** Defines how the preview actor should behave relative to the cursor or the owning actor.
*   **Data Carrier:** `URTSOrder::GetOrderPreviewData()` and `URTSGameplayAbility::GetAbilityPreviewData()` return this struct, allowing UI or input handling systems to create and manage the preview.

**3. Member Variables (from `RTSOrderPreviewData.h`)**

*   **Public (but intended for internal/system use):**

    *   `UPROPERTY()`
        `AActor* Owner;`
        *   **Purpose:** Intended to store a reference to the actor for whom the preview is being shown (the one issuing the order/ability).
        *   **Note:** This property is not marked `EditDefaultsOnly` and is likely set at runtime by the system that creates and manages the preview instance. It's not directly configured by designers on the struct's default.

    *   `UPROPERTY()`
        `AActor* Preview;`
        *   **Purpose:** Intended to store a reference to the spawned preview actor instance itself.
        *   **Note:** Similar to `Owner`, this is a runtime-set property.

*   **Private (Configured via `EditDefaultsOnly` on `URTSOrder`/`URTSGameplayAbility` where this struct is a member):**

    *   `UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "RTS", meta = (AllowPrivateAccess = "true"))`
        `TSubclassOf<ARTSOrderPreview> OrderPreviewClass;`
        *   **Purpose:** A `TSubclassOf` pointer to an `ARTSOrderPreview` Blueprint or C++ class. This is the actor class that will be spawned to create the visual preview (e.g., a decal actor for a move location, a sphere for an AoE radius).
        *   **`EditDefaultsOnly`:** This is the primary configuration point. When `FRTSOrderPreviewData` is a UPROPERTY within a `URTSOrder` or `URTSGameplayAbility` subclass, designers can set this `OrderPreviewClass` in the Class Defaults of that order/ability.
        *   **`BlueprintReadOnly`:** Can be read in Blueprints, though typically accessed via the getter.
        *   **Example:** A "Move Order" Blueprint (child of `URTSMoveOrder`) would have an `FRTSOrderPreviewData` member, and in its defaults, `OrderPreviewClass` could be set to `BP_MovePreviewDecal` (a user-created Blueprint actor).

    *   `UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "RTS", meta = (AllowPrivateAccess = "true"))`
        `ERTSOrderPreviewSnapMode SnapMode;`
        *   **Purpose:** An enum (`ERTSOrderPreviewSnapMode`) that defines how the spawned `OrderPreviewClass` actor should position itself.
            *   `ORDERPREVIEW_DontSnap`: No special snapping; position is likely determined by cursor world location directly.
            *   `ORDERPREVIEW_SnapToOwner`: Preview snaps to the `Owner` actor's location but might rotate towards the cursor (e.g., for directional previews).
            *   `ORDERPREVIEW_SnapToCursor`: Preview snaps directly to the cursor's world position.
        *   **`EditDefaultsOnly` / `BlueprintReadOnly`:** Configurable in the Class Defaults of the owning `URTSOrder`/`URTSGameplayAbility`.
        *   **Example:** A ground-targeted AoE spell might use `ORDERPREVIEW_SnapToCursor`, while a self-centered aura preview might conceptually use `ORDERPREVIEW_SnapToOwner` (though a self-aura might not need a separate preview actor if it's part of the main unit's visuals).

**4. Key Methods (from `RTSOrderPreviewData.cpp`)**

*   `TSubclassOf<ARTSOrderPreview> GetOrderPreviewClass();`
    *   **Purpose:** Public getter for the `OrderPreviewClass` member.
    *   **Return Value:** The `TSubclassOf<ARTSOrderPreview>` to be spawned.

*   `ERTSOrderPreviewSnapMode GetSnapMode();`
    *   **Purpose:** Public getter for the `SnapMode` member.
    *   **Return Value:** The `ERTSOrderPreviewSnapMode` enum value.

**5. Integration & Usage Scenarios**

*   **Configuration on Orders/Abilities:**
    *   A `URTSOrder` subclass (e.g., `BP_MyCustomOrder`) will have an `FRTSOrderPreviewData` property (likely named something like `PreviewData`).
    *   In the Class Defaults of `BP_MyCustomOrder`, the designer sets:
        *   `PreviewData.OrderPreviewClass` to `BP_MyCustomOrder_VisualPreview` (a Blueprint deriving from `ARTSOrderPreview`).
        *   `PreviewData.SnapMode` to the desired mode.
*   **Retrieval and Use by UI/Input System:**
    1.  When a player selects an order or ability that requires targeting, the UI/Input system calls `URTSOrderHelper::GetOrderPreviewData()` (for orders) or `URTSAbilitySystemHelper::GetAbilityPreviewData()` (for abilities). These functions return the configured `FRTSOrderPreviewData`.
    2.  The system then uses `FRTSOrderPreviewData::GetOrderPreviewClass()` to get the class to spawn.
    3.  It spawns an instance of this class. Let's call this `SpawnedPreviewActor`.
    4.  The system continuously updates `SpawnedPreviewActor`'s position and rotation based on the cursor position and the `FRTSOrderPreviewData::GetSnapMode()`.
    5.  If the `SpawnedPreviewActor` is an instance of `ARTSOrderPreview` (which it should be), the system can call `SpawnedPreviewActor->SetInstigatorAbility()` if the preview is for an ability, allowing the preview actor to potentially adjust its visuals based on the ability's properties (e.g., range).
    6.  When targeting is complete or canceled, the `SpawnedPreviewActor` is destroyed.
*   **`URTSOrderComponent::UpdateOrderPreviews` (Conceptual):**
    *   The `URTSOrderComponent` has `OrderPreviewActorClass` and `OrderPreviewActors` members.
    *   Its `CreateOrderPreviewActor` method (though simplified in the provided code) would ideally:
        *   Get `FRTSOrderPreviewData` for the current/queued order.
        *   Use `FRTSOrderPreviewData.OrderPreviewClass` instead of its own `URTSOrderComponent::OrderPreviewActorClass` if the order provides a specific preview.
        *   Spawn and manage these, potentially positioning them based on the order's target. This is for *active/queued* order visualization, distinct from *targeting* previews.

**6. What the User Needs to Implement/Provide**

*   **`ARTSOrderPreview` Subclasses (Blueprint or C++):** These are the actual visual actors (e.g., decals, meshes with materials, particle systems) that will be spawned.
    *   Example: `BP_MoveFlagPreview` (an actor with a flag mesh) or `BP_AoESpellRadiusPreview` (an actor with a cylinder mesh scaled to ability range and a decal).
*   **Configuration:** Designers need to correctly set the `OrderPreviewClass` and `SnapMode` properties within the `FRTSOrderPreviewData` members of their `URTSOrder` and `URTSGameplayAbility` Blueprint subclasses.
*   **UI/Input System Logic:** The game's UI or input handling system needs to:
    *   Fetch the `FRTSOrderPreviewData`.
    *   Spawn/destroy the preview actor.
    *   Update the preview actor's transform each frame based on cursor position and snap mode.

**7. Advanced Topics & Considerations**

*   **Dynamic Previews:** The `ARTSOrderPreview::SetInstigatorAbility` and its `ReceiveOnInstigatorAbilityInitialized` event allow the preview actor to dynamically adjust itself (e.g., scale a radius indicator based on the ability's actual range).
*   **Performance:** Spawning and destroying actors frequently (like a preview actor every frame or on mouse move) can have a performance cost. For very dynamic previews, consider using a single, reusable preview actor that is shown/hidden and whose appearance is changed, rather than constant spawn/destroy. The current framework implies spawning per targeting session.
*   **Multiple Preview Types:** The system allows each order/ability to define its own `OrderPreviewClass`, enabling diverse visual feedback.
*   **Complexity of Snap Modes:** The actual implementation of the snap logic (how `ORDERPREVIEW_SnapToOwner` or `ORDERPREVIEW_SnapToCursor` translates to actor transforms) resides in the UI/input system that manages the preview actor, not in `FRTSOrderPreviewData` itself.

---

**2.1.7.2 `ARTSOrderPreview` Actor**

**1. Overview & Purpose**

`ARTSOrderPreview` is an `AActor` base class intended to be subclassed (primarily in Blueprints) to create the visual representations used when previewing an order or ability target. It provides a minimal C++ interface for an instigating ability to be set, allowing the Blueprint logic to potentially customize the preview based on that ability's properties.

*   **File:** `RTSOrderPreview.h`
*   **Primary Audience:**
    *   **Designers:** Will create Blueprint child classes of `ARTSOrderPreview` to design the actual visuals (e.g., adding decal components, static meshes for area indicators, particle effects). They will implement logic in the Blueprint's Event Graph, especially responding to `ReceiveOnInstigatorAbilityInitialized`.
    *   **Developers:** Will typically only interact with this class by ensuring their preview spawning system correctly calls `SetInstigatorAbility` if the preview is for a gameplay ability.

**2. Core Functionality & Features**

*   **Visual Representation Base:** Acts as a blank canvas actor for designers to add visual components.
*   **Ability Awareness (Optional):** Can be informed of the `UGameplayAbility` that is instigating its display, allowing for dynamic visuals.

**3. Key Properties (Header File Analysis - `RTSOrderPreview.h`)**

*   **Private Properties (Accessed via public getter/setter):**

    *   `UPROPERTY(Category = RTS, BlueprintReadOnly, EditAnywhere, meta = (AllowPrivateAccess = true))`
        `TSubclassOf<UGameplayAbility> InstigatorAbility;`
        *   **Purpose:** Stores the class of the `UGameplayAbility` for which this preview is being shown. This allows the preview actor to query properties from the ability's CDO (e.g., range, radius) to adjust its appearance.
        *   **`BlueprintReadOnly`:** The Blueprint logic within this actor can read this property after it has been set.
        *   **`EditAnywhere`:** This is slightly misleading in context. While technically editable, it's meant to be set at runtime via `SetInstigatorAbility`. Making it `EditAnywhere` might be for debugging or if a preview actor is placed directly in a level and pre-configured for a specific ability (less common for dynamic targeting previews).
        *   **Considerations for Modification:** This is the key link back to the ability. Ensure it's set correctly by the preview management system if ability-specific visuals are needed.

**4. Key Methods (Header & Source File Analysis - `RTSOrderPreview.h` & `RTSOrderPreview.cpp`)**

*   **Public Methods:**

    *   `UFUNCTION(Category = RTS, BlueprintPure)`
        `TSubclassOf<UGameplayAbility> GetInstigatorAbility() const;`
        *   **Purpose:** Public getter for the `InstigatorAbility` property.
        *   **BlueprintPure:** Can be called in Blueprints without an execution pin to get the ability class.
        *   **C++ Usage Example:**
            ```cpp
            // ARTSOrderPreview* MyPreviewActor = ...;
            // TSubclassOf<UGameplayAbility> AbilityClass = MyPreviewActor->GetInstigatorAbility();
            // if (AbilityClass) { /* Query CDO of AbilityClass */ }
            ```
        *   **Blueprint Usage Example:**
            *   (ASCII Art for BP Node)
                ```
                [Self (ARTSOrderPreview BP)] ---> [GetInstigatorAbility] ---> (Return Value: AbilityClass)
                ```

    *   `UFUNCTION(Category = RTS, BlueprintCallable)`
        `void SetInstigatorAbility(TSubclassOf<UGameplayAbility> Ability);`
        *   **Purpose:** Sets the `InstigatorAbility` property and then calls the `ReceiveOnInstigatorAbilityInitialized` Blueprint event. This is the primary way to inform the preview actor about the ability it's representing.
        *   **Parameters:** `TSubclassOf<UGameplayAbility> Ability`: The ability class.
        *   **Internal Logic (`.cpp`):**
            1.  Sets `this->InstigatorAbility = Ability;`
            2.  Calls `ReceiveOnInstigatorAbilityInitialized();` (which triggers the Blueprint event).
        *   **C++ Usage Example (by the preview spawning system):**
            ```cpp
            // ARTSOrderPreview* SpawnedPreview = World->SpawnActor<ARTSOrderPreview>(PreviewData.GetOrderPreviewClass(), ...);
            // if (SpawnedPreview && AbilityBeingTargeted)
            // {
            //     SpawnedPreview->SetInstigatorAbility(AbilityBeingTargeted->GetClass());
            // }
            ```
        *   **Blueprint Usage Example:** Not typically called from within the preview actor's own Blueprint; it's called *on* the preview actor by an external system.

*   **Blueprint Implementable Event:**

    *   `UFUNCTION(Category = RTS, BlueprintImplementableEvent, meta = (DisplayName = "OnInstigatorAbilityInitialized"))`
        `void ReceiveOnInstigatorAbilityInitialized();`
        *   **Purpose:** An event that designers can implement in Blueprint subclasses of `ARTSOrderPreview`. It's called immediately after `InstigatorAbility` has been set.
        *   **Usage in Blueprint:**
            *   In the Event Graph of a `BP_MyPreviewActor` (child of `ARTSOrderPreview`), you can add the `Event OnInstigatorAbilityInitialized` node.
            *   From this event, you can get the `InstigatorAbility` (using the getter node), get its CDO, and query its properties (e.g., range from `URTSGameplayAbility::GetRange()`).
            *   Use these properties to adjust components of the preview actor (e.g., scale a sphere component to match ability radius, set the color of a decal).
            *   (ASCII Art for BP Event Node)
                ```
                Event OnInstigatorAbilityInitialized --Exec--> [GetInstigatorAbility] --> [GetClassDefaultObject] --> [Cast To URTSGameplayAbility] --+
                                                                                                                                                    |
                                                                                                                                                    +--> [Call GetRange] --> (Range) --> [SetSphereRadius (on SphereComponent)]
                ```
        *   **Risks & Considerations:** If `InstigatorAbility` is not set or is null when this event fires, Blueprint logic trying to use it will fail. Ensure `SetInstigatorAbility` is called with a valid ability class if this event relies on it.

**5. Integration & Usage Scenarios**

*   **Creating Visuals:**
    1.  Create a new Blueprint class, `BP_MyAbilityPreview`, inheriting from `ARTSOrderPreview`.
    2.  In `BP_MyAbilityPreview`, add components: a `DecalComponent`, a `StaticMeshComponent` (e.g., a cylinder or sphere), a `ParticleSystemComponent`, etc.
    3.  Implement the `Event OnInstigatorAbilityInitialized`. Inside this event:
        *   Get `InstigatorAbility`.
        *   If it's valid, cast its CDO to `URTSGameplayAbility`.
        *   Call methods like `GetRange()` on the ability CDO.
        *   Use the returned values to set the scale of the static mesh, the size of the decal, or parameters of a particle system.
*   **Spawning by UI/Input System:** As described in the `FRTSOrderPreviewData` section, the system responsible for handling targeting previews will spawn an instance of a Blueprint like `BP_MyAbilityPreview` when needed.

**6. What the User Needs to Implement/Provide**

*   **Blueprint Child Classes of `ARTSOrderPreview`:** For each distinct visual preview needed (e.g., one for move orders, one for single-target abilities, one for AoE ground-targeted abilities).
*   **Visual Components:** Add and configure static meshes, decals, particles, etc., within these Blueprint child classes.
*   **Blueprint Logic:** Implement `Event OnInstigatorAbilityInitialized` (and potentially `Event Tick` for animated previews) in these Blueprints to customize the appearance based on `InstigatorAbility` properties or other factors.

**7. Advanced Topics & Considerations**

*   **Material Parameterization:** Previews can use Dynamic Material Instances, and parameters (like color, radius, opacity) can be driven by ability properties in `ReceiveOnInstigatorAbilityInitialized` or `Event Tick`.
*   **Complexity:** For very complex previews (e.g., showing potential pathing, detailed construction footprints), the Blueprint logic in `ARTSOrderPreview` subclasses can become extensive.
*   **Reusability:** Aim to create generic preview Blueprints that can adapt to different abilities by reading from `InstigatorAbility`. For example, one `BP_RadiusPreview` could be used for many AoE abilities, just changing its scale.
*   **Performance:** As with `FRTSOrderPreviewData`, if previews are complex and spawned/updated very frequently, consider optimization techniques.

This pair of `FRTSOrderPreviewData` and `ARTSOrderPreview` provides a flexible system for visual player feedback during order targeting.




















### 2.1.8. `URTSOrderHelper`: Blueprint Utilities

`URTSOrderHelper` is a `UBlueprintFunctionLibrary` containing a collection of static utility functions designed to simplify interaction with the Order System, primarily from Blueprints, but also useful in C++. These functions often act as wrappers around methods defined on `URTSOrder` CDOs (Class Default Objects) or `URTSOrderComponent`.

---

**`URTSOrderHelper` - Part 1: Order Validation & Issuance**

These functions are primarily concerned with checking if an order can be given and with initiating or managing the order queue on an actor.

**1. `CanObeyOrder` / `K2_CanObeyOrderWithErrorTags`**

*   **Signatures:**
    *   `static bool CanObeyOrder(TSoftClassPtr<URTSOrder> OrderType, const AActor* OrderedActor, int32 Index = -1);`
    *   `UFUNCTION(Category = "RTS Order", BlueprintPure, DisplayName = "Can Obey Order (With Error Tags)")`
        `static bool K2_CanObeyOrderWithErrorTags(TSoftClassPtr<URTSOrder> OrderType, const AActor* OrderedActor, int32 Index, FRTSOrderErrorTags& OutErrorTags);`
    *   `(Private C++ version also exists: static bool CanObeyOrder(TSoftClassPtr<URTSOrder> OrderType, const AActor* OrderedActor, int32 Index, FRTSOrderErrorTags* OutErrorTags);)`

*   **Purpose:**
    Checks if the specified `OrderedActor` can currently obey the given `OrderType`. This involves two main stages of checks:
    1.  **Tag Requirements:** Verifies if the `OrderedActor` meets the `SourceRequiredTags` and does not have any `SourceBlockedTags` defined in the `OrderType`'s `TagRequirements`.
    2.  **Order-Specific Check:** Calls the virtual `CanObeyOrder` method on the CDO of the `OrderType`.

*   **Parameters:**
    *   `OrderType` (`TSoftClassPtr<URTSOrder>`): The class of the order to check.
    *   `OrderedActor` (`const AActor*`): The actor that would be obeying the order.
    *   `Index` (`int32`): The optional index for the order (e.g., ability slot). Defaults to -1.
    *   `OutErrorTags` (`FRTSOrderErrorTags&` - only in `K2_CanObeyOrderWithErrorTags` and the private C++ version): An output parameter populated with specific tag-related reasons if the validation fails.

*   **Return Value:** `bool`: `true` if the actor can obey the order, `false` otherwise.

*   **Internal Logic Highlights (`.cpp` - for the version with `OutErrorTags`):**
    1.  **Null Checks:** Returns `false` if `OrderType` is null or `OrderedActor` is invalid.
    2.  **Load Order Class:** Synchronously loads the `OrderType` class if it's not already loaded (`OrderType.LoadSynchronous()`).
    3.  **Get Order CDO:** Gets the Class Default Object of the `OrderType`.
    4.  **Ability System Check:** Gets the `UAbilitySystemComponent` from `OrderedActor`.
    5.  **Source Tag Validation:**
        *   Retrieves `TagRequirements` from the `Order` CDO using `Order->GetTagRequirements()`.
        *   Gets the `OrderedActor`'s current tags using `AbilitySystem->GetOwnedGameplayTags()`.
        *   Uses `URTSAbilitySystemHelper::DoesSatisfyTagRequirementsWithResult` (if `OutErrorTags` is provided) or `DoesSatisfyTagRequirements` to check the actor's tags against `TagRequirements.SourceRequiredTags` and `TagRequirements.SourceBlockedTags`. If this fails, returns `false`.
    6.  **Order-Specific Validation:** Calls `Order->CanObeyOrder(OrderedActor, Index, OutErrorTags)`. Returns the result of this call.

*   **C++ Usage Example:**
    ```cpp
    TSoftClassPtr<URTSOrder> MyMoveOrderClass = UMyMoveOrder::StaticClass(); // Assuming UMyMoveOrder exists
    AActor* SelectedUnit = GetMySelectedUnit();
    FRTSOrderErrorTags ErrorTags; // For the detailed version

    // Simple check
    if (URTSOrderHelper::CanObeyOrder(MyMoveOrderClass, SelectedUnit))
    {
        // Unit can obey the move order in principle
    }

    // Detailed check
    if (URTSOrderHelper::K2_CanObeyOrderWithErrorTags(MyMoveOrderClass, SelectedUnit, -1, ErrorTags))
    {
        UE_LOG(LogRTS, Log, TEXT("Unit can obey move order."));
    }
    else
    {
        UE_LOG(LogRTS, Warning, TEXT("Unit cannot obey move order. Errors: %s"), *ErrorTags.ToString());
    }
    ```

*   **Blueprint Usage Example (`K2_CanObeyOrderWithErrorTags`):**
    *   This is a `BlueprintPure` node, so it doesn't need execution pins if only the boolean result is used. If `OutErrorTags` is connected, it behaves like a standard function call.
    *   (ASCII Art for BP Node)
        ```
        [Pure Call OR Exec Pin if ErrorTags connected]
           |
           V
        [Can Obey Order (With Error Tags)] --(Return Value: bool)--> [Branch]
         ^ OrdersActor (Actor Ref)                                       | (False)
         | OrderType (Order Class Soft Ptr)                              +--> [Get OutErrorTags] -> [Print String (ToString)]
         ^ Index (int32)
         ^ OutErrorTags (FRTSOrderErrorTags - Output)
        ```

*   **Risks & Considerations:**
    *   Ensure `OrderType` points to a valid `URTSOrder` subclass.
    *   The `OrderedActor` must have a `UAbilitySystemComponent` for tag checking to work; otherwise, tag checks are skipped.
    *   This function can be called frequently (e.g., by UI to enable/disable order buttons). While generally efficient, very complex `URTSOrder::CanObeyOrder` overrides could impact performance if not careful.

*   **Considerations for Modification:** The core logic is robust. Modifications would typically be within the `URTSOrder` subclasses' `CanObeyOrder` overrides or their `TagRequirements`.

---

**2. `IsValidTarget` / `K2_IsValidTargetWithErrorTags`**

*   **Signatures:**
    *   `static bool IsValidTarget(TSoftClassPtr<URTSOrder> OrderType, const AActor* OrderedActor, const FRTSOrderTargetData& TargetData, int32 Index = -1);`
    *   `UFUNCTION(Category = "RTS Order", BlueprintPure, DisplayName = "Is Valid Target (With Error Tags)")`
        `static bool K2_IsValidTargetWithErrorTags(TSoftClassPtr<URTSOrder> OrderType, const AActor* OrderedActor, const FRTSOrderTargetData& TargetData, int32 Index, FRTSOrderErrorTags& OutErrorTags);`
    *   `(Private C++ version also exists with OutErrorTags)`

*   **Purpose:**
    Checks if the provided `TargetData` (actor and/or location, with pre-fetched tags) is a valid target for the `OrderType`, considering the `OrderedActor` that would be issuing the command. This is typically called *after* `CanObeyOrder` confirms the actor can perform the order type in general.
    1.  **Target Type Check:** Validates if `TargetData.Actor` is valid when the `OrderType` expects an actor target.
    2.  **Tag Requirements:** Verifies if `TargetData.TargetTags` meets the `TargetRequiredTags` and does not have any `TargetBlockedTags` from the `OrderType`'s `TagRequirements`.
    3.  **Order-Specific Check:** Calls the virtual `IsValidTarget` method on the CDO of the `OrderType`.

*   **Parameters:**
    *   `OrderType` (`TSoftClassPtr<URTSOrder>`): The class of the order.
    *   `OrderedActor` (`const AActor*`): The actor that would issue the order.
    *   `TargetData` (`const FRTSOrderTargetData&`): The potential target, including its actor, location, and pre-calculated tags.
    *   `Index` (`int32`): Optional order index.
    *   `OutErrorTags` (`FRTSOrderErrorTags&`): Output for specific failure reasons.

*   **Return Value:** `bool`: `true` if `TargetData` is a valid target, `false` otherwise.

*   **Internal Logic Highlights (`.cpp` - for version with `OutErrorTags`):**
    1.  **Null Check:** Returns `false` if `OrderType` is null.
    2.  **Load Order Class & Get CDO.**
    3.  **Target Type Validation (Actor):**
        *   Calls `Order->GetTargetType(OrderedActor, Index)`.
        *   If `TargetType` is `ERTSTargetType::ACTOR` and `TargetData.Actor` is invalid (null), it adds `URTSGlobalTags::AbilityActivationFailure_NoTarget()` to `OutErrorTags.ErrorTags` and returns `false`.
    4.  **Target Tag Validation:**
        *   Retrieves `TagRequirements` from the `Order` CDO.
        *   Uses `URTSAbilitySystemHelper::DoesSatisfyTagRequirementsWithResult` (or non-result version) to check `TargetData.TargetTags` against `TagRequirements.TargetRequiredTags` and `TagRequirements.TargetBlockedTags`. If this fails, returns `false`.
    5.  **Order-Specific Validation:** Calls `Order->IsValidTarget(OrderedActor, TargetData, Index, OutErrorTags)`. Returns the result.

*   **C++ Usage Example:**
    ```cpp
    TSoftClassPtr<URTSOrder> MyAttackOrderClass = UMyAttackOrder::StaticClass();
    AActor* AttackerUnit = GetMySelectedUnit();
    AActor* TargetEnemy = GetPotentialTarget();
    FRTSOrderErrorTags ErrorTags;

    // Create TargetData (usually done by the helper too, but shown for clarity)
    FRTSOrderTargetData TargetInfo = URTSOrderHelper::CreateOrderTargetData(AttackerUnit, TargetEnemy, FVector2D::ZeroVector); 

    if (URTSOrderHelper::K2_IsValidTargetWithErrorTags(MyAttackOrderClass, AttackerUnit, TargetInfo, -1, ErrorTags))
    {
        UE_LOG(LogRTS, Log, TEXT("Target is valid for attack order."));
    }
    else
    {
        UE_LOG(LogRTS, Warning, TEXT("Target is invalid. Errors: %s"), *ErrorTags.ToString());
    }
    ```

*   **Blueprint Usage Example (`K2_IsValidTargetWithErrorTags`):**
    *   Similar to `K2_CanObeyOrderWithErrorTags`, it's `BlueprintPure`.
    *   (ASCII Art for BP Node)
        ```
        [Pure Call OR Exec Pin if ErrorTags connected]
           |
           V
        [Is Valid Target (With Error Tags)] --(Return Value: bool)--> [Branch]
         ^ OrdersActor (Actor Ref)                                        | (False)
         | OrderType (Order Class Soft Ptr)                               +--> [Get OutErrorTags] -> [Print String (ToString)]
         | TargetData (FRTSOrderTargetData)
         ^ Index (int32)
         ^ OutErrorTags (FRTSOrderErrorTags - Output)
        ```

*   **Risks & Considerations:**
    *   Crucially relies on `TargetData.TargetTags` being correctly pre-populated by whatever system created `TargetData` (usually `URTSOrderHelper::CreateOrderTargetData`).
    *   Performance considerations apply if `URTSOrder::IsValidTarget` overrides are complex.

*   **Considerations for Modification:** Modifications are typically made in `URTSOrder` subclasses' `IsValidTarget` overrides or their `TagRequirements`.

---

**3. `IssueOrder`**

*   **Signature:**
    `UFUNCTION(Category = "RTS Order", BlueprintCallable)`
    `static void IssueOrder(AActor* OrderedActor, const FRTSOrderData& Order);`

*   **Purpose:** Issues a new primary order to the `OrderedActor`. This will clear its existing order queue and potentially cancel its current order. This is a convenience wrapper around `URTSOrderComponent::IssueOrder`.
*   **Parameters:**
    *   `OrderedActor` (`AActor*`): The actor to receive the order.
    *   `Order` (`const FRTSOrderData&`): The order data to issue.
*   **Internal Logic Highlights (`.cpp`):**
    1.  **Null Check:** Logs an error and returns if `OrderedActor` is invalid.
    2.  **Get OrderComponent:** Finds the `URTSOrderComponent` on `OrderedActor`.
    3.  **Null Check Component:** Logs an error and returns if no `URTSOrderComponent` is found.
    4.  **Delegate to Component:** Calls `OrderComponent->IssueOrder(Order)`.
*   **C++ Usage Example:**
    ```cpp
    // AActor* MyUnit = ...;
    // FRTSOrderData MoveOrder = ...; // Assume correctly populated
    // URTSOrderHelper::IssueOrder(MyUnit, MoveOrder);
    ```
*   **Blueprint Usage Example:**
    *   (ASCII Art for BP Node)
        ```
        [Exec Pin] ---> [IssueOrder (URTSOrderHelper)] --Exec-->
                        ^ OrderedActor (Actor Ref)
                        ^ Order (FRTSOrderData)
        ```
*   **Risks & Considerations:**
    *   **Server-Only Context:** Like `URTSOrderComponent::IssueOrder`, this function should ultimately only have its effect on the server. If called from a client in Blueprint, it won't directly issue the order across the network. The client should send an RPC to its PlayerController, and the PlayerController (on the server) would then call this or the component's method.
    *   This function clears the order queue. Use `EnqueueOrder` to add to the queue.

*   **Considerations for Modification:** This is a simple pass-through. Changes to order issuance logic would be in `URTSOrderComponent`.

---

**4. `ClearOrderQueue`**

*   **Signature:**
    `UFUNCTION(Category = "RTS Order", BlueprintCallable)`
    `static void ClearOrderQueue(AActor* OrderedActor);`
*   **Purpose:** Clears the order queue of the specified `OrderedActor`. Does not affect its current order. Wrapper for `URTSOrderComponent::ClearOrderQueue`.
*   **Parameters:**
    *   `OrderedActor` (`AActor*`): The actor whose order queue should be cleared.
*   **Internal Logic Highlights (`.cpp`):** Similar to `IssueOrder` - null checks, gets component, calls `OrderComponent->ClearOrderQueue()`.
*   **C++ Usage Example:**
    ```cpp
    // AActor* MyUnit = ...;
    // URTSOrderHelper::ClearOrderQueue(MyUnit);
    ```
*   **Blueprint Usage Example:**
    *   (ASCII Art for BP Node)
        ```
        [Exec Pin] ---> [ClearOrderQueue (URTSOrderHelper)] --Exec-->
                        ^ OrderedActor (Actor Ref)
        ```
*   **Risks & Considerations:** Server-only context for authoritative changes, similar to `IssueOrder`.

---

**5. `EnqueueOrder`**

*   **Signature:**
    `UFUNCTION(Category = "RTS Order", BlueprintCallable)`
    `static void EnqueueOrder(AActor* OrderedActor, const FRTSOrderData& Order);`
*   **Purpose:** Adds an order to the end of the `OrderedActor`'s order queue. Wrapper for `URTSOrderComponent::EnqueueOrder`.
*   **Parameters:**
    *   `OrderedActor` (`AActor*`): The actor to receive the enqueued order.
    *   `Order` (`const FRTSOrderData&`): The order data to enqueue.
*   **Internal Logic Highlights (`.cpp`):** Similar to `IssueOrder` - null checks, gets component, calls `OrderComponent->EnqueueOrder(Order)`.
*   **C++ Usage Example:**
    ```cpp
    // AActor* MyUnit = ...;
    // FRTSOrderData NextOrder = ...; 
    // URTSOrderHelper::EnqueueOrder(MyUnit, NextOrder);
    ```
*   **Blueprint Usage Example:**
    *   (ASCII Art for BP Node)
        ```
        [Exec Pin] ---> [EnqueueOrder (URTSOrderHelper)] --Exec-->
                        ^ OrderedActor (Actor Ref)
                        ^ Order (FRTSOrderData)
        ```
*   **Risks & Considerations:** Server-only context.

---

**6. `InsertOrderAfterCurrentOrder`**

*   **Signature:**
    `UFUNCTION(Category = "RTS Order", BlueprintCallable)`
    `static void InsertOrderAfterCurrentOrder(AActor* OrderedActor, const FRTSOrderData& Order);`
*   **Purpose:** Inserts an order at the beginning of the `OrderedActor`'s queue, to be executed immediately after its current order finishes. Wrapper for `URTSOrderComponent::InsertOrderAfterCurrentOrder`.
*   **Parameters:**
    *   `OrderedActor` (`AActor*`): The actor.
    *   `Order` (`const FRTSOrderData&`): The order to insert.
*   **Internal Logic Highlights (`.cpp`):** Similar to `IssueOrder` - null checks, gets component, calls `OrderComponent->InsertOrderAfterCurrentOrder(Order)`.
*   **C++ Usage Example:**
    ```cpp
    // AActor* MyUnit = ...;
    // FRTSOrderData PriorityNextOrder = ...;
    // URTSOrderHelper::InsertOrderAfterCurrentOrder(MyUnit, PriorityNextOrder);
    ```
*   **Blueprint Usage Example:**
    *   (ASCII Art for BP Node)
        ```
        [Exec Pin] ---> [InsertOrderAfterCurrentOrder (URTSOrderHelper)] --Exec-->
                        ^ OrderedActor (Actor Ref)
                        ^ Order (FRTSOrderData)
        ```
*   **Risks & Considerations:** Server-only context.

---

**7. `CheckOrder` (the one taking `FRTSOrderData`)**

*   **Signature:**
    `UFUNCTION(Category = "RTS Order", BlueprintPure)`
    `static FRTSOrderErrorTags CheckOrder(AActor* OrderedActor, const FRTSOrderData& Order);`

*   **Purpose:** Performs a comprehensive validation of an `FRTSOrderData` against an `OrderedActor`, checking both `CanObeyOrder` and `IsValidTarget` and returning any error tags. This is a convenience wrapper that combines the two main validation steps.
*   **Parameters:**
    *   `OrderedActor` (`AActor*`): The actor that would obey the order.
    *   `Order` (`const FRTSOrderData&`): The complete order data to check.
*   **Return Value:** `FRTSOrderErrorTags`: A struct containing any missing, blocking, or general error tags found during validation. If `IsEmpty()` is true on the return, the order is valid.

*   **Internal Logic Highlights (`.cpp`):**
    1.  Initializes an empty `FRTSOrderErrorTags OrderErrorTags`.
    2.  **Load Order Class:** Synchronously loads `Order.OrderType` if needed. Logs an error and returns if the class is null.
    3.  **CanObeyOrder Check:** Calls the static `URTSOrderHelper::CanObeyOrder(Order.OrderType.Get(), OrderedActor, Order.Index, &OrderErrorTags)`. If this returns `false`, the function returns the populated `OrderErrorTags` immediately.
    4.  **Create TargetData:** Calls `URTSOrderHelper::CreateOrderTargetData(OrderedActor, Order.Target, Order.Location)` to prepare the target information.
    5.  **IsValidTarget Check:** Calls the static `URTSOrderHelper::IsValidTarget(Order.OrderType.Get(), OrderedActor, TargetData, Order.Index, &OrderErrorTags)`.
    6.  Returns the (potentially further populated) `OrderErrorTags`.

*   **C++ Usage Example:**
    ```cpp
    AActor* MyUnit = GetMySelectedUnit();
    FRTSOrderData ProposedOrder = CreateProposedOrder(); // Assume this creates a valid FRTSOrderData
    
    FRTSOrderErrorTags ValidationResult = URTSOrderHelper::CheckOrder(MyUnit, ProposedOrder);
    if (ValidationResult.IsEmpty())
    {
        UE_LOG(LogRTS, Log, TEXT("Proposed order is valid."));
        // URTSOrderHelper::IssueOrder(MyUnit, ProposedOrder); // Or component call
    }
    else
    {
        UE_LOG(LogRTS, Warning, TEXT("Proposed order is invalid: %s"), *ValidationResult.ToString());
    }
    ```

*   **Blueprint Usage Example:**
    *   (ASCII Art for BP Node)
        ```
        [Event or Pure Call]
           |
           V
        [CheckOrder (URTSOrderHelper)] --(Return Value: FRTSOrderErrorTags)--> [Branch (IsEmpty on ErrorTags)]
         ^ OrderedActor (Actor Ref)                                                    | (False: Has Errors)
         ^ Order (FRTSOrderData)                                                       +--> [Handle Errors, e.g., PrintString(ToString)]
                                                                                       | (True: No Errors)
                                                                                       +--> [Issue Order Logic]
        ```

*   **Risks & Considerations:**
    *   This function is quite comprehensive and performs multiple checks, including class loading and two stages of tag/virtual function validation.
    *   It's excellent for pre-validation before attempting to issue an order, especially if detailed error feedback is needed.
    *   The `Order.OrderType` must be valid.

*   **Considerations for Modification:** This function orchestrates calls to other helper and `URTSOrder` methods. Changes to the validation pipeline would likely occur in those underlying functions.




**`URTSOrderHelper` - Part 2: Order Properties & Information Retrieval**

These functions primarily act as convenient Blueprint-accessible wrappers to get data from the Class Default Object (CDO) of a given `URTSOrder` subclass. They allow querying various characteristics of an order type without needing a direct reference to its CDO in Blueprints.

---

**1. `CreateIndividualTargetLocations`**

*   **Signature:**
    `UFUNCTION(Category = "RTS Order", BlueprintPure)`
    `static void CreateIndividualTargetLocations(TSoftClassPtr<URTSOrder> OrderType, const TArray<AActor*>& OrderedActors, const FRTSOrderTargetData& TargetData, TArray<FVector2D>& OutTargetLocations);`

*   **Purpose:**
    Calls the virtual `CreateIndividualTargetLocations` method on the CDO of the specified `OrderType`. This is used to calculate unique target locations for each actor in a group when a group order is issued (e.g., for formations).
*   **Parameters:**
    *   `OrderType` (`TSoftClassPtr<URTSOrder>`): The class of the order.
    *   `OrderedActors` (`const TArray<AActor*>&`): The group of actors for whom locations are being calculated.
    *   `TargetData` (`const FRTSOrderTargetData&`): The overall target for the group.
    *   `OutTargetLocations` (`TArray<FVector2D>&`): Output array to be filled with one `FVector2D` per actor in `OrderedActors`.
*   **Internal Logic Highlights (`.cpp`):**
    1.  Null check on `OrderType`.
    2.  Loads `OrderType` if not already loaded.
    3.  Gets the CDO of `OrderType`.
    4.  Calls `OrderCDO->CreateIndividualTargetLocations(OrderedActors, TargetData, OutTargetLocations)`.
    5.  **Error Check:** Logs an error if the number of `OutTargetLocations` does not match the number of `OrderedActors`, as this is a contract violation for the underlying virtual function.
*   **C++ Usage Example:**
    ```cpp
    // TSoftClassPtr<URTSOrder> MyMoveOrderClass = UMyMoveOrder::StaticClass();
    // TArray<AActor*> SelectedUnits = GetSelectedUnits();
    // FRTSOrderTargetData GroupTarget = URTSOrderHelper::CreateOrderTargetData(nullptr, nullptr, FVector2D(1000,1000)); // Simplified
    // TArray<FVector2D> IndividualDestinations;

    // URTSOrderHelper::CreateIndividualTargetLocations(MyMoveOrderClass, SelectedUnits, GroupTarget, IndividualDestinations);
    // Now IndividualDestinations contains a location for each unit.
    ```
*   **Blueprint Usage Example:**
    *   (ASCII Art for BP Node - Note: `BlueprintPure` functions with output references behave like non-pure nodes with exec pins)
        ```
        [Exec Pin] ---> [CreateIndividualTargetLocations (URTSOrderHelper)] --Exec--> [Use OutTargetLocations]
         ^ OrderType (Order Class Soft Ptr)                                |
         | OrderedActors (Array of Actor Ref)                              +-- OutTargetLocations (Array of Vector2D)
         ^ TargetData (FRTSOrderTargetData)
        ```
*   **Risks & Considerations:**
    *   The `OrderType`'s implementation of `CreateIndividualTargetLocations` is responsible for correctly populating `OutTargetLocations` with the same number of elements as `OrderedActors`. The helper logs an error if this contract is violated.
    *   See [`URTSMoveOrder`](#2.1.4.1-URTSMoveOrder) for an example implementation.

---

**2. Targeting & Behavior Tree Info**

*   **`GetTargetType`**
    *   **Signature:** `static ERTSTargetType GetTargetType(TSoftClassPtr<URTSOrder> OrderType, const AActor* OrderedActor = nullptr, int32 Index = -1);`
    *   **Purpose:** Gets the `ERTSTargetType` (None, Actor, Location, etc.) for the `OrderType`.
    *   **Internal Logic:** Loads `OrderType`, gets CDO, calls `OrderCDO->GetTargetType(OrderedActor, Index)`.
    *   **Blueprint Example Node:** `GetTargetType (URTSOrderHelper)`

*   **`IsCreatingIndividualTargetLocations`**
    *   **Signature:** `static bool IsCreatingIndividualTargetLocations(TSoftClassPtr<URTSOrder> OrderType, const AActor* OrderedActor, int32 Index);`
    *   **Purpose:** Checks if the `OrderType` is configured to generate individual target locations for groups.
    *   **Internal Logic:** Loads `OrderType`, gets CDO, calls `OrderCDO->IsCreatingIndividualTargetLocations(OrderedActor, Index)`.
    *   **Blueprint Example Node:** `IsCreatingIndividualTargetLocations (URTSOrderHelper)`

*   **`GetBehaviorTree` (for `URTSOrderWithBehavior`)**
    *   **Signature:** `static UBehaviorTree* GetBehaviorTree(TSoftClassPtr<URTSOrderWithBehavior> OrderType);`
    *   **Purpose:** Gets the `UBehaviorTree` asset associated with an `OrderType` that derives from `URTSOrderWithBehavior`.
    *   **Internal Logic:** Loads `OrderType`, gets CDO, calls `OrderCDO->GetBehaviorTree()`.
    *   **Blueprint Example Node:** `GetBehaviorTree (URTSOrderHelper)` (Note: `OrderType` input must be a class derived from `URTSOrderWithBehavior`).

*   **`ShouldRestartBehaviourTree` (for `URTSOrderWithBehavior`)**
    *   **Signature:** `static bool ShouldRestartBehaviourTree(TSoftClassPtr<URTSOrderWithBehavior> OrderType);`
    *   **Purpose:** Checks if the Behavior Tree for the given `OrderType` should be restarted if the same order is issued again.
    *   **Internal Logic:** Loads `OrderType`, gets CDO, calls `OrderCDO->ShouldRestartBehaviourTree()`.
    *   **Blueprint Example Node:** `ShouldRestartBehaviourTree (URTSOrderHelper)`

*   **C++ Usage (Conceptual for all above):**
    ```cpp
    // TSoftClassPtr<URTSOrder> SomeOrder = ...;
    // ERTSTargetType Target = URTSOrderHelper::GetTargetType(SomeOrder, MyActor);
    // bool bIndividualLocs = URTSOrderHelper::IsCreatingIndividualTargetLocations(SomeOrder, MyActor, -1);

    // TSoftClassPtr<URTSOrderWithBehavior> BtOrder = ...; // Cast or ensure it's the right type
    // UBehaviorTree* Tree = URTSOrderHelper::GetBehaviorTree(BtOrder);
    ```
*   **Risks & Considerations:** These functions rely on the `OrderType`'s CDO providing correct information. If `GetBehaviorTree` is called with an `OrderType` not derived from `URTSOrderWithBehavior`, it will likely fail or return null.

---

**3. UI Information Retrieval (Icons, Name, Description, Button Index)**

These functions all follow a similar pattern: they take `TSoftClassPtr<URTSOrder> OrderType`, `const AActor* OrderedActor = nullptr`, and `int32 Index = -1`, load the `OrderType`, get its CDO, and call the corresponding virtual function on the CDO (e.g., `OrderCDO->GetNormalIcon(OrderedActor, Index)`).

*   **`GetNormalIcon`** -> `UTexture2D*`
*   **`GetHoveredIcon`** -> `UTexture2D*`
*   **`GetPressedIcon`** -> `UTexture2D*`
*   **`GetDisabledIcon`** -> `UTexture2D*`
*   **`GetName`** -> `FText`
*   **`GetDescription`** -> `FText`
*   **`GetOrderButtonIndex`** -> `int32`
*   **`HasFixedOrderButtonIndex`** -> `bool`

*   **Purpose:** Provide easy Blueprint access to the UI-related information for an order.
*   **Blueprint Usage Example (for `GetName`):**
    *   (ASCII Art for BP Node)
        ```
        [GetOrderName (URTSOrderHelper)] --(Return Value: FText)--> [SetText (on UI Widget)]
         ^ OrderType (Order Class Soft Ptr)
         | OrderedActor (Actor Ref, optional)
         ^ Index (int32, optional)
        ```
*   **Risks & Considerations:** If the `URTSOrder` subclass (especially one not derived from `URTSOrderWithDisplay`) doesn't override these, they will return the base `URTSOrder` defaults (e.g., null for icons, class name for `GetName`).

---

**4. Order Configuration & Policy Retrieval**

Pattern: Load `OrderType`, get CDO, call corresponding CDO method.

*   **`GetOrderPreviewData`**
    *   **Signature:** `static FRTSOrderPreviewData GetOrderPreviewData(TSoftClassPtr<URTSOrder> OrderType, const AActor* OrderedActor = nullptr, int32 Index = -1);`
    *   **Returns:** `FRTSOrderPreviewData`.
    *   **Calls:** `OrderCDO->GetOrderPreviewData(OrderedActor, Index)`.

*   **`GetOrderTagRequirements`**
    *   **Signature:** `static void GetOrderTagRequirements(TSoftClassPtr<URTSOrder> OrderType, const AActor* OrderedActor, int32 Index, FRTSOrderTagRequirements& OutTagRequirements);`
    *   **Output Param:** `OutTagRequirements`.
    *   **Calls:** `OrderCDO->GetTagRequirements(OrderedActor, Index, OutTagRequirements)`.

*   **`GetOrderSuccessTagRequirements`**
    *   **Signature:** `static void GetOrderSuccessTagRequirements(TSoftClassPtr<URTSOrder> OrderType, const AActor* OrderedActor, int32 Index, FRTSOrderTagRequirements& OutTagRequirements);`
    *   **Output Param:** `OutTagRequirements`.
    *   **Calls:** `OrderCDO->GetSuccessTagRequirements(OrderedActor, Index, OutTagRequirements)`.

*   **`GetOrderRequiredRange`**
    *   **Signature:** `static float GetOrderRequiredRange(TSoftClassPtr<URTSOrder> OrderType, const AActor* OrderedActor, int32 Index = -1);`
    *   **Returns:** `float`.
    *   **Calls:** `OrderCDO->GetRequiredRange(OrderedActor, Index)`.

*   **`GetAcquisitionRadiusOverride`**
    *   **Signature:** `static bool GetAcquisitionRadiusOverride(TSoftClassPtr<URTSOrder> OrderType, const AActor* OrderedActor, int32 Index, float& OutAcquisitionRadius);`
    *   **Returns:** `bool` (if override exists). Output param `OutAcquisitionRadius`.
    *   **Calls:** `OrderCDO->GetAcquisitionRadiusOverride(OrderedActor, Index, OutAcquisitionRadius)`.

*   **`GetOrderProcessPolicy`**
    *   **Signature:** `static ERTSOrderProcessPolicy GetOrderProcessPolicy(TSoftClassPtr<URTSOrder> OrderType, const AActor* OrderedActor, int32 Index = -1);`
    *   **Returns:** `ERTSOrderProcessPolicy`.
    *   **Calls:** `OrderCDO->GetOrderProcessPolicy(OrderedActor, Index)`.

*   **`GetFallbackOrder`**
    *   **Signature:** `static TSoftClassPtr<URTSOrder> GetFallbackOrder(TSoftClassPtr<URTSOrder> OrderType);`
    *   **Returns:** `TSoftClassPtr<URTSOrder>`.
    *   **Calls:** `OrderCDO->GetFallbackOrder()`. (Note: `OrderedActor` and `Index` are not passed here as `URTSOrder::GetFallbackOrder` doesn't take them).

*   **`GetOrderGroupExecutionType`**
    *   **Signature:** `static ERTSOrderGroupExecutionType GetOrderGroupExecutionType(TSoftClassPtr<URTSOrder> OrderType, const AActor* OrderedActor, int32 Index = -1);`
    *   **Returns:** `ERTSOrderGroupExecutionType`.
    *   **Calls:** `OrderCDO->GetGroupExecutionType(OrderedActor, Index)`.

*   **`AreAutoOrdersAllowedDuringOrder`**
    *   **Signature:** `static bool AreAutoOrdersAllowedDuringOrder(TSoftClassPtr<URTSOrder> OrderType);`
    *   **Returns:** `bool`.
    *   **Calls:** `OrderCDO->AreAutoOrdersAllowedDuringOrder()`.

*   **`CanOrderBeConsideredAsSucceeded`**
    *   **Signature:** `static bool CanOrderBeConsideredAsSucceeded(TSoftClassPtr<URTSOrder> OrderType, const AActor* OrderedActor, const FRTSOrderTargetData& TargetData, int32 Index = -1);`
    *   **Returns:** `bool`.
    *   **Internal Logic:**
        1.  Null checks, loads `OrderType`, gets CDO.
        2.  Gets `AbilitySystemComponent` from `OrderedActor`.
        3.  Retrieves `SuccessTagRequirements` from the `OrderCDO`.
        4.  Gets `OrderedActorTags`.
        5.  Checks `OrderedActorTags` against `SuccessTagRequirements.SourceRequiredTags` and `SourceBlockedTags` using `URTSAbilitySystemHelper::DoesSatisfyTagRequirements`. If fails, returns `false`.
        6.  Checks `TargetData.TargetTags` against `SuccessTagRequirements.TargetRequiredTags` and `TargetBlockedTags`. If fails, returns `false`.
        7.  Returns `true`.
    *   **Significance:** This function doesn't call a virtual method on `URTSOrder` for this check; it directly implements the logic based on the `SuccessTagRequirements` property of the order.

*   **Blueprint Usage Example (for `GetOrderRequiredRange`):**
    *   (ASCII Art for BP Node)
        ```
        [GetOrderRequiredRange (URTSOrderHelper)] --(Return Value: float)--> [Use Range Value]
         ^ OrderType (Order Class Soft Ptr)
         | OrderedActor (Actor Ref)
         ^ Index (int32)
        ```

*   **Risks & Considerations:** These functions are generally safe wrappers. The main consideration is that they rely on the `URTSOrder` subclasses correctly implementing their virtual counterparts or setting their properties.






**`URTSOrderHelper` - Part 3: Auto-Orders & Target Finding**

These helper functions facilitate the logic behind units automatically choosing targets, deciding if an order is auto-castable, and managing auto-cast states.

---

**1. `GetOrderTargetScore`**

*   **Signature:**
    `UFUNCTION(Category = "RTS Order", BlueprintPure)`
    `static float GetOrderTargetScore(TSoftClassPtr<URTSOrder> OrderType, const AActor* OrderedActor, const FRTSOrderTargetData& TargetData, int32 Index = -1);`

*   **Purpose:**
    Retrieves a score indicating how suitable the `TargetData` is for the `OrderedActor` when considering the `OrderType`. Higher scores mean better targets. This is primarily used by AI for target prioritization.
*   **Parameters:**
    *   `OrderType` (`TSoftClassPtr<URTSOrder>`): The class of the order being considered.
    *   `OrderedActor` (`const AActor*`): The actor that would perform the order.
    *   `TargetData` (`const FRTSOrderTargetData&`): The potential target.
    *   `Index` (`int32`): Optional order index.
*   **Return Value:** `float`: The calculated score.
*   **Internal Logic Highlights (`.cpp`):**
    1.  Null check on `OrderedActor`. Returns `0.0f` (implicitly, though it's `false` in the code which is likely a typo and should be `0.0f` for a float return) if invalid.
    2.  Loads `OrderType` if not already loaded.
    3.  Gets the CDO of `OrderType`.
    4.  Calls `OrderCDO->GetTargetScore(OrderedActor, TargetData, Index)`.
*   **C++ Usage Example:**
    ```cpp
    // TSoftClassPtr<URTSOrder> MyAttackOrderClass = UMyAttackOrder::StaticClass();
    // AActor* MyUnit = GetMyUnit();
    // TArray<AActor*> PotentialTargets = FindNearbyEnemies();
    // AActor* BestTarget = nullptr;
    // float BestScore = -1.0f;

    // for (AActor* PotentialTarget : PotentialTargets)
    // {
    //     FRTSOrderTargetData TargetInfo = URTSOrderHelper::CreateOrderTargetData(MyUnit, PotentialTarget, FVector2D::ZeroVector);
    //     float CurrentScore = URTSOrderHelper::GetOrderTargetScore(MyAttackOrderClass, MyUnit, TargetInfo, -1);
    //     if (CurrentScore > BestScore)
    //     {
    //         BestScore = CurrentScore;
    //         BestTarget = PotentialTarget;
    //     }
    // }
    // if (BestTarget) { /* Issue attack order on BestTarget */ }
    ```
*   **Blueprint Usage Example:**
    *   (ASCII Art for BP Node)
        ```
        [GetOrderTargetScore (URTSOrderHelper)] --(Return Value: float)--> [Compare Scores / Store Best]
         ^ OrderType (Order Class Soft Ptr)
         | OrderedActor (Actor Ref)
         | TargetData (FRTSOrderTargetData)
         ^ Index (int32)
        ```
*   **Risks & Considerations:**
    *   The quality of target selection heavily depends on the implementation of `GetTargetScore` in the specific `URTSOrder` subclass (e.g., `URTSAttackOrder` has its own scoring logic).
    *   The base `URTSOrder::GetTargetScore` provides a distance-based score.

---

**2. Auto-Order State Retrieval**

These functions query properties of an `URTSOrder` CDO to determine its suitability and default state for automatic ordering by human or AI players. They all follow the pattern of loading `OrderType`, getting its CDO, and calling the respective virtual method.

*   **`IsHumanPlayerAutoOrder`**
    *   **Signature:** `static bool IsHumanPlayerAutoOrder(TSoftClassPtr<URTSOrder> OrderType, const AActor* OrderedActor, int32 Index = -1);`
    *   **Calls:** `OrderCDO->IsHumanPlayerAutoOrder(OrderedActor, Index)`.
    *   **Purpose:** Checks if the order is considered an auto-order for human players.

*   **`IsAIPlayerAutoOrder`**
    *   **Signature:** `static bool IsAIPlayerAutoOrder(TSoftClassPtr<URTSOrder> OrderType, const AActor* OrderedActor, int32 Index = -1);`
    *   **Calls:** `OrderCDO->IsAIPlayerAutoOrder(OrderedActor, Index)`.
    *   **Purpose:** Checks if the order is considered an auto-order for AI players.

*   **`GetHumanPlayerAutoOrderInitialState`**
    *   **Signature:** `static bool GetHumanPlayerAutoOrderInitialState(TSoftClassPtr<URTSOrder> OrderType, const AActor* OrderedActor, int32 Index = -1);`
    *   **Calls:** `OrderCDO->GetHumanPlayerAutoOrderInitialState(OrderedActor, Index)`.
    *   **Purpose:** Gets the default enabled/disabled state for a human player auto-order when the unit is created.

*   **Blueprint Usage Example (for `IsHumanPlayerAutoOrder`):**
    *   (ASCII Art for BP Node)
        ```
        [IsHumanPlayerAutoOrder (URTSOrderHelper)] --(Return Value: bool)--> [Branch / UI Logic]
         ^ OrderType (Order Class Soft Ptr)
         | OrderedActor (Actor Ref)
         ^ Index (int32)
        ```

*   **Risks & Considerations:** Relies on `URTSOrder` (or `URTSGameplayAbility` via `URTSUseAbilityOrder`) correctly implementing these flags.

---

**3. `SetHumanPlayerAutoOrderState`**

*   **Signature:**
    `UFUNCTION(Category = "RTS Order", BlueprintCallable)`
    `static void SetHumanPlayerAutoOrderState(const AActor* OrderedActor, const FRTSOrderTypeWithIndex& Order, bool bEnable);`

*   **Purpose:**
    Sets the enabled/disabled state for a specific auto-order (`Order`) on the `OrderedActor` for human players. This directly interacts with the `URTSAutoOrderComponent`.
*   **Parameters:**
    *   `OrderedActor` (`const AActor*`): The actor whose auto-order state is being changed.
    *   `Order` (`const FRTSOrderTypeWithIndex&`): The specific order (type and index) to toggle.
    *   `bEnable` (`bool`): The new state (`true` to enable, `false` to disable).
*   **Internal Logic Highlights (`.cpp`):**
    1.  Null check on `OrderedActor`.
    2.  Finds the `URTSAutoOrderComponent` on `OrderedActor`.
    3.  If the component is found, calls `AutoOrderComponent->SetHumanPlayerAutoOrderState(Order, bEnable)`.
    4.  Logs an error if no `URTSAutoOrderComponent` is found.
*   **C++ Usage Example:**
    ```cpp
    // Typically called from a PlayerController after an RPC from client UI
    // AActor* MyUnit = ...;
    // FRTSOrderTypeWithIndex HealAutoCast; 
    // HealAutoCast.OrderType = UMyUseHealAbilityOrder::StaticClass(); // Or the generic UseAbilityOrder
    // HealAutoCast.Index = HealAbilitySlotIndex;
    // bool bNewState = true; // Enable auto-cast

    // URTSOrderHelper::SetHumanPlayerAutoOrderState(MyUnit, HealAutoCast, bNewState);
    ```
*   **Blueprint Usage Example:**
    *   (ASCII Art for BP Node)
        ```
        [Exec Pin] ---> [SetHumanPlayerAutoOrderState (URTSOrderHelper)] --Exec-->
                        ^ OrderedActor (Actor Ref)
                        | Order (FRTSOrderTypeWithIndex)
                        ^ bEnable (bool)
        ```
*   **Risks & Considerations:**
    *   **Server-Only Context:** This function should be called on the server to authoritatively change the state. The `URTSAutoOrderComponent::HumanPlayerAutoOrderStates` array is replicated for client UI.
    *   The `OrderedActor` must have a `URTSAutoOrderComponent`.

---

**4. Target Acquisition & Finding**

These functions are utilities for finding potential targets for orders, especially auto-orders.

*   **`IsEnemyInAcquisitionRadius`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Order", BlueprintCallable)`
        `static bool IsEnemyInAcquisitionRadius(const AActor* OrderedActor, float AcquisitionRadius);`
    *   **Purpose:** Checks if there is at least one hostile actor within the specified `AcquisitionRadius` around the `OrderedActor`.
    *   **Internal Logic Highlights (`.cpp`):**
        1.  Null check on `OrderedActor`.
        2.  Calls the private static helper `FindActors(OrderedActor->GetWorld(), AcquisitionRadius, OrderedActor->GetActorLocation(), ActorsInRange)`.
            *   `FindActors` itself calls `FindActorsInChaseDistance` with `ChaseDistance` equal to `AcquisitionRadius` and `OrderedActorHomeLocation` as `OrderedActorLocation`.
            *   `FindActorsInChaseDistance` uses `UKismetSystemLibrary::CapsuleOverlapActors` (though the specific object types are commented out, implying they'd come from `URTSGameInstance` in a full project).
        3.  Iterates through `ActorsInRange`. For each valid actor:
            *   Gets relationship tags using `URTSAbilitySystemHelper::GetRelationshipTags(OrderedActor, Actor)`.
            *   If relationship tags contain `URTSGlobalTags::Relationship_Hostile()`, returns `true`.
        4.  If no hostile actor is found, returns `false`.
    *   **Blueprint Example Node:** `IsEnemyInAcquisitionRadius (URTSOrderHelper)`
    *   **Risks & Considerations:**
        *   Performance of `CapsuleOverlapActors` can be a concern if `AcquisitionRadius` is very large or many units call this frequently.
        *   The "detection channels" used by `CapsuleOverlapActors` are critical and need to be set up correctly in the project (commented out code suggests they'd be in `URTSGameInstance`).

*   **`FindTargetForOrder`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Order", BlueprintCallable)`
        `static AActor* FindTargetForOrder(TSoftClassPtr<URTSOrder> OrderType, const AActor* OrderedActor, int32 Index, float AcquisitionRadius, float& OutScore);`
    *   **Purpose:** Finds the best matching target actor for a given `OrderType` within `AcquisitionRadius`.
    *   **Internal Logic (`.cpp`):**
        1.  Calls `FindTargetForOrderInChaseDistance` with `ChaseDistance` set to `AcquisitionRadius` and `OrderedActorHomeLocation` set to `OrderedActor->GetActorLocation()`.
    *   **Returns:** Best `AActor*` target or `nullptr`. `OutScore` is the score of the found target.
    *   **Blueprint Example Node:** `FindTargetForOrder (URTSOrderHelper)` (Outputs Actor and Score)

*   **`FindTargetForOrderInChaseDistance`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Order", BlueprintCallable)`
        `static AActor* FindTargetForOrderInChaseDistance(TSoftClassPtr<URTSOrder> OrderType, const AActor* OrderedActor, int32 Index, float AcquisitionRadius, float ChaseDistance, const FVector& OrderedActorHomeLocation, float& OutScore);`
    *   **Purpose:** Finds the best target for `OrderType` within `AcquisitionRadius` of `OrderedActor` AND also within `ChaseDistance` of `OrderedActorHomeLocation`. This allows units to have a "leash" range from a guard point.
    *   **Internal Logic (`.cpp`):**
        1.  Null checks for `OrderedActor` and `OrderType`. Loads `OrderType`.
        2.  Gets the CDO of `OrderType`.
        3.  Checks if `OrderType`'s `TargetType` is `NONE` or `PASSIVE`. If so, returns `nullptr` (no actor target needed).
        4.  Calls the private static helper `FindActorsInChaseDistance` to get all actors within both radii.
        5.  If actors are found, calls the private static helper `FindBestScoredTargetForOrder` to pick the best one among them based on `OrderCDO->GetTargetScore()`.
        6.  Returns the best target and its score.
    *   **Blueprint Example Node:** `FindTargetForOrderInChaseDistance (URTSOrderHelper)`
    *   **Risks & Considerations:** Relies on correct `GetTargetScore` implementation in `OrderType`.

*   **`FindMostSuitableActorToObeyTheOrder`**
    *   **Signature:**
        `static AActor* FindMostSuitableActorToObeyTheOrder(TSoftClassPtr<URTSOrder> OrderType, const TArray<AActor*> OrderedActors, const FRTSOrderTargetData TargetData, int32 Index);`
        *(Note: This one is C++ only, not a UFUNCTION)*
    *   **Purpose:** From a list of `OrderedActors`, finds the one that is most suitable to obey the given `OrderType` against `TargetData`. Suitability is determined by `GetOrderTargetScore`.
    *   **Internal Logic (`.cpp`):**
        1.  Iterates through `OrderedActors`.
        2.  For each actor, checks if it `CanObeyOrder(OrderType, Actor, Index)`.
        3.  If it can, calculates its score using `GetOrderTargetScore(OrderType, Actor, TargetData, Index)`.
        4.  Keeps track of the actor with the highest score found so far.
        5.  Returns the highest-scoring actor.
    *   **Usage:** Useful when a group execution type is `ERTSOrderGroupExecutionType::MOST_SUITABLE_UNIT`.

*   **`FindActors` (Private C++ Static Helper)**
    *   **Signature:** `static void FindActors(UObject* WorldContextObject, float AcquisitionRadius, const FVector& OrderedActorLocation, TArray<AActor*>& OutActorsInRange);`
    *   **Purpose:** Helper to find all actors within a radius.
    *   **Internal Logic (`.cpp`):** Calls `FindActorsInChaseDistance` with `ChaseDistance = AcquisitionRadius` and `OrderedActorHomeLocation = OrderedActorLocation`.

*   **`FindActorsInChaseDistance` (Private C++ Static Helper)**
    *   **Signature:** `static void FindActorsInChaseDistance(UObject* WorldContextObject, float AcquisitionRadius, float ChaseDistance, const FVector& OrderedActorLocation, const FVector& OrderedActorHomeLocation, TArray<AActor*>& OutActorsInRange);`
    *   **Purpose:** Finds actors within `AcquisitionRadius` of `OrderedActorLocation` AND within `ChaseDistance` of `OrderedActorHomeLocation`.
    *   **Internal Logic (`.cpp`):**
        1.  Uses `UKismetSystemLibrary::CapsuleOverlapActors` to find actors within `AcquisitionRadius`. (Object types are commented out, implying game-specific setup).
        2.  Filters the results: for each found actor, checks if it's also within `ChaseDistance` of `OrderedActorHomeLocation`. Adds valid actors to `OutActorsInRange`.
    *   **Risks & Considerations:** Performance of overlap queries. The detection channels are critical.

*   **`FindBestScoredTargetForOrder` (Private C++ Static Helper)**
    *   **Signature:** `static AActor* FindBestScoredTargetForOrder(TSoftClassPtr<URTSOrder> OrderType, const AActor* OrderedActor, const TArray<AActor*> Targets, int32 Index, float& OutScore);`
    *   **Purpose:** Given a list of `Targets`, finds the one that yields the highest score for `OrderType` issued by `OrderedActor`.
    *   **Internal Logic (`.cpp`):**
        1.  Gets `OrderType`'s CDO and its `TagRequirements`.
        2.  Iterates through `Targets`:
            *   For each `Target`, gets its tags (including relationship tags to `OrderedActor`).
            *   Checks if these tags satisfy `OrderCDO.TagRequirements.TargetRequiredTags` and `TargetBlockedTags`.
            *   Checks if `OrderCDO->IsValidTarget(OrderedActor, TargetDataForThisTarget, Index)` is true.
            *   If all checks pass, calculates score using `OrderCDO->GetTargetScore()` and keeps track of the highest-scoring target.
        3.  Returns the best target and its score.






**`URTSOrderHelper` - Part 4: Miscellaneous Helpers**

This section covers utility functions in `URTSOrderHelper` that don't strictly fall into the previous categories but are essential for the functioning of the order system.

---

**1. `CreateOrderTargetData`**

*   **Signature:**
    `UFUNCTION(Category = "RTS Order", BlueprintPure)`
    `static FRTSOrderTargetData CreateOrderTargetData(const AActor* OrderedActor, AActor* TargetActor, const FVector2D& TargetLocation = FVector2D::ZeroVector);`

*   **Purpose:**
    A crucial utility function that constructs and populates an `FRTSOrderTargetData` struct. Its main responsibility, beyond setting the actor and location, is to correctly fill the `TargetData.TargetTags` member with both the `TargetActor`'s intrinsic tags and its relationship tags relative to the `OrderedActor`.
*   **Parameters:**
    *   `OrderedActor` (`const AActor*`): The actor that is issuing or considering the order. This is used to determine relationship tags (e.g., friendly, hostile) with the `TargetActor`.
    *   `TargetActor` (`AActor*`): The actor being targeted. Can be `nullptr` if the order targets only a location.
    *   `TargetLocation` (`const FVector2D&`): The 2D location being targeted. If `TargetActor` is provided, this is often (but not strictly required by this function) set to `TargetActor`'s location. Defaults to `FVector2D::ZeroVector`.
*   **Return Value:** `FRTSOrderTargetData`: A populated struct ready to be used for order validation or execution.

*   **Internal Logic Highlights (`.cpp`):**
    1.  **Initialization:** Creates an `FRTSOrderTargetData` instance.
    2.  Sets `TargetData.Actor = TargetActor;`
    3.  Sets `TargetData.Location = TargetLocation;`
    4.  **Tag Population (Key Step):**
        *   If `TargetActor` is `nullptr`, it returns the `TargetData` with empty tags (as there's no actor to get tags from).
        *   Otherwise, it declares `FGameplayTagContainer SourceTags` and `FGameplayTagContainer TargetTagsFromHelper`.
        *   Calls `URTSAbilitySystemHelper::GetSourceAndTargetTags(OrderedActor, TargetActor, SourceTags, TargetTagsFromHelper);`
            *   `URTSAbilitySystemHelper::GetSourceAndTargetTags` itself calls:
                *   `URTSAbilitySystemHelper::GetTags(SourceActor, OutSourceTags)` to get tags from `OrderedActor`.
                *   `URTSAbilitySystemHelper::GetTags(TargetActor, OutTargetTags)` to get tags from `TargetActor`.
                *   `URTSAbilitySystemHelper::GetRelationshipTags(SourceActor, TargetActor)` to get relationship tags (e.g., Friendly, Hostile, Visible).
                *   It then appends the relationship tags to both `OutSourceTags` and `OutTargetTags`.
        *   Finally, sets `TargetData.TargetTags = TargetTagsFromHelper;` (which now includes both intrinsic tags of `TargetActor` and relationship tags).
    5.  Returns the populated `TargetData`.

*   **C++ Usage Example:**
    ```cpp
    AActor* MyUnit = GetMyUnit();
    AActor* EnemyUnit = GetNearbyEnemy();
    FVector2D ClickLocation = GetPlayerClickLocation();

    // Target an enemy actor
    FRTSOrderTargetData ActorTargetInfo = URTSOrderHelper::CreateOrderTargetData(MyUnit, EnemyUnit, FVector2D(EnemyUnit->GetActorLocation())); 
    // ActorTargetInfo.TargetTags will now contain EnemyUnit's tags + relationship tags like Relationship.Hostile

    // Target a location
    FRTSOrderTargetData LocationTargetInfo = URTSOrderHelper::CreateOrderTargetData(MyUnit, nullptr, ClickLocation);
    // LocationTargetInfo.TargetTags will be empty
    ```

*   **Blueprint Usage Example:**
    *   (ASCII Art for BP Node)
        ```
        [CreateOrderTargetData (URTSOrderHelper)] --(Return Value: FRTSOrderTargetData)--> [Use TargetData for IsValidTarget, etc.]
         ^ OrderedActor (Actor Ref)
         | TargetActor (Actor Ref, can be None)
         ^ TargetLocation (Vector2D)
        ```

*   **Risks & Considerations:**
    *   **Correct `OrderedActor`:** Providing the correct `OrderedActor` is essential for accurate relationship tags. If `OrderedActor` is `nullptr` when `TargetActor` is not, relationship tags might be missing or default to neutral.
    *   **`TargetActor`'s Tags:** The richness of `TargetData.TargetTags` depends on the `TargetActor` having a properly configured `URTSAbilitySystemComponent` that manages its gameplay tags.
    *   **Performance:** This function involves several tag queries and container manipulations. While generally efficient for single calls, avoid calling it excessively in tight loops without caching the result if the actors and their relationship haven't changed.
    *   **Relationship to `FRTSOrderData`:** While `FRTSOrderData` stores the *intent* to target an actor/location, `FRTSOrderTargetData` is a more processed version used at the point of validation/execution, especially due to the pre-fetched `TargetTags`.

*   **Considerations for Modification:**
    *   If the way relationship tags are determined needs to change (e.g., more complex team affiliations beyond simple owner checks), the modifications would likely be in `URTSAbilitySystemHelper::GetRelationshipTags` or `URTSAbilitySystemHelper::GetSourceAndTargetTags`.
    *   If additional processed data about the target is frequently needed alongside tags, one might consider adding fields to `FRTSOrderTargetData`, but this should be done cautiously to avoid making the struct too heavy.







## 2.2. Gameplay Ability System (GAS) Integration

The ColonyOrders plugin deeply integrates with and extends Unreal Engine's Gameplay Ability System (GAS). GAS is a powerful and flexible framework for handling character abilities, attributes, status effects, and more. This section details the custom GAS components provided by the plugin.

---

**2.2.1 `URTSAbilitySystemComponent` (Custom ASC)**

**1. Overview & Purpose**

`URTSAbilitySystemComponent` (ASC) is a specialized version of Epic's `UAbilitySystemComponent`. It's designed to be the central GAS component for actors in an RTS game, managing not only standard GAS features (abilities, attributes, effects) but also RTS-specific concepts like unit levels, experience points (XP), ability points for upgrades, and providing a source for auto-orders. It also includes enhanced handling of gameplay tags and initialization tailored for RTS units.

*   **Primary Audience:** Developers and Designers.
    *   **Developers:** Will add this component to their character/unit base classes. They'll interact with it to grant abilities, apply effects, modify attributes programmatically, and potentially extend its C++ functionality for game-specific needs.
    *   **Designers:** Will configure this component extensively on unit Blueprints: setting initial abilities, unlockable abilities, level-up parameters, initial tags, and attribute base values (often via Curve Tables linked through `NameTag`). They will also interact with its Blueprint-exposed functions for UI and gameplay logic.

**2. Core Functionality & Features**

*   **Standard GAS Functionality:** Inherits all capabilities of `UAbilitySystemComponent` (managing gameplay abilities, attributes, effects, tags).
*   **Leveling & XP System:**
    *   Manages unit `Level`, `CollectedXP`, and `MaxLevel`.
    *   Calculates XP required for next level (`XPPerLevel` scalable float).
    *   Handles `AddCollectedXP` and `UpdateLevel` for progression.
    *   Grants `AbilityPoints` on level up.
*   **Ability Management:**
    *   Manages initial `Abilities`, `UnlockableAbilities`, and `ItemAbilities`.
    *   Allows increasing ability levels using `AbilityPoints`.
*   **Attribute Initialization:**
    *   Uses a `NameTag` property to look up initial attribute values from Curve Tables (via `FAttributeSetInitter`), allowing data-driven balancing.
    *   `InitializeAttributes` method handles this setup.
*   **Tag Management:**
    *   Manages `InitialTags` granted at `BeginPlay`.
    *   Handles `TagsToAddOnDeath` and `TagsToRemoveOnDeath`.
    *   Provides `AddTag(s)` / `RemoveTag(s)` wrappers with optional logging.
    *   Transfers specified tags from the owning `PlayerState` (`TransferPlayerTags`).
*   **Auto-Order Provider:** Implements the `IRTSAutoOrderProvider` interface, making its abilities available to the `URTSAutoOrderComponent` for auto-casting.
*   **Event Broadcasting:** Exposes delegates for XP changes (`OnCollectedXPChanged`), ability point changes (`OnAbilityPointsChanged`), and ability ending (`OnGameplayAbilityEnded`).
*   **Replication:** Replicates key state like `CollectedXP`, `AbilityPoints`, `ItemAbilities`, and `ActivatableAbilities` (with a specific replication condition for pawn ownership).

**Related Concepts/Classes:**

*   `UAbilitySystemComponent`: The base class from Epic's GAS.
*   `IRTSAutoOrderProvider`](#2.1.5.2-IRTSAutoOrderProvider): Interface it implements.
*   `URTSGameplayAbility`](#X.X.X-URTSGameplayAbility): The type of abilities it typically manages.
*   `URTSAttributeSet`](#X.X.X-URTSAttributeSet): Base for attribute sets it owns.
*   `URTSGlobalTags`](#X.X.X-URTSGlobalTags): Used for many default tags and conditions.
*   `FRTSOrderTypeWithIndex`](#X.X.X-FRTSOrderTypeWithIndex): Used when providing auto-orders.
*   `URTSUseAbilityOrder`](#2.1.4.4-URTSUseAbilityOrder): The `TSoftClassPtr` for this order type is stored here and used by `GetAutoOrders_Implementation`.

**3. Key Properties (Header File Analysis - `RTSAbilitySystemComponent.h`)**

*   **Private Properties (Configurable in Blueprints via `EditDefaultsOnly` or `EditAnywhere`):**

    *   `UPROPERTY(Category = RTS, BlueprintReadOnly, EditDefaultsOnly, meta = (AllowPrivateAccess = true))`
        `FGameplayTag NameTag;`
        *   **Purpose:** A crucial `FGameplayTag` that identifies the "type" or "archetype" of the unit (e.g., `Units.FactionA.Rifleman`, `Buildings.FactionB.Factory`). The last part of this tag (e.g., "Rifleman", "Factory") is used as the `GroupName` when initializing attributes from global data tables/curve tables via `FAttributeSetInitter`.
        *   **`EditDefaultsOnly`:** Set per unit archetype in its Blueprint defaults.
        *   **`BlueprintReadOnly`:** Readable in BP.
        *   **Considerations for Modification:** This is a fundamental link for data-driven attribute setup. Changing this tag directly impacts which attribute values are loaded for the unit.

    *   `UPROPERTY(Category = RTS, BlueprintReadOnly, EditAnywhere, meta = (AllowPrivateAccess = true))`
        `TArray<TSubclassOf<UGameplayAbility>> Abilities;`
        *   **Purpose:** An array of `UGameplayAbility` classes to be granted to the unit on `BeginPlay`. These are the unit's starting abilities.
        *   **`EditAnywhere`:** Can be configured per unit archetype in Blueprint defaults.
        *   **Considerations for Modification:** Designers populate this list with the abilities the unit should start with.

    *   `UPROPERTY(Category = RTS, BlueprintReadOnly, EditAnywhere, meta = (AllowPrivateAccess = true))`
        `TArray<TSubclassOf<UGameplayAbility>> UnlockableAbilities;`
        *   **Purpose:** An array of `UGameplayAbility` classes that the unit *can* learn or unlock later (e.g., through leveling up, research, or items), but doesn't start with. `IncreaseAbilityLevel` can grant abilities from this list if they aren't already granted.
        *   **`EditAnywhere`:** Configurable in Blueprint defaults.

    *   `UPROPERTY(Category = RTS, BlueprintReadOnly, EditAnywhere, meta = (AllowPrivateAccess = true))`
        `TMap<TSubclassOf<UGameplayAbility>, int32> InitialUnlockableAbilityLevels;`
        *   **Purpose:** Allows specifying an initial level for abilities listed in `UnlockableAbilities` (or even `Abilities`) if they should start at a level higher than 0 but are not part of the default "grant at level 1" set from `Abilities`. Used in `BeginPlay` to grant these with a specific starting level.
        *   **`EditAnywhere`:** Configurable in Blueprint defaults.

    *   `UPROPERTY(Category = RTS, BlueprintReadOnly, EditAnywhere, meta = (AllowPrivateAccess = true), replicated)`
        `TArray<TSubclassOf<UGameplayAbility>> ItemAbilities;`
        *   **Purpose:** Stores abilities granted to the unit via items (e.g., from a shop). This list is modified by `AddItemAbility` and `RemoveItemAbility`.
        *   **`replicated`:** This array is replicated so clients know about item-granted abilities.
        *   **`EditAnywhere`:** While editable, it's primarily managed at runtime. Setting defaults here might be for units that "start with an item effect."

    *   `UPROPERTY(Category = "RTS|Orders", BlueprintReadOnly, EditDefaultsOnly, meta = (AllowPrivateAccess = true))`
        `TSoftClassPtr<URTSUseAbilityOrder> UseAbilityOrder;`
        *   **Purpose:** A soft class pointer to the specific `URTSUseAbilityOrder` subclass that should be used when an ability from this component is issued as an auto-order (via `IRTSAutoOrderProvider::GetAutoOrders`). This `URTSUseAbilityOrder` subclass would typically have a generic "Use Ability" Behavior Tree assigned to it.
        *   **`EditDefaultsOnly`:** Set per unit archetype.
        *   **Considerations for Modification:** Essential for the auto-order system to function for abilities. Ensure this points to a `URTSUseAbilityOrder` Blueprint that has a valid Behavior Tree.

    *   `FGameplayTagContainer InitialStatusTags;` (Not a UPROPERTY, C++ internal)
        *   **Purpose:** Populated at runtime in `ApplyInitialTags` by querying attribute sets and components for their default status tags. These are then applied to the ASC.

    *   `UPROPERTY(Category = RTS, BlueprintReadOnly, EditAnywhere, meta = (AllowPrivateAccess = true))`
        `FGameplayTagContainer InitialTags;`
        *   **Purpose:** A set of arbitrary `FGameplayTag`s to be applied to this component on `BeginPlay`. Useful for defining inherent traits or classifications not covered by status or name tags.
        *   **`EditAnywhere`:** Configurable in Blueprint defaults.

    *   `UPROPERTY(Category = RTS, BlueprintReadOnly, EditAnywhere, meta = (AllowPrivateAccess = true))`
        `FGameplayTagContainer TagsToAddOnDeath;`
    *   `UPROPERTY(Category = RTS, BlueprintReadOnly, EditAnywhere, meta = (AllowPrivateAccess = true))`
        `FGameplayTagContainer TagsToRemoveOnDeath;`
        *   **Purpose:** Gameplay Tags to be added or removed respectively when the owning actor is killed (via the `OnKilled` callback). Useful for marking corpses, preventing further interactions, or triggering "on-death" passive effects that rely on tag presence/absence.
        *   **`EditAnywhere`:** Configurable in Blueprint defaults.

    *   `UPROPERTY(Category = "RTS|Level", BlueprintReadOnly, EditAnywhere, meta = (AllowPrivateAccess = true))`
        `bool bCanLevelUp;`
        *   **Purpose:** If `true`, this unit can gain XP and levels.
        *   **`EditAnywhere`:** Configurable in Blueprint defaults.

    *   `UPROPERTY(Category = "RTS|Level", BlueprintReadOnly, EditAnywhere, meta = (AllowPrivateAccess = true, ClampMin = 1, UIMin = 1, EditCondition = bCanLevelUp))`
        `int32 Level;`
        *   **Purpose:** The current level of the actor. Replicated indirectly via `CollectedXP`'s RepNotify which calls `UpdateLevel`.
        *   **`EditAnywhere` / `EditCondition = bCanLevelUp`:** Can be set as a starting level if `bCanLevelUp` is true.
        *   **Default Value:** 1.

    *   `UPROPERTY(Category = "RTS|Level", EditInstanceOnly, meta = (AllowPrivateAccess = true, ClampMin = 1, UIMin = 1, EditCondition = bCanLevelUp))`
        `int32 MaxLevel;`
        *   **Purpose:** The maximum level this unit can achieve.
        *   **`EditInstanceOnly`:** Typically set per unit placed in a level or on an archetype if it's fixed.
        *   **Default Value:** Not specified, likely needs to be set if `bCanLevelUp` is true.

    *   `UPROPERTY(Category = "RTS|Level", BlueprintReadOnly, EditAnywhere, meta = (AllowPrivateAccess = true, EditCondition = bCanLevelUp))`
        `FScalableFloat XPPerLevel;`
        *   **Purpose:** An `FScalableFloat` that defines how much XP is required to advance *from* the current level *to* the next. The "Level" input to this scalable float is the current level for which XP requirement is being fetched.
        *   **`EditAnywhere`:** Can be configured with a direct value or linked to a Curve Table row. Essential for defining the leveling curve.

    *   `UPROPERTY(Category = "RTS|Level", BlueprintReadOnly, EditAnywhere, meta = (AllowPrivateAccess = true, EditCondition = bCanLevelUp))`
        `TSubclassOf<UGameplayEffect> LevelUpEffect;`
        *   **Purpose:** A `UGameplayEffect` to apply to the unit when it levels up. This effect could grant attribute bonuses, heal the unit, or apply other status changes.
        *   **`EditAnywhere`:** Configurable in Blueprint defaults.

    *   `UPROPERTY(Category = "RTS|Level", BlueprintReadOnly, VisibleInstanceOnly, ReplicatedUsing = ReceivedCollectedXP, meta = (AllowPrivateAccess = true, ClampMin = 0, UIMin = 0))` <!-- Changed ClampMin to 0 -->
        `float CollectedXP;`
        *   **Purpose:** The total lifetime XP collected by the actor.
        *   **`ReplicatedUsing = ReceivedCollectedXP`:** When clients receive an update, `ReceivedCollectedXP` is called, which then updates the level and broadcasts `OnCollectedXPChanged`.
        *   **`VisibleInstanceOnly`:** Shows in editor instances but not editable in archetypes directly (managed by gameplay).
        *   **Default Value:** 0.

    *   `UPROPERTY(Category = "RTS|Level", BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))`
        `FScalableFloat GrantedXP;`
        *   **Purpose:** An `FScalableFloat` defining how much XP this unit grants to its killer. The "Level" input is this unit's current level.
        *   **`EditAnywhere` / `BlueprintReadWrite`:** Configurable.

    *   `UPROPERTY(Category = "RTS|Level", BlueprintReadOnly, EditAnywhere, ReplicatedUsing = ReceivedAbilityPoints, meta = (AllowPrivateAccess = true, ClampMin = 0, UIMin = 0, EditCondition = bCanLevelUp))` <!-- Changed ClampMin to 0 -->
        `int32 AbilityPoints;`
        *   **Purpose:** Points awarded on level up, used to upgrade or learn abilities via `IncreaseAbilityLevel`.
        *   **`ReplicatedUsing = ReceivedAbilityPoints`:** Calls `ReceivedAbilityPoints` on clients, which broadcasts `OnAbilityPointsChanged`.
        *   **Default Value:** 0.

    *   `UPROPERTY(Category = RTS, EditDefaultsOnly, meta = (Categories = Player))`
        `FGameplayTagContainer TransferPlayerTags;`
        *   **Purpose:** A list of Gameplay Tags that, if present on the owning `PlayerState`'s ASC, should be copied to this unit's ASC. Used in `RegisterTransferPlayerTags`.
        *   **`EditDefaultsOnly` / `meta = (Categories = Player)`:** Configurable in BP defaults, with a hint for "Player" category tags.

    *   `UPROPERTY(Category = RTS, EditDefaultsOnly, meta = (Categories = Player))`
        `TMap<FGameplayTag, TSubclassOf<UGameplayAbility>> IncreaseAbilityLevelPlayerTags;`
        *   **Purpose:** A map where if the owning `PlayerState`'s ASC has the `FGameplayTag` (key), the corresponding `TSubclassOf<UGameplayAbility>` (value) on this unit will have its level increased (without spending an ability point). Used for global player upgrades affecting units.
        *   **`EditDefaultsOnly`:** Configurable in BP defaults.

    *   `UPROPERTY(Category = RTS, EditDefaultsOnly)`
        `bool bLogTagChanges;`
        *   **Purpose:** If true, additions and removals of tags via `AddTags`/`RemoveTags` will be logged. Useful for debugging tag state.
        *   **Default Value:** `false`.

*   **Delegates:**

    *   `FRTSAbilitySystemComponentCollectedXPChangedSignature OnCollectedXPChanged;`
        *   **UPROPERTY Specifier:** `BlueprintAssignable`
        *   **Broadcasts:** When `CollectedXP` changes (server & client via RepNotify).
        *   **Parameters:** `float OldCollectedXP`, `float NewCollectedXP`.
        *   **Usage:** UI updates for XP bars, level-up notifications.

    *   `FRTSAbilitySystemComponentAbilityPointsChangedSignature OnAbilityPointsChanged;`
        *   **UPROPERTY Specifier:** `BlueprintAssignable`
        *   **Broadcasts:** When `AbilityPoints` changes (server & client via RepNotify).
        *   **Parameters:** `int32 OldAbilityPoints`, `int32 NewAbilityPoints`.
        *   **Usage:** UI updates for available skill points.

    *   `FRTSAbilitySystemComponentAbilityEndedSignature OnGameplayAbilityEnded;`
        *   **UPROPERTY Specifier:** `BlueprintAssignable`
        *   **Broadcasts:** When any `UGameplayAbility` executed by this ASC ends. Hooked into the base `UAbilitySystemComponent::OnAbilityEnded` delegate.
        *   **Parameters:** `TSubclassOf<UGameplayAbility> Ability`, `FGameplayAbilitySpecHandle AbilitySpecHandle`, `bool bWasCancelled`.
        *   **Usage:** Custom logic after an ability finishes (e.g., checking conditions, starting another action).

**4. Key Methods (Header & Source File Analysis - `RTSAbilitySystemComponent.h` & `RTSAbilitySystemComponent.cpp`)**

*   **Public Methods:**

    *   `FName GetName() const;` & `FGameplayTag GetNameTag() const;`
        *   **Purpose:** Getters for the unit's archetype name (derived from `NameTag`).
        *   **Internal Logic:** `GetName()` returns the last part of the `NameTag` FName.
        *   **BlueprintCallable (`GetName` is `BlueprintPure`):** Available in BP.

    *   `void SetLevel(int32 NewLevel);`
        *   **Purpose:** Authority-only function to directly set the unit's level.
        *   **Internal Logic:**
            1.  Clamps `NewLevel` against `MaxLevel`.
            2.  If level actually changes:
                *   Applies `LevelUpEffect` if `NewLevel > 1`.
                *   Calls `InitializeAttributes(NewLevel, false)` to update attribute values based on the new level.
                *   Grants ability points (`NewAbilityPoints - OldLevel`).
            3.  Updates the internal `Level` member.
        *   **Risks & Considerations:** Server-only. Bypasses normal XP gain. `UpdateLevel()` is the typical way levels change via XP.

    *   `int32 GetLevel() const;`
        *   **BlueprintCallable:** Returns current `Level`.

    *   `float GetGrantedXP() const;`
        *   **BlueprintPure:** Returns XP granted by this unit upon death, based on its current level and the `GrantedXP` scalable float.

    *   `float GetTotalXPRequiredForLevel(int32 InLevel) const;`
        *   **BlueprintPure:** Calculates total XP needed to reach `InLevel` by summing `XPPerLevel` values.
    *   `float GetCurrentLevelXP() const;`
        *   **BlueprintPure:** XP gained since the last level-up.
    *   `float GetNextLevelXP() const;`
        *   **BlueprintPure:** XP needed for the *next* level-up from the current level.
    *   `float GetCurrentLevelXPProgress() const;`
        *   **BlueprintPure:** Progress towards next level [0..1].

    *   `float GetCollectedXP() const;`
        *   **BlueprintPure:** Returns total `CollectedXP`.

    *   `void AddCollectedXP(float AdditionalCollectedXP);`
        *   **Purpose:** Adds XP to the unit. Server-only.
        *   **Internal Logic:**
            1.  Returns if `!bCanLevelUp` or at `MaxLevel`.
            2.  Increments `CollectedXP`.
            3.  Broadcasts `OnCollectedXPChanged`.
            4.  Calls `UpdateLevel()` to check for level-up.
        *   **BlueprintCallable:** Available in BP (should be called via server RPC).

    *   `bool CanLevelUp() const;`
        *   **BlueprintPure:** Returns `bCanLevelUp` property.

    *   `int32 GetAbilityPoints() const;`
        *   **BlueprintPure:** Returns current `AbilityPoints`.

    *   `void SetAbilityPoints(int32 NewAbilityPoints);` (C++ only)
        *   **Purpose:** Directly sets ability points. Server-only. Broadcasts `OnAbilityPointsChanged`.

    *   `void IncreaseAbilityLevel(TSubclassOf<UGameplayAbility> AbilityClass, bool bUseAbilityPoint = true);`
        *   **Purpose:** Increases the level of a given `AbilityClass` or grants it if it's in `UnlockableAbilities` and not yet learned.
        *   **Internal Logic:**
            1.  Validates `AbilityClass`.
            2.  Checks for available `AbilityPoints` if `bUseAbilityPoint` is true.
            3.  Finds the `FGameplayAbilitySpec` for `AbilityClass`.
            4.  Checks against `URTSAbilitySystemHelper::GetAbilityMaxLevel`.
            5.  Increments `Spec.Level`.
            6.  Notifies instanced abilities via `URTSGameplayAbility::OnAbilityLevelChanged`.
            7.  Decrements `AbilityPoints` if `bUseAbilityPoint`.
            8.  If ability not found in activatable specs but is in `UnlockableAbilities`, grants it at level 1.
        *   **BlueprintCallable:** Available in BP (should be server RPC'd).
        *   **C++ Usage Example:**
            ```cpp
            // URTSAbilitySystemComponent* MyASC = ...;
            // TSubclassOf<UGameplayAbility> FireballAbility = UMyFireballAbility::StaticClass();
            // if (MyASC->GetOwner()->HasAuthority() && MyASC->GetAbilityPoints() > 0)
            // {
            //     MyASC->IncreaseAbilityLevel(FireballAbility);
            // }
            ```

    *   `FGameplayTagContainer GetInitialTags() const;`
        *   **BlueprintPure:** Returns `InitialTags` property.

    *   `const TArray<TSubclassOf<UGameplayAbility>>& GetAbilities() const;` (C++ only)
    *   `const TArray<TSubclassOf<UGameplayAbility>>& GetItemAbilities() const;` (C++ only)
    *   `const TArray<TSubclassOf<UGameplayAbility>>& GetUnlockableAbilities() const;` (C++ only)
    *   `TArray<TSubclassOf<UGameplayAbility>> GetInitialAndUnlockableAbilities() const;`
        *   **BlueprintPure:** Returns a combined list of `Abilities` and `UnlockableAbilities`. Used by `URTSUseAbilityOrder` and `IRTSAutoOrderProvider`.

    *   `void AddItemAbility(TSubclassOf<UGameplayEffect> GameplayEffectClass);` (C++ only)
        *   **Purpose:** Applies a `GameplayEffect` (presumably from an item) and adds any abilities granted by that effect to the `ItemAbilities` array.
        *   **Internal Logic:** Applies the effect, then iterates through `GameplayEffect->GrantedAbilities` (or its new component equivalent in UE 5.5+) and adds them to `this->ItemAbilities`. Relies on `URTSAbilitySystemHelper::GetGrantedAbilitiesFromGameplayEffect` which handles the UE 5.5 changes.
    *   `void RemoveItemAbility(TSubclassOf<UGameplayEffect> GameplayEffectClass);` (C++ only)
        *   **Purpose:** Removes active effects matching the tags of `GameplayEffectClass`. It *doesn't* explicitly remove from `ItemAbilities` array here but relies on the effect removal to also revoke granted abilities if GAS is set up that way. (Note: The `ItemAbilities` array itself isn't cleaned up by this function directly, which might be an oversight if abilities are not automatically ungranted by effect removal in all cases).

    *   `void AddTag(const FGameplayTag Tag);` / `void AddTags(const FGameplayTagContainer& Tags);` (C++ only)
    *   `void RemoveTag(const FGameplayTag Tag);` / `void RemoveTags(const FGameplayTagContainer& Tags);` (C++ only)
        *   **Purpose:** Wrappers for `AddLooseGameplayTags`/`RemoveLooseGameplayTags` and `AddMinimalReplicationGameplayTags`/`RemoveMinimalReplicationGameplayTags`. Include optional logging if `bLogTagChanges` is true. Server-only.

    *   `float GetAbilityRange(TSubclassOf<URTSGameplayAbility> Ability);` (C++ only)
        *   **Purpose:** Gets the range of a specific `URTSGameplayAbility` by finding its spec and calling `AbilityCDO->GetRange()`.

*   **Interface Methods (`IRTSAutoOrderProvider`):**
    *   `void GetAutoOrders_Implementation(TArray<FRTSOrderTypeWithIndex>& OutAutoOrders);`
        *   **Purpose:** Provides a list of abilities that can be auto-cast.
        *   **Internal Logic:** Iterates `GetInitialAndUnlockableAbilities()`. For non-passive, non-basic-attack abilities, adds an `FRTSOrderTypeWithIndex` to `OutAutoOrders` using `this->UseAbilityOrder` as the `OrderType` and the ability's list index as the `Index`.
        *   **Significance:** This is how abilities become candidates for the `URTSAutoOrderComponent`.

*   **Protected/Virtual Methods (Overrides & Internal):**
    *   `virtual void BeginPlay() override;`
        *   **Internal Logic:** Calls `Super::BeginPlay()`. Registers `AbilityEndedCallback`. On server: `InitAbilityActorInfo`, `InitializeAttributes`, sets initial `CollectedXP`, grants `Abilities` and `InitialUnlockableAbilityLevels`, applies `InitialTags` and status tags. Sets up listeners for owner changes if `URTSOwnerComponent` exists.
    *   `virtual void OnGiveAbility(FGameplayAbilitySpec& AbilitySpec);`
    *   `virtual void OnRemoveAbility(FGameplayAbilitySpec& AbilitySpec);`
        *   **Purpose:** Standard GAS overrides. `OnGiveAbility` also attempts to activate abilities triggered by tag grants if the tag is already present.

*   **Private Methods:**
    *   `InitializeAttributes(int AttributeLevel, bool bInitialInit);`
        *   **Purpose:** Uses `UAbilitySystemGlobals::Get().GetAttributeSetInitter()->InitAttributeSetDefaults()` to initialize attributes from data tables based on `NameTag` and `AttributeLevel`. Calls `PostInitializeProperties` on `URTSAttributeSet` instances.
    *   `OnKilled(...)`, `OnAnyActorKilled(...)`: Callbacks for death/kill events to grant XP or apply death tags. (Partially commented out or relies on external event sources).
    *   `ApplyInitialTags()`: Aggregates tags from `NameTag`, `InitialTags`, and status tags from attribute sets/components.
    *   `OnOwnerChanged(...)`, `RegisterTransferPlayerTags(...)`, `UnregisterTransferPlayerTags(...)`, `OnOwningPlayerTagAddedOrRemoved(...)`: Handle copying tags from the owning `PlayerState` and reacting to changes.
    *   `FindAttributeSetStatusTags(...)`, `FindComponentStatusTags(...)`: Helper methods to collect default status tags for `InitialStatusTags`.
    *   `ReceivedCollectedXP(float OldCollectedXP)`, `ReceivedAbilityPoints(int32 OldAbilityPoints)`: RepNotifies.
    *   `NotifyOnCollectedXPChanged(...)`, `NotifyOnAbilityPointsChanged(...)`: Broadcast delegates.
    *   `UpdateLevel()`: Calculates new level based on `CollectedXP` and `XPPerLevel`, calls `SetLevel()`.
    *   `AbilityEndedCallback(...)`: Relays to `OnGameplayAbilityEnded` delegate.

**5. Integration & Usage Scenarios**

*   **Typical Setup:** Add `URTSAbilitySystemComponent` to your base unit/hero Blueprint or C++ class.
    *   Configure `NameTag` to link to attribute data tables.
    *   Populate `Abilities`, `UnlockableAbilities`, `InitialTags`.
    *   Set up leveling parameters (`bCanLevelUp`, `MaxLevel`, `XPPerLevel`, `LevelUpEffect`, `GrantedXP`).
    *   Assign `AttributeSet` classes in the "Default Starting Data" array in the ASC's details panel.
    *   Set `UseAbilityOrder` to a Blueprint subclass of `URTSUseAbilityOrder` that has a Behavior Tree for ability execution.
*   **Developer Workflow:**
    *   Create `URTSGameplayAbility` and `URTSAttributeSet` subclasses.
    *   Interact with ASC via C++ to grant/remove abilities/effects, modify attributes, add/remove tags.
*   **Designer Workflow:**
    *   Extensive configuration in Blueprint Defaults for unit archetypes.
    *   Balance attributes via Curve Tables linked by `NameTag`.
    *   Design abilities and their UI via `URTSGameplayAbility` assets.
    *   Use Blueprint-exposed functions to display XP, level, ability points in UI.
    *   Trigger `IncreaseAbilityLevel` from UI.

**6. What the User Needs to Implement/Provide**

*   **Configuration:** This component requires significant data configuration (abilities, tags, level curves, attribute tables).
*   **`URTSGameplayAbility` Subclasses:** For all abilities.
*   **`URTSAttributeSet` Subclasses:** For all groups of attributes.
*   **Curve Tables / Data Tables:** For attribute initialization if using `FAttributeSetInitter`.
*   **`URTSUseAbilityOrder` Blueprint:** A Blueprint child of `URTSUseAbilityOrder` with an assigned Behavior Tree, to be linked in the `UseAbilityOrder` property of this component.
*   **(Optional) `URTSOwnerComponent`, `URTSHealthComponent` (or equivalents):** For full functionality of some callbacks like `OnKilled`, `OnOwnerChanged`.
*   **System to call `AddCollectedXP`:** When units make kills or complete objectives.

**7. Advanced Topics & Considerations**

*   **Attribute Initialization Source:** The system relies on `FAttributeSetInitter` and Curve Tables keyed by `NameTag`'s last segment. This is a powerful data-driven approach but requires careful setup of these data assets.
*   **Replication of Abilities:** `ActivatableAbilities` are replicated using `COND_None` because pawns are often owned by PlayerControllers but possessed by AIControllers. This ensures abilities replicate correctly to the client controlling the pawn's owner.
*   **UE 5.5 GAS Changes:** The `AddItemAbility` and `RemoveItemAbility` methods show awareness of recent GAS changes where abilities granted by effects are now often handled by `UGameplayEffectComponent`s. The code uses reflection as a fallback for this.
*   **Performance:** Like any ASC, having many abilities, attributes, and active effects can have performance implications. Efficient ability design and careful use of periodic effects are important.
*   **Modularity of Tag Sources:** `FindAttributeSetStatusTags` and `FindComponentStatusTags` allow various parts of an actor to contribute to its initial set of status tags, promoting modular design.

This component is the heart of GAS integration for the plugin, providing a rich set of features tailored for RTS game entities.






**2.2.2 `URTSGameplayAbility` (Custom Abilities for RTS)**

**1. Overview & Purpose**

`URTSGameplayAbility` is an abstract base class that inherits from Epic's `UGameplayAbility`. It extends the standard gameplay ability with features and properties specifically tailored for RTS games. These include standardized ways to define targeting, UI display information (icons, names, descriptions), processing policies relevant to the order system, and RTS-specific auto-cast behaviors. All abilities created for a game using the ColonyOrders plugin should ideally derive from this class or a further specialization of it.

*   **Primary Audience:**
    *   **Developers:** Will create C++ subclasses of `URTSGameplayAbility` for complex abilities or new base ability types with shared logic.
    *   **Designers:** Will primarily create Blueprint child classes from C++ bases (or directly from `URTSGameplayAbility` if it's sufficiently functional for their needs). They will configure the extensive UPROPERTY members to define the ability's behavior, targeting, UI, and auto-cast settings in the Blueprint Class Defaults.

**2. Core Functionality & Features**

*   **RTS-Specific Targeting (`TargetType`):** Defines how the ability targets (None, Actor, Location, Direction, Passive) using the `ERTSTargetType` enum.
*   **UI Display Properties (`Icon`, `Name`, `Description`):** Provides standardized properties for UI representation.
*   **Leveling (`MaxLevel`):** Specifies the maximum level an ability can reach.
*   **Order System Integration:**
    *   `AbilityProcessPolicy`: Defines how the ability behaves when activated via an order (Instant, Cancellable, etc.), influencing `URTSUseAbilityOrder`'s process policy.
    *   `GroupExecutionType`: How the ability applies to selected groups if issued as an order.
    *   `ShouldShowAsOrderInUI`: Allows an ability to appear in the main command card like a standard order rather than in a separate ability panel.
*   **Auto-Cast Behavior (`bHumanPlayerAutoAbility`, `bAIPlayerAutoAbility`, etc.):** Flags to control if and how the ability can be used automatically by the `URTSAutoOrderComponent`.
*   **Range (`GetRange()`):** A `BlueprintImplementableEvent` (and virtual C++ function) to define the ability's effective range.
*   **Custom Target Scoring (`GetTargetScore()`):** Allows abilities to define their own logic for prioritizing targets when used automatically.
*   **Tag Requirements:** Inherits standard GAS tag mechanisms (`ActivationRequiredTags`, `SourceRequiredTags`, `TargetRequiredTags`, etc.) but also provides `GetOrderTagRequirements` to consolidate these for the `URTSUseAbilityOrder`.
*   **Preview Data (`AbilityPreviewData`):** Can specify an `FRTSOrderPreviewData` for visualizing targeting.

**Related Concepts/Classes:**

*   `UGameplayAbility`: The base class from Epic's GAS.
*   [`URTSAbilitySystemComponent`](#2.2.1-URTSAbilitySystemComponent): The component that grants, activates, and manages instances or CDOs of these abilities.
*   [`URTSUseAbilityOrder`](#2.1.4.4-URTSUseAbilityOrder): The order type that is typically used to activate these abilities via the order system. It queries many properties from `URTSGameplayAbility`.
*   [`ERTSAbilityProcessPolicy`](#X.X.X-ERTSAbilityProcessPolicy): Enum defining how the ability interacts with the order system's execution flow.
*   [`ERTSTargetType`](#X.X.X-ERTSTargetType): Enum defining how the ability targets.
*   [`FRTSOrderPreviewData`](#2.1.7.1-FRTSOrderPreviewData): Struct used for targeting previews.

**3. Key Properties (Header File Analysis - `RTSGameplayAbility.h`)**

*   **Protected Properties (Configurable in Blueprint Class Defaults of subclasses):**

    *   `UPROPERTY(Category = RTS, EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `ERTSAbilityProcessPolicy AbilityProcessPolicy;`
        *   **Purpose:** Defines how this ability, when activated as an order, should be processed by the `URTSOrderComponent`. See [`URTSUseAbilityOrder::GetOrderProcessPolicy`](#2.1.4.4-URTSUseAbilityOrder) for how this is translated.
        *   **`EditDefaultsOnly`:** Set in Blueprint defaults.
        *   **Default Value (`.cpp` constructor):** `ERTSAbilityProcessPolicy::INSTANT`.
        *   **Considerations:** Critical for how the ability interacts with the unit's action queue. E.g., a quick buff might be `INSTANT`, while a channeled spell might be `CAN_BE_CANCELED` or `CAN_NOT_BE_CANCELED`.

    *   `UPROPERTY(Category = RTS, EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `ERTSOrderGroupExecutionType GroupExecutionType;`
        *   **Purpose:** If this ability is issued as an order to a group of units, this defines which units in the group should execute it.
        *   **`EditDefaultsOnly`:** Set in Blueprint defaults.
        *   **Default Value (`.cpp` constructor):** `ERTSOrderGroupExecutionType::MOST_SUITABLE_UNIT`. This is a common default for many targeted abilities where you want the "best" unit (e.g., closest, highest level) to cast it.
        *   **Considerations:** A self-buff might be `ALL` or `SELECTED_SUB_GROUP`.

    *   `UPROPERTY(Category = "RTS Targeting", EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `ERTSTargetType TargetType;`
        *   **Purpose:** Specifies the kind of target this ability requires (None, Actor, Location, Direction, Passive).
        *   **`EditDefaultsOnly`:** Set in Blueprint defaults.
        *   **Default Value:** Not explicitly set in constructor, so defaults to the enum's first value (likely `ERTSTargetType::NONE`). Subclasses must configure this.

    *   `UPROPERTY(Category = "RTS Targeting", EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `FRTSOrderPreviewData AbilityPreviewData;`
        *   **Purpose:** Holds the configuration for visualizing this ability's targeting (e.g., AoE radius, range indicator). See [`FRTSOrderPreviewData`](#2.1.7.1-FRTSOrderPreviewData).
        *   **`EditDefaultsOnly`:** The `OrderPreviewClass` and `SnapMode` within this struct are configured in Blueprint defaults.

    *   `UPROPERTY(Category = "RTS Display", EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `UTexture2D* Icon;`
    *   `UPROPERTY(Category = "RTS Display", EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `FText Name;`
    *   `UPROPERTY(Category = "RTS Display", EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `FText Description;`
        *   **Purpose:** Standard UI display information.
        *   **`EditDefaultsOnly`:** Set in Blueprint defaults. `Description` can use placeholders for dynamic values (see `FormatDescription`).

    *   `UPROPERTY(Category = "RTS Level", BlueprintReadOnly, EditDefaultsOnly, meta = (AllowPrivateAccess = true))`
        `int32 MaxLevel;`
        *   **Purpose:** The maximum level this ability can be upgraded to.
        *   **`EditDefaultsOnly`:** Set in Blueprint defaults.
        *   **Default Value:** `0` or `1` usually, unless it's a multi-level ability.

    *   `UPROPERTY(Category = "RTS Display", EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `bool bShouldShowAsOrderInUI;`
        *   **Purpose:** If `true`, UI systems might display this ability in the primary command card alongside regular orders (like Move, Attack) instead of a separate ability-specific panel.
        *   **`EditDefaultsOnly`:** Set in Blueprint defaults.
        *   **Default Value:** `false`.

    *   `UPROPERTY(Category = "RTS Auto Abilities", EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true, EditCondition = bIsAcquisitionRadiusOverridden))`
        `float AcquisitionRadiusOverride;`
    *   `UPROPERTY(Category = "RTS Auto Abilities", EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `bool bIsAcquisitionRadiusOverridden;` // InlineEditConditionToggle caused Editor crashes here. (Comment in code)
        *   **Purpose:** Allows this ability, when used as an auto-order, to have a specific acquisition radius, overriding the unit's default.
        *   **`EditDefaultsOnly`:** Set in Blueprint defaults.
        *   **Default Value (`.cpp` constructor):** `AcquisitionRadiusOverride = 0.0f`, `bIsAcquisitionRadiusOverridden = false`.

    *   `UPROPERTY(Category = "RTS Auto Abilities", BlueprintReadOnly, EditDefaultsOnly, meta = (AllowPrivateAccess = true))`
        `bool bHumanPlayerAutoAbility;`
        *   **Purpose:** If `true`, this ability can be toggled for auto-casting by human players.
        *   **Default Value (`.cpp` constructor):** `false`.

    *   `UPROPERTY(Category = "RTS Auto Abilities", BlueprintReadOnly, EditAnywhere, meta = (AllowPrivateAccess = true))`
        `bool bHumanPlayerAutoAutoAbilityInitialState;`
        *   **Purpose:** If `bHumanPlayerAutoAbility` is true, this determines if the auto-cast is enabled by default for human players.
        *   **`EditAnywhere`:** Can be useful to have some abilities auto-cast by default.
        *   **Default Value (`.cpp` constructor):** `false`.

    *   `UPROPERTY(Category = "RTS Auto Abilities", BlueprintReadOnly, EditDefaultsOnly, meta = (AllowPrivateAccess = true))`
        `bool bAIPlayerAutoAbility;`
        *   **Purpose:** If `true`, AI players will consider this ability for automatic use.
        *   **Default Value (`.cpp` constructor):** `true`. (Commonly, AI makes more use of auto-abilities).

    *   `UPROPERTY(Category = "RTS Auto Abilities", EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `bool bIsTargetScoreOverridden;`
        *   **Purpose:** If `true`, this ability's `GetTargetScore_Implementation` will be called by `URTSUseAbilityOrder` when evaluating targets for auto-casting. If `false`, the `URTSUseAbilityOrder`'s base target scoring (or its parent's) will be used.
        *   **Default Value:** `false`.

**4. Key Methods (Header & Source File Analysis - `RTSGameplayAbility.h` & `RTSGameplayAbility.cpp`)**

*   **Public Getters (mostly BlueprintPure):**
    *   `ERTSTargetType GetTargetType() const;` (Returns `this->TargetType`)
    *   `ERTSOrderGroupExecutionType GetGroupExecutionType() const;` (Returns `this->GroupExecutionType`)
    *   `UTexture2D* GetIcon() const;` (Returns `this->Icon`)
    *   `FText GetName() const;` (Returns `this->Name`)
    *   `FText GetDescription(const AActor* Actor) const;` (Calls `FormatDescription` then returns the result)
    *   `int32 GetMaxLevel() const;` (Returns `this->MaxLevel`)
    *   `FRTSOrderPreviewData GetAbilityPreviewData() const;` (Returns `this->AbilityPreviewData`)
    *   `bool ShouldShowAsOrderInUI();` (Returns `this->bShouldShowAsOrderInUI`)
    *   `ERTSAbilityProcessPolicy GetAbilityProcessPolicy() const;` (Returns `this->AbilityProcessPolicy`)
    *   `FGameplayTagContainer GetActivationRequiredTags() const;` (Returns `this->ActivationRequiredTags` - inherited from `UGameplayAbility`)
    *   `bool IsHumanPlayerAutoAbility() const;` (Returns `this->bHumanPlayerAutoAbility`)
    *   `bool GetHumanPlayerAutoAutoAbilityInitialState() const;` (Returns `this->bHumanPlayerAutoAutoAbilityInitialState`)
    *   `bool IsAIPlayerAutoAbility() const;` (Returns `this->bAIPlayerAutoAbility`)
    *   `bool IsTargetScoreOverridden() const;` (Returns `this->bIsTargetScoreOverridden`)
    *   `bool AreAbilityTasksActive() const;` (Returns `ActiveTasks.Num() > 0` - useful for `CAN_BE_CANCELED_WHEN_NO_GAMEPLAY_TASK_IS_RUNNING` policy)

*   **Key Functional Public Methods:**

    *   `FGameplayTag GetEventTriggerTag() const;`
        *   **Purpose:** Finds the first Gameplay Event trigger tag associated with this ability. Many abilities are activated by sending a gameplay event with a matching tag.
        *   **Internal Logic (`.cpp`):** Iterates `this->AbilityTriggers` (inherited from `UGameplayAbility`) and returns the `TriggerTag` of the first entry where `TriggerSource == EGameplayAbilityTriggerSource::GameplayEvent`. Returns an empty tag if none found.
        *   **Usage:** Used by `URTSUseAbilityOrder` when constructing `FGameplayEventData` for instant abilities, and potentially by Behavior Trees to activate abilities.

    *   `const TArray<FAbilityTriggerData>& GetAbilityTriggerData() const;`
        *   **Purpose:** Returns all ability triggers. Useful if an ability has multiple event triggers or other trigger types.

    *   `UFUNCTION(Category = RTS, BlueprintNativeEvent)`
        `void FormatDescription(const FText& InDescription, const AActor* Actor, FText& OutDescription) const;`
        `virtual void FormatDescription_Implementation(const FText& InDescription, const AActor* Actor, FText& OutDescription) const;`
        *   **Purpose:** Allows the ability description (which can contain placeholders like `{DamageValue}` or `{Range}`) to be formatted with dynamic values based on the `Actor`'s current stats or ability level.
        *   **Default Behavior (`.cpp`):** `OutDescription = InDescription;` (No formatting by default).
        *   **C++ Override Example:**
            ```cpp
            // In MyFireballAbility.cpp
            // void UMyFireballAbility::FormatDescription_Implementation(const FText& InDescription, const AActor* Actor, FText& OutDescription) const
            // {
            //     FFormatNamedArguments Args;
            //     float Damage = CalculateDamage(Actor); // Hypothetical function
            //     Args.Add(TEXT("DamageValue"), FText::AsNumber(Damage));
            //     Args.Add(TEXT("ManaCost"), FText::AsNumber(GetManaCost()));
            //     OutDescription = FText::Format(InDescription, Args);
            // }
            ```
            *   The `InDescription` (from `this->Description` property) would be something like: "Deals {DamageValue} fire damage. Costs {ManaCost} mana."
        *   **Blueprint Override Example:**
            *   In a Blueprint child of `URTSGameplayAbility`, override `FormatDescription`. Use "Format Text" nodes with the `InDescription` and plug in calculated values.

    *   `UFUNCTION(Category = RTS, BlueprintNativeEvent)`
        `void OnAbilityLevelChanged(int32 NewLevel);`
        `virtual void OnAbilityLevelChanged_Implementation(int32 NewLevel);`
        *   **Purpose:** A callback for instanced abilities, invoked by `URTSAbilitySystemComponent::IncreaseAbilityLevel` when this ability's level changes. Allows instanced abilities to react (e.g., re-calculate internal values).
        *   **Default Behavior (`.cpp`):** Empty.
        *   **Considerations:** Only relevant for abilities with `InstancingPolicy` set to `InstancedPerActor` or `InstancedPerExecution`.

    *   `UFUNCTION(Category = RTS, BlueprintNativeEvent)`
        `void GetTargetScore(const AActor* OrderedActor, const FRTSOrderTargetData& TargetData, int32 Index, float& OutScore) const;`
        `virtual void GetTargetScore_Implementation(const AActor* OrderedActor, const FRTSOrderTargetData& TargetData, int32 Index, float& OutScore) const;`
        *   **Purpose:** Allows the ability itself to define how good a potential target is, overriding generic scoring. Called if `bIsTargetScoreOverridden` is true.
        *   **Default Behavior (`.cpp`):** `OutScore = 1.0f;`
        *   **Guidance for Overriding:** Implement custom logic. E.g., a healing spell scores friendly injured units higher. An anti-structure spell scores buildings higher.

    *   `void GetOrderTagRequirements(FRTSOrderTagRequirements& OutTagRequirements) const;` (C++ only)
        *   **Purpose:** Consolidates the ability's own `SourceRequiredTags`, `SourceBlockedTags`, `TargetRequiredTags`, `TargetBlockedTags` (inherited from `UGameplayAbility`) into an `FRTSOrderTagRequirements` struct. Used by `URTSUseAbilityOrder`.
        *   **Internal Logic (`.cpp`):** Appends the respective tag containers from `this` (the ability CDO) to the `OutTagRequirements` struct's members.

    *   `void GetSourceTagRequirements(FGameplayTagContainer& OutRequiredTags, FGameplayTagContainer& OutBlockedTags) const;` (C++ only)
    *   `void GetTargetTagRequirements(FGameplayTagContainer& OutRequiredTags, FGameplayTagContainer& OutBlockedTags) const;` (C++ only)
        *   **Purpose:** Getters for the ability's source/target tag requirements.

    *   `UFUNCTION(Category = RTS, BlueprintImplementableEvent, BlueprintPure)`
        `float GetRange() const;`
        `virtual float GetRange(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const;`
        *   **Purpose:** Defines the effective range of the ability. The `BlueprintImplementableEvent` version is primarily for Blueprint-only abilities to define range. The C++ virtual version allows C++ abilities to calculate range, potentially based on `ActorInfo` (e.g., caster's level or attributes). `URTSAbilitySystemComponent::GetAbilityRange` and `URTSUseAbilityOrder::GetRequiredRange` ultimately call this.
        *   **Default Behavior (`.cpp` for C++ virtual):** Calls the `BlueprintImplementableEvent` version `GetRange()`.
        *   **Blueprint Override Example:** In a Blueprint ability, implement `Event GetRange` and return a float value.
        *   **C++ Override Example:**
            ```cpp
            // In MyRangedCPPAbility.cpp
            // float UMyRangedCPPAbility::GetRange_Implementation(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const
            // {
            //     // Could get an attribute from ActorInfo->AbilitySystemComponent.Get()
            //     // float BaseRange = 1000.0f;
            //     // float BonusRangePerLevel = 50.0f * GetAbilityLevel(Handle, ActorInfo);
            //     // return BaseRange + BonusRangePerLevel;
            //     return Super::GetRange(Handle, ActorInfo, ActivationInfo); // Calls BP if not overridden further
            // }
            ```

    *   `bool GetAcquisitionRadiusOverride(float& OutAcquisitionRadius) const;` (C++ only)
        *   **Purpose:** Returns `bIsAcquisitionRadiusOverridden` and sets `OutAcquisitionRadius` to `this->AcquisitionRadiusOverride`.

    *   `virtual bool ShouldActivateAbility(ENetRole Role) const override;`
        *   **Default Behavior (`.cpp`):** Returns `true`. This override exists likely to ensure that client-side checks within `CanActivateAbility` (which calls `ShouldActivateAbility`) don't prematurely block an ability that will be server-activated. The actual authority is enforced by `NetExecutionPolicy`.

    *   `virtual void OnGameplayTaskActivated(UGameplayTask& Task) override;`
    *   `virtual void OnGameplayTaskDeactivated(UGameplayTask& Task) override;`
        *   **Default Behavior (`.cpp`):** Calls `Super`. `AreAbilityTasksActive()` uses `ActiveTasks.Num()`. These are standard GAS task tracking hooks.

**5. Integration & Usage Scenarios**

*   **Typical Setup:**
    1.  Create a C++ subclass of `URTSGameplayAbility` for a new type of ability if it needs unique C++ logic (e.g., custom targeting, complex effect application).
    2.  More commonly, create a Blueprint child class directly from `URTSGameplayAbility` (or a C++ child).
    3.  In the Blueprint Class Defaults, configure:
        *   `Ability Tags`: Tags this ability has.
        *   `Cancel Abilities with Tag` / `Block Abilities with Tag`: Standard GAS interaction.
        *   `Activation Required Tags` / `Activation Blocked Tags`: Tags the caster must/must not have.
        *   `Source Required Tags` / `Source Blocked Tags`: Tags caster must/must not have (often overlaps with Activation tags but used by order system too).
        *   `Target Required Tags` / `Target Blocked Tags`: Tags target must/must not have.
        *   `Cost Gameplay Effect Class`: GE for resource costs.
        *   `Cooldown Gameplay Effect Class`: GE for cooldown.
        *   `TargetType`, `Icon`, `Name`, `Description`, `MaxLevel`.
        *   `AbilityProcessPolicy`, `GroupExecutionType`.
        *   Auto-cast flags (`bHumanPlayerAutoAbility`, etc.).
        *   `AbilityPreviewData` (including its `OrderPreviewClass`).
    4.  Implement `Event ActivateAbility` (or `ActivateAbility` in C++) to define what the ability *does*.
    5.  Implement `Event GetRange` in Blueprint if it's a ranged ability.
*   **Activation:** Usually activated via `URTSUseAbilityOrder`, which means an `Index` is provided to the `URTSAbilitySystemComponent` to find and trigger this ability. Can also be triggered directly by gameplay events if `AbilityTriggers` are set up.
*   **Developer Workflow:** Define base C++ ability types. Implement core logic in `ActivateAbility`.
*   **Designer Workflow:** Heavy configuration in Blueprint Class Defaults. Implement Blueprint-specific activation logic. Design UI elements.

**6. What the User Needs to Implement/Provide**

*   **Blueprint/C++ Subclasses:** For every ability in the game.
*   **Configuration:** Populate all relevant properties (targeting, UI, cooldowns, costs, tags, auto-cast settings).
*   **Activation Logic:** Implement the `ActivateAbility` function (Blueprint event or C++ override) to apply gameplay effects, spawn actors, play montages, etc.
*   **Range Logic:** Implement `GetRange` if applicable.
*   **Associated Assets:** Icons, preview actors, gameplay effect classes for costs/cooldowns.

**7. Advanced Topics & Considerations**

*   **Instancing Policy:** Consider the `InstancingPolicy` (`InstancedPerActor`, `InstancedPerExecution`, `NonInstanced`). `OnAbilityLevelChanged` is most relevant for instanced abilities. Non-instanced abilities are lighter but have limitations on storing state.
*   **Complex Targeting:** For abilities with very complex targeting (e.g., custom shapes, multi-phase targeting), you might need custom `UGameplayAbilityTargetActor` subclasses and more C++ logic.
*   **Interaction with `URTSUseAbilityOrder`:** The close coupling is intentional. `URTSUseAbilityOrder` acts as a data-driven proxy for `URTSGameplayAbility` within the order system.
*   **Cost/Cooldown:** These are standard GAS mechanisms, configured by assigning `UGameplayEffect` classes to the `CostGameplayEffectClass` and `CooldownGameplayEffectClass` properties (inherited from `UGameplayAbility`). The effects themselves define the cost attribute/magnitude and cooldown duration/tags.





**2.2.3. Attributes & Effects**

Attributes represent the numerical stats of an actor (like health, mana, damage), while Gameplay Effects are the primary mechanism in GAS for modifying these attributes and applying status tags. The ColonyOrders plugin provides base classes and specific examples for these.

---

**2.2.3.1 `URTSAttributeSet` (Base Attribute Set)**

**1. Overview & Purpose**

`URTSAttributeSet` is an abstract base class that inherits from Epic's `UAttributeSet`. It serves as a common parent for all game-specific attribute sets in a project using the ColonyOrders plugin. While it doesn't add many new functionalities on its own, it establishes a pattern by providing virtual methods `PostInitializeProperties` and `GetDefaultStatusTags` for subclasses to implement.

*   **File:** `RTSAttributeSet.h`
*   **Primary Audience:** Developers. They will create C++ subclasses of `URTSAttributeSet` to define all the numerical attributes for their game entities (e.g., HealthSet, ManaSet, MovementSet, a specific `URTSAttackAttributeSet` is already provided).
*   **Designers:** Will interact with the *attributes defined within subclasses* of `URTSAttributeSet`. They will see these attributes in the `URTSAbilitySystemComponent` and can influence their base values through Curve Tables linked via the ASC's `NameTag`.

**2. Core Functionality & Features**

*   **Inherits `UAttributeSet`:** Provides the core GAS machinery for defining attributes (`FGameplayAttributeData`), handling attribute changes, and pre/post change hooks.
*   **Initialization Hook (`PostInitializeProperties`):** A virtual function called after attributes have been initialized by the `FAttributeSetInitter` (typically from data tables/curve tables). This allows subclasses to perform custom calculations or set derived values after base values are loaded.
*   **Status Tag Provision (`GetDefaultStatusTags`):** A virtual function allowing an attribute set to declare a list of `FGameplayTag`s that should be granted to the owner of the `URTSAbilitySystemComponent` simply by virtue of having this attribute set. This is useful for defining permanent status based on capabilities implied by the attributes (e.g., an AttackAttributeSet implies `Status.Permanent.CanAttack`).

**Related Concepts/Classes:**

*   `UAttributeSet`: The base class from Epic's GAS.
*   [`URTSAbilitySystemComponent`](#2.2.1-URTSAbilitySystemComponent): Owns instances of `URTSAttributeSet` subclasses. It calls `PostInitializeProperties` and `FindAttributeSetStatusTags` (which in turn calls `GetDefaultStatusTags`).
*   `FAttributeSetInitter`: The GAS global object responsible for initializing attribute sets from data tables.
*   `FGameplayAttributeData`: The struct that actually holds the BaseValue and CurrentValue for an attribute.

**3. Key Properties (Header File Analysis - `RTSAttributeSet.h`)**

`URTSAttributeSet` itself, being abstract and a base, does not declare specific `FGameplayAttributeData` UPROPERTY members. These are defined in its concrete subclasses (like `URTSAttackAttributeSet`).

**4. Key Methods (Header & Source File Analysis - `RTSAttributeSet.h` & `RTSAttributeSet.cpp`)**

*   **Public Virtual Methods (for subclasses to override):**

    *   `virtual void PostInitializeProperties(bool bInitialInit);`
        *   **Purpose:** Called by `URTSAbilitySystemComponent::InitializeAttributes` *after* the `FAttributeSetInitter` has set the default values for all attributes in this set.
        *   **Parameters:** `bInitialInit`: `true` if this is the very first initialization (e.g., on `BeginPlay`), `false` if it's a re-initialization (e.g., on level up).
        *   **Default Behavior (`.cpp`):** Empty.
        *   **C++ Override Example (Conceptual - in a hypothetical HealthSet):**
            ```cpp
            // In MyHealthSet.h
            // UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_MaxHealth)
            // FGameplayAttributeData MaxHealth;
            // UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_Health)
            // FGameplayAttributeData Health;

            // In MyHealthSet.cpp
            // void UMyHealthSet::PostInitializeProperties(bool bInitialInit)
            // {
            //     Super::PostInitializeProperties(bInitialInit); // Good practice
            //
            //     if (bInitialInit)
            //     {
            //         // Set current Health to MaxHealth on initial spawn
            //         SetHealth(GetMaxHealth()); 
            //     }
            //     // Or, if MaxHealth itself was just re-initialized due to level up,
            //     // you might want to adjust current Health proportionally or fully heal.
            // }
            ```
        *   **Guidance for Overriding:** Use this to set derived attributes or to initialize current values based on base/max values after they've been loaded from data. For example, setting current Health to MaxHealth, or current Mana to MaxMana.

    *   `virtual void GetDefaultStatusTags(FGameplayTagContainer& OutStatusTags) const;`
        *   **Purpose:** Allows this attribute set to contribute a set of default "permanent" status tags to its owning `URTSAbilitySystemComponent`. These tags represent inherent capabilities or states implied by the presence of this attribute set.
        *   **Parameters:** `FGameplayTagContainer& OutStatusTags`: An output parameter to which this function should add tags.
        *   **Default Behavior (`.cpp`):** Empty.
        *   **C++ Override Example (from `URTSAttackAttributeSet.cpp`):**
            ```cpp
            // void URTSAttackAttributeSet::GetDefaultStatusTags(FGameplayTagContainer& OutStatusTags) const
            // {
            //     Super::GetDefaultStatusTags(OutStatusTags); // Good practice
            //     OutStatusTags.AddTag(URTSGlobalTags::Status_Permanent_CanAttack());
            // }
            ```
        *   **Usage by System:** `URTSAbilitySystemComponent::FindAttributeSetStatusTags` iterates through its attribute sets, casts them to `URTSAttributeSet`, and calls this method to collect all such default tags. These are then applied to the ASC in `ApplyInitialTags`.
        *   **Guidance for Overriding:** Add tags that are intrinsically linked to the attributes defined in the set. For example, a "MovementSpeed" attribute set might add a `Status.Permanent.Movable` tag.

**5. Integration & Usage Scenarios**

*   **Creating New Attribute Sets:**
    1.  Create a new C++ class inheriting from `URTSAttributeSet`.
    2.  Inside this new class, define `FGameplayAttributeData` UPROPERTY members for each attribute (e.g., `Health`, `MaxHealth`, `Mana`, `MaxMana`, `AttackSpeed`, `Armor`).
    3.  Implement `OnRep_` functions for replicated attributes and the standard GAS attribute macros (`ATTRIBUTE_ACCESSORS`).
    4.  Override `PreAttributeBaseChange` / `PreAttributeChange` (from base `UAttributeSet`) for clamping or pre-modification logic.
    5.  Override `PostGameplayEffectExecute` (from base `UAttributeSet`) to react to attribute changes caused by effects (e.g., handling damage application when Health changes, checking for death).
    6.  Override `PostInitializeProperties` to set initial current values (e.g., Health = MaxHealth).
    7.  Override `GetDefaultStatusTags` to provide inherent status tags.
*   **Adding to `URTSAbilitySystemComponent`:** In the Blueprint defaults of an actor, add your new attribute set class to the `DefaultStartingData` array of its `URTSAbilitySystemComponent`.
*   **Data-Driven Initialization:** Create rows in your Attribute Curve Tables that match the `NameTag` of your units and the names of your attributes (e.g., "Rifleman.Health.MaxHealth") for `FAttributeSetInitter` to pick up.

**6. What the User Needs to Implement/Provide**

*   **Concrete Subclasses of `URTSAttributeSet`:** For every logical grouping of attributes in their game (e.g., a set for core combat stats, a set for resource capacities, etc.).
*   **Attribute Definitions:** Within these subclasses, define all necessary `FGameplayAttributeData` members.
*   **Replication and Accessor Logic:** Implement standard GAS replication and accessor patterns for these attributes.
*   **Curve Table Data:** Populate data tables/curve tables that the `FAttributeSetInitter` will use to set the base values of these attributes, keyed by unit `NameTag` and attribute names.

**7. Advanced Topics & Considerations**

*   **Attribute Design:** Carefully consider which stats are attributes. Attributes are generally good for numerical values that are frequently modified by gameplay effects and directly influence game mechanics.
*   **Derived Attributes:** Attributes whose values are calculated from other attributes (e.g., AttackSpeed being derived from Agility) can be handled in `PreAttributeBaseChange` of the source attribute or updated via Gameplay Effects. `PostInitializeProperties` can also be used for initial calculation.
*   **Clamping:** Use `PreAttributeBaseChange` (for base value changes) or `PreAttributeChange` (for current value changes, though often current value is just modified by effects) to clamp attribute values within valid ranges (e.g., Health >= 0).
*   **Meta Attributes:** Attributes that modify the application of other effects (e.g., "+% Fire Damage") are powerful but require careful setup in `UGameplayEffectExecutionCalculation` classes.

---

**2.2.3.2 `URTSAttackAttributeSet`**

**1. Overview & Purpose**

`URTSAttackAttributeSet` is a concrete class inheriting from `URTSAttributeSet`. It defines a standard set of attributes specifically related to an actor's attack capabilities, such as damage, cooldown, range, and an outgoing damage multiplier. This is a core attribute set for any unit that can engage in combat.

*   **File:** `RTSAttackAttributeSet.h`, `RTSAttackAttributeSet.cpp`
*   **Primary Audience:** Developers and Designers.
    *   **Developers:** Will ensure units that can attack have this attribute set added to their `URTSAbilitySystemComponent`. They might extend it if more attack-related attributes are needed.
    *   **Designers:** Will primarily influence the values of these attributes through Curve Tables linked via the unit's `NameTag` on its `URTSAbilitySystemComponent`. They will also reference these attributes in `URTSGameplayAbility` logic (e.g., an attack ability using the `Damage` attribute).

**2. Core Functionality & Features**

*   **Defines Key Attack Attributes:** `Damage`, `Cooldown`, `Range`, `OutgoingDamageMultiplier`.
*   **Replication:** All attributes are replicated with `REPNOTIFY_Always`.
*   **Attribute Accessors:** Provides static `Attribute()` getter functions (e.g., `DamageAttribute()`) for easy C++ access to the `FGameplayAttribute`.
*   **Clamping:** Implements `PreAttributeBaseChange` to clamp attribute values within reasonable maximums (e.g., `MAX_DAMAGE`).
*   **Initialization:** `PostInitializeProperties` sets `OutgoingDamageMultiplier` to a default of `1.0f`. The `ShouldInitProperty` override prevents `OutgoingDamageMultiplier` from being initialized by `FAttributeSetInitter` from data tables directly (as it's a multiplier, not a base stat typically defined per level).
*   **Default Status Tag:** `GetDefaultStatusTags` adds `URTSGlobalTags::Status_Permanent_CanAttack()`, indicating that any unit with this attribute set is inherently capable of attacking.

**3. Key Properties (Header File Analysis - `RTSAttackAttributeSet.h`)**

*   **Public Static Constants:**
    *   `static const float MAX_DAMAGE;` (10000.0f)
    *   `static const float MAX_COOLDOWN;` (10000.0f)
    *   `static const float MAX_RANGE;` (10000.0f)
    *   `static const float MAX_OUTGOING_DAMAGE_MULTIPLIER;` (10000.0f)
        *   **Purpose:** Define upper limits for attribute values, used in clamping.

*   **Public UPROPERTY Attributes (`FGameplayAttributeData` - actual struct is private to `UAttributeSet` but exposed via this macro):**

    *   `UPROPERTY(Category = "Attributes|Attack", BlueprintReadOnly, ReplicatedUsing = OnRep_Damage)`
        `float Damage;` (Underlying type is `FGameplayAttributeData`)
        *   **Purpose:** The base damage dealt by the unit's attack.
        *   **`BlueprintReadOnly`:** Value can be read in Blueprints.
        *   **`ReplicatedUsing = OnRep_Damage`:** Calls `OnRep_Damage` on clients when the value changes, which then calls `GAMEPLAYATTRIBUTE_REPNOTIFY` for standard GAS RepNotify behavior.

    *   `UPROPERTY(Category = "Attributes|Attack", BlueprintReadOnly, ReplicatedUsing = OnRep_Cooldown)`
        `float Cooldown;`
        *   **Purpose:** The time (in seconds) before the unit's attack can be used again.
        *   **Replication/BP:** Similar to `Damage`.

    *   `UPROPERTY(Category = "Attributes|Attack", BlueprintReadOnly, ReplicatedUsing = OnRep_Range)`
        `float Range;`
        *   **Purpose:** The maximum attack range of the unit (in cm).
        *   **Replication/BP:** Similar to `Damage`. Used by `URTSAttackOrder::GetRequiredRange`.

    *   `UPROPERTY(Category = "Attributes|Attack", BlueprintReadOnly, ReplicatedUsing = OnRep_OutgoingDamageMultiplier)`
        `float OutgoingDamageMultiplier;`
        *   **Purpose:** A multiplier applied to the damage this unit deals. Defaults to 1.0. Can be modified by buffs/debuffs to increase or decrease damage output.
        *   **Replication/BP:** Similar to `Damage`.

**4. Key Methods (Header & Source File Analysis - `RTSAttackAttributeSet.h` & `RTSAttackAttributeSet.cpp`)**

*   **`OnRep_...` Functions:**
    *   `void OnRep_Damage(const float OldDamage);` (and for Cooldown, Range, OutgoingDamageMultiplier)
        *   **Purpose:** Standard GAS replication notify functions.
        *   **Internal Logic:** Calls `GAMEPLAYATTRIBUTE_REPNOTIFY(URTSAttackAttributeSet, AttributeName, OldValue);`
        *   **Note on `const float OldValue`:** The file indicates these were changed from `FGameplayAttributeData` parameters to `const float`. This is a common and correct pattern for RepNotifies of attributes where you only need the old scalar value for the `GAMEPLAYATTRIBUTE_REPNOTIFY` macro.

*   **Static Attribute Getters:**
    *   `static const FGameplayAttribute& DamageAttribute();` (and for Cooldown, Range, OutgoingDamageMultiplier)
        *   **Purpose:** Provide a static way to get the `FGameplayAttribute` struct for each attribute. This is useful in C++ for creating Gameplay Effect Modifiers or directly querying/modifying attributes without string lookups.
        *   **C++ Usage Example:**
            ```cpp
            // In a GameplayEffectExecutionCalculation
            // FGameplayModifierEvaluatedData EvaluatedData(URTSAttackAttributeSet::DamageAttribute(), EGameplayModOp::Additive, DamageAmount);
            ```

*   **Overrides from `UAttributeSet` / `URTSAttributeSet`:**

    *   `virtual bool ShouldInitProperty(bool FirstInit, FProperty* PropertyToInit) const override;`
        *   **Purpose:** Controls whether `FAttributeSetInitter` should initialize a specific property from data tables.
        *   **Internal Logic (`.cpp`):** Returns `true` (allow init) for all properties *except* `OutgoingDamageMultiplierAttribute()`. This means Damage, Cooldown, and Range will be looked up in curve tables by the initter, but OutgoingDamageMultiplier will not (it defaults to 1.0 via `PostInitializeProperties`).
        *   **Considerations:** This is a design choice. If you wanted `OutgoingDamageMultiplier` to also be data-table driven per level, you'd remove this exclusion.

    *   `virtual void PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const override;`
        *   **Purpose:** Called before an attribute's *base value* is changed. Used here for clamping.
        *   **Internal Logic (`.cpp`):** Clamps `NewValue` for `Damage`, `Cooldown`, `Range`, and `OutgoingDamageMultiplier` against their respective `MAX_...` constants.

    *   `virtual void PostInitializeProperties(bool bInitialInit) override;`
        *   **Purpose:** Called after attributes are initialized by `FAttributeSetInitter`.
        *   **Internal Logic (`.cpp`):** If `bInitialInit` is true (first time setup), it sets `OutgoingDamageMultiplier = 1.0f;`.

    *   `virtual void GetDefaultStatusTags(FGameplayTagContainer& OutStatusTags) const override;`
        *   **Purpose:** Adds default status tags.
        *   **Internal Logic (`.cpp`):** Adds `URTSGlobalTags::Status_Permanent_CanAttack()` to `OutStatusTags`.

**5. Integration & Usage Scenarios**

*   **Adding to Units:** Any unit Blueprint that can attack should have `URTSAttackAttributeSet` added to the `DefaultStartingData` array of its `URTSAbilitySystemComponent`.
*   **Attribute Initialization:**
    *   In your global attribute Curve Table, create rows like:
        *   `MyUnitNameTag.Damage`
        *   `MyUnitNameTag.Cooldown`
        *   `MyUnitNameTag.Range`
    *   The `URTSAbilitySystemComponent::InitializeAttributes` will use these to set the initial base values for Damage, Cooldown, and Range based on the unit's `NameTag` and level.
*   **Gameplay Ability Usage:**
    *   An attack `URTSGameplayAbility` would read the `Damage` attribute to calculate damage dealt.
    *   It would use the `Cooldown` attribute to set its cooldown duration.
    *   The `URTSAttackOrder` uses the `Range` attribute to determine engagement distance.
*   **Gameplay Effect Modifiers:** Gameplay Effects can be created to temporarily or permanently modify these attributes (e.g., a buff increasing `Damage` or `OutgoingDamageMultiplier`, a debuff increasing `Cooldown`).

**6. What the User Needs to Implement/Provide**

*   **Curve Table Data:** Populate the attribute curve table(s) with values for `Damage`, `Cooldown`, and `Range` for each unit type that uses this attribute set.
*   **Integration with Abilities/Orders:** Ensure that attack abilities and orders correctly reference these attributes (e.g., `URTSAttackOrder` already uses `Range`).

**7. Advanced Topics & Considerations**

*   **Damage Calculation:** The `Damage` attribute is typically a *base* damage. The final damage dealt in an attack ability would often incorporate `OutgoingDamageMultiplier`, target armor/resistances (from another attribute set on the target), critical strike chance, etc. This complex calculation usually happens in a `UGameplayEffectExecutionCalculation`.
*   **Multiple Attack Types:** If a unit has multiple distinct attacks (e.g., a primary and a special AoE attack) with different damages, cooldowns, or ranges, you might:
    *   Create separate abilities for each, and each ability could apply its own unique modifiers or read from a more complex set of attributes.
    *   Add more attributes to `URTSAttackAttributeSet` (e.g., `SecondaryDamage`, `SecondaryCooldown`) if these are common.
    *   Use Gameplay Effect Set-by-Caller magnitudes where the ability specifies the damage value directly when applying the damage effect.
*   **Minimum Values:** The `PreAttributeBaseChange` currently only clamps maximums. Minimums (e.g., Cooldown > 0.1s) could also be added if necessary.

---

**2.2.3.3 `URTSGameplayEffect` (Custom Gameplay Effects with UI)**

**1. Overview & Purpose**

`URTSGameplayEffect` is an abstract base class inheriting from Epic's `UGameplayEffect`. Its primary purpose is to extend standard gameplay effects with UI-specific information: an icon, a display name, and a description. This allows the game to easily show visual feedback for active buffs, debuffs, or other status effects applied to units.

*   **File:** `RTSGameplayEffect.h`
*   **Primary Audience:**
    *   **Developers:** Will use this as the base class when creating C++ gameplay effects that need UI representation.
    *   **Designers:** Will create Blueprint child classes of `URTSGameplayEffect` (or C++ children) and configure their `Icon`, `EffectName`, and `EffectDescription` properties, in addition to standard `UGameplayEffect` properties like duration, modifiers, and granted tags.

**2. Core Functionality & Features**

*   **Inherits `UGameplayEffect`:** All standard GAS effect functionalities (duration, period, modifiers, granted abilities/tags, stacking, etc.).
*   **UI Display Properties:** Adds `Icon` (UTexture2D*), `EffectName` (FText), and `EffectDescription` (FText).
*   **Blueprint Accessors:** Provides `BlueprintPure` functions to get these UI properties.

**Related Concepts/Classes:**

*   `UGameplayEffect`: The base class from Epic's GAS.
*   [`URTSAbilitySystemComponent`](#2.2.1-URTSAbilitySystemComponent): Applies and manages instances of these effects.
*   [`URTSAbilitySystemHelper`](#X.X.X-URTSAbilitySystemHelper): Provides Blueprint functions to query active effects and their UI data (e.g., `GetEffectIcon`, `GetEffectName`).
*   UI Systems: Game-specific UI widgets would use these functions to display icons and tooltips for active effects on units.

**3. Key Properties (Header File Analysis - `RTSGameplayEffect.h`)**

*   **Private Properties (Configurable in Blueprint Class Defaults of subclasses):**

    *   `UPROPERTY(Category = RTS, EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `UTexture2D* Icon;`
        *   **Purpose:** The icon to display in the UI for this effect when it's active on a unit.
        *   **`EditDefaultsOnly`:** Set in the Class Defaults of a Blueprint subclass of `URTSGameplayEffect`.

    *   `UPROPERTY(Category = RTS, EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `FText EffectName;`
        *   **Purpose:** The display name of the effect (e.g., "Stunned", "Increased Attack Speed").
        *   **`EditDefaultsOnly`:** Set in Blueprint defaults. Supports localization.

    *   `UPROPERTY(Category = RTS, EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))`
        `FText EffectDescription;`
        *   **Purpose:** A tooltip or detailed description of what the effect does.
        *   **`EditDefaultsOnly`:** Set in Blueprint defaults. Supports localization. Can use placeholders similar to `URTSGameplayAbility::Description` if a formatting system is added or if it's formatted by the UI itself.

**4. Key Methods (Header & Source File Analysis - `RTSGameplayEffect.h` & `RTSGameplayEffect.cpp`)**

*   **Public `BlueprintPure` Getters:**

    *   `UFUNCTION(Category = RTS, BlueprintPure)`
        `UTexture2D* GetIcon();`
        *   **Returns:** `this->Icon`.

    *   `UFUNCTION(Category = RTS, BlueprintPure)`
        `FText GetEffectName();`
        *   **Returns:** `this->EffectName` (or the class name if `EffectName` is empty). This ensures there's always some name.

    *   `UFUNCTION(Category = RTS, BlueprintPure)`
        `FText GetEffectDescription();`
        *   **Returns:** `this->EffectDescription`.

*   **C++ Usage Example (Conceptual, if directly accessing CDO):**
    ```cpp
    // TSubclassOf<URTSGameplayEffect> MyBuffEffectClass = UMyBuffGE::StaticClass();
    // if (MyBuffEffectClass)
    // {
    //     URTSGameplayEffect* EffectCDO = MyBuffEffectClass->GetDefaultObject<URTSGameplayEffect>();
    //     UTexture2D* Icon = EffectCDO->GetIcon();
    //     FText Name = EffectCDO->GetEffectName();
    //     // Use in UI or for logging
    // }
    ```
*   **Blueprint Usage Example (via `URTSAbilitySystemHelper`):**
    Designers will more commonly get this data from an *active* effect on a unit using `URTSAbilitySystemHelper` functions:
    *   (ASCII Art for BP Node - using helper)
        ```
        [AbilitySystemComponent Ref] --(Effect Class To Query)--> [GetEffectIcon (RTSAbilitySystemHelper)] ---> (Return Value: Texture2D)
        ```
    This is because you usually want the icon/name of an effect *that is currently applied*, not just from any effect class CDO.

**5. Integration & Usage Scenarios**

*   **Creating New Effects:**
    1.  Create a new Blueprint class inheriting from `URTSGameplayEffect` (or a C++ child if complex C++ logic is needed for the effect beyond standard GE features).
    2.  In the Blueprint Class Defaults, configure:
        *   Standard `UGameplayEffect` properties: Duration, Period, Modifiers (to change attributes), Granted Tags, Stacking behavior, etc.
        *   RTS Display properties: `Icon`, `EffectName`, `EffectDescription`.
*   **Application:** `URTSGameplayAbility` activations typically apply these `URTSGameplayEffect`s to targets or self.
*   **UI Display:**
    *   A UI widget responsible for showing a unit's status effects would:
        1.  Get the unit's `URTSAbilitySystemComponent`.
        2.  Call `URTSAbilitySystemHelper::GetActiveGameplayEffectSpecs` or `GetActiveGameplayEffects`.
        3.  For each active effect spec/class, call `URTSAbilitySystemHelper::GetEffectIcon`, `GetEffectName`, `GetGameplayEffectSpecStackCount`, `GetActiveEffectTimeRemainingAndDuration` to populate UI elements (icons, tooltips, timers, stack counts).

**6. What the User Needs to Implement/Provide**

*   **Blueprint Child Classes:** For every gameplay effect that needs a distinct UI representation (buffs, debuffs, DoTs, stuns, etc.).
*   **Configuration:** Populate both standard `UGameplayEffect` fields (modifiers, duration, etc.) and the custom RTS display fields (`Icon`, `EffectName`, `EffectDescription`) in these Blueprint subclasses.
*   **Icon Assets:** Provide `UTexture2D` assets for the icons.
*   **UI System:** Implement UI widgets that can query and display information about active `URTSGameplayEffect`s on units.

**7. Advanced Topics & Considerations**

*   **Dynamic Descriptions:** Similar to `URTSGameplayAbility::FormatDescription`, if `EffectDescription` needs to show dynamic values (e.g., "Deals X damage per second," where X is based on the caster's stats or effect level), the `GetEffectDescription()` method could be made virtual and overridden in C++, or the UI system itself could handle formatting the text after retrieving base values from the effect spec.
*   **Stacking and UI:** How stacked effects are displayed (e.g., one icon with a stack count vs. multiple icons) is a UI design choice. The data (`GetGameplayEffectSpecStackCount`) is available.
*   **"Hidden" Effects:** Not all Gameplay Effects need UI representation. For purely mechanical effects (e.g., an internal tag application, a cost GE), one could still use `UGameplayEffect` as the base and simply not fill in the UI properties or not create a `URTSGameplayEffect` child.








**2.2.4 `URTSGlobalTags` (Centralized Tag Definitions)**

**1. Overview & Purpose**

`URTSGlobalTags` is a `UBlueprintFunctionLibrary` that serves as a centralized repository for commonly used `FGameplayTag` definitions within the ColonyOrders plugin and any game built upon it. Instead of hardcoding tag FNames as strings throughout the codebase or in Blueprints, this class provides static getter functions that return the actual `FGameplayTag` struct. This approach offers several benefits:

*   **Consistency:** Ensures everyone uses the exact same tag for the same concept, avoiding typos or slight variations that would lead to broken logic.
*   **Compile-Time Safety (in C++):** Using the function calls rather than raw FNames provides better compile-time checking.
*   **Discoverability:** Serves as a central place to see many of the important tags used by the system and their intended hierarchical structure.
*   **Refactorability:** If a tag name needs to change, it only needs to be changed in one place (the `FGameplayTag::RequestGameplayTag` call within `URTSGlobalTags.cpp`).

*   **File:** `RTSGlobalTags.h`, `RTSGlobalTags.cpp`
*   **Primary Audience:** Developers and Designers.
    *   **Developers (C++):** Will use these static functions directly in their C++ code when checking for, applying, or requiring specific tags (e.g., `OwnerASC->HasMatchingGameplayTag(URTSGlobalTags::Status_Changing_IsAlive())`).
    *   **Designers (Blueprint):** Will typically select these tags directly from the Gameplay Tag dropdown menus in the editor when configuring `FRTSOrderTagRequirements`, ability tag properties, or Gameplay Effect granted/blocked tags. The existence of this C++ class helps ensure these tags are registered with the `GameplayTagsManager` and readily available in the editor. They might also use Blueprint nodes that specifically take `FGameplayTag` inputs and can select these global tags.

**2. Core Functionality & Features**

*   **Static Tag Access:** Provides `static const FGameplayTag& FunctionName()` for each globally defined tag.
*   **Hierarchical Organization:** The tag names themselves (e.g., `Status.Permanent.CanAttack`) imply a hierarchy, which is good practice for managing large sets of tags.
*   **Categorization:** The header groups tags by their general purpose (Status, Relationship, Name, Resource, etc.), making them easier to understand.

**3. Key Properties (Header File Analysis - `RTSGlobalTags.h`)**

Being a `UBlueprintFunctionLibrary`, `URTSGlobalTags` does not have UPROPERTY members. Its "properties" are its static getter functions for tags.

**4. Key Methods (Gameplay Tags) (Header & Source File Analysis - `RTSGlobalTags.h` & `RTSGlobalTags.cpp`)**

Each function below is a `static const FGameplayTag& FunctionName()` that internally calls `FGameplayTag::RequestGameplayTag(FName(TEXT("Category.SubCategory.TagName")))` once and stores the result in a static variable to return by reference. This ensures the tag is only requested from the manager once.

---

**4.1. Permanent Status Tags (`Status.Permanent.*`)**

These tags represent inherent, generally unchanging characteristics or capabilities of an actor. They are often applied at `BeginPlay` by the `URTSAbilitySystemComponent` based on the actor's components or attribute sets and are rarely removed unless the actor fundamentally changes.

*   `static const FGameplayTag& Status_Permanent();`
    *   **Tag:** `Status.Permanent`
    *   **Purpose:** Parent tag for all permanent statuses. Useful for broad queries or categorization.
    *   **Example Usage:** Rarely used directly in logic, more for organization in the tag dictionary.

*   `static const FGameplayTag& Status_Permanent_CanAttack();`
    *   **Tag:** `Status.Permanent.CanAttack`
    *   **Purpose:** Indicates the actor has the fundamental capability to perform attacks.
    *   **Example Usage:**
        *   `URTSAttackAttributeSet` adds this tag via `GetDefaultStatusTags`.
        *   An "Attack" order (`URTSAttackOrder`) might have this in its `SourceRequiredTags` to ensure only units capable of attacking can receive the order.
        *   UI might check for this tag to decide whether to show attack-related commands.

*   `static const FGameplayTag& Status_Permanent_CanRepair();`
    *   **Tag:** `Status.Permanent.CanRepair`
    *   **Purpose:** Indicates the actor can repair friendly mechanical units or structures.
    *   **Example Usage:** A "Repair" order would require this on the source actor. A `RepairComponent` might grant this tag.

*   `static const FGameplayTag& Status_Permanent_CanConstruct();`
    *   **Tag:** `Status.Permanent.CanConstruct`
    *   **Purpose:** Indicates the actor can construct buildings.
    *   **Example Usage:** A "Build Structure" order would require this tag on the worker unit. A `BuilderComponent` might grant this tag.

*   `static const FGameplayTag& Status_Permanent_CanProduce();`
    *   **Tag:** `Status.Permanent.CanProduce`
    *   **Purpose:** Indicates the actor (typically a building like a Barracks or Factory) can produce/train other units.
    *   **Example Usage:** A "Train Unit" order would require this on the source building. A `ProductionComponent` might grant this.

*   `static const FGameplayTag& Status_Permanent_Movable();`
    *   **Tag:** `Status.Permanent.Movable`
    *   **Purpose:** Indicates the actor has the ability to move.
    *   **Example Usage:** A "Move" order might implicitly require this (though it often blocks on `Status.Changing.Immobilized` instead). A `MovementComponent`'s presence usually implies this.

*   `static const FGameplayTag& Status_Permanent_IsContainer();`
    *   **Tag:** `Status.Permanent.IsContainer`
    *   **Purpose:** Indicates the actor can hold/garrison other units (e.g., a Bunker, Transport).
    *   **Example Usage:** A "Load Units" order for a transport would target an actor with this tag. A `ContainerComponent` grants this.

*   `static const FGameplayTag& Status_Permanent_IsContainable();`
    *   **Tag:** `Status.Permanent.IsContainable`
    *   **Purpose:** Indicates the actor *can be* garrisoned inside a container.
    *   **Example Usage:** A "Load Units" order would require selected units to have this tag. Most infantry units would have this.

*   `static const FGameplayTag& Status_Permanent_CanGather();`
    *   **Tag:** `Status.Permanent.CanGather`
    *   **Purpose:** Indicates the actor can gather resources (e.g., a Worker, Harvester).
    *   **Example Usage:** A "Gather Resources" order would require this. A `GathererComponent` grants this. `URTSAttackOrder` uses this to de-prioritize attacking gatherers.

*   `static const FGameplayTag& Status_Permanent_IsResourceSource();`
    *   **Tag:** `Status.Permanent.IsResourceSource`
    *   **Purpose:** Indicates the actor is a source of resources that can be gathered from (e.g., a Gold Mine, Vespene Geyser).
    *   **Example Usage:** A "Gather Resources" order would target an actor with this tag. A `ResourceSourceComponent` grants this.

*   `static const FGameplayTag& Status_Permanent_IsResourceDrain();`
    *   **Tag:** `Status.Permanent.IsResourceDrain`
    *   **Purpose:** Indicates the actor is a drop-off point for gathered resources (e.g., a Town Hall, Refinery).
    *   **Example Usage:** A "Return Resources" order (part of a gather cycle) would target an actor with this tag.

*   `static const FGameplayTag& Status_Permanent_Summoned();`
    *   **Tag:** `Status.Permanent.Summoned`
    *   **Purpose:** Indicates the actor was created via a summoning ability/spell, often implying it might be temporary or have different properties.
    *   **Example Usage:** Some abilities might specifically target or ignore summoned units. Summoned units might not grant XP on death.

*   `static const FGameplayTag& Status_Permanent_HasInventory();`
    *   **Tag:** `Status.Permanent.HasInventory`
    *   **Purpose:** Indicates the actor has an inventory system for carrying items.
    *   **Example Usage:** An "Pick Up Item" order would require this. An `InventoryComponent` grants this.

*   `static const FGameplayTag& Status_Permanent_IsItem();`
    *   **Tag:** `Status.Permanent.IsItem`
    *   **Purpose:** Indicates the actor itself is a pick-up-able item in the game world.
    *   **Example Usage:** "Pick Up Item" order would target an actor with this tag.

*   `static const FGameplayTag& Status_Permanent_IsShop();`
    *   **Tag:** `Status.Permanent.IsShop`
    *   **Purpose:** Indicates the actor is a shop that buys/sells items.
    *   **Example Usage:** A "Buy Item" order would target a shop.

---

**4.2. Changing Status Tags (`Status.Changing.*`)**

These tags represent temporary states or conditions of an actor that can change frequently during gameplay due to abilities, effects, or actions.

*   `static const FGameplayTag& Status_Changing();`
    *   **Tag:** `Status.Changing`
    *   **Purpose:** Parent tag for all changing statuses.

*   `static const FGameplayTag& Status_Changing_IsAlive();`
    *   **Tag:** `Status.Changing.IsAlive`
    *   **Purpose:** Indicates the actor is currently alive and operational. Typically removed upon death.
    *   **Example Usage:**
        *   Most orders (Move, Attack, Use Ability) have this in their `SourceRequiredTags`.
        *   Attack orders have this in their `TargetRequiredTags`.
        *   Attack orders have this in their `SuccessTagRequirements.TargetBlockedTags` (meaning success if target is *not* alive).
        *   A "Revive" ability would target an actor *without* this tag but with a "Dead" tag.

*   `static const FGameplayTag& Status_Changing_Unarmed();`
    *   **Tag:** `Status.Changing.Unarmed`
    *   **Purpose:** Indicates the actor is currently unable to attack (e.g., a Disarm debuff).
    *   **Example Usage:** `URTSAttackOrder` has this in its `SourceBlockedTags`.

*   `static const FGameplayTag& Status_Changing_Silenced();`
    *   **Tag:** `Status.Changing.Silenced`
    *   **Purpose:** Indicates the actor is currently unable to use abilities/spells.
    *   **Example Usage:** `URTSUseAbilityOrder` (via the ability's tags) would be blocked if the source has this.

*   `static const FGameplayTag& Status_Changing_Stealthed();`
    *   **Tag:** `Status.Changing.Stealthed`
    *   **Purpose:** Indicates the actor is hidden from most enemies but can be revealed by detectors.
    *   **Example Usage:** Attacks might not be possible against stealthed units unless the attacker has `Status.Changing.Detector` or the target is revealed. Visibility checks use this.

*   `static const FGameplayTag& Status_Changing_Detector();`
    *   **Tag:** `Status.Changing.Detector`
    *   **Purpose:** Indicates the actor can reveal stealthed units.
    *   **Example Usage:** Modifies visibility checks for stealthed units.

*   `static const FGameplayTag& Status_Changing_Immobilized();`
    *   **Tag:** `Status.Changing.Immobilized`
    *   **Purpose:** Indicates the actor cannot move (e.g., Stunned, Rooted).
    *   **Example Usage:** `URTSMoveOrder` has this in its `SourceBlockedTags`.

*   `static const FGameplayTag& Status_Changing_IsMoving();`
    *   **Tag:** `Status.Changing.IsMoving`
    *   **Purpose:** Indicates the actor is currently executing a move command.
    *   **Example Usage:** Some channeled abilities might be canceled if the caster starts moving. UI might show a different cursor or animation.

*   `static const FGameplayTag& Status_Changing_Invulnerable();`
    *   **Tag:** `Status.Changing.Invulnerable`
    *   **Purpose:** Indicates the actor cannot take damage or be affected by hostile effects.
    *   **Example Usage:** `URTSAttackOrder` has this in its `TargetBlockedTags`.

*   `static const FGameplayTag& Status_Changing_Invisible();`
    *   **Tag:** `Status.Changing.Invisible`
    *   **Purpose:** Similar to stealthed, but implies true invisibility that cannot be detected (a stronger form of stealth).
    *   **Example Usage:** Affects targeting and visibility logic.

*   `static const FGameplayTag& Status_Changing_Injured();`
    *   **Tag:** `Status.Changing.Injured`
    *   **Purpose:** Indicates the actor's current health is below its maximum health.
    *   **Example Usage:** A "Heal" ability might require the target to have this tag. Auto-cast heal might look for this on self or allies.

*   `static const FGameplayTag& Status_Changing_UnderConstruction();`
    *   **Tag:** `Status.Changing.UnderConstruction`
    *   **Purpose:** Indicates a building is currently being constructed and is not yet operational.
    *   **Example Usage:** Units that are `UnderConstruction` might not be targetable by some attacks, cannot produce units, or might have reduced stats.

*   `static const FGameplayTag& Status_Changing_Constructing();`
    *   **Tag:** `Status.Changing.Constructing`
    *   **Purpose:** Indicates an actor (usually a worker) is *actively performing the act* of constructing something.
    *   **Example Usage:** `URTSMoveOrder`, `URTSAttackOrder`, `URTSStopOrder`, and `URTSUseAbilityOrder` (via `CanObeyOrder` in its C++ code) block the source actor if it has this tag. This prevents builders from easily abandoning construction tasks.

*   `static const FGameplayTag& Status_Changing_ContainerCanLoadAnyone();`
    *   **Tag:** `Status.Changing.ContainerCanLoadAnyone`
    *   **Purpose:** For a container unit, indicates it's currently open/able to load any valid unit, not just specific types for a task.
    *   **Example Usage:** A transport might have this tag active normally, but a Bunker undergoing construction might not.

*   `static const FGameplayTag& Status_Changing_ContainerCapacityReached();`
    *   **Tag:** `Status.Changing.ContainerCapacityReached`
    *   **Purpose:** Indicates a container unit is full.
    *   **Example Usage:** A "Load Unit" order would fail or be invalid if the target container has this tag.

*   `static const FGameplayTag& Status_Changing_GatherCapacityReached();`
    *   **Tag:** `Status.Changing.GatherCapacityReached`
    *   **Purpose:** Indicates a gatherer unit is carrying its maximum resource capacity.
    *   **Example Usage:** A gatherer with this tag should seek a resource drain instead of continuing to gather. (Note: Code comment says "Currently not set by gather component" - this implies a TODO).

*   `static const FGameplayTag& Status_Changing_IsCarryingResources();`
    *   **Tag:** `Status.Changing.IsCarryingResources`
    *   **Purpose:** Indicates a gatherer unit is currently holding some amount of resources. Often used with specific resource type tags (e.g., `Resource.Gold`) to know *what* it's carrying.
    *   **Example Usage:** Visual indication (worker carrying a sack), or logic for returning resources.

*   `static const FGameplayTag& Status_Changing_LastStand();`
    *   **Tag:** `Status.Changing.LastStand`
    *   **Purpose:** Indicates the actor cannot die from damage (health clamps at 1) for a duration. A "cheat death" mechanic.
    *   **Example Usage:** Applied by a powerful defensive ability. Damage calculations would need to check for this tag.

*   `static const FGameplayTag& Status_Changing_Sleeped();`
    *   **Tag:** `Status.Changing.Sleeped`
    *   **Purpose:** Indicates the actor is incapacitated (like a stun) but will wake up upon taking damage.
    *   **Example Usage:** A "Sleep" spell applies this. Damage calculations or effects would remove this tag. Abilities might have special interactions with sleeping targets.

*   `static const FGameplayTag& Status_Changing_DamageAbsorbing();`
    *   **Tag:** `Status.Changing.DamageAbsorbing`
    *   **Purpose:** Indicates the actor will not take damage (health loss is prevented), but enemies might still consider it a valid target and continue attacking (unlike "Invulnerable" which might make enemies retarget).
    *   **Example Usage:** A "Damage Absorb Shield" ability. Damage calculations check for this.

---

**4.3. Relationship Tags (`Relationship.*`)**

These tags describe the relationship between two actors (a source/observer and a target). They are dynamically determined by functions like `URTSAbilitySystemHelper::GetRelationshipTags`.

*   `static const FGameplayTag& Relationship();`
    *   **Tag:** `Relationship`
    *   **Purpose:** Parent tag for all relationship types.

*   `static const FGameplayTag& Relationship_Self();`
    *   **Tag:** `Relationship.Self`
    *   **Purpose:** Indicates the target actor is the same as the source/observer actor.
    *   **Example Usage:** Self-cast abilities would target `Self`. Some AoE effects might exclude `Self`.

*   `static const FGameplayTag& Relationship_Friendly();`
    *   **Tag:** `Relationship.Friendly`
    *   **Purpose:** Indicates the target actor is friendly/allied to the source actor.
    *   **Example Usage:** Healing abilities require `Relationship.Friendly`. Attack orders are blocked by `Relationship.Friendly`.

*   `static const FGameplayTag& Relationship_Hostile();`
    *   **Tag:** `Relationship.Hostile`
    *   **Purpose:** Indicates the target actor is hostile/enemy to the source actor.
    *   **Example Usage:** Attack orders require `Relationship.Hostile`. Some debuffs might only target hostiles.

*   `static const FGameplayTag& Relationship_Neutral();`
    *   **Tag:** `Relationship.Neutral`
    *   **Purpose:** Indicates the target actor is neutral to the source actor.
    *   **Example Usage:** Some abilities might affect neutrals differently, or attacks might be allowed/disallowed against neutrals based on game rules.

*   `static const FGameplayTag& Relationship_SamePlayer();`
    *   **Tag:** `Relationship.SamePlayer`
    *   **Purpose:** Indicates the target actor is controlled by the exact same player as the source actor (more specific than just "Friendly" which could include allied AI or other human players on the same team).
    *   **Example Usage:** Certain beneficial effects or commands might only be usable on one's own units.

*   `static const FGameplayTag& Relationship_Visible();`
    *   **Tag:** `Relationship.Visible`
    *   **Purpose:** Indicates the target actor is currently visible to the source actor (e.g., not in fog of war, not stealthed if source isn't a detector).
    *   **Example Usage:** Most targeted orders and abilities (like Attack) require the target to have `Relationship.Visible`.

---

**4.4. Name Tags (Actor Archetypes)**

These tags provide a broad classification for actor types, often mirroring a high-level archetype. `URTSAbilitySystemComponent::NameTag` often uses one of these as a root or is one of these.

*   `static const FGameplayTag& Building();`
    *   **Tag:** `Building`
    *   **Purpose:** Classifies the actor as a structure.
    *   **Example Usage:** Some weapons might deal bonus damage vs. `Building`. Certain abilities might only target `Building` or `Unit`. `URTSAttackOrder` de-prioritizes attacking buildings.

*   `static const FGameplayTag& Unit();`
    *   **Tag:** `Unit`
    *   **Purpose:** Classifies the actor as a mobile unit (non-building).
    *   **Example Usage:** Opposite of `Building` for targeting.

*   `static const FGameplayTag& Hero();`
    *   **Tag:** `Hero`
    *   **Purpose:** Classifies the actor as a special Hero unit, often with unique abilities and leveling.
    *   **Example Usage:** Some effects might only affect Heroes, or Heroes might be exempt from certain crowd control. XP granting might differ.

---

**4.5. Resource Tags (`Resource.*`)**

These tags identify specific types of game resources. Often used in conjunction with `Status.Changing.IsCarryingResources` on a gatherer.

*   `static const FGameplayTag& Resource_Gold();`
    *   **Tag:** `Resource.Gold`
    *   **Purpose:** Identifies the Gold resource type.
    *   **Example Usage:** A worker unit might have `Status.Changing.IsCarryingResources` and `Resource.Gold` if it's carrying gold. A gold mine (a `Status.Permanent.IsResourceSource`) might also have `Resource.Gold` to indicate what it provides.

*   `static const FGameplayTag& Resource_Lumber();`
    *   **Tag:** `Resource.Lumber`
    *   **Purpose:** Identifies the Lumber/Wood resource type.
    *   **Example Usage:** Similar to `Resource.Gold`.

---

**4.6. Ability Activation Failure Tags (`AbilityActivationFailure.*`)**

These tags are typically added to the `OutErrorTags.ErrorTags` field of `FRTSOrderErrorTags` or the `FailureTags` container in `UGameplayAbility::CanActivateAbility` to indicate specific reasons why an ability could not be activated. Many of these are standard GAS tags.

*   `static const FGameplayTag& AbilityActivationFailure_BlockedTag();` (Standard GAS: `Ability.ActivateFail.TagsBlocked`)
*   `static const FGameplayTag& AbilityActivationFailure_MissingTag();` (Standard GAS: `Ability.ActivateFail.TagsMissing`)
*   `static const FGameplayTag& AbilityActivationFailure_Cooldown();` (Standard GAS: `Ability.ActivateFail.Cooldown`)
*   `static const FGameplayTag& AbilityActivationFailure_Cost();` (Standard GAS: `Ability.ActivateFail.Cost`)
    *   **Purpose:** Standard GAS failure reasons. Used by `URTSUseAbilityOrder::CanObeyOrder` when it calls `Ability->CanActivateAbility()`. UI can check for these to give specific feedback (e.g., "Not enough mana," "Ability on cooldown").

*   `static const FGameplayTag& AbilityActivationFailure_NoTarget();`
    *   **Tag:** `AbilityActivationFailure.NoTarget` (Custom to this plugin)
    *   **Purpose:** Indicates an ability/order requiring a target was attempted without one.
    *   **Example Usage:** `URTSOrderHelper::K2_IsValidTargetWithErrorTags` adds this if an actor-targeting order has a null target actor.

---

**4.7. Event Tags (`Event.*`)**

These tags are used to trigger Gameplay Abilities via Gameplay Events.

*   `static const FGameplayTag& Event_OnHitEffect();`
    *   **Tag:** `Event.OnHitEffect`
    *   **Purpose:** An event tag sent when an attack (melee or ranged) successfully hits a target. Abilities can be set up to trigger from this event to apply "on-hit" effects (e.g., lifesteal, poison, slow).
    *   **Example Usage:** A melee attack ability, upon dealing damage, might send a Gameplay Event with this tag and payload containing attacker/target. A passive "Poison Attack" ability on the attacker listens for this event.

*   `static const FGameplayTag& Event_Attack();`
    *   **Tag:** `Event.Attack`
    *   **Purpose:**
        *   **Ability Trigger:** Can be used as an event tag to trigger abilities that represent a unit's basic attack (melee or ranged). When an "Attack" order is given, the Behavior Tree might ultimately send a Gameplay Event with this tag.
        *   **UI Classification:** `URTSAbilitySystemHelper::GetBasicAttackAbilities` looks for abilities triggered by this event to identify them. `URTSGameplayAbility::ShouldShowAsOrderInUI` (though not directly using this tag in its current code) might conceptually use this to hide basic attack abilities from an "ability panel" if they are already part of the main "Attack" command.
    *   **Example Usage:** A unit's "PerformMeleeSwing" ability is triggered by `Event.Attack`.

---

**4.8. Ability Tags (`Ability.*`)**

These tags are typically applied directly to `UGameplayAbility` assets (in their `AbilityTags` property) or to `UGameplayEffect` assets to classify them or control their interactions.

*   `static const FGameplayTag& Ability_OnHitEffect();`
    *   **Tag:** `Ability.OnHitEffect`
    *   **Purpose:** A tag applied to an ability asset itself if it *is* an on-hit effect (e.g., a passive "Poison Blades" ability). This helps categorize such abilities.
    *   **Example Usage:** Could be used by UI to show "On-Hit Effects" section, or by other game systems to query for such passives.

*   `static const FGameplayTag& Ability_Attack();`
    *   **Tag:** `Ability.Attack`
    *   **Purpose:** A tag applied to a Gameplay *Effect* (like a cooldown effect) that is specifically related to a unit's basic attack.
    *   **Example Usage:** The comment "defines the GameplayEffect as an Attack-Cooldown-Effect and will be removed when a AutoHit will be canceled before the AttackEffect is applied" suggests a system where if an attack animation starts (applying a short "attack in progress" cooldown/tag) but is then canceled (e.g., unit moves), effects with this tag might be specially cleaned up.

*   `static const FGameplayTag& Ability_Sleep();`
    *   **Tag:** `Ability.Sleep`
    *   **Purpose:** A tag applied to a Gameplay *Effect* that causes sleep.
    *   **Example Usage:** The sleep effect GE would have this tag. Damage logic might check if the target has an active effect with `Ability.Sleep` and, if so, remove the sleep effect.

---

**4.9. Classification Tags (`Classification.*`)**

These tags provide gameplay-relevant classifications for units, often related to their combat style.

*   `static const FGameplayTag& Classification_Melee();`
    *   **Tag:** `Classification.Melee`
    *   **Purpose:** Identifies the unit as primarily a melee attacker.
    *   **Example Usage:** Some abilities might only affect melee units, or AI might behave differently if it's a melee unit (e.g., needs to get much closer to attack).

*   `static const FGameplayTag& Classification_Ranged();`
    *   **Tag:** `Classification.Ranged`
    *   **Purpose:** Identifies the unit as primarily a ranged attacker.
    *   **Example Usage:** AI for ranged units would try to maintain attack range. Some effects might specifically counter ranged units.

---

**4.10. Container Tags (`Container.*`)**

These tags are more specific types of `Status.Permanent.IsContainer` tags, identifying the *purpose* of a container.

*   `static const FGameplayTag& Container_ConstructionSite();`
    *   **Tag:** `Container.ConstructionSite`
    *   **Purpose:** Identifies a container specifically used for constructing buildings (e.g., a SCV "garrisons" inside a building's construction site to build it).
    *   **Example Usage:** A "Continue Construction" order might target an actor with this tag.

*   `static const FGameplayTag& Container_ResourceSource();`
    *   **Tag:** `Container.ResourceSource`
    *   **Purpose:** Identifies a container that *is* a resource source and might have slots for gatherers (e.g., a Refinery with spots for gas harvesters).
    *   **Example Usage:** A gather order for Vespene Gas would target the Refinery (which has this tag) and units would "enter" it to gather.

---

**5. Integration & Usage Scenarios**

*   **Configuration:** Designers select these tags from dropdowns when configuring:
    *   `FRTSOrderTagRequirements` on `URTSOrder` Blueprints.
    *   `AbilityTags`, `ActivationRequiredTags`, etc., on `URTSGameplayAbility` Blueprints.
    *   Granted/Removed tags on `URTSGameplayEffect` Blueprints.
    *   `NameTag`, `InitialTags` on `URTSAbilitySystemComponent` in unit Blueprints.
*   **C++ Logic:** Developers use `URTSGlobalTags::TagName()` to get tag references for:
    *   Checking tags: `ASC->HasMatchingGameplayTag(URTSGlobalTags::Status_Changing_Stunned())`.
    *   Adding/Removing tags: `ASC->AddTag(URTSGlobalTags::Status_Changing_Stealthed())`.
    *   Building `FGameplayTagQuery`.
*   **Debugging:** The Unreal Engine Gameplay Debugger and console commands (`showdebug abilitysystem`, `gas.PrintDebug`) can display an actor's current tags, making these global definitions helpful for interpreting debug output.

**6. What the User Needs to Implement/Provide**

*   **Understanding:** Users (devs & designers) need to understand the intended meaning of each global tag to use them correctly in their game logic and asset configuration.
*   **Extension (Optional):** For game-specific concepts not covered, users can:
    *   Add new static tag functions to a game-specific `MyGameGlobalTags` class.
    *   Or, if a tag is very specific to one system, define it locally as a static `FGameplayTag` in that system's C++ file. `URTSGlobalTags` is for widely used, plugin-level or general RTS concepts.
*   **Registration:** Ensure any new tags created (e.g., in a `MyGameGlobalTags.cpp`) are registered with the `GameplayTagsManager`, typically by adding them to the `GameplayTagsList` in `Config/DefaultGameplayTags.ini`, or by ensuring `FGameplayTag::RequestGameplayTag` is called for them at least once during editor startup or game startup (which these static functions do).

**7. Advanced Topics & Considerations**

*   **Tag Dictionary:** The primary benefit comes when these tags are well-defined and consistently used. Maintain a clear "dictionary" (which this class effectively is) of what each tag means for the project.
*   **Granularity:** Decide on the right level of granularity. Too many overly specific tags can become unwieldy. Too few generic tags might not provide enough detail for complex logic.
*   **Source of Truth:** `URTSGlobalTags.cpp` is the source of truth for these tag FNames.
*   **`Config/DefaultGameplayTags.ini`:** While `RequestGameplayTag` will add tags to the manager if they don't exist, it's good practice to also list important project-wide tags in `DefaultGameplayTags.ini` so they are discoverable in the Gameplay Tag Editor even if no C++ code referencing them has run yet in an editor session.
    ```ini
    // In Config/DefaultGameplayTags.ini
    [/Script/GameplayTags.GameplayTagsList]
    GameplayTagList=(Tag="Status.Permanent.CanAttack", DevComment="Unit can perform attacks")
    GameplayTagList=(Tag="Status.Changing.IsAlive", DevComment="Unit is alive")
    ; ... and so on for all critical tags
    ```

This class is a simple but vital utility for maintaining a clean, consistent, and understandable Gameplay Tag ecosystem.





**2.2.5 `IRTSInitialStatusTagsProvider` Interface**

**1. Overview & Purpose**

`IRTSInitialStatusTagsProvider` is a C++ interface (`UInterface`) designed to allow various `UActorComponent`s (or `AActor`s themselves) to contribute to the initial set of "status" Gameplay Tags an actor receives when its `URTSAbilitySystemComponent` is initialized. This promotes a modular design where different components responsible for specific functionalities can declare the inherent status tags associated with those functionalities.

*   **File:** `RTSInitialStatusTagsProvider.h`
*   **Primary Audience:** Developers. They will implement this interface on `UActorComponent` subclasses (or `AActor` subclasses) that inherently define a certain status for the actor. For example, an `URTSAttackAttributeSet` implicitly means the actor "CanAttack," so it could (and does, conceptually through `URTSAttributeSet::GetDefaultStatusTags`) provide this tag.
*   **Designers:** Will not interact with this interface directly. They will add components (that implement this interface) to their actor Blueprints, and the tags provided by those components will automatically be part of the actor's initial state.

**2. Core Functionality & Features**

*   **Single Function Contract:** Defines one primary function: `GetInitialStatusTags`.
*   **Decentralized Status Tag Sourcing:** Allows various parts of an actor's composition to contribute to its initial set of status tags without the `URTSAbilitySystemComponent` needing explicit knowledge of all possible tag sources.
*   **Automatic Tag Application:** The `URTSAbilitySystemComponent` queries for this interface on its owner and its components during initialization (`ApplyInitialTags` via `FindComponentStatusTags`) and applies the collected tags.

**Related Concepts/Classes:**

*   [`URTSAbilitySystemComponent`](#2.2.1-URTSAbilitySystemComponent): The consumer of this interface. It calls `Execute_GetInitialStatusTags` to gather tags.
*   [`URTSAttributeSet`](#X.X.X-URTSAttributeSet): While `URTSAttributeSet` itself has `GetDefaultStatusTags` (which `URTSAbilitySystemComponent` calls via `FindAttributeSetStatusTags`), the *concept* is very similar. This interface generalizes that idea for any component.
*   `FGameplayTagContainer`: The data type used to pass around collections of tags.
*   [`URTSGlobalTags`](#2.2.4-URTSGlobalTags): Provides the actual tag definitions that implementations of this interface would return (e.g., `URTSGlobalTags::Status_Permanent_Movable()`).

**3. Key Properties (Header File Analysis - `RTSInitialStatusTagsProvider.h`)**

Interfaces do not have UPROPERTY members. They define function signatures.

**4. Key Methods (Header File Analysis - `RTSInitialStatusTagsProvider.h`)**

*   **Public Method (to be implemented by concrete classes):**

    *   `UFUNCTION(Category = RTS, BlueprintNativeEvent, BlueprintCallable)`
        `void GetInitialStatusTags(FGameplayTagContainer& OutTagContainer);`
        *   **Purpose:** This function is called by `URTSAbilitySystemComponent::FindComponentStatusTags` on any component (or the actor itself if it implements the interface) that implements `IRTSInitialStatusTagsProvider`. The implementer's responsibility is to add any inherent, initial status tags it provides to the `OutTagContainer`. These tags usually represent permanent capabilities or classifications.
        *   **Parameters:**
            *   `FGameplayTagContainer& OutTagContainer`: An output parameter (passed by reference). The implementing function should *add* its tags to this container (it should not clear existing tags in it, as multiple providers might contribute).
        *   **`BlueprintNativeEvent`:** Allows a C++ base implementation (`_Implementation`) and Blueprint overrides.
        *   **`BlueprintCallable`:** Allows calling from Blueprints (though its primary use is C++ internal to the ASC).
        *   **C++ Implementation Example (Conceptual - for a hypothetical `MyMovementCapabilitiesComponent`):**
            ```cpp
            // In MyMovementCapabilitiesComponent.h
            // #include "AbilitySystem/RTSInitialStatusTagsProvider.h"
            // #include "MyMovementCapabilitiesComponent.generated.h"
            //
            // UCLASS()
            // class UMyMovementCapabilitiesComponent : public UActorComponent, public IRTSInitialStatusTagsProvider
            // {
            //     GENERATED_BODY()
            // public:
            //     // IRTSInitialStatusTagsProvider interface
            //     virtual void GetInitialStatusTags_Implementation(FGameplayTagContainer& OutTagContainer) override;
            //
            //     UPROPERTY(EditDefaultsOnly, Category="Movement")
            //     bool bCanFly = false;
            //
            //     UPROPERTY(EditDefaultsOnly, Category="Movement")
            //     bool bCanSwim = false;
            // };

            // In MyMovementCapabilitiesComponent.cpp
            // #include "AbilitySystem/RTSGlobalTags.h" // Assuming tags like Status.Permanent.CanFly exist
            //
            // void UMyMovementCapabilitiesComponent::GetInitialStatusTags_Implementation(FGameplayTagContainer& OutTagContainer)
            // {
            //     // Super::GetInitialStatusTags_Implementation(OutTagContainer); // If inheriting from a class that also implements it
            //
            //     OutTagContainer.AddTag(URTSGlobalTags::Status_Permanent_Movable()); // All actors with this component are movable
            //
            //     if (bCanFly)
            //     {
            //         // static FGameplayTag FlyTag = FGameplayTag::RequestGameplayTag("Status.Permanent.CanFly");
            //         // OutTagContainer.AddTag(FlyTag);
            //     }
            //     if (bCanSwim)
            //     {
            //         // static FGameplayTag SwimTag = FGameplayTag::RequestGameplayTag("Status.Permanent.CanSwim");
            //         // OutTagContainer.AddTag(SwimTag);
            //     }
            // }
            ```
        *   **Blueprint Override Example (If an Actor Blueprint implemented the interface):**
            *   In the Actor Blueprint, add the `RTSInitialStatusTagsProvider` interface (Class Settings -> Interfaces).
            *   Implement the `GetInitialStatusTags` event.
            *   (ASCII Art for BP Node)
                ```
                Event GetInitialStatusTags --Exec--> [Make Literal Gameplay Tag ("Status.MyCustomTag")] --+
                                       ^                                                                 |
                                       +-- (OutTagContainer) <-------------------------------------------+-- [Add Tag (to Tag Container)]
                ```
            *   The `OutTagContainer` is an input/output pin. You would use "Add Tag" or "Append Tag Container" nodes to add tags to it.
        *   **Risks & Considerations:**
            *   Implementers should *add* to `OutTagContainer`, not overwrite it, as multiple providers might contribute.
            *   Tags provided should generally be "permanent" status tags that define what the actor *is* or *can do* from the start, based on the presence of the component providing them.
        *   **Guidance for Overriding/Implementing:** Identify the core, unchanging statuses that your component bestows upon an actor simply by being part of it.

**5. Integration & Usage Scenarios**

*   **Automatic Tag Collection by `URTSAbilitySystemComponent`:**
    1.  During its `BeginPlay` sequence, `URTSAbilitySystemComponent` calls `ApplyInitialTags()`.
    2.  `ApplyInitialTags()` calls `FindComponentStatusTags()`.
    3.  `FindComponentStatusTags()` iterates through all components of its owning actor.
    4.  For each component, it checks if the component's class implements `URTSInitialStatusTagsProvider` (`Component->GetClass()->ImplementsInterface(TagProviderInterfaceClass)`).
    5.  If it does, it calls `IRTSInitialStatusTagsProvider::Execute_GetInitialStatusTags(Component, TagContainer)`, passing in the `InitialStatusTags` container from the ASC.
    6.  The ASC also checks if the owning Actor itself implements the interface and calls it.
    7.  After collecting tags from all providers (and attribute sets), `URTSAbilitySystemComponent` applies these `InitialStatusTags` (along with `NameTag` and `InitialTags` property) to itself.
*   **Developer Workflow:**
    *   When creating a new `UActorComponent` that defines a fundamental capability (e.g., a `FlightComponent`, a `ResourceStorageComponent`), implement `IRTSInitialStatusTagsProvider` on it.
    *   In `GetInitialStatusTags_Implementation`, add the relevant `Status.Permanent.*` tags.
*   **Designer Workflow:**
    *   Designers add these various components (which implement the interface) to their Actor Blueprints. The initial status tags are then automatically handled. They don't directly see or call `GetInitialStatusTags`.

**6. What the User Needs to Implement/Provide**

*   **Implementations of the Interface:** For any custom `UActorComponent` (or `AActor`) that should contribute to an actor's initial set of status Gameplay Tags.
*   **Gameplay Tag Definitions:** Ensure the tags being provided (e.g., `Status.Permanent.CanFly`) are defined, typically in `URTSGlobalTags` or a game-specific global tags file, and registered with the `GameplayTagsManager`.

**7. Advanced Topics & Considerations**

*   **Distinction from `URTSAttributeSet::GetDefaultStatusTags()`:**
    *   `URTSAttributeSet::GetDefaultStatusTags()` is specifically for tags derived from the *presence of an attribute set*.
    *   `IRTSInitialStatusTagsProvider::GetInitialStatusTags()` is more generic, for *any component* (or the actor itself) to provide initial tags.
    *   `URTSAbilitySystemComponent` calls both mechanisms (`FindAttributeSetStatusTags` and `FindComponentStatusTags`) to gather a complete set of initial status tags.
*   **"Permanent" Nature of Tags:** While not strictly enforced, the tags provided by this interface are conceptually "permanent" or "inherent" statuses. Tags that change frequently during gameplay (`Status.Changing.*`) are typically applied and removed by Gameplay Effects or direct calls to the ASC.
*   **Initialization Order:** This interface is queried during the `URTSAbilitySystemComponent`'s `BeginPlay`. Ensure that any state the component needs to decide *which* tags to provide is available by that time.

This interface provides a clean, extensible way for various actor components to contribute to the foundational Gameplay Tag makeup of an entity, making the actor's initial state more modular and easier to manage.













### 2.2.6. `URTSAbilitySystemHelper`: Blueprint Utilities

`URTSAbilitySystemHelper` is a `UBlueprintFunctionLibrary` providing a wide array of static utility functions for interacting with the Gameplay Ability System (GAS) and related concepts from the ColonyOrders plugin. These functions simplify common tasks, make GAS features more accessible to Blueprints, and encapsulate logic that might otherwise be duplicated.

---

**`URTSAbilitySystemHelper` - Part 1: Attributes & General Helpers**

This part focuses on functions related to querying gameplay attributes, their values, and some general utility functions.

---

**1. `GetGameplayAttributes`**

*   **Signature:**
    `UFUNCTION(Category = RTS, BlueprintPure)`
    `static const TArray<FGameplayAttribute>& GetGameplayAttributes();`
*   **Purpose:**
    Returns a cached array of all `FGameplayAttribute`s found in the project by reflecting over all loaded `UAttributeSet` classes. This is useful for debugging or for UI that might need to display all possible attributes.
*   **Return Value:** `const TArray<FGameplayAttribute>&`: A reference to a static array containing all discovered attributes.
*   **Internal Logic Highlights (`.cpp`):**
    1.  `static TArray<FGameplayAttribute> Attributes = FindGameplayAttributes();`
        *   This line ensures `FindGameplayAttributes()` is called only once, and its result is stored in a static variable `Attributes`.
    2.  `FindGameplayAttributes()` (private static helper):
        *   Iterates through all loaded `UClass` objects (`TObjectIterator<UClass>`).
        *   Checks if a class is a child of `UAttributeSet` and is not a Blueprint-generated class (to get the native C++ attribute sets).
        *   For each such class, it iterates through its properties (`TFieldIterator<FProperty>`) excluding properties from superclasses.
        *   For each `FProperty`, it creates an `FGameplayAttribute(Property)` and adds it to a local array, which is then returned.
*   **C++ Usage Example:**
    ```cpp
    // const TArray<FGameplayAttribute>& AllAttributes = URTSAbilitySystemHelper::GetGameplayAttributes();
    // for (const FGameplayAttribute& Attr : AllAttributes)
    // {
    //     UE_LOG(LogTemp, Log, TEXT("Found Attribute: %s from Set: %s"), 
    //            *Attr.GetName(), 
    //            Attr.GetAttributeSetClass() ? *Attr.GetAttributeSetClass()->GetName() : TEXT("None"));
    // }
    ```
*   **Blueprint Usage Example:**
    *   (ASCII Art for BP Node)
        ```
        [GetGameplayAttributes (RTSAbilitySystemHelper)] --(Return Value: Array of GameplayAttribute)---> [ForEachLoop]
                                                                                                           | (Loop Body)
                                                                                                           +--> [Get Attribute Name (from GameplayAttribute)] -> [PrintString]
        ```
*   **Risks & Considerations:**
    *   The list is generated once. If new C++ `UAttributeSet` classes are hot-reloaded or loaded dynamically after the first call, they might not appear in the cached list until an editor restart or a fresh game run. This is generally not an issue for typical workflows.
    *   The list can be extensive, including all attributes from all defined sets.

---

**2. `GetAttributeValue`**

*   **Signature:**
    `static float GetAttributeValue(const AActor* Actor, const FGameplayAttribute& Attribute, float DefaultIfNotFound = 0.0f);`
    *(Note: The header comment says "Note that this function does not need to be exposed to blueprints because the function 'UAbilitySystemBlueprintLibrary::GetFloatAttribute' resolves in a more appropriate blueprint node." This C++ static function is for internal or C++ game code use.)*

*   **Purpose:**
    A C++ helper to get the current float value of a specific `Attribute` on a given `Actor`. It wraps `UAbilitySystemBlueprintLibrary::GetFloatAttribute`.
*   **Parameters:**
    *   `Actor` (`const AActor*`): The actor whose attribute value is being queried. Must have an `UAbilitySystemComponent`.
    *   `Attribute` (`const FGameplayAttribute&`): The specific attribute to query (e.g., `URTSAttackAttributeSet::DamageAttribute()`).
    *   `DefaultIfNotFound` (`float`): The value to return if the attribute is not found or the actor doesn't have an ASC. Defaults to `0.0f`.
*   **Return Value:** `float`: The current value of the attribute, or `DefaultIfNotFound`.
*   **Internal Logic Highlights (`.cpp`):**
    1.  Calls `UAbilitySystemBlueprintLibrary::GetFloatAttribute(Actor, Attribute, bFound)`.
    2.  If `bFound` is true, returns the value.
    3.  Otherwise, returns `DefaultIfNotFound`.
*   **C++ Usage Example:**
    ```cpp
    // AActor* MyUnit = ...;
    // float CurrentDamage = URTSAbilitySystemHelper::GetAttributeValue(MyUnit, URTSAttackAttributeSet::DamageAttribute(), 0.0f);
    // UE_LOG(LogTemp, Log, TEXT("Unit's current damage: %f"), CurrentDamage);
    ```
*   **Blueprint Usage Example:** As noted, use the standard `GetFloatAttribute` node from `AbilitySystemBlueprintLibrary` in Blueprints. This C++ function is not exposed.

---

**3. `GetAttributeDefaultValue`**

*   **Signature:**
    `static float GetAttributeDefaultValue(TSubclassOf<AActor> ActorClass, UCurveTable* CurveTable, FName AttributeName, float Level = 1.0f);`
    *(C++ static function, not directly exposed to Blueprints)*

*   **Purpose:**
    Retrieves the default base value of an attribute for a given `ActorClass` at a specific `Level` from a specified `CurveTable`. This is useful for looking up theoretical base stats before an actor is spawned or for UI that displays stats for unspawned units. It relies on the actor class having a `URTSAbilitySystemComponent` with a `NameTag`.
*   **Parameters:**
    *   `ActorClass` (`TSubclassOf<AActor>`): The class of the actor.
    *   `CurveTable` (`UCurveTable*`): The curve table containing attribute values.
    *   `AttributeName` (`FName`): The name of the attribute (e.g., "Damage", "MaxHealth"). This is the final part of the curve table row name (e.g., "Rifleman.**Damage**").
    *   `Level` (`float`): The level at which to evaluate the curve. Defaults to `1.0f`.
*   **Return Value:** `float`: The attribute's default value from the curve table, or `0.0f` if not found or if components are missing.
*   **Internal Logic Highlights (`.cpp`):**
    1.  Uses `FindDefaultComponentByClass<URTSAbilitySystemComponent>(ActorClass)` to get the ASC CDO from the `ActorClass`.
    2.  If ASC CDO is found, gets its `NameTag`.
    3.  Constructs the row name for the `CurveTable` using the format: `"{UnitNameTagPart}.{AttributeName}"` (e.g., "Rifleman.Damage"). `GetLastTagName` is used to extract the unit type from the full `NameTag`.
    4.  Uses `UDataTableFunctionLibrary::EvaluateCurveTableRow` to get the value from the `CurveTable` at the specified `Level` using the constructed row name.
    5.  Returns the value if found, otherwise `0.0f`.
*   **C++ Usage Example:**
    ```cpp
    // TSubclassOf<AActor> RiflemanClass = UMyRiflemanUnit::StaticClass();
    // UCurveTable* AttributeDataTable = LoadMyGlobalAttributeCurveTable(); // Assume loaded
    // if (AttributeDataTable)
    // {
    //     float Level5RiflemanDamage = URTSAbilitySystemHelper::GetAttributeDefaultValue(
    //         RiflemanClass, 
    //         AttributeDataTable, 
    //         GET_MEMBER_NAME_CHECKED(URTSAttackAttributeSet, Damage), // Or FName("Damage")
    //         5.0f
    //     );
    //     UE_LOG(LogTemp, Log, TEXT("Level 5 Rifleman base damage from table: %f"), Level5RiflemanDamage);
    // }
    ```
*   **Risks & Considerations:**
    *   Relies on the `ActorClass` having a CDO with a `URTSAbilitySystemComponent` that has a valid `NameTag`.
    *   The `CurveTable` must be structured with row names matching the `UnitNameTagPart.AttributeName` convention.
    *   `AttributeName` should match the FProperty name of the attribute in its `UAttributeSet`.

---

**4. `GetValueAtLevel` (from Curve Tables section)**

*   **Signature:**
    `UFUNCTION(Category = "RTS Ability|Curve Tables", BlueprintPure)`
    `static float GetValueAtLevel(const FScalableFloat& ScalableFloat, float Level);`

*   **Purpose:**
    Evaluates an `FScalableFloat` at a given `Level`. `FScalableFloat` is a GAS struct that can hold a direct float value or be configured to look up its value from a curve table row. This is a direct wrapper for `ScalableFloat.GetValueAtLevel(Level)`.
*   **Parameters:**
    *   `ScalableFloat` (`const FScalableFloat&`): The scalable float struct to evaluate.
    *   `Level` (`float`): The level at which to evaluate.
*   **Return Value:** `float`: The value of the scalable float at the given level.
*   **Internal Logic Highlights (`.cpp`):**
    1.  Calls `ScalableFloat.GetValueAtLevel(Level)`.
*   **C++ Usage Example:**
    ```cpp
    // FScalableFloat MyScalableDamage; // Assume this is configured, perhaps on an ability CDO
    // MyScalableDamage.SetValue(10.0f); // Or linked to a curve
    // float DamageAtLevel3 = URTSAbilitySystemHelper::GetValueAtLevel(MyScalableDamage, 3.0f);
    ```
*   **Blueprint Usage Example:**
    *   (ASCII Art for BP Node)
        ```
        [GetValueAtLevel (RTSAbilitySystemHelper)] --(Return Value: float)--> [Use Value]
         ^ ScalableFloat (FScalableFloat struct)
         ^ Level (float)
        ```
*   **Risks & Considerations:** If the `ScalableFloat` is configured to use a curve table but the table or row is invalid, the behavior of `FScalableFloat::GetValueAtLevel` might return 0 or a default.

---

**5. `FindDefaultComponentByClass`**

*   **Signatures:**
    *   C++ template version: `template <class T> static T* FindDefaultComponentByClass(const TSubclassOf<AActor> InActorClass)`
    *   UFUNCTION version: `UFUNCTION(BlueprintCallable, Category = "RTS") static UActorComponent* FindDefaultComponentByClass(const TSubclassOf<AActor> InActorClass, const TSubclassOf<UActorComponent> InComponentClass);`

*   **Purpose:**
    Searches the Class Default Object (CDO) of the given `InActorClass` (and its Blueprint SimpleConstructionScript nodes) for a component of the specified `InComponentClass` (or template type `T`). This is useful for querying default component configurations on an actor class before an instance of that actor is spawned.
*   **Parameters:**
    *   `InActorClass` (`const TSubclassOf<AActor>`): The actor class to inspect.
    *   `InComponentClass` (`const TSubclassOf<UActorComponent>`): The component class to search for (for the UFUNCTION version).
*   **Return Value:** `T*` or `UActorComponent*`: A pointer to the component template/CDO if found, `nullptr` otherwise.
*   **Internal Logic Highlights (`.cpp` for UFUNCTION version):**
    1.  Null check on `InActorClass`.
    2.  **Check CDO:** Gets the CDO of `InActorClass` and calls `ActorCDO->FindComponentByClass(InComponentClass)`. If found, returns it.
    3.  **Check Blueprint Nodes:** If not found on CDO (common for components added only in the Blueprint editor):
        *   Casts `InActorClass` to `UBlueprintGeneratedClass`.
        *   Iterates down the inheritance hierarchy of `InActorClass` (while it's a `UBlueprintGeneratedClass` and not `AActor::StaticClass`).
        *   For each class in the hierarchy, gets its `SimpleConstructionScript->GetAllNodes()`.
        *   Iterates these `USCS_Node`s. If a node's `ComponentClass` is a child of `InComponentClass`, it returns `Node->GetActualComponentTemplate(RootBlueprintGeneratedClass)`.
    4.  Returns `nullptr` if not found.
*   **C++ Usage Example (template version):**
    ```cpp
    // TSubclassOf<AActor> MyUnitClass = UMyUnitWithSpecialComponent::StaticClass();
    // UMySpecialComponent* SpecialCompCDO = URTSAbilitySystemHelper::FindDefaultComponentByClass<UMySpecialComponent>(MyUnitClass);
    // if (SpecialCompCDO)
    // {
    //     // Access default properties of SpecialCompCDO
    //     // float DefaultValue = SpecialCompCDO->DefaultSomeValue; 
    // }
    ```
*   **Blueprint Usage Example (UFUNCTION version):**
    *   (ASCII Art for BP Node)
        ```
        [Exec Pin] ---> [FindDefaultComponentByClass (RTSAbilitySystemHelper)] --(Return: ActorComponent Ref)--> [Cast To MyComponentType] -> ...
         ^ InActorClass (Actor Class Ref)
         ^ InComponentClass (ActorComponent Class Ref)
        ```
*   **Risks & Considerations:**
    *   Returns the *template* or CDO of the component, not an instance from a live actor. You can read its default properties but should not modify its state as it affects all future instances.
    *   Correctly handles components added in C++ (via CDO) and components added directly in the Blueprint editor (via SCS nodes).

---

**6. `IsVisibleForActor`**

*   **Signature:**
    `UFUNCTION(Category = "RTS Ability|Tags", BlueprintPure)`
    `static bool IsVisibleForActor(const AActor* Actor, const AActor* Other);`

*   **Purpose:**
    Checks if the `Other` actor is currently visible to the `Actor`. This is a simplified visibility check.
*   **Parameters:**
    *   `Actor` (`const AActor*`): The observer.
    *   `Other` (`const AActor*`): The actor being observed.
*   **Return Value:** `bool`: `true` if `Other` is considered visible to `Actor`, `false` otherwise.
*   **Internal Logic Highlights (`.cpp`):**
    1.  Null checks for `Actor` and `Other`. Returns `false` if either is null.
    2.  **Relies on `URTSVisibleComponent` (Commented Out):** The code attempts to find a `URTSVisibleComponent` on the `Other` actor.
        *   `const URTSVisibleComponent* OtherVisibleComponent = Other->FindComponentByClass<URTSVisibleComponent>();`
    3.  If `OtherVisibleComponent` is found:
        *   If `Other` actor has authority (is server version), it calls `OtherVisibleComponent->IsVisibleForPlayer(Cast<AController>(Actor->GetOwner()))`. This implies `URTSVisibleComponent` has logic to track visibility per player controller.
        *   If `Other` actor does not have authority (is client version), it calls `OtherVisibleComponent->IsVisibleForLocalClient()`. This implies client-side prediction or knowledge of visibility.
    4.  If `OtherVisibleComponent` is *not* found, it defaults to returning `true` (assumes always visible if no specific visibility component).
*   **C++ Usage Example:**
    ```cpp
    // AActor* MyUnit = ...;
    // AActor* PotentialTarget = ...;
    // if (URTSAbilitySystemHelper::IsVisibleForActor(MyUnit, PotentialTarget))
    // {
    //     // PotentialTarget is visible to MyUnit
    // }
    ```
*   **Blueprint Usage Example:**
    *   (ASCII Art for BP Node)
        ```
        [IsVisibleForActor (RTSAbilitySystemHelper)] --(Return Value: bool)--> [Branch]
         ^ Actor (Actor Ref - Observer)
         ^ Other (Actor Ref - Observed)
        ```
*   **Risks & Considerations:**
    *   **Dependency on `URTSVisibleComponent`:** The effectiveness of this function entirely depends on the implementation and presence of a `URTSVisibleComponent` on actors, and that component correctly managing visibility states (e.g., handling fog of war, stealth/detection). The provided code for `URTSVisibleComponent` is not available.
    *   If `URTSVisibleComponent` is not used in the project, this function will always return `true` for valid actor pairs, making it a trivial check.
    *   The logic differentiating server/client visibility (`IsVisibleForPlayer` vs. `IsVisibleForLocalClient`) implies a sophisticated visibility system.







**`URTSAbilitySystemHelper` - Part 2: Abilities**

These functions provide utilities for querying information about abilities, their cooldowns, UI representations, levels, and for interacting with them (e.g., canceling). Most of these functions expect a `UAbilitySystemComponent` and/or a `TSubclassOf<UGameplayAbility>`.

---

**1. Ability Retrieval**

*   **`GetBasicAttackAbilities`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Abilities", BlueprintPure)`
        `static TArray<TSubclassOf<UGameplayAbility>> GetBasicAttackAbilities(const UAbilitySystemComponent* AbilitySystem);`
    *   **Purpose:** Retrieves all abilities from the `AbilitySystem` that are considered "basic attacks." It identifies these by checking if their `EventTriggerTag` (from `URTSGameplayAbility`) is equal to `URTSGlobalTags::Event_Attack()`.
    *   **Parameters:** `AbilitySystem` (`const UAbilitySystemComponent*`).
    *   **Return Value:** `TArray<TSubclassOf<UGameplayAbility>>`: Array of ability classes identified as basic attacks.
    *   **Internal Logic Highlights (`.cpp`):**
        1.  Calls `URTSAbilitySystemHelper::GetAbilities(AbilitySystem)` to get all activatable abilities.
        2.  Iterates through these abilities.
        3.  For each ability class, gets its CDO and casts to `URTSGameplayAbility`.
        4.  If it's a valid `URTSGameplayAbility`, checks if `GameplayAbility->GetEventTriggerTag() == URTSGlobalTags::Event_Attack()`.
        5.  Adds matching abilities to the output array.
    *   **C++ Usage Example:**
        ```cpp
        // UAbilitySystemComponent* UnitASC = MyUnit->FindComponentByClass<UAbilitySystemComponent>();
        // TArray<TSubclassOf<UGameplayAbility>> BasicAttacks = URTSAbilitySystemHelper::GetBasicAttackAbilities(UnitASC);
        // for (TSubclassOf<UGameplayAbility> AttackAbilityClass : BasicAttacks) { /* ... */ }
        ```
    *   **Blueprint Usage Example:**
        *   (ASCII Art for BP Node)
            ```
            [GetBasicAttackAbilities (RTSAbilitySystemHelper)] --(Return Value: Array of GA Class)--> [ForEachLoop]
             ^ AbilitySystem (AbilitySystemComponent Ref)
            ```

*   **`GetAbilities`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Abilities", BlueprintPure)`
        `static TArray<TSubclassOf<UGameplayAbility>> GetAbilities(const UAbilitySystemComponent* AbilitySystem);`
    *   **Purpose:** Returns a list of all currently activatable ability classes on the given `AbilitySystem`.
    *   **Internal Logic (`.cpp`):**
        1.  Iterates through `AbilitySystem->GetActivatableAbilities()` (which returns `FGameplayAbilitySpec`s).
        2.  For each spec, adds `AbilitySpec.Ability->GetClass()` to the output array.
    *   **Usage & Blueprint Example:** Similar to `GetBasicAttackAbilities`.

*   **`GetAbilitiesByTag`**
    *   **Signature:**
        `static TArray<TSubclassOf<UGameplayAbility>> GetAbilitiesByTag(const UAbilitySystemComponent* AbilitySystem, const FGameplayTagContainer& GameplayTagContainer);`
        *(C++ only, not a UFUNCTION)*
    *   **Purpose:** Retrieves abilities from the `AbilitySystem` that have *all* the tags specified in `GameplayTagContainer` applied to their `FGameplayAbilitySpec`.
    *   **Internal Logic (`.cpp`):**
        1.  Calls `AbilitySystem->GetActivatableGameplayAbilitySpecsByAllMatchingTags(GameplayTagContainer, AbilitiesSpecsFound)`.
        2.  Iterates `AbilitiesSpecsFound` and adds `Spec->Ability->GetClass()` to the output.
    *   **C++ Usage Example:**
        ```cpp
        // FGameplayTagContainer RequiredAbilityTags;
        // RequiredAbilityTags.AddTag(FGameplayTag::RequestGameplayTag("Ability.Type.Fire"));
        // TArray<TSubclassOf<UGameplayAbility>> FireAbilities = URTSAbilitySystemHelper::GetAbilitiesByTag(UnitASC, RequiredAbilityTags);
        ```

---

**2. Cooldown Information**

*   **`GetCooldownEffect`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Abilities", BlueprintPure)`
        `static TSubclassOf<UGameplayEffect> GetCooldownEffect(TSubclassOf<UGameplayAbility> Ability);`
    *   **Purpose:** Gets the `UGameplayEffect` class that is responsible for the cooldown of the given `Ability` class.
    *   **Internal Logic (`.cpp`):** Gets the CDO of `Ability`, calls `AbilityCDO->GetCooldownGameplayEffect()`, and returns its class.
    *   **Blueprint Example Node:** `GetCooldownEffect (RTSAbilitySystemHelper)`

*   **`GetCooldownTimeRemaining`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Abilities", BlueprintPure)`
        `static float GetCooldownTimeRemaining(const UAbilitySystemComponent* AbilitySystem, TSubclassOf<UGameplayAbility> Ability);`
    *   **Purpose:** Gets the remaining cooldown time for the specified `Ability` on the `AbilitySystem`.
    *   **Internal Logic (`.cpp`):** Calls `GetCooldownTimeRemainingAndDuration` and returns only the time.

*   **`GetCooldownTimeDuration`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Abilities", BlueprintPure)`
        `static float GetCooldownTimeDuration(const UAbilitySystemComponent* AbilitySystem, TSubclassOf<UGameplayAbility> Ability);`
    *   **Purpose:** Gets the total cooldown duration for the specified `Ability` on the `AbilitySystem`.
    *   **Internal Logic (`.cpp`):** Calls `GetCooldownTimeRemainingAndDuration` and returns only the duration.

*   **`GetCooldownTimeRemainingAndDuration`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Abilities", BlueprintPure)`
        `static void GetCooldownTimeRemainingAndDuration(const UAbilitySystemComponent* AbilitySystem, TSubclassOf<UGameplayAbility> Ability, float& OutRemainingCooldownTime, float& OutCooldownDuration);`
    *   **Purpose:** Gets both the remaining time and total duration of the cooldown for the `Ability`.
    *   **Internal Logic (`.cpp`):**
        1.  Calls `GetCooldownEffect(Ability)` to find the cooldown gameplay effect class.
        2.  Calls `URTSAbilitySystemHelper::GetActiveEffectTimeRemainingAndDuration(AbilitySystem, CooldownEffectClass, OutRemainingCooldownTime, OutCooldownDuration)`.
        3.  If `CooldownEffectClass` is valid but `OutCooldownDuration` is 0 (meaning no active cooldown effect was found to get duration from), it tries to get the duration from the CDO of the `CooldownEffectClass` itself by creating a temporary spec and evaluating its duration magnitude.
    *   **C++ Usage Example:**
        ```cpp
        // float RemainingTime, TotalDuration;
        // URTSAbilitySystemHelper::GetCooldownTimeRemainingAndDuration(UnitASC, MyAbilityClass, RemainingTime, TotalDuration);
        // if (RemainingTime > 0) UE_LOG(LogTemp, Log, TEXT("Cooldown: %f / %f"), RemainingTime, TotalDuration);
        ```
    *   **Blueprint Usage Example:**
        *   (ASCII Art for BP Node)
            ```
            [GetCooldownTimeRemainingAndDuration (RTSAbilitySystemHelper)] --(OutRemainingCooldownTime: float)--> [Use Time]
             ^ AbilitySystem (ASC Ref)                                       |
             ^ Ability (GA Class Ref)                                        +--(OutCooldownDuration: float)--> [Use Duration]
            ```

---

**3. Ability UI & Level Information**

These functions retrieve display-related data or level information from `URTSGameplayAbility` CDOs.

*   **`GetAbilityIcon`** -> `UTexture2D*`
    *   Calls `AbilityCDO->GetIcon()`.
*   **`GetAbilityName`** -> `FText`
    *   Calls `AbilityCDO->GetName()`.
*   **`GetAbilityDescription`** (`Actor` param for formatting) -> `FText`
    *   Calls `AbilityCDO->GetDescription(Actor)`.
*   **`GetAbilityLevel`** (`Actor` param to find the spec) -> `int32`
    *   Finds the `FGameplayAbilitySpec` for the `Ability` on the `Actor`'s ASC and returns `Spec.Level`.
*   **`GetAbilityMaxLevel`** (`WorldContextObject` param) -> `int32`
    *   Calls `AbilityCDO->GetMaxLevel()`.
    *   *(Note: The `WorldContextObject` parameter is common for BlueprintPure nodes that might need world access, but it's not used in this specific function's C++ logic for `GetAbilityMaxLevel`.)*
*   **`GetRequiredLevelToIncreaseAbilityLevel`** (`WorldContextObject`, `Actor`, `Ability` params) -> `int32`
    *   **Internal Logic:** Returns `GetAbilityLevel(Ability, Actor) * 2 + 1;`. This is a simple hardcoded formula (level * 2 + 1 = hero level requirement).
    *   **Considerations:** This hardcoded formula might need to be made more flexible (e.g., data-driven from the ability itself or a curve table) for more complex level-up requirement schemes.

*   **Blueprint Usage Example (for `GetAbilityIcon`):**
    *   (ASCII Art for BP Node)
        ```
        [GetAbilityIcon (RTSAbilitySystemHelper)] --(Return Value: Texture2D)--> [SetBrushFromTexture (on UI Image)]
         ^ Ability (GA Class Ref)
        ```

---

**4. Ability Interaction & State**

*   **`GetAbilityTargetType`**
    *   **Signature:** `static ERTSTargetType GetAbilityTargetType(TSubclassOf<UGameplayAbility> Ability);`
    *   **Calls:** `AbilityCDO->GetTargetType()`.

*   **`ShouldShowAbilityAsOrderInUI`**
    *   **Signature:** `static bool ShouldShowAbilityAsOrderInUI(TSubclassOf<UGameplayAbility> Ability);`
    *   **Calls:** `AbilityCDO->ShouldShowAsOrderInUI()`.

*   **`CancelAbility`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Abilities", BlueprintCallable)`
        `static void CancelAbility(UAbilitySystemComponent* AbilitySystem, TSubclassOf<UGameplayAbility> Ability);`
    *   **Purpose:** Cancels the specified `Ability` if it's active on the `AbilitySystem`.
    *   **Internal Logic (`.cpp`):** Calls `AbilitySystem->CancelAbility(Ability->GetDefaultObject<UGameplayAbility>())`.
    *   **Blueprint Example Node:** `CancelAbility (RTSAbilitySystemHelper)` (Executes an action).
    *   **Risks:** Ensure this is called authoritatively (server) if cancellation should affect game state.

*   **`IsAbilityActive`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Abilities", BlueprintPure, meta = (DisplayName = "IsAbilityActive (Server only)"))`
        `static bool IsAbilityActive(UAbilitySystemComponent* AbilitySystem, TSubclassOf<UGameplayAbility> Ability);`
    *   **Purpose:** Checks if the specified `Ability` is currently active on the `AbilitySystem`. The "Server only" meta display name is a hint, as active ability state is server-authoritative.
    *   **Internal Logic (`.cpp`):** Finds the `FGameplayAbilitySpec` and returns `Spec->IsActive()`.
    *   **Risks:** On clients, `IsActive()` might not be perfectly synchronized unless the ability uses specific replication for its active state beyond the standard spec replication. For UI, it's generally okay, but critical gameplay logic should rely on server state.

*   **`IsPassiveAbilityUnlocked`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Abilities", BlueprintPure)`
        `static bool IsPassiveAbilityUnlocked(const UAbilitySystemComponent* AbilitySystem, TSubclassOf<UGameplayAbility> Ability);`
    *   **Purpose:** Checks if a "passive" ability is considered unlocked. It does this by checking if the `AbilitySystem` has all of the `ActivationRequiredTags` of the ability. This implies passive abilities are "active" if their conditions (represented by tags) are met, rather than being explicitly activated.
    *   **Internal Logic (`.cpp`):** Gets `AbilityCDO` (must be `URTSGameplayAbility`), then checks `AbilitySystem->HasAllMatchingGameplayTags(GameplayAbility->GetActivationRequiredTags())`.
    *   **Considerations:** This defines "passive unlocked" as meeting tag requirements. Some passives might be always active once granted, or use other mechanisms.

*   **`GetAbilityRange`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Abilities", BlueprintPure)`
        `static float GetAbilityRange(UAbilitySystemComponent* AbilitySystem, TSubclassOf<UGameplayAbility> Ability);`
    *   **Purpose:** Gets the effective range of the `Ability`.
    *   **Internal Logic (`.cpp`):**
        1.  Casts `AbilitySystem` to `URTSAbilitySystemComponent`.
        2.  If successful and `Ability` is a subclass of `URTSGameplayAbility`, calls `RTSAbilitySystem->GetAbilityRange(*Ability)` (which itself calls the ability's `GetRange()` method).
    *   **Considerations:** Relies on the ability being a `URTSGameplayAbility` and the ASC being a `URTSAbilitySystemComponent` for the intended path.

*   **`GetAbilityProcessPolicy`**
    *   **Signature:** `static ERTSAbilityProcessPolicy GetAbilityProcessPolicy(TSubclassOf<UGameplayAbility> Ability);`
    *   **Calls:** `Cast<URTSGameplayAbility>(AbilityCDO)->GetAbilityProcessPolicy()`.

*   **`GetAbilitySourceTagRequirements`**
    *   **Signature:** `static void GetAbilitySourceTagRequirements(TSubclassOf<UGameplayAbility> Ability, FGameplayTagContainer& OutRequiredTags, FGameplayTagContainer& OutBlockedTags);`
    *   **Calls:** `Cast<URTSGameplayAbility>(AbilityCDO)->GetSourceTagRequirements(OutRequiredTags, OutBlockedTags)`.

*   **`GetAbilityTargetTagRequirements`**
    *   **Signature:** `static void GetAbilityTargetTagRequirements(TSubclassOf<UGameplayAbility> Ability, FGameplayTagContainer& OutRequiredTags, FGameplayTagContainer& OutBlockedTags);`
    *   **Calls:** `Cast<URTSGameplayAbility>(AbilityCDO)->GetTargetTagRequirements(OutRequiredTags, OutBlockedTags)`.

*   **`IsHumanPlayerAutoAbility`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Abilities", BlueprintPure)`
        `static bool IsHumanPlayerAutoAbility(TSubclassOf<UGameplayAbility> Ability);`
    *   **Calls:** `Cast<URTSGameplayAbility>(AbilityCDO)->IsHumanPlayerAutoAbility()`.

---

**5. Miscellaneous Ability Helpers**

*   **`GetGrantedAbilitiesFromGameplayEffect`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Gameplay Effects", BlueprintPure)`
        `static TArray<TSubclassOf<UGameplayAbility>> GetGrantedAbilitiesFromGameplayEffect(TSubclassOf<UGameplayEffect> GameplayEffect);`
    *   **Purpose:** Retrieves a list of ability classes that are granted by the specified `GameplayEffect` class.
    *   **Internal Logic (`.cpp`):**
        1.  Gets the CDO of `GameplayEffect`.
        2.  **UE 5.5 Handling:** The code has a comment about UE 5.5 using components for granted abilities. It attempts to use reflection to find an "AbilitiesGameplayEffectComponent" and get `GrantedAbilities` from there.
        3.  **Fallback:** If the component method doesn't yield results (or for older UE versions), it falls back to the deprecated `GameplayEffect->GrantedAbilities` property (wrapped in `PRAGMA_DISABLE_DEPRECATION_WARNINGS`).
        4.  Iterates through the found `FGameplayAbilitySpecDef`s and adds `AbilityDef.Ability` (the `TSubclassOf<UGameplayAbility>`) to the output array.
    *   **Considerations:** This function is important for systems that need to know what abilities an item or buff might grant (e.g., `URTSAbilitySystemComponent::AddItemAbility` uses this concept). The UE 5.5 adaptation shows an attempt to stay current with engine changes.

*   **`GetItemAbilityIndex`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Gameplay Abilities", BlueprintPure)`
        `static bool GetItemAbilityIndex(UAbilitySystemComponent* AbilitySystem, TSubclassOf<UGameplayAbility> AbilityClass, int32& OutIndex);`
    *   **Purpose:** Finds the index of a given `AbilityClass` within the `URTSAbilitySystemComponent`'s `ItemAbilities` array.
    *   **Internal Logic (`.cpp`):**
        1.  Casts `AbilitySystem` to `URTSAbilitySystemComponent`.
        2.  If successful, gets `RTSAbilitySystemComponent->GetItemAbilities()`.
        3.  Iterates this array and returns `true` with `OutIndex` if `AbilityClass` is found.
    *   **Blueprint Example Node:** `GetItemAbilityIndex (RTSAbilitySystemHelper)` (Outputs bool and Index)
    *   **Usage:** Could be used by UI to specifically identify or interact with abilities granted by items.























**`URTSAbilitySystemHelper` - Part 3: Effects**

These helper functions allow easy retrieval of data associated with `UGameplayEffect`s, especially those derived from `URTSGameplayEffect` which contain UI information.

---

**1. Active Effect Duration & Time Remaining**

*   **`GetActiveEffectTimeRemaining`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Effects", BlueprintPure)`
        `static float GetActiveEffectTimeRemaining(const UAbilitySystemComponent* AbilitySystem, TSubclassOf<UGameplayEffect> Effect);`
    *   **Purpose:** Gets the remaining time for an active gameplay effect of the specified `Effect` class on the `AbilitySystem`. If multiple instances are active, it typically returns the longest remaining time.
    *   **Parameters:**
        *   `AbilitySystem` (`const UAbilitySystemComponent*`): The ASC to query.
        *   `Effect` (`TSubclassOf<UGameplayEffect>`): The class of the effect to check.
    *   **Return Value:** `float`: Remaining time in seconds, or 0 if not active or has no duration.
    *   **Internal Logic Highlights (`.cpp`):**
        1.  Calls `GetActiveEffectTimeRemainingAndDuration(AbilitySystem, Effect, Time, Duration)`.
        2.  Returns the `Time` out-parameter.

*   **`GetActiveEffectDuration`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Effects", BlueprintPure)`
        `static float GetActiveEffectDuration(const UAbilitySystemComponent* AbilitySystem, TSubclassOf<UGameplayEffect> Effect);`
    *   **Purpose:** Gets the total duration of an active gameplay effect of the specified `Effect` class. If multiple instances, it typically returns the longest duration.
    *   **Internal Logic (`.cpp`):**
        1.  Calls `GetActiveEffectTimeRemainingAndDuration(AbilitySystem, Effect, Time, Duration)`.
        2.  Returns the `Duration` out-parameter.

*   **`GetActiveEffectTimeRemainingAndDuration`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Effects", BlueprintPure)`
        `static void GetActiveEffectTimeRemainingAndDuration(const UAbilitySystemComponent* AbilitySystem, TSubclassOf<UGameplayEffect> Effect, float& OutRemainingTime, float& OutDuration);`
    *   **Purpose:** Gets both the remaining time and total duration for active instances of the specified `Effect` class.
    *   **Parameters:**
        *   `AbilitySystem`, `Effect` (as above).
        *   `OutRemainingTime` (`float&`): Output parameter for remaining time.
        *   `OutDuration` (`float&`): Output parameter for total duration.
    *   **Internal Logic Highlights (`.cpp`):**
        1.  Initializes `OutRemainingTime` and `OutDuration` to `0.0f`.
        2.  If `Effect` and `AbilitySystem` are valid:
            *   Creates an `FGameplayEffectQuery` targeting the `Effect` definition.
            *   Calls `AbilitySystem->GetActiveEffectsTimeRemainingAndDuration(Query)` which returns `TArray<TPair<float, float>>`.
            *   Iterates this array. For each pair (time, duration), it updates `OutRemainingTime` to be the maximum time found and `OutDuration` to be the maximum duration found.
    *   **C++ Usage Example:**
        ```cpp
        // UAbilitySystemComponent* UnitASC = ...;
        // TSubclassOf<UGameplayEffect> MyBuffEffectClass = UMyBuffGE::StaticClass();
        // float Remaining, Total;
        // URTSAbilitySystemHelper::GetActiveEffectTimeRemainingAndDuration(UnitASC, MyBuffEffectClass, Remaining, Total);
        // if (Remaining > 0) UE_LOG(LogTemp, Log, TEXT("Buff active: %f / %f seconds"), Remaining, Total);
        ```
    *   **Blueprint Usage Example:**
        *   (ASCII Art for BP Node)
            ```
            [GetActiveEffectTimeRemainingAndDuration (RTSAbilitySystemHelper)] --(OutRemainingTime: float)--> [UpdateBuffTimerUI]
             ^ AbilitySystem (ASC Ref)                                            |
             ^ Effect (GE Class Ref)                                              +--(OutDuration: float)--> [SetMaxBuffTimeUI]
            ```
    *   **Risks & Considerations:**
        *   If an effect has infinite duration (`Duration < 0`), `GetActiveEffectsTimeRemainingAndDuration` typically returns specific values (like `-1` or `INFINITE_DURATION_VALUE`) which this helper will then propagate. UI needs to handle this (e.g., show "Permanent" or no timer).
        *   If multiple stacks of the same effect class are applied with different durations (if stacking rules allow), this returns the maximum.

---

**2. Retrieving Active Effects & Specs**

*   **`GetActiveGameplayEffects`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Effects", BlueprintPure)`
        `static TArray<TSubclassOf<UGameplayEffect>> GetActiveGameplayEffects(const UAbilitySystemComponent* AbilitySystem);`
    *   **Purpose:** Returns an array of `TSubclassOf<UGameplayEffect>` for all gameplay effects currently active on the `AbilitySystem`.
    *   **Internal Logic Highlights (`.cpp`):**
        1.  Calls `AbilitySystem->GetAllActiveGameplayEffectSpecs(OutEffectSpecs)`.
        2.  Iterates `OutEffectSpecs` and adds `EffectSpec.Def->GetClass()` to the output array.
    *   **Blueprint Usage Example:**
        *   (ASCII Art for BP Node)
            ```
            [GetActiveGameplayEffects (RTSAbilitySystemHelper)] --(Return Value: Array of GE Class)--> [ForEachLoop]
             ^ AbilitySystem (ASC Ref)                                                                  | (Loop Body)
                                                                                                        +--> [GetEffectIcon] -> [AddIconToUI]
            ```

*   **`GetActiveGameplayEffectSpecs`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Effects", BlueprintPure)`
        `static TArray<FGameplayEffectSpec> GetActiveGameplayEffectSpecs(const UAbilitySystemComponent* AbilitySystem);`
    *   **Purpose:** Returns an array of `FGameplayEffectSpec` for all currently active gameplay effects. This is more detailed than just the class, as specs contain context, level, stack count, etc.
    *   **Internal Logic Highlights (`.cpp`):**
        1.  Calls `AbilitySystem->GetAllActiveGameplayEffectSpecs(OutEffectSpecs)`.
        2.  Returns `OutEffectSpecs`.
    *   **Usage:** Useful when you need more than just the effect class, like the effect's level or stack count for UI or logic.

---

**3. Gameplay Effect Spec Information**

These functions operate on an `FGameplayEffectSpec`, which you'd typically get from `GetActiveGameplayEffectSpecs`.

*   **`GetGameplayEffectSpecClass`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Effects", BlueprintPure)`
        `static TSubclassOf<UGameplayEffect> GetGameplayEffectSpecClass(const FGameplayEffectSpec& GameplayEffectSpec);`
    *   **Purpose:** Gets the `TSubclassOf<UGameplayEffect>` from a given `FGameplayEffectSpec`.
    *   **Internal Logic (`.cpp`):** Returns `GameplayEffectSpec.Def->GetClass()`.

*   **`GetGameplayEffectSpecStackCount`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Effects", BlueprintPure)`
        `static int32 GetGameplayEffectSpecStackCount(const FGameplayEffectSpec& GameplayEffectSpec);`
    *   **Purpose:** Gets the current stack count of the given `FGameplayEffectSpec`.
    *   **Internal Logic (`.cpp`):** Returns `GameplayEffectSpec.GetStackCount()`.

*   **Blueprint Usage Example (using these spec functions):**
    ```mermaid
    graph TD
        A[GetActiveGameplayEffectSpecs] --> B{ForEachLoop (Spec)};
        B -- Loop Body --> C[GetGameplayEffectSpecClass (from Spec)];
        C --> D[GetEffectIcon (using Class from C)];
        B -- Loop Body --> E[GetGameplayEffectSpecStackCount (from Spec)];
        D --> F[Display Icon in UI];
        E --> G[Display Stack Count in UI];
    ```

---

**4. Effect UI Information (from `URTSGameplayEffect`)**

These functions retrieve UI-related data (icon, name, description) from the CDO of an `URTSGameplayEffect` subclass.

*   **`GetEffectIcon`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Effects", BlueprintPure)`
        `static UTexture2D* GetEffectIcon(TSubclassOf<UGameplayEffect> Effect);`
    *   **Purpose:** Gets the icon for the specified `Effect` class.
    *   **Internal Logic (`.cpp`):**
        1.  Null check on `Effect` class.
        2.  Gets the CDO of `Effect` and casts it to `URTSGameplayEffect`.
        3.  If successful, calls `RTSGameplayEffectCDO->GetIcon()`. Returns `nullptr` otherwise.

*   **`GetEffectName`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Effects", BlueprintPure)`
        `static FText GetEffectName(TSubclassOf<UGameplayEffect> Effect);`
    *   **Purpose:** Gets the display name for the `Effect` class.
    *   **Internal Logic (`.cpp`):** Casts CDO to `URTSGameplayEffect` and calls `RTSGameplayEffectCDO->GetEffectName()`.

*   **`GetEffectDescription`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Effects", BlueprintPure)`
        `static FText GetEffectDescription(TSubclassOf<UGameplayEffect> Effect);`
    *   **Purpose:** Gets the description for the `Effect` class.
    *   **Internal Logic (`.cpp`):** Casts CDO to `URTSGameplayEffect` and calls `RTSGameplayEffectCDO->GetEffectDescription()`.

*   **Blueprint Usage Example (for `GetEffectIcon`):**
    *   This is often used in conjunction with `GetActiveGameplayEffects` or `GetGameplayEffectSpecClass`.
    *   (ASCII Art for BP Node)
        ```
        [GetEffectIcon (RTSAbilitySystemHelper)] --(Return Value: Texture2D)--> [SetBrushFromTexture (on UI Image)]
         ^ Effect (GE Class Ref)
        ```
*   **Risks & Considerations:**
    *   These functions assume the `Effect` class is a subclass of `URTSGameplayEffect` to retrieve the custom UI data. If a standard `UGameplayEffect` class is passed, they will return default/null values for the UI properties.





**`URTSAbilitySystemHelper` - Part 4: Tags**

This section details helper functions for manipulating, querying, and managing `FGameplayTag` and `FGameplayTagContainer` instances, both directly on `UAbilitySystemComponent`s and in relation to actors.

---

**1. Basic Tag Operations**

*   **`GetLastTagName`**
    *   **Signature:**
        `UFUNCTION(BlueprintPure, Category = "RTS")`
        `static FName GetLastTagName(FGameplayTag Tag);`
    *   **Purpose:** Extracts the last component of a hierarchical `FGameplayTag` as an `FName`. For example, for `Status.Permanent.CanAttack`, it would return "CanAttack".
    *   **Parameters:** `Tag` (`FGameplayTag`): The tag to process.
    *   **Return Value:** `FName`: The last part of the tag name.
    *   **Internal Logic Highlights (`.cpp`):**
        1.  Checks if `Tag` is valid.
        2.  Uses `UGameplayTagsManager::Get().SplitGameplayTagFName(Tag, TagNames)` to get an array of `FName` parts.
        3.  Returns `TagNames.Last()` if the array is not empty.
    *   **C++ Usage Example:**
        ```cpp
        // FGameplayTag MyUnitTypeTag = FGameplayTag::RequestGameplayTag("Unit.Infantry.Rifleman");
        // FName UnitArchetype = URTSAbilitySystemHelper::GetLastTagName(MyUnitTypeTag); // UnitArchetype will be "Rifleman"
        ```
    *   **Blueprint Usage Example:**
        *   (ASCII Art for BP Node)
            ```
            [GetLastTagName (RTSAbilitySystemHelper)] --(Return Value: Name)--> [PrintString (Convert Name to String)]
             ^ Tag (GameplayTag)
            ```
    *   **Usage Note:** Useful for when the last part of a tag is used as a key or identifier, like the `NameTag` in `URTSAbilitySystemComponent` for attribute table lookups.

---

**2. Querying Tags on `UAbilitySystemComponent`**

These functions take an `UAbilitySystemComponent*` and query its owned tags.

*   **`GetGameplayTags`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Tags", BlueprintPure)`
        `static FGameplayTagContainer GetGameplayTags(const UAbilitySystemComponent* AbilitySystem);`
    *   **Purpose:** Gets all gameplay tags currently owned by the `AbilitySystem`.
    *   **Internal Logic:** Calls `AbilitySystem->GetOwnedGameplayTags(TagContainer)`.

*   **`GetGameplayTagCount`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Tags", BlueprintPure)`
        `static int32 GetGameplayTagCount(const UAbilitySystemComponent* AbilitySystem, FGameplayTag TagToCheck);`
    *   **Purpose:** Gets the count of a specific `TagToCheck` on the `AbilitySystem`. (Tags can be applied multiple times, though often they are treated as boolean presence).
    *   **Internal Logic:** Calls `AbilitySystem->GetTagCount(TagToCheck)`.

*   **`HasMatchingGameplayTag`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Tags", BlueprintPure)`
        `static bool HasMatchingGameplayTag(const UAbilitySystemComponent* AbilitySystem, FGameplayTag TagToCheck);`
    *   **Purpose:** Checks if the `AbilitySystem` has at least one instance of `TagToCheck` (or a tag that matches it, e.g., a child tag if checking against a parent).
    *   **Internal Logic:** Calls `AbilitySystem->HasMatchingGameplayTag(TagToCheck)`.

*   **`HasAllMatchingGameplayTags`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Tags", BlueprintPure)`
        `static bool HasAllMatchingGameplayTags(const UAbilitySystemComponent* AbilitySystem, const FGameplayTagContainer& TagContainer);`
    *   **Purpose:** Checks if the `AbilitySystem` has all tags present in the `TagContainer`.
    *   **Internal Logic:** Calls `AbilitySystem->HasAllMatchingGameplayTags(TagContainer)`.

*   **`HasAnyMatchingGameplayTags`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Tags", BlueprintPure)`
        `static bool HasAnyMatchingGameplayTags(const UAbilitySystemComponent* AbilitySystem, const FGameplayTagContainer& TagContainer);`
    *   **Purpose:** Checks if the `AbilitySystem` has at least one of the tags present in the `TagContainer`.
    *   **Internal Logic:** Calls `AbilitySystem->HasAnyMatchingGameplayTags(TagContainer)`.

*   **Blueprint Usage Example (for `HasMatchingGameplayTag`):**
    *   (ASCII Art for BP Node)
        ```
        [HasMatchingGameplayTag (RTSAbilitySystemHelper)] --(Return Value: bool)--> [Branch]
         ^ AbilitySystem (ASC Ref)
         ^ TagToCheck (GameplayTag)
        ```

---

**3. Querying Tags on `AActor` (Convenience Wrappers)**

These functions find the `UAbilitySystemComponent` on the given `AActor` and then call the corresponding ASC tag query functions.

*   **`HasActorMatchingGameplayTag`** -> `bool`
*   **`HasActorAllMatchingGameplayTags`** -> `bool`
*   **`HasActorAnyMatchingGameplayTags`** -> `bool`
*   **`GetTags`** (Outputs `FGameplayTagContainer& OutGameplayTags`)

    *   **Signatures:** Similar to the ASC versions, but take `const AActor* Actor` instead of `const UAbilitySystemComponent*`.
    *   **Internal Logic:**
        1.  Null check `Actor`.
        2.  `Actor->FindComponentByClass<UAbilitySystemComponent>()`.
        3.  If ASC found, call the corresponding function from section 2 (e.g., `HasMatchingGameplayTag(ASC, Tag)`).
    *   **Blueprint Usage Example (for `HasActorMatchingGameplayTag`):**
        *   (ASCII Art for BP Node)
            ```
            [HasActorMatchingGameplayTag (RTSAbilitySystemHelper)] --(Return Value: bool)--> [Branch]
             ^ Actor (Actor Ref)
             ^ TagToCheck (GameplayTag)
            ```

*   **`HasActorClassMatchingGameplayTag`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Tags", BlueprintPure)`
        `static bool HasActorClassMatchingGameplayTag(TSubclassOf<AActor> ActorClass, FGameplayTag TagToCheck);`
    *   **Purpose:** Checks if the Class Default Object (CDO) of the `ActorClass` has an `URTSAbilitySystemComponent` that possesses the `TagToCheck` either in its `NameTag` or its `InitialTags`. This is for checking default/inherent tags of an actor type before an instance exists.
    *   **Internal Logic (`.cpp`):**
        1.  Uses `FindDefaultComponentByClass<URTSAbilitySystemComponent>(ActorClass)` to get the ASC CDO.
        2.  If ASC CDO found, checks `ASC_CDO->GetNameTag().MatchesTag(TagToCheck)` OR `ASC_CDO->GetInitialTags().HasTag(TagToCheck)`.
    *   **Usage:** Useful for filtering actor classes in UI or for checking prerequisites based on actor type definitions.

---

**4. Specialized Tag Retrieval**

*   **`GetPlayerOwnerTags`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Tags", BlueprintPure)`
        `static void GetPlayerOwnerTags(const AActor* Actor, FGameplayTagContainer& OutGameplayTags);`
    *   **Purpose:** Gets all gameplay tags from the `UAbilitySystemComponent` of the *player state* that owns the given `Actor`.
    *   **Internal Logic (`.cpp`):**
        1.  (Commented out in provided code, but conceptually):
            *   Finds an `URTSOwnerComponent` on `Actor`.
            *   Gets the `ARTSPlayerState*` from `URTSOwnerComponent`.
            *   Finds the `UAbilitySystemComponent` on the `PlayerState`.
            *   Calls `PlayerStateASC->GetOwnedGameplayTags(OutGameplayTags)`.
    *   **Risks & Considerations:** Depends on `URTSOwnerComponent` and player states having ASCs. The provided code snippet is commented out, so its current functionality in the plugin might be different or rely on game-specific components.

*   **`GetRelationshipTags`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Tags", BlueprintPure)`
        `static FGameplayTagContainer GetRelationshipTags(const AActor* Actor, const AActor* Other);`
    *   **Purpose:** Determines the relationship tags (Friendly, Hostile, Neutral, Self, Visible) of `Other` relative to `Actor`.
    *   **Internal Logic (`.cpp`):**
        1.  Handles null actors (defaults to Neutral).
        2.  If `Actor == Other`, adds `Relationship.Friendly`, `Relationship.Self`, `Relationship.Visible`.
        3.  Otherwise (commented out, but conceptually):
            *   Gets `URTSOwnerComponent` for both actors.
            *   Gets `ARTSPlayerState` for both owners.
            *   Calls a (commented out) `GetRelationshipTagsFromPlayers` which would compare teams/player indices.
        4.  If visibility wasn't determined by player relationships, it calls `IsVisibleForActor(Actor, Other)` (which itself relies on `URTSVisibleComponent`) and adds `Relationship.Visible` if true.
    *   **Risks & Considerations:** Heavily reliant on `URTSOwnerComponent` and `URTSVisibleComponent` (or their equivalents) and team/player state logic for full functionality. The provided snippet shows much of this is conceptual or game-specific.

*   **`GetSourceAndTargetTags`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Tags", BlueprintPure)`
        `static void GetSourceAndTargetTags(const AActor* SourceActor, const AActor* TargetActor, FGameplayTagContainer& OutSourceTags, FGameplayTagContainer& OutTargetTags);`
    *   **Purpose:** Populates `OutSourceTags` and `OutTargetTags`.
        *   `OutSourceTags` gets `SourceActor`'s intrinsic tags + relationship tags of `TargetActor` relative to `SourceActor`.
        *   `OutTargetTags` gets `TargetActor`'s intrinsic tags + relationship tags of `TargetActor` relative to `SourceActor`.
    *   **Internal Logic (`.cpp`):**
        1.  Calls `URTSAbilitySystemHelper::GetTags(SourceActor, OutSourceTags)`.
        2.  Calls `URTSAbilitySystemHelper::GetTags(TargetActor, OutTargetTags)`.
        3.  Calls `URTSAbilitySystemHelper::GetRelationshipTags(SourceActor, TargetActor)` to get `RelationshipTags`.
        4.  Appends `RelationshipTags` to *both* `OutSourceTags` and `OutTargetTags`.
    *   **Usage:** This is the primary function used by `URTSOrderHelper::CreateOrderTargetData` to populate target tags. It's also used by `URTSAbilitySystemHelper::CreateGameplayEventData`.

---

**5. Tag Container Manipulation & Checks**

*   **`UnionGameplayTagContainers`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Tags", BlueprintPure)`
        `static FGameplayTagContainer UnionGameplayTagContainers(const FGameplayTagContainer& FirstTagContainer, const FGameplayTagContainer& SecondTagContainer);`
    *   **Purpose:** Returns a new tag container that is the union (all unique tags from both) of the two input containers.
    *   **Internal Logic:** Creates a new container, calls `AppendTags` for both inputs.

*   **`ChangeTag`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Tags", BlueprintCallable)`
        `static void ChangeTag(AActor* Actor, const FGameplayTag& Tag, bool bExistence);`
    *   **Purpose:** Adds or removes a single `Tag` on the `Actor`'s `URTSAbilitySystemComponent` based on `bExistence`.
    *   **Internal Logic (`.cpp`):**
        1.  Gets `URTSAbilitySystemComponent` from `Actor`.
        2.  Checks if the ASC already has the tag.
        3.  If `bExistence` is true and tag is NOT present, calls `RTS_ASC->AddTag(Tag)`.
        4.  If `bExistence` is false and tag IS present, calls `RTS_ASC->RemoveTag(Tag)`.
    *   **Risks & Considerations:** Server-only for authoritative changes. `AddTag`/`RemoveTag` on `URTSAbilitySystemComponent` handle replication details.

*   **`DoesSatisfyTagRequirements`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Tags", BlueprintPure)`
        `static bool DoesSatisfyTagRequirements(const FGameplayTagContainer& Tags, const FGameplayTagContainer& RequiredTags, const FGameplayTagContainer& BlockedTags);`
    *   **Purpose:** Checks if the `Tags` container has all of the `RequiredTags` and none of the `BlockedTags`.
    *   **Internal Logic (`.cpp`):**
        1.  If `BlockedTags` is not empty, checks `Tags.HasAny(BlockedTags)`. Returns `false` if true.
        2.  If `RequiredTags` is not empty, checks `!Tags.HasAll(RequiredTags)`. Returns `false` if true.
        3.  Returns `true`.

*   **`DoesSatisfyTagRequirementsWithResult`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Tags", BlueprintPure)`
        `static bool DoesSatisfyTagRequirementsWithResult(const FGameplayTagContainer& Tags, const FGameplayTagContainer& InRequiredTags, const FGameplayTagContainer& InBlockedTags, FGameplayTagContainer& OutMissingTags, FGameplayTagContainer& OutBlockingTags);`
    *   **Purpose:** Similar to `DoesSatisfyTagRequirements`, but also populates `OutMissingTags` and `OutBlockingTags` with the specific tags that caused the failure.
    *   **Internal Logic (`.cpp`):**
        1.  Iterates `InBlockedTags`. If `Tags.HasTag(BlockedTag)`, adds to `OutBlockingTags` and sets overall success to `false`.
        2.  Iterates `InRequiredTags`. If `!Tags.HasTag(RequiredTag)`, adds to `OutMissingTags` and sets overall success to `false`.
        3.  Returns overall success.
    *   **Usage:** Used by `URTSOrderHelper` when populating `FRTSOrderErrorTags`.

*   **`FilterForTagsWithParentTag`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Tags", BlueprintCallable)` // Should likely be BlueprintPure if it doesn't modify state
        `static FGameplayTagContainer FilterForTagsWithParentTag(const FGameplayTagContainer& TagContainer, FGameplayTag ParentTag);`
    *   **Purpose:** Returns a new tag container containing only the tags from `TagContainer` that are children of (or match) `ParentTag`.
    *   **Internal Logic (`.cpp`):** Iterates `TagContainer`. If `Tag.MatchesTag(ParentTag)`, adds `Tag` to a new return container.
    *   **Blueprint Usage Example:** Get all "Status.Debuff.*" tags from an actor's current tags.
        ```
        [GetTags (on Actor)] -> (TagContainer) ------+
                                                     V
        (ParentTag: "Status.Debuff")------------> [FilterForTagsWithParentTag] ---> (FilteredContainer)
        ```







**`URTSAbilitySystemHelper` - Part 5: Gameplay Events & Cues, Order Data Conversion**

This section details functions for creating and sending Gameplay Events (a core GAS mechanism for triggering abilities), an internal helper for converting order targeting data to ability targeting data, and a utility for executing unattached Gameplay Cues.

---

**1. Gameplay Event Functions**

Gameplay Events are a way to trigger abilities remotely or from game logic without directly calling `TryActivateAbility`. An ability can be configured to listen for a specific event tag.

*   **`CreateGameplayEventData`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Event", BlueprintPure)`
        `static void CreateGameplayEventData(AActor* Source, const FRTSOrderTargetData& TargetData, TSubclassOf<UGameplayAbility> Ability, FGameplayEventData& OutEventData);`
    *   **Purpose:**
        Populates an `FGameplayEventData` struct with information derived from a `Source` actor, `TargetData` (which includes target actor and location), and an `Ability` class. This `FGameplayEventData` can then be used with `SendGameplayEvent` to trigger abilities that listen for the `Ability`'s event tag.
    *   **Parameters:**
        *   `Source` (`AActor*`): The instigator of the event (usually the actor whose ability is being triggered).
        *   `TargetData` (`const FRTSOrderTargetData&`): Contains the target actor, location, and pre-calculated target tags.
        *   `Ability` (`TSubclassOf<UGameplayAbility>`): The ability class from which to derive the `EventTag` and for which targeting data will be formatted.
        *   `OutEventData` (`FGameplayEventData&`): The struct to be populated.
    *   **Internal Logic Highlights (`.cpp`):**
        1.  Null check on `Source`.
        2.  Gets the `URTSAbilitySystemComponent` from `Source`.
        3.  Gets the `Source` actor's Gameplay Tags using `URTSAbilitySystemHelper::GetTags`.
        4.  Casts the `Ability` CDO to `URTSGameplayAbility` to get its `EventTriggerTag`.
        5.  Populates `OutEventData`:
            *   `EventTag`: From `RTSAbility->GetEventTriggerTag()`.
            *   `Instigator`: `Source` actor.
            *   `Target`: `TargetData.Actor`.
            *   `OptionalObject`, `OptionalObject2`: Set to `nullptr`.
            *   `InstigatorTags`: Tags of the `Source` actor.
            *   `TargetTags`: `TargetData.TargetTags`.
            *   `EventMagnitude`: Set to the `Source` actor's `URTSAbilitySystemComponent->GetLevel()` (useful if ability effects scale with caster level sent via event).
            *   `TargetData` (for the event): Calls `URTSAbilitySystemHelper::CreateAbilityTargetDataFromOrderTargetData` to convert `FRTSOrderTargetData` into an `FGameplayAbilityTargetDataHandle` suitable for GAS.
    *   **C++ Usage Example:**
        ```cpp
        // AActor* MyCaster = ...;
        // FRTSOrderTargetData OrderTarget = URTSOrderHelper::CreateOrderTargetData(MyCaster, SomeEnemy, FVector2D::ZeroVector);
        // TSubclassOf<UGameplayAbility> MyFireballAbilityClass = UMyFireball::StaticClass();
        // FGameplayEventData EventPayload;
        // URTSAbilitySystemHelper::CreateGameplayEventData(MyCaster, OrderTarget, MyFireballAbilityClass, EventPayload);
        // URTSAbilitySystemHelper::SendGameplayEvent(MyCaster, EventPayload); // Or SomeEnemy if event is on target
        ```
    *   **Blueprint Usage Example:**
        *   (ASCII Art for BP Node - Note: `BlueprintPure` with output references needs exec pins)
            ```
            [Exec Pin] ---> [CreateGameplayEventData (RTSAbilitySystemHelper)] --(OutEventData: GameplayEventData)--> [SendGameplayEvent]
             ^ Source (Actor Ref)                                                                                   ^ Actor (Target of Event)
             | TargetData (FRTSOrderTargetData)                                                                     ^ Payload (From OutEventData)
             ^ Ability (GA Class Ref)
            ```
    *   **Risks & Considerations:**
        *   The `Ability` class must be a `URTSGameplayAbility` for `GetEventTriggerTag()` to work as intended.
        *   The `EventMagnitude` is set to the source actor's level. If an ability scales differently with events, this might need adjustment or the ability itself should fetch scale factors.

*   **`CreateGameplayEventDataWithEventTag`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Event", BlueprintPure)`
        `static void CreateGameplayEventDataWithEventTag(AActor* Source, AActor* Target, FGameplayTag EventTag, FGameplayEventData& OutEventData);`
    *   **Purpose:**
        A simpler way to create `FGameplayEventData` when you already know the specific `EventTag` and don't need to derive it from an ability class or involve complex `FRTSOrderTargetData`.
    *   **Parameters:**
        *   `Source` (`AActor*`): Instigator.
        *   `Target` (`AActor*`): Target of the event.
        *   `EventTag` (`FGameplayTag`): The specific tag for the event.
        *   `OutEventData` (`FGameplayEventData&`): Struct to be populated.
    *   **Internal Logic Highlights (`.cpp`):**
        1.  Null checks on `Source`, `Target`.
        2.  Gets `URTSAbilitySystemComponent` from `Source`.
        3.  Gets tags for `Source` and `Target`.
        4.  Populates `OutEventData` similarly to the above function, but `EventTag` is taken directly, and `TargetData` (for the event) is set to `nullptr`. `EventMagnitude` is still set to source's level.
    *   **Usage:** Useful for generic gameplay events not tied to a specific ability's definition for targeting (e.g., "PlayerEnteredRegion" event).

*   **`SendGameplayEvent`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|Event", BlueprintCallable)`
        `static int32 SendGameplayEvent(AActor* Actor, FGameplayEventData Payload);`
    *   **Purpose:** Sends a pre-constructed `GameplayEventData` (`Payload`) to the `AbilitySystemComponent` of the specified `Actor`. This will attempt to activate any abilities on that `Actor` that are listening for `Payload.EventTag`.
    *   **Parameters:**
        *   `Actor` (`AActor*`): The actor whose ASC will receive the event (this is the actor that has abilities listening for the event).
        *   `Payload` (`FGameplayEventData`): The event data containing the tag, instigator, target, etc.
    *   **Return Value:** `int32`: The number of abilities successfully activated by this event.
    *   **Internal Logic Highlights (`.cpp`):**
        1.  Null check `Actor`.
        2.  Gets `IAbilitySystemInterface` from `Actor`, then its `UAbilitySystemComponent`.
        3.  If ASC found, creates a `FScopedPredictionWindow` (important for client-predicted abilities).
        4.  Calls `AbilitySystemComponent->HandleGameplayEvent(Payload.EventTag, &Payload)`.
        5.  Returns the result from `HandleGameplayEvent`.
    *   **C++ Usage Example:** (Shown in `CreateGameplayEventData` example)
    *   **Blueprint Usage Example:** (Shown in `CreateGameplayEventData` example)
    *   **Risks & Considerations:**
        *   The `Actor` parameter is the one *receiving* the event and potentially activating an ability. This might be the `Source` from `CreateGameplayEventData`, or it could be the `Target`, depending on which actor's abilities should react.
        *   For client-predicted abilities, this should be called on both client and server. For server-only abilities, call on server.

---

**2. Order Data to Ability Data Conversion**

*   **`CreateAbilityTargetDataFromOrderTargetData`**
    *   **Signature:**
        `static FGameplayAbilityTargetDataHandle CreateAbilityTargetDataFromOrderTargetData(AActor* OrderedActor, const FRTSOrderTargetData& OrderTargetData, ERTSTargetType TargetType);`
        *(C++ static helper, not a UFUNCTION)*
    *   **Purpose:**
        Converts an `FRTSOrderTargetData` (used by the RTS order system) into an `FGameplayAbilityTargetDataHandle` (used by GAS when activating abilities with targeting). This is necessary because GAS has its own specific structures for targeting information.
    *   **Parameters:**
        *   `OrderedActor` (`AActor*`): The actor performing the order/ability (used as the source for location-based targeting).
        *   `OrderTargetData` (`const FRTSOrderTargetData&`): The RTS order system's target data.
        *   `TargetType` (`ERTSTargetType`): The target type of the ability/order, used to determine how to format the output.
    *   **Return Value:** `FGameplayAbilityTargetDataHandle`: A handle to the newly created GAS-compatible target data.
    *   **Internal Logic Highlights (`.cpp`):**
        *   Switches on `TargetType`:
            *   `ERTSTargetType::ACTOR`:
                *   Creates an `FGameplayAbilityTargetData_ActorArray`.
                *   Adds `OrderTargetData.Actor` to its `TargetActorArray`.
                *   Returns a handle to this new data.
            *   `ERTSTargetType::LOCATION` or `ERTSTargetType::DIRECTION`:
                *   Creates an `FGameplayAbilityTargetData_LocationInfo`.
                *   Sets `SourceLocation` to the literal transform of `OrderedActor`.
                *   Sets `TargetLocation` to a literal transform derived from `OrderTargetData.Location` (X, Y, with Z=0).
                *   Returns a handle to this new data.
            *   Default: Returns a null handle (`nullptr`).
    *   **Usage:** This is called by `CreateGameplayEventData` to prepare the `TargetData` field for the `FGameplayEventData` struct. It's an internal bridge.
    *   **Risks & Considerations:**
        *   The Z=0 assumption for location/direction targets might need adjustment for 3D games (similar to the `URTSMoveOrder` 3D discussion).
        *   If new `ERTSTargetType` enums are added, this function would need to be updated to handle them.

---

**3. Gameplay Cue Execution**

*   **`ExecuteGameplayCueWithParamsUnattached`**
    *   **Signature:**
        `UFUNCTION(Category = "RTS Ability|GameplayCue", BlueprintCallable)`
        `static void ExecuteGameplayCueWithParamsUnattached(AActor* Actor, FGameplayTag AreaOfEffectGameplayCue, const FGameplayCueParameters& GameplayCueParameters);`
    *   **Purpose:**
        Executes a Gameplay Cue (visual/audio effect) directly without it being tied to a Gameplay Ability's activation or a Gameplay Effect's application. This is useful for one-shot environmental effects or cues triggered by game events not directly linked to GAS.
    *   **Parameters:**
        *   `Actor` (`AActor*`): The actor on which the cue should be "centered" or instantiated.
        *   `AreaOfEffectGameplayCue` (`FGameplayTag`): The Gameplay Cue Tag to execute (e.g., `GameplayCue.Explosion.Generic`).
        *   `GameplayCueParameters` (`const FGameplayCueParameters&`): Parameters to pass to the Gameplay Cue Notify actor (e.g., location, scale, instigator).
    *   **Internal Logic Highlights (`.cpp`):**
        1.  Null checks `Actor` and validates `AreaOfEffectGameplayCue`.
        2.  Calls `UAbilitySystemGlobals::Get().GetGameplayCueManager()->HandleGameplayCue(Actor, AreaOfEffectGameplayCue, EGameplayCueEvent::Executed, GameplayCueParameters);`
    *   **C++ Usage Example:**
        ```cpp
        // AActor* ExplosionSite = ...;
        // FGameplayTag ExplosionCueTag = FGameplayTag::RequestGameplayTag("GameplayCue.MyGame.GenericExplosion");
        // FGameplayCueParameters CueParams;
        // CueParams.Location = ExplosionSite->GetActorLocation();
        // CueParams.Normal = FVector::UpVector; // Optional
        // CueParams.EffectCauser = GetExplosionInstigator(); // Optional

        // URTSAbilitySystemHelper::ExecuteGameplayCueWithParamsUnattached(ExplosionSite, ExplosionCueTag, CueParams);
        ```
    *   **Blueprint Usage Example:**
        *   (ASCII Art for BP Node)
            ```
            [Exec Pin] ---> [ExecuteGameplayCueWithParamsUnattached (RTSAbilitySystemHelper)] --Exec-->
                            ^ Actor (Actor Ref)
                            | AreaOfEffectGameplayCue (GameplayTag)
                            ^ GameplayCueParameters (GameplayCueParameters struct)
            ```
        *   You would typically "Make GameplayCueParameters" in Blueprint to construct the parameters struct.
    *   **Risks & Considerations:**
        *   The Gameplay Cue Tag must be registered, and a corresponding Gameplay Cue Notify actor (Blueprint or C++) must exist to handle the cue.
        *   "Unattached" means it's not tied to the lifecycle of a Gameplay Effect. It fires once. For continuous cues, they are usually part of a Gameplay Effect.










## 2.3. AI & Behavior Trees

The ColonyOrders plugin integrates its order system with AI, primarily through a custom AI Controller and by enabling orders to specify Behavior Trees for their execution. This section explores these components.

---

**2.3.1 `ARTSCharacterAIController` (Driving Unit Behavior)**

**1. Overview & Purpose**

`ARTSCharacterAIController` is a specialized `AAIController` designed to control RTS units (pawns). Its main responsibilities are to receive orders (via its `IssueOrder` method, typically called by `URTSOrderWithBehavior`), set up the necessary information on its Blackboard component, and run the appropriate `UBehaviorTree` asset associated with the current order. It acts as the bridge between the high-level order system and the detailed AI logic defined in Behavior Trees.

*   **Primary Audience:**
    *   **Developers:** Will use this as a base class for their game's unit AI controllers. They might extend it for more complex AI state management or custom interactions with Behavior Trees beyond what's provided.
    *   **Designers:** Will typically set this controller (or a Blueprint child of it) as the `AIControllerClass` on their unit Pawns. They will also configure its `CharacterBlackboardAsset` and `StopOrder` properties in Blueprint defaults. The Behavior Trees that this controller runs are also designed by them.

**2. Core Functionality & Features**

*   **Order Execution:** Receives `FRTSOrderData` and an `FRTSOrderCallback` via its `IssueOrder` method.
*   **Blackboard Management:**
    *   Uses a specified `UBlackboardData` asset (`CharacterBlackboardAsset`).
    *   Populates Blackboard keys (defined in `URTSBlackboardHelper`) with data from the current order (e.g., target actor, location, index, range, home location).
*   **Behavior Tree Control:**
    *   Runs the `UBehaviorTree` asset associated with the current order (obtained via `URTSOrderHelper::GetBehaviorTree`).
    *   Handles restarting the Behavior Tree if the order type requires it (`URTSOrderHelper::ShouldRestartBehaviourTree`).
*   **State Tracking:** Internally tracks the result of the Behavior Tree execution (`BehaviorTreeResult`) and uses it to invoke the `FRTSOrderCallback` when the tree finishes (succeeds or fails).
*   **Default Stop Order:** Has a concept of a `StopOrder` (typically `URTSStopOrder`), which defines the default idle behavior tree.

**Related Concepts/Classes:**

*   `AAIController`: The base class from Unreal Engine.
*   [`URTSOrderComponent`](#2.1.1-URTSOrderComponent): The component on the pawn that manages the order queue. The `IssueOrder` method on `URTSOrderWithBehavior` (called by `URTSOrderComponent`) typically calls this AI Controller's `IssueOrder`.
*   [`URTSOrderWithBehavior`](#2.1.3.2-URTSOrderWithBehavior): Order types that are executed via this controller specify a `BehaviorTree` asset.
*   `UBehaviorTree` & `UBlackboardData`: Core UE AI assets.
*   [`URTSBlackboardHelper`](#X.X.X-URTSBlackboardHelper): Provides the constant FNames for Blackboard keys used by this controller and its Behavior Trees.
*   [`FRTSOrderData`](#2.1.6.1-FRTSOrderData): The data structure representing the order to be executed.
*   `FRTSOrderCallback`: The delegate type passed to this controller, which it must call upon order completion.

**3. Key Properties (Header File Analysis - `RTSCharacterAIController.h`)**

*   **Private Properties (Configurable in Blueprint Defaults of subclasses):**

    *   `UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "RTS", meta = (AllowPrivateAccess = true))`
        `TArray<TEnumAsByte<EObjectTypeQuery>> AttackTargetDetectionChannels;`
        *   **Purpose:** (Not directly used in the provided C++ code snippets for `ARTSCharacterAIController` but present in the header). Intended to define which types of physics objects should be considered when AI is scanning for attack targets (e.g., "Pawn", "Destructible"). This would be used by Behavior Tree tasks or services performing target acquisition.
        *   **`EditDefaultsOnly`:** Configurable per AI controller archetype.
        *   **Considerations:** The actual usage of these channels would be within specific Behavior Tree nodes or C++ AI logic that performs overlap checks or traces.

    *   `UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "RTS", meta = (AllowPrivateAccess = true))`
        `TArray<TEnumAsByte<EObjectTypeQuery>> FindLocationDetectionChannels;`
        *   **Purpose:** (Not directly used in provided C++). Intended for AI tasks that need to find a free or valid location (e.g., for kiting, pathing around obstacles, or finding a build spot). Defines which object types to consider during these searches.
        *   **Considerations:** Similar to `AttackTargetDetectionChannels`, used by specific AI logic.

    *   `UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "RTS", meta = (AllowPrivateAccess = true))`
        `TSoftClassPtr<URTSStopOrder> StopOrder;`
        *   **Purpose:** A soft class pointer to the `URTSStopOrder` subclass that defines the unit's idle/default behavior. When no other order is active, or an order is completed/canceled, the AI will typically run the Behavior Tree associated with this `StopOrder`.
        *   **`EditDefaultsOnly`:** Crucial to set this in the Blueprint defaults of your AI Controller to a valid `URTSStopOrder` Blueprint (which itself has an "Idle" Behavior Tree assigned).
        *   **Initialization:** Loaded synchronously in `OnPossess`.
        *   **Getter:** `GetStopOrder()` provides read access.

    *   `UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "RTS", meta = (AllowPrivateAccess = true))`
        `UBlackboardData* CharacterBlackboardAsset;`
        *   **Purpose:** The `UBlackboardData` asset that this AI controller will use. This Blackboard will store all relevant information for the Behavior Trees (target, location, etc.).
        *   **`EditDefaultsOnly`:** Must be assigned in the Blueprint defaults of your AI Controller.
        *   **Initialization:** `UseBlackboard()` is called in `OnPossess` with this asset.

*   **Private C++ Members (Runtime State):**

    *   `TArray<FRTSOrderData> OrderQueue;` (Shadows `URTSOrderComponent::OrderQueue`. Not used in provided code, seems like a potential leftover or for a different queuing model. The primary queue is on `URTSOrderComponent`).
    *   `FRTSOrderCallback CurrentOrderResultCallback;`
        *   **Purpose:** Stores the callback delegate that was passed in with the current `IssueOrder` call. This controller is responsible for invoking this callback when the current Behavior Tree finishes.
    *   `EBTNodeResult::Type BehaviorTreeResult;`
        *   **Purpose:** Stores the result (`Succeeded`, `Failed`, `InProgress`) of the currently executing Behavior Tree. Updated by `BehaviorTreeEnded()` and checked in `Tick()`.

**4. Key Methods (Header & Source File Analysis - `RTSCharacterAIController.h` & `RTSCharacterAIController.cpp`)**

*   **Public Methods:**

    *   `ARTSCharacterAIController(const FObjectInitializer& ObjectInitializer);`
        *   **Constructor:** Sets `PrimaryActorTick.bCanEverTick = true;`.

    *   `UFUNCTION(BlueprintPure)`
        `TSubclassOf<AActor> GetBuildingClass() const;`
        *   **Purpose:** (Commented out logic related to `URTSBuilderComponent`). Intended to get the class of the building the AI is currently ordered to construct, by reading an index from the Blackboard and looking it up in a (hypothetical) `URTSBuilderComponent`'s list of constructible buildings.
        *   **Current State:** As implemented in the provided snippet, it returns `nullptr` after a Blackboard check. For this to be functional, the `URTSBuilderComponent` logic would need to be present and integrated.

    *   `UFUNCTION(BlueprintPure)`
        `bool HasOrder(TSubclassOf<URTSOrder> OrderType) const;`
        *   **Purpose:** Checks if the current order type active on the Blackboard matches the given `OrderType`.
        *   **Internal Logic:** Reads `URTSBlackboardHelper::BLACKBOARD_KEY_ORDER_TYPE` from the Blackboard and compares it.

    *   `void IssueOrder(const FRTSOrderData& Order, FRTSOrderCallback Callback, const FVector& HomeLocation);`
        *   **Purpose:** This is the primary method called by `URTSOrderWithBehavior::IssueOrder` to command the AI.
        *   **Parameters:**
            *   `Order`: The `FRTSOrderData` to execute.
            *   `Callback`: The delegate to call when this order is finished.
            *   `HomeLocation`: A reference location for the AI (e.g., guard post).
        *   **Internal Logic Highlights (`.cpp`):**
            1.  Calls `URTSOrderHelper::GetBehaviorTree(Order.OrderType.Get())` to find the BT for this order. If null, invokes `Callback` with `FAILED` and returns.
            2.  Stores `Callback` in `CurrentOrderResultCallback`.
            3.  Resets `BehaviorTreeResult` to `EBTNodeResult::InProgress`.
            4.  Calls `SetBlackboardValues(Order, HomeLocation)` to update the Blackboard.
            5.  Calls `ApplyOrder(Order, BehaviorTree)` to start or restart the Behavior Tree.

    *   `virtual void Tick(float DeltaTime) override;`
        *   **Purpose:** Standard actor tick. Used here to check `BehaviorTreeResult`.
        *   **Internal Logic Highlights (`.cpp`):**
            1.  If `Blackboard` is null, returns.
            2.  Checks `BehaviorTreeResult`:
                *   If `Failed`, broadcasts `CurrentOrderResultCallback` with `ERTSOrderResult::FAILED`.
                *   If `Succeeded`, broadcasts `CurrentOrderResultCallback` with `ERTSOrderResult::SUCCEEDED`.
            3.  Resets `BehaviorTreeResult` to `InProgress` after broadcasting. (This ensures the callback is only fired once per completion).

    *   `UFUNCTION(Category = RTS, BlueprintPure)`
        `TSoftClassPtr<URTSStopOrder> GetStopOrder() const;`
        *   **Purpose:** Getter for the configured `StopOrder` class.

    *   `UFUNCTION(Category = RTS, BlueprintCallable)`
        `void BehaviorTreeEnded(EBTNodeResult::Type Result);`
        *   **Purpose:** This function is intended to be called *by a Behavior Tree task* (typically a custom "Finish Order" task placed at the end of relevant BT branches) to signal that the tree has completed its execution for the current order with a given `Result`.
        *   **Internal Logic (`.cpp`):** Sets `this->BehaviorTreeResult` to the passed `Result` (unless it's `InProgress` or `Aborted`).
        *   **C++ Usage (Conceptual, from a BT Task):**
            ```cpp
            // In a UBTTask_FinishRTSOrder::ExecuteTask(...)
            // ARTSCharacterAIController* AIController = Cast<ARTSCharacterAIController>(OwnerComp.GetAIOwner());
            // if (AIController)
            // {
            //     AIController->BehaviorTreeEnded(EBTNodeResult::Succeeded); // Or Failed
            // }
            // return EBTNodeResult::Succeeded; // Task itself succeeds
            ```
        *   **Risks:** The Behavior Tree *must* call this function (or a similar mechanism) to signal completion. Otherwise, `CurrentOrderResultCallback` will never be invoked by `Tick`.

    *   `FVector GetHomeLocation();`
        *   **Purpose:** Retrieves the current home location from the Blackboard.
        *   **Internal Logic:** Reads `URTSBlackboardHelper::BLACKBOARD_KEY_HOME_LOCATION`.

*   **Protected Virtual Methods:**
    *   `virtual void OnPossess(APawn* InPawn) override;`
        *   **Purpose:** Called when the AI controller possesses a pawn.
        *   **Internal Logic Highlights (`.cpp`):**
            1.  Calls `Super::OnPossess(InPawn)`.
            2.  Loads `StopOrder` synchronously.
            3.  Calls `UseBlackboard(CharacterBlackboardAsset, BlackboardComponent)`.
            4.  If Blackboard is successfully set up, calls `SetBlackboardValues` with the `StopOrder` and the pawn's current location to initialize the AI into an idle state.
            5.  Calls `RunBehaviorTree(URTSOrderHelper::GetBehaviorTree(StopOrder.Get()))` to start the idle Behavior Tree.

*   **Private Methods:**
    *   `void SetBlackboardValues(const FRTSOrderData& Order, const FVector& HomeLocation);`
        *   **Purpose:** Populates the Blackboard with values from the `Order` and `HomeLocation`.
        *   **Internal Logic (`.cpp`):**
            *   Sets `BLACKBOARD_KEY_ORDER_TYPE` to `Order.OrderType.Get()`.
            *   If `Order.bUseLocation` is true, sets `BLACKBOARD_KEY_LOCATION`. The current code converts `Order.Location` (FVector2D) to `FVector` with Z=0. (Note: `URTSUtilities::GetGroundLocation2D` is commented out, which would typically do a raycast to find ground Z).
            *   Sets `BLACKBOARD_KEY_TARGET` to `Order.Target`.
            *   Sets `BLACKBOARD_KEY_INDEX` to `Order.Index`.
            *   Sets `BLACKBOARD_KEY_RANGE` using `URTSOrderHelper::GetOrderRequiredRange`.
            *   Sets `BLACKBOARD_KEY_HOME_LOCATION` to `HomeLocation`.
        *   **Considerations for 3D:** The Z=0 conversion for location is a point of interest for 3D maps.

    *   `void ApplyOrder(const FRTSOrderData& Order, UBehaviorTree* BehaviorTree);`
        *   **Purpose:** Starts or restarts the specified `BehaviorTree`.
        *   **Internal Logic (`.cpp`):**
            1.  Gets the `UBehaviorTreeComponent`.
            2.  If the `BehaviorTree` to run is the same as the currently running tree AND `URTSOrderHelper::ShouldRestartBehaviourTree(Order.OrderType.Get())` is true, it calls `BehaviorTreeComponent->RestartTree()`.
            3.  Else (if it's a different tree), it calls `BehaviorTreeComponent->StartTree(*BehaviorTree, EBTExecutionMode::SingleRun)`.

    *   `bool VerifyBlackboard() const;`
        *   **Purpose:** Checks if the `Blackboard` pointer is valid and logs a warning if not. Used as a guard in several functions.

**5. Integration & Usage Scenarios**

*   **Typical Setup:**
    1.  Create a Blueprint child class of `ARTSCharacterAIController` (e.g., `BP_AIController_Unit`).
    2.  In `BP_AIController_Unit`'s Class Defaults:
        *   Assign a `UBlackboardData` asset to `CharacterBlackboardAsset`. This Blackboard must contain keys matching those in `URTSBlackboardHelper` (e.g., `Order_OrderType`, `Order_Target`, `Order_Location`, `Order_Index`, `Order_Range`, `Order_HomeLocation`).
        *   Assign a `URTSStopOrder` Blueprint (e.g., `BP_Order_Stop`) to the `StopOrder` property.
    3.  Assign `BP_AIController_Unit` as the `AIControllerClass` for your unit Pawns.
*   **Execution Flow:**
    1.  `URTSOrderComponent` calls `URTSOrderWithBehavior::IssueOrder`.
    2.  `URTSOrderWithBehavior::IssueOrder` calls `ARTSCharacterAIController::IssueOrder`.
    3.  `ARTSCharacterAIController` sets Blackboard values and starts/restarts the Behavior Tree associated with the order.
    4.  The Behavior Tree executes, using values from the Blackboard.
    5.  A task at the end of the Behavior Tree calls `ARTSCharacterAIController::BehaviorTreeEnded`.
    6.  `ARTSCharacterAIController::Tick` detects the completion and invokes the `CurrentOrderResultCallback`, which notifies `URTSOrderComponent`.
*   **Developer Workflow:**
    *   Define necessary Blackboard keys in a `UBlackboardData` asset.
    *   Ensure Behavior Trees correctly use these Blackboard keys.
    *   Create custom BT Tasks/Services/Decorators that might need to interact with this controller or read specific Blackboard values.
    *   Implement a BT Task to call `BehaviorTreeEnded`.
*   **Designer Workflow:**
    *   Create `UBlackboardData` assets and `UBehaviorTree` assets.
    *   Create Blueprint children of `ARTSCharacterAIController` and configure their `CharacterBlackboardAsset` and `StopOrder`.
    *   Assign these AI Controllers to Pawns.

**6. What the User Needs to Implement/Provide**

*   **`UBlackboardData` Asset:** Correctly configured with keys like `Order_Target`, `Order_Location`, etc. (matching `URTSBlackboardHelper`).
*   **`UBehaviorTree` Assets:** For each `URTSOrderWithBehavior` type (including the `StopOrder`), a Behavior Tree that implements the desired logic.
*   **Custom BT Task for `BehaviorTreeEnded`:** A `UBTTaskNode` that, when executed, gets its owning AI Controller and calls `BehaviorTreeEnded` with the appropriate result (Succeeded/Failed). This task should be placed at the terminal points of Behavior Tree logic branches.
*   **Configuration of AI Controller:** Set the `CharacterBlackboardAsset` and `StopOrder` on AI Controller Blueprints.
*   **Assignment to Pawns:** Set the `AIControllerClass` on Pawns.

**7. Advanced Topics & Considerations**

*   **Behavior Tree Complexity:** All the actual "doing" of an order (pathfinding, animation, ability activation via events) resides in the Behavior Trees. This controller is just the orchestrator.
*   **Custom AI Needs:** For very different AI paradigms (e.g., Goal Oriented Action Planning instead of pure Behavior Trees), this controller might need significant extension or replacement, though the order data and Blackboard keys could still be relevant.
*   **Order Interruption:** The `ApplyOrder` logic handles restarting Behavior Trees. If a BT needs to react to being externally stopped (e.g., by a new order), it should use standard BT mechanisms like abort observers or conditional checks.
*   **`HomeLocation` Usage:** The `HomeLocation` passed to `IssueOrder` and set on the Blackboard is critical for AI behaviors like guarding a spot or having a leash range. Behavior Trees need to read and use `Order_HomeLocation`.
*   **3D Location Handling:** The current `SetBlackboardValues` converts the `FVector2D` order location to an `FVector` with Z=0. For maps with height variation, this should ideally perform a raycast to find the actual ground Z (the commented-out `URTSUtilities::GetGroundLocation2D` hints at this).







**2.3.2 `URTSBlackboardHelper` (Interacting with Blackboard)**

**1. Overview & Purpose**

`URTSBlackboardHelper` is a `UBlueprintFunctionLibrary` that serves two main purposes:
1.  It defines constant `FName` values for the Blackboard keys that `ARTSCharacterAIController` uses to pass order information to Behavior Trees.
2.  It provides static Blueprint-callable utility functions for Behavior Tree nodes (Tasks, Services, Decorators) to easily read these specific order-related values from their owning AI Controller's Blackboard.

By centralizing key names and providing convenient getters, it promotes consistency and reduces the chances of errors when AI Behavior Trees need to access order parameters.

*   **Primary Audience:**
    *   **Developers:** Will use the static `FName` constants when setting up `UBlackboardData` assets or when writing C++ BT nodes that interact with these keys. They might also use the C++ getter functions from custom C++ BT nodes.
    *   **Designers:** Will primarily use the Blueprint-callable getter functions within their Behavior Tree Task, Service, or Decorator Blueprints to retrieve information about the current order being executed by the AI.

**2. Core Functionality & Features**

*   **Standardized Blackboard Keys:** Defines `FName` constants for keys like `Order_OrderType`, `Order_Location`, `Order_Target`, etc.
*   **Blueprint-Accessible Getters:** Provides `BlueprintPure` functions that take a `UBTNode* NodeOwner` (to find the relevant Blackboard) and return the typed value for a specific order parameter.
*   **Encapsulation:** Hides the direct FName string lookups from BT graph logic, making BTs cleaner and less prone to typos in key names.

**Related Concepts/Classes:**

*   [`ARTSCharacterAIController`](#2.3.1-ARTSCharacterAIController): This AI controller *writes* to the Blackboard using the `FName` keys defined here.
*   `UBehaviorTree`, `UBlackboardData`, `UBlackboardComponent`: Core UE AI classes. Behavior Trees read values from the Blackboard.
*   `UBTNode`: The base class for all Behavior Tree nodes. The helper functions require a `UBTNode*` to determine which Blackboard to access.

**3. Key Properties (FName Constants) (Header File Analysis - `RTSBlackboardHelper.h`)**

These are `static const FName` members, providing standardized names for Blackboard keys.

*   `static const FName BLACKBOARD_KEY_ORDER_TYPE;`
    *   **Key Name (String):** `"Order_OrderType"`
    *   **Purpose:** Stores the `TSubclassOf<URTSOrder>` (as a `UClass*`) of the current order being executed.
    *   **Set by:** `ARTSCharacterAIController::SetBlackboardValues`.
    *   **Read by:** Behavior Trees might use this to adapt logic based on the specific order type, though often the Behavior Tree itself is specific to an order type.

*   `static const FName BLACKBOARD_KEY_LOCATION;`
    *   **Key Name (String):** `"Order_Location"`
    *   **Purpose:** Stores the `FVector` target location for the current order (if applicable).
    *   **Set by:** `ARTSCharacterAIController::SetBlackboardValues` (converted from `FRTSOrderData::Location`).
    *   **Read by:** Behavior Tree tasks like "Move To" to get the destination.

*   `static const FName BLACKBOARD_KEY_TARGET;`
    *   **Key Name (String):** `"Order_Target"`
    *   **Purpose:** Stores the `AActor*` target for the current order (if applicable).
    *   **Set by:** `ARTSCharacterAIController::SetBlackboardValues`.
    *   **Read by:** Behavior Tree tasks like "Move To Actor", "Attack Actor", or services checking target status.

*   `static const FName BLACKBOARD_KEY_INDEX;`
    *   **Key Name (String):** `"Order_Index"`
    *   **Purpose:** Stores the `int32` index associated with the current order (e.g., ability slot, production index).
    *   **Set by:** `ARTSCharacterAIController::SetBlackboardValues`.
    *   **Read by:** Behavior Trees, especially those for `URTSUseAbilityOrder`, to know which specific ability/variant to use.

*   `static const FName BLACKBOARD_KEY_RANGE;`
    *   **Key Name (String):** `"Order_Range"`
    *   **Purpose:** Stores the `float` required range for the current order (e.g., attack range, ability cast range).
    *   **Set by:** `ARTSCharacterAIController::SetBlackboardValues` (obtained via `URTSOrderHelper::GetOrderRequiredRange`).
    *   **Read by:** Behavior Tree tasks ("Move To" can use an acceptance radius) or decorators to check if within range.

*   `static const FName BLACKBOARD_KEY_HOME_LOCATION;`
    *   **Key Name (String):** `"Order_HomeLocation"`
    *   **Purpose:** Stores the `FVector` "home" or reference location for the AI, relevant for the current order (e.g., a guard post, a rally point the unit should return to).
    *   **Set by:** `ARTSCharacterAIController::SetBlackboardValues`.
    *   **Read by:** Behavior Trees for logic like "return to guard post" or "don't chase enemies too far from home."

**4. Key Methods (Blueprint-Callable Getters) (Header & Source File Analysis - `RTSBlackboardHelper.h` & `RTSBlackboardHelper.cpp`)**

All these functions are `UFUNCTION(BlueprintPure, Category = "RTS|BehaviorTree", Meta = (HidePin = "NodeOwner", DefaultToSelf = "NodeOwner"))`.
*   The `Meta` specifiers mean that if called within a Blueprint Behavior Tree node, the `NodeOwner` pin will be hidden and automatically wired to "self" (the node instance).

*   `static TSubclassOf<URTSOrder> GetBlackboardOrderType(UBTNode* NodeOwner);`
    *   **Purpose:** Retrieves the current order's class from the Blackboard.
    *   **Internal Logic (`.cpp`):**
        1.  `UBlackboardComponent* BlackboardComp = UBTFunctionLibrary::GetOwnersBlackboard(NodeOwner);`
        2.  Returns `BlackboardComp ? BlackboardComp->GetValueAsClass(BLACKBOARD_KEY_ORDER_TYPE) : nullptr;`
    *   **Blueprint Usage Example (in a BT Task Blueprint):**
        *   (ASCII Art for BP Node)
            ```
            [GetBlackboardOrderType (RTSBlackboardHelper)] --(Return Value: Order Class)--> [Switch on URTSOrder Child]
            (NodeOwner pin is hidden & self-wired)
            ```

*   `static FVector GetBlackboardOrderLocation(UBTNode* NodeOwner);`
    *   **Purpose:** Retrieves the target location vector from the Blackboard.
    *   **Internal Logic:** Gets Blackboard, returns `GetValueAsVector(BLACKBOARD_KEY_LOCATION)`. Returns `FVector::ZeroVector` if Blackboard is null.

*   `static AActor* GetBlackboardOrderTarget(UBTNode* NodeOwner);`
    *   **Purpose:** Retrieves the target actor from the Blackboard.
    *   **Internal Logic:** Gets Blackboard, returns `Cast<AActor>(BlackboardComp->GetValueAsObject(BLACKBOARD_KEY_TARGET))`. Returns `nullptr` if Blackboard is null or value is not an actor.

*   `static int32 GetBlackboardOrderIndex(UBTNode* NodeOwner);`
    *   **Purpose:** Retrieves the order index from the Blackboard.
    *   **Internal Logic:** Gets Blackboard, returns `GetValueAsInt(BLACKBOARD_KEY_INDEX)`. Returns `0` if Blackboard is null.

*   `static float GetBlackboardOrderRange(UBTNode* NodeOwner);`
    *   **Purpose:** Retrieves the order's required range from the Blackboard.
    *   **Internal Logic:** Gets Blackboard, returns `GetValueAsFloat(BLACKBOARD_KEY_RANGE)`. Returns `0.0f` if Blackboard is null.

*   `static FVector GetBlackboardOrderHomeLocation(UBTNode* NodeOwner);`
    *   **Purpose:** Retrieves the order's home location from the Blackboard.
    *   **Internal Logic:** Gets Blackboard, returns `GetValueAsVector(BLACKBOARD_KEY_HOME_LOCATION)`. Returns `FVector::ZeroVector` if Blackboard is null.

*   **C++ Usage Example (from a custom C++ BT Task):**
    ```cpp
    // In MyCustomBTTask.cpp, assuming OwnerComp is the UBehaviorTreeComponent
    // UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
    // if (BlackboardComp)
    // {
    //     AActor* TargetActor = Cast<AActor>(BlackboardComp->GetValueAsObject(URTSBlackboardHelper::BLACKBOARD_KEY_TARGET));
    //     FVector TargetLocation = BlackboardComp->GetValueAsVector(URTSBlackboardHelper::BLACKBOARD_KEY_LOCATION);
    //     // ... use these values ...
    // }
    ```
    *(Note: In C++, you'd use the `FName` constants directly rather than the Blueprint-exposed getter functions, though you could call the static C++ functions if preferred.)*

**5. Integration & Usage Scenarios**

*   **Blackboard Asset Setup:**
    1.  Create a `UBlackboardData` asset.
    2.  Add keys to this Blackboard asset. The **Key Name** must exactly match the strings defined by the `FName` constants (e.g., "Order_Target").
    3.  The **Key Type** must also match the expected data type:
        *   `Order_OrderType`: `Class` (Base Class: `URTSOrder`)
        *   `Order_Location`: `Vector`
        *   `Order_Target`: `Object` (Base Class: `AActor`)
        *   `Order_Index`: `Int`
        *   `Order_Range`: `Float`
        *   `Order_HomeLocation`: `Vector`
*   **AI Controller Configuration:** Assign this `UBlackboardData` asset to the `CharacterBlackboardAsset` property of your `ARTSCharacterAIController` Blueprint.
*   **Behavior Tree Usage:**
    *   In your Behavior Tree Blueprints (Tasks, Services, Decorators), use the `GetBlackboardOrder...` nodes from `URTSBlackboardHelper` to read the current order parameters.
    *   For example, a "MoveToTargetLocation" BT Task would call `GetBlackboardOrderLocation` and pass the result to a standard "Move To" BT node.
    *   A BT Decorator "IsTargetInRange" might get `GetBlackboardOrderTarget`, `GetBlackboardOrderRange`, calculate distance, and compare.
*   **Developer Workflow:**
    *   Reference the `FName` constants when creating/validating Blackboard assets or writing C++ BT nodes.
*   **Designer Workflow:**
    *   Create Blackboard assets ensuring key names and types match.
    *   Use the `GetBlackboardOrder...` Blueprint nodes within BT node Blueprints to drive AI logic based on the current order.

**6. What the User Needs to Implement/Provide**

*   **`UBlackboardData` Asset(s):** Properly configured with keys that match the names and types defined by `URTSBlackboardHelper`.
*   **Behavior Trees:** That read from these Blackboard keys to execute order logic.
*   **`ARTSCharacterAIController` Configuration:** Pointing to the correct `UBlackboardData` asset.

**7. Advanced Topics & Considerations**

*   **Key Name Consistency:** The primary benefit is enforcing consistent key names. If a key name is mistyped in the Blackboard asset or in a direct string lookup, the AI will fail to get the correct data. Using these helpers (especially the `FName` constants in C++ or the pre-defined getter nodes in BP) mitigates this.
*   **Adding New Order Parameters:** If a new type of order requires additional parameters to be passed to the Behavior Tree, developers would:
    1.  Add a new `static const FName BLACKBOARD_KEY_MY_NEW_PARAM;` to `URTSBlackboardHelper.h` and define its string value in `.cpp`.
    2.  Modify `ARTSCharacterAIController::SetBlackboardValues` to write this new parameter to the Blackboard.
    3.  Add a corresponding `GetBlackboardMyNewParam(UBTNode* NodeOwner)` function to `URTSBlackboardHelper` for Blueprint access.
    4.  Add the new key (with correct name and type) to the `UBlackboardData` asset.
*   **Blackboard Instances:** Remember that each AI Controller instance gets its own `UBlackboardComponent` (an instance of the `UBlackboardData` asset). The values are per-AI.

This helper class is essential for the communication layer between the `ARTSCharacterAIController` (which knows about orders) and the Behavior Trees (which execute the low-level AI logic).







