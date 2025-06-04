
## 0. Quick Start Guide: Your First Move Order

**0.1. Introduction & Prerequisites**

Hello there! Welcome to the ColonyOrders Plugin Quick Start Guide. If you're looking to get a unit moving with a basic command as quickly as possible, you're in the right place. We'll walk through setting up a simple unit, its AI, and the necessary order components from the ColonyOrders plugin. Think of this as your first "Hello World" for RTS commands!

**What this guide will achieve:**

*   You'll set up a new Unreal Engine project with the ColonyOrders plugin.
*   You'll create a very basic "Test Unit" (a Pawn Blueprint).
*   We'll add and configure the core plugin components it needs: `URTSAbilitySystemComponent` (for tags and future abilities), and `URTSOrderComponent` (to handle commands).
*   We'll create a simple AI Controller for our unit, along with a Blackboard (to store AI data) and a basic "Stop/Idle" Behavior Tree so it knows what to do when it has no orders.
*   We'll then define a "Move" order and its associated Behavior Tree.
*   Finally, we'll set up a test level and use a Player Controller to issue that "Move" order, watching our unit (hopefully!) spring to life.

**Prerequisites:**

*   **Unreal Engine 5.5 (or compatible):** Make sure you have UE5.5 installed.
*   **ColonyOrders Plugin:** You'll need the plugin files ready.
*   **C++ Project:** Your Unreal Engine project needs to be a C++ one. If you started with a Blueprint-only template, no worries! Just go to **File -> New C++ Class...** in the editor, choose "None" as the parent, give it any name, and click "Create Class." This will set up your project for C++.
*   **Basic Unreal Engine Familiarity:** We'll guide you through the menus, but knowing your way around the Content Drawer, creating Blueprints, and placing actors in a level will make things smoother.

**Ready? Let's dive in!**

1.  **Create/Open Your Unreal Engine Project:**
    *   Launch Unreal Engine.
    *   Either create a new C++ project (the "Blank" or "Third Person" C++ templates are good starting points) or open an existing C++ project.

2.  **Install and Enable the ColonyOrders Plugin:**
    *   This is a vital first step! Please refer to our main documentation: [Section 1.3. Plugin Setup](#1.3.-Plugin-Setup) for detailed instructions on how to do this.
    *   Essentially, you'll copy the `ColonyOrders` plugin folder into your project's `Plugins` directory (e.g., `MyProject/Plugins/ColonyOrders`). Then, open your project in the Unreal Editor, go to **Edit -> Plugins**, search for "ColonyOrders," make sure it's **Enabled**, and restart the editor if it asks.

---

**0.2. Setting up the Core Components for Your Unit**

Now, let's create our very first unit! We'll make a simple Pawn Blueprint and add the special components from the ColonyOrders plugin that make it "smart" and "commandable."

**0.2.1. Creating a Basic Unit Pawn (Blueprint)**

1.  **Create a Pawn Blueprint:**
    *   The **Content Drawer** is your main asset library, usually found at the bottom of the editor (or via **Window -> Content Drawer 1**). Let's keep things organized. Right-click in an empty area of the Content Drawer, select **New Folder**, and name it `Units`. Double-click to open it.
    *   Inside your new `Units` folder, right-click again and choose **Blueprint Class**.
    *   A "Pick Parent Class" window will pop up. We want a basic controllable entity, so select **Pawn**.
        *   *(If you don't see "Pawn" right away, you can type "Pawn" in the search bar at the top of this window, or expand the "All Classes" section at the bottom to browse.)*
    *   Name your new Blueprint `BP_TestUnit`. It's a good practice to use a prefix like `BP_` for Blueprints. Double-click `BP_TestUnit` to open its Blueprint editor.

2.  **Add a Visual Representation (So we can see it!):**
    *   In the `BP_TestUnit` Blueprint editor, look for the **Components** panel (usually on the top-left). This panel lists all the building blocks of your Blueprint.
    *   Click the green **+ Add** button in the Components panel.
    *   A dropdown will appear. In its search bar, type `Static Mesh` and select **Static Mesh**.
    *   Name this new component `UnitMesh` (you can type the name directly after adding it or press F2 while it's selected).
    *   Now, with `UnitMesh` selected in the Components panel, look to the **Details** panel (usually on the right). This panel shows properties for the selected item.
    *   Under the "Static Mesh" category, find the **Static Mesh** property (it might say "None"). Click the dropdown next to it. A list of available meshes will appear. For this test, `Shape_Cube` or `Shape_Sphere` (type them in the search bar there if needed) are perfect. Select one.
    *   You can also adjust its **Scale** in the "Transform" category if the default shape is too big or small.

3.  **Add Basic Movement Properties (Optional but Recommended for Speed Control):**
    *   In the **Components** panel, click **+ Add**.
    *   Search for and select **FloatingPawnMovement**.
    *   **Why this component?** Unreal's AI "Move To" tasks (which we'll use later to make the unit move) can technically move a Pawn without a dedicated movement component by directly setting its location. However, adding a component like `FloatingPawnMovement` is a common practice. It's lightweight and allows you to easily set properties like `MaxSpeed` in its Details panel. The AI's internal path-following system will respect this `MaxSpeed` when moving your unit.
    *   *(For more complex characters, especially those needing gravity, jumping, or networked movement prediction, you'd typically use the `CharacterMovementComponent`. But for our simple RTS unit in this quick start, `FloatingPawnMovement` is a good, simple choice for basic speed control.)*

4.  **Add `URTSAbilitySystemComponent` (The Brain for Abilities & Tags):**
    *   **Why is this important even for a simple move?** The ColonyOrders plugin, and especially its order validation, relies heavily on Gameplay Tags. For example, a "Move" order might be blocked if the unit has an "Immobilized" tag. The `URTSAbilitySystemComponent` is what manages these tags, as well as attributes (like health, mana) and abilities if we add them later. Think of it as the unit's status and skill manager. You can find more details in [Section 2.2.1 `URTSAbilitySystemComponent`](#2.2.1-URTSAbilitySystemComponent).
    *   In the **Components** panel, click **+ Add**.
    *   Search for `RTSAbilitySystemComponent` (it should appear if the plugin is active) and select it. You can leave the default name or rename it (e.g., `AbilitySystemComponent`).
    *   **Configuration:** Select the `AbilitySystemComponent` in the Components panel. Now, let's look at its **Details** panel:
        *   Find the "RTS" category. Inside it, you'll see the **Name Tag** property.
            *   This tag helps identify the "archetype" of your unit, especially for loading default stats later. Click the dropdown next to "None".
            *   If you have existing Gameplay Tags, you can pick one. If not, click **Add New Gameplay Tag...**
            *   A small window will pop up. For **Tag Source**, choose "Project.GameplayTagList" (or your default tag source). For **Tag**, type something descriptive and hierarchical like `Unit.Test.BasicGrunt`. Press Enter.
            *   Back in the Details panel, ensure `Unit.Test.BasicGrunt` (or your chosen tag) is selected for `Name Tag`.
        *   Find the "Ability System" category (you might need to click the little arrow to expand it). Locate the **Default Starting Data** array property.
            *   Click the **+** (plus) icon next to `Default Starting Data` to add an element to this array. This array tells the ASC which Attribute Sets to create for this unit.
            *   Expand the new element (it will likely be labeled `[0]`).
            *   Find the **Attributes** property within this element. Click its dropdown and select `RTSAttackAttributeSet`. (More details on this in [Section 2.2.3.2 `URTSAttackAttributeSet`](#2.2.3.2-URTSAttackAttributeSet)).
            *   *(Why `RTSAttackAttributeSet`? Even if our unit isn't attacking yet, many systems assume units have common attributes. This set provides basic attack-related stats and also grants the `Status.Permanent.CanAttack` tag, which is a fundamental status. It's good practice to include it for most combat or potentially combat-capable units.)*
        *   Still in the "RTS" category of the `AbilitySystemComponent`, you'll find **Use Ability Order**. We'll come back to this property later when we set up abilities. For now, you can leave it as "None."

5.  **Add `URTSOrderComponent` (The Command Handler):**
    *   **Why this one?** This is the heart of the command system for your unit. It receives orders (like "Move," "Attack"), manages a queue of orders, and makes sure they get processed. See [Section 2.1.1 `URTSOrderComponent`](#2.1.1-URTSOrderComponent) for all the details.
    *   In the **Components** panel, click **+ Add**.
    *   Search for `RTSOrderComponent` and select it. You can name it `OrderComponent`.
    *   *(For this quick start, no specific configuration is needed for the `OrderComponent` itself in the Details panel. Its default settings are fine.)*

6.  **(Optional but Good Practice) Add `URTSAutoOrderComponent`:**
    *   **Why add it now?** This component, detailed in [Section 2.1.5.1 `URTSAutoOrderComponent`](#2.1.5.1-URTSAutoOrderComponent), handles automatic behaviors like auto-attacking nearby enemies. While our first "Move" order will be manual, setting this up now means your unit is ready for more advanced autonomous actions later without needing to modify its core Blueprint.
    *   In the **Components** panel, click **+ Add**.
    *   Search for `RTSAutoOrderComponent` and select it. You can name it `AutoOrderComponent`.

7.  **Compile and Save Your Unit!**
    *   Look for the **Compile** button in the toolbar at the top of the Blueprint editor (it often looks like a gear or a checkmark with a down arrow). Click it. If all is well, it should turn green.
    *   Then, click the **Save** button (disk icon).

**0.2.2. Creating a Basic AI Controller (Blueprint)**

Our unit Pawn needs a "brain" – an AI Controller – to understand and execute the orders it receives.

1.  **Create AI Controller Blueprint:**
    *   Go back to your **Content Drawer**. It's good to keep AI-related assets separate, so you might create a new folder named `AI` inside your `Units` folder (or at the same level).
    *   Inside your chosen AI folder, right-click and select **Blueprint Class**.
    *   In the "Pick Parent Class" window, it's important to choose the right parent. Expand **All Classes** (if it's not already) and type `RTSCharacterAIController` in the search bar. Select `RTSCharacterAIController` as the parent. (We documented this controller in [Section 2.3.1 `ARTSCharacterAIController`](#2.3.1-ARTSCharacterAIController)).
    *   Name this AI Controller Blueprint `BP_AIC_TestUnit`. Double-click it to open its Blueprint editor.

2.  **Create a Blackboard Asset (The AI's Memory):**
    *   **What's a Blackboard?** Think of it as a notepad or memory bank for your AI. The AI Controller will write important information here (like "where to move" or "who to attack"), and the Behavior Tree (the AI's decision-making logic) will read from it. We have a helper, `URTSBlackboardHelper` ([Section 2.3.2](#2.3.2-URTSBlackboardHelper)), that defines the standard names for these memory slots.
    *   In your **Content Drawer** (e.g., in your "AI" folder), right-click. From the context menu, find and hover over **Artificial Intelligence**, then select **Blackboard** from the sub-menu.
    *   Name this new asset `BB_TestUnit`. Double-click it to open the Blackboard editor.
    *   **Add Blackboard Keys:** In the Blackboard editor, you'll see a panel labeled "Blackboard" (usually on the right). We need to add specific "Keys" (memory slots) that our `ARTSCharacterAIController` expects:
        *   Click the **+ New Key** button. A dropdown will appear asking for the key type.
        *   Select **Class**. In the Details panel for this new key, change its **Entry Name** (or "Key Name") to exactly `Order_OrderType`. For "Key Type" -> "Base Class", click the dropdown and search for/select `RTSOrder`.
        *   Click **+ New Key** again. Select **Vector**. Name it `Order_Location`.
        *   Click **+ New Key**. Select **Object**. Name it `Order_Target`. For its "Base Class", select `Actor`.
        *   Click **+ New Key**. Select **Int**. Name it `Order_Index`.
        *   Click **+ New Key**. Select **Float**. Name it `Order_Range`.
        *   Click **+ New Key**. Select **Vector**. Name it `Order_HomeLocation`.
        *   *(It's super important that these names and types exactly match what `URTSBlackboardHelper` defines, otherwise the AI won't find the data!)*
    *   Save `BB_TestUnit` (Ctrl+S or File -> Save).

3.  **Configure Your AI Controller Blueprint:**
    *   Switch back to the tab for `BP_AIC_TestUnit` (or reopen it).
    *   In its Blueprint editor, click the **Class Defaults** button in the toolbar (it looks like a gear icon). This shows properties that apply to all instances of this AI Controller.
    *   In the **Details** panel, find the "RTS" category.
        *   Locate the **Character Blackboard Asset** property. Click its dropdown and select your newly created `BB_TestUnit` Blackboard asset.
    *   *(We'll set the "Stop Order" property here in the next step after we create it.)*

**0.2.3. Creating a Basic "Stop" Order (The Idle State)**

Even when we tell our unit to "Move," it needs to know what to do *after* it stops moving, or if it's just idling. This is handled by a "Stop" order and an associated "Idle" Behavior Tree.

1.  **Create a Very Simple "Idle" Behavior Tree:**
    *   **What's a Behavior Tree?** It's a visual way to design AI decision-making, like a flowchart.
    *   In your **Content Drawer** (e.g., "AI" folder), right-click, go to **Artificial Intelligence**, and select **Behavior Tree**.
    *   Name it `BT_Stop_Idle_Test`. Double-click to open its editor.
    *   You'll see a **ROOT** node. Behavior Trees flow from this root.
    *   Right-click on an empty space in the graph area and a search box will appear. Type `Sequence` and select the **Sequence** node from the "Composites" category. Drag it onto the graph.
    *   Connect the output pin of the `ROOT` node to the input pin of the `Sequence` node (click and drag).
    *   Right-click again, type `Wait` and select the **Wait** task from the "Tasks" category. Connect it as a child of the `Sequence` node.
    *   Select the `Wait` task. In its **Details** panel, set **Wait Time** to something like `5.0` seconds. You can also check **Random Deviation** (e.g., `1.0`) to make the wait time slightly variable.
    *   **Important Note for a Real Game:** A proper "Idle" Behavior Tree would typically have a task at the end of its main logic path that calls `BehaviorTreeEnded(Succeeded)` on its AI Controller. This signals to the `URTSOrderComponent` that the "Stop" order has successfully "completed" (which for an idle state, usually means it's ready for new orders). For this quick start, our simple "Wait" will make the unit pause, but the order won't formally complete and allow the next in queue until this Behavior Tree logic is improved. For now, it's enough to see the BT system is engaging.
    *   Save `BT_Stop_Idle_Test`.

2.  **Create the "Stop" Order Blueprint:**
    *   **Why?** This Blueprint acts as a data asset linking the *concept* of a "Stop" command to the actual *AI logic* in `BT_Stop_Idle_Test`. (Referencing [Section 2.1.4.3 `URTSStopOrder`](#2.1.4.3-URTSStopOrder)).
    *   In your **Content Drawer** (e.g., in a new "Orders" folder inside "Units"), right-click and select **Blueprint Class**.
    *   Expand "All Classes" and search for `RTSStopOrder`. Select it as the parent.
    *   Name it `BP_Order_Stop_Test`. Double-click to open it.
    *   Click **Class Defaults** in its toolbar.
    *   In the **Details** panel, find the "RTS Behavior" category.
        *   For the **Behavior Tree** property, click the dropdown and select your `BT_Stop_Idle_Test` asset.
    *   (Optional) Under the "RTS Display" category, you can set the **Name** property to `Stop` (as FText).
    *   Compile and Save `BP_Order_Stop_Test`.

3.  **Assign This "Stop" Order to Your AI Controller:**
    *   Open `BP_AIC_TestUnit` again.
    *   Go to **Class Defaults**.
    *   In the **Details** panel, under the "RTS" category:
        *   For the **Stop Order** property, click its dropdown and select your `BP_Order_Stop_Test` class.
    *   Compile and Save `BP_AIC_TestUnit`.

**0.2.4. Configuring the Unit Pawn for AI Control**

Let's tell our `BP_TestUnit` to use the AI Controller we just made.

1.  Open your `BP_TestUnit` Pawn Blueprint.
2.  Click **Class Defaults** in its toolbar.
3.  In the **Details** panel, find the "Pawn" category.
    *   Set the **AI Controller Class** property to your `BP_AIC_TestUnit` class.
4.  Still in the "Pawn" category, find the **Auto Possess AI** property.
    *   Click its dropdown and select **Placed in World or Spawned**. This is crucial! It means that whenever an instance of `BP_TestUnit` is placed in your game level or spawned during gameplay, an instance of `BP_AIC_TestUnit` will automatically be created and take control of it.
5.  Compile and Save `BP_TestUnit`.









**0.3. Creating the "Move" Order**

Alright, our unit (`BP_TestUnit`) now knows how to be idle (thanks to `BP_Order_Stop_Test` and `BT_Stop_Idle_Test`). Now, let's give it something more active to do: move to a location! This involves two main parts:

1.  A **Behavior Tree** that defines the *AI logic* for moving.
2.  An **Order Blueprint** that links the *concept* of a "Move" command to that Behavior Tree.

**0.3.1. Creating a Basic "Move" Behavior Tree (Blueprint)**

This Behavior Tree will tell our AI unit *how* to get from point A to point B.

1.  **Create the Behavior Tree Asset:**
    *   Head back to your **Content Drawer**, and navigate to your "AI" folder (or wherever you're keeping your AI assets).
    *   Right-click in an empty area, go to **Artificial Intelligence**, and select **Behavior Tree**.
    *   Name this new Behavior Tree `BT_Move_Test`. Double-click it to open its editor.

2.  **Design the Movement Logic:**
    *   You'll see the familiar **ROOT** node. All Behavior Tree logic flows from here.
    *   **Add a Sequence Node:**
        *   Right-click on the graph canvas, a search box will pop up. Type `Sequence` and select the **Sequence** node from the "Composites" category.
        *   Drag this `Sequence` node onto the graph and connect the output pin of the `ROOT` node to the input pin of your new `Sequence` node.
        *   *(Why a Sequence? A Sequence node tries to execute its child nodes one by one, from left to right. If any child fails, the whole Sequence fails. If all children succeed, the Sequence succeeds. This is perfect for "do this, then do that" logic.)*
    *   **Add a "Move To" Task (The Actual Movement):**
        *   Drag a wire from the output pin of the `Sequence` node (or right-click on the graph), search for `Move To`, and select the **Move To** task (it should be under "Tasks"). Connect it to the `Sequence` node. This is a built-in Unreal Engine task that handles pathfinding.
        *   Select the `Move To` task node you just added. Its properties will appear in the **Details** panel.
        *   The most important property here is **Blackboard Key**. This tells the "Move To" task *where* to find the destination coordinates in the AI's memory (our Blackboard).
        *   Click the dropdown next to `Blackboard Key` and select `Order_Location`.
            *   *(This `Order_Location` is the key we defined in our `BB_TestUnit` Blackboard asset. When we issue a move order, our `ARTSCharacterAIController` will place the target coordinates into this Blackboard entry, and this "Move To" task will read them.)*
        *   You can leave **Acceptable Radius** at its default (e.g., 50.0). This means the "Move To" task will consider itself successful if the unit gets within 50cm of the target.
    *   **Add a Task to Signal Order Completion (Very Important!):**
        *   Our `URTSOrderComponent` (which manages the unit's order queue) needs to know when the current order (like this move order) is finished. The `ARTSCharacterAIController` is responsible for telling it, but the Behavior Tree needs to tell the AI Controller! We'll use a custom Blueprint Task for this.
        *   Go to your **Content Drawer** (e.g., "AI" folder). Right-click, select **Blueprint Class**.
        *   In the "Pick Parent Class" window, expand "All Classes" and search for `BTTask_BlueprintBase`. Select it.
        *   Name this new Blueprint Task `BTTask_FinishOrder`. Double-click it to open its editor.
        *   Inside `BTTask_FinishOrder`, we need to tell it what to do when it runs. In the "My Blueprint" panel (usually on the left), find the "Functions" section. Hover over the **Override** button and select **Receive Execute AI**. This will create an event node in the graph.
            *   *(The `Event Receive Execute AI` is called whenever this task gets its turn to run in the Behavior Tree.)*
        *   From the `Controlled Pawn` output pin of the `Event Receive Execute AI` node, drag a wire out and release. In the search box, type `Get Controller` and select the **Get Controller (Pawn)** node.
        *   From the `Return Value` of the `Get Controller` node, drag a wire out and search for `Cast To BP_AIC_TestUnit` (or whatever you named your AI Controller Blueprint in step 0.2.2). Select the Cast node.
            *   *(We need to make sure we're talking to *our* specific AI Controller because the `BehaviorTreeEnded` function we want to call is part of the `ARTSCharacterAIController` features.)*
        *   From the `As BP AIC Test Unit` output pin of the Cast node (the one that executes if the cast is successful), drag a wire out and search for `BehaviorTreeEnded`. Select the function call.
            *   The `BehaviorTreeEnded` node has a `Result` input. For a move order that reaches its destination, this is a success. Click the dropdown for `Result` and choose **Succeeded** (from the `EBTNodeResult` enum).
        *   Now, we need to tell the Behavior Tree system that our task has finished. From the execution pin of the `BehaviorTreeEnded` node, drag a wire out and search for `Finish Execute`. Select the **Finish Execute** node.
            *   Make sure the **Success** checkbox on the `Finish Execute` node is checked (true).
        *   *(Optional but good practice for robustness: From the "Cast Failed" execution pin of the Cast node, you could also drag to another `Finish Execute` node, but this time leave its "Success" checkbox *unchecked* (false). This way, if something goes wrong and the controller isn't what we expect, the task still finishes, albeit as a failure.)*
        *   Your `BTTask_FinishOrder` Event Graph should look approximately like this:
            ```
            Event Receive Execute AI --(Controlled Pawn)--> [Get Controller] --> [Cast To BP_AIC_TestUnit] --(Cast Succeeded)--> [BehaviorTreeEnded (Result: Succeeded)] --> [Finish Execute (Success: true)]
                                                                               |
                                                                               +--(Cast Failed)----------------------------------> [Finish Execute (Success: false)]
            ```
        *   **Compile** and **Save** `BTTask_FinishOrder`.
        *   **Return to `BT_Move_Test` Behavior Tree editor:**
            *   Now that we have our custom task, let's add it to the tree. Drag a wire from the output of your `Sequence` node (or right-click on the graph), search for your new task by name: `BTTask_FinishOrder`, and add it.
            *   Connect this `BTTask_FinishOrder` as the *second* child of the `Sequence` node, so it runs *after* the `Move To` task has succeeded.
    *   Your completed `BT_Move_Test` should now have this structure:
        `ROOT -> Sequence -> [Move To (Blackboard Key: Order_Location)] -> [BTTask_FinishOrder]`
    *   **Save** `BT_Move_Test`.

**0.3.2. Creating the "Move" Order Blueprint**

This Blueprint will act as the "data asset" for our Move command, linking it to the `BT_Move_Test` Behavior Tree we just created.

1.  **Create Move Order Blueprint:**
    *   In your **Content Drawer** (e.g., in your "Orders" folder), right-click, select **Blueprint Class**.
    *   Expand "All Classes" and search for `RTSMoveOrder`. Select it as the parent class. (Referencing [Section 2.1.4.1 `URTSMoveOrder`](#2.1.4.1-URTSMoveOrder)).
    *   Name it `BP_Order_Move_Test`. Double-click to open it.

2.  **Configure Move Order Blueprint:**
    *   In the `BP_Order_Move_Test` editor, click the **Class Defaults** button in the toolbar.
    *   The **Details** panel will show the properties you can configure.
        *   Find the "RTS Behavior" category. For the **Behavior Tree** property, click the dropdown menu and select your `BT_Move_Test` asset. This is the crucial link!
        *   (Optional but good for UI later) Find the "RTS Display" category.
            *   Set the **Name** property. Click the little text box and type something like `Move Test`.
            *   You can assign an **Icon** to the **Normal Icon** property if you have a suitable texture.
        *   *(Important Note: `URTSMoveOrder`'s C++ code already sets up important defaults for a move order, like `TargetType = LOCATION` and `bIsCreatingIndividualTargetLocations = true`. So, you typically don't need to change those for a standard move order. Our documentation for `URTSMoveOrder` covers these defaults.)*
    *   **Compile** and **Save** `BP_Order_Move_Test`.

---














Great! Let's get our test level ready. I'll incorporate the note about the camera that we discussed.

---

**0.4. Setting up a Test Level**

To actually see our unit move, we need a playable environment. This involves creating a level (or using an existing one), ensuring it has a navigable surface for our AI, placing our unit, and setting up the correct Game Mode to use our custom Player Controller.

1.  **Create or Open a Level:**
    *   In the Unreal Editor, if you don't have a suitable test level, create one by going to **File -> New Level...**
    *   The **Basic** template is a good choice as it comes with a floor. If you choose **Empty Level**, you'll need to add a ground plane yourself:
        *   From the **Place Actors** panel (if it's not open, go to **Window -> Place Actors**), find **Shapes** and drag a **Cube** into the viewport.
        *   Select this Cube. In its **Details** panel (usually on the right), go to the **Transform** section.
        *   Set its **Scale** to something large to create a floor, for example: `X=50.0, Y=50.0, Z=1.0`.
        *   Adjust its **Location** so the top surface is at or near Z=0 (e.g., `Location Z = -50` if its Z scale is 1.0 and pivot is centered, or just drag it down).

2.  **Add a NavMeshBoundsVolume (Essential for AI Pathfinding):**
    *   **Why?** AI units in Unreal Engine use a "Navigation Mesh" (NavMesh) to understand where they can walk. The `NavMeshBoundsVolume` tells the engine where to build this NavMesh. Without it, our "Move To" task in the Behavior Tree won't work.
    *   In the **Place Actors** panel, search for `Nav Mesh Bounds Volume` and drag one into your level.
    *   Select the newly added `NavMeshBoundsVolume` in the World Outliner or viewport.
    *   In its **Details** panel, under **Transform**, adjust its **Location** and **Brush Settings -> X, Y, Z** (or use the Scale tool 'R' key) so that the green wireframe box of the volume completely encompasses all the areas where you want your `BP_TestUnit` to be able to move. It needs to cover your floor.
    *   **Visualize the NavMesh:** While the `NavMeshBoundsVolume` is influencing the area (or just generally in the editor viewport), press the **'P' key** on your keyboard. You should see a green overlay appear on all walkable surfaces within the volume. This green area *is* the NavMesh. If you don't see it, double-check:
        *   Your volume is correctly sized and positioned over a surface.
        *   The surface is set to be navigable (Static Meshes usually are by default).
        *   *(You can toggle the NavMesh visibility off again by pressing 'P'.)*

3.  **Place Your Unit in the Level:**
    *   Open your **Content Drawer** and find your `BP_TestUnit` Blueprint (in the "Units" folder we created).
    *   Drag an instance of `BP_TestUnit` from the Content Drawer directly into your level. Place it somewhere on the green NavMesh area.

4.  **Create a Basic Player Controller (If You Haven't Already):**
    *   **Why?** The Player Controller is our interface to the game – it handles player input (like mouse clicks) and can then issue commands to units.
    *   If you followed step 0.2.2 and already have `BP_AIC_TestUnit`, you might have also created a Player Controller. If not:
    *   In your **Content Drawer** (perhaps create a new folder named "Player" or "Core"), right-click, select **Blueprint Class**.
    *   In the "Pick Parent Class" window, search for and select **PlayerController**.
    *   Name it `BP_TestPlayerController`. Double-click to open its Blueprint editor.
    *   **Enable Mouse Cursor for Clicking:**
        *   Inside `BP_TestPlayerController`, click on **Class Defaults** in the toolbar.
        *   In the **Details** panel, search for "mouse".
        *   Under the "Mouse Interface" category, check the box for **Show Mouse Cursor**.
        *   *(This will make your mouse cursor visible when you play the game, which we'll need for clicking a destination.)*
    *   **Compile** and **Save** `BP_TestPlayerController`.

5.  **Create and Configure a Game Mode:**
    *   **Why?** The Game Mode defines the rules and default classes for your level, including which Player Controller to use.
    *   If you don't have one for testing yet: In your **Content Drawer**, right-click, select **Blueprint Class**.
    *   In "Pick Parent Class," search for and select **GameModeBase**.
    *   Name it `BP_TestGameMode`. Double-click to open it.
    *   Click **Class Defaults** in its toolbar.
    *   In the **Details** panel, find the "Classes" category:
        *   Set **Player Controller Class** to your `BP_TestPlayerController`.
        *   **Default Pawn Class:** For this specific quick start, our `BP_TestUnit` is AI-controlled and placed manually. The Player Controller itself doesn't need to possess a pawn to issue commands to *other* pawns. To avoid the GameMode spawning an unwanted default pawn for the player, you can set **Default Pawn Class** to **None**.
            *   *(When Default Pawn Class is None, the Player Controller will often use a default "Spectator" camera. This camera can be moved around freely using WASD and mouse look, which is perfectly fine for this test – it allows you to see your unit and click on the ground. Implementing a custom RTS-style camera is a separate, more involved task beyond this quick start.)*
    *   **Compile** and **Save** `BP_TestGameMode`.

6.  **Assign the Game Mode to Your Level (or Project):**
    *   **To set it for your current test level (recommended for now):**
        *   Make sure your test level is the currently open and active level in the editor.
        *   Go to **Window -> World Settings** from the main editor menu.
        *   The **World Settings** panel will typically appear on the right, possibly tabbed with the Details panel.
        *   Under the "Game Mode" section, find **GameMode Override**. Click its dropdown and select your `BP_TestGameMode`.
    *   **(Alternatively, for the whole project):** You can set this in **Edit -> Project Settings... -> Project -> Maps & Modes -> Default GameMode**. This makes `BP_TestGameMode` the default for any new levels or when the game starts, which can be convenient.
    *   *(It's also a good idea here to set your current test level as the **Editor Startup Map** and **Game Default Map** in Project Settings -> Maps & Modes, so it loads automatically.)*


















**0.5. Issuing the Move Order (from PlayerController)**

Now that our unit, AI, orders, and level are set up, we need a way for the player to actually issue the "Move" command. We'll do this by adding input handling to our `BP_TestPlayerController`. When the player right-clicks, we'll determine the clicked location and tell our `BP_TestUnit` to move there.

1.  **Set up an Input Action (Optional but Good Practice):**
    *   While we could directly listen for the Right Mouse Button event in our Player Controller, it's generally better practice to use Unreal Engine's Input Action system. This allows inputs to be easily remapped later.
    *   Go to **Edit -> Project Settings...**
    *   Under the "Engine" section on the left, find and click on **Input**.
    *   In the "Bindings" section, find **Action Mappings**. Click the **+** icon next to it to add a new mapping.
    *   Name the new action mapping (e.g., `IssueOrderCommand`).
    *   Click the dropdown next to your new action mapping (it will probably say "None") and search for `Right Mouse Button`. Select it.
    *   You can close the Project Settings window.

2.  **Implement Input Logic in `BP_TestPlayerController`:**
    *   Open your `BP_TestPlayerController` Blueprint.
    *   Go to its **Event Graph**.
    *   **Listen for the Input Action:**
        *   Right-click in an empty area of the Event Graph.
        *   Search for the name of the input action you just created (e.g., `IssueOrderCommand`). Select the **InputAction IssueOrderCommand** event node.
            *   *(If you skipped step 1, you can search for "Right Mouse Button" and select the corresponding input event node directly.)*
    *   **Perform a Line Trace from Cursor:**
        *   When the `IssueOrderCommand` event's **Pressed** execution pin fires, we need to find out where the player clicked in the world.
        *   Drag a wire from the **Pressed** pin and search for `Get Hit Result Under Cursor By Channel`. Select this node.
            *   For **Trace Channel**, you can usually leave it as `Visibility`. This means it will hit things that are visible.
    *   **Check if the Trace Hit Something:**
        *   The `Get Hit Result Under Cursor By Channel` node has a boolean output pin called **Return Value** (which is true if something was hit) and an output struct pin called **Hit Result**.
        *   Drag a wire from the **Return Value** pin and add a **Branch** node.
    *   **Get the Hit Location:**
        *   Drag a wire from the **Hit Result** output pin of the trace node. Search for `Break Hit Result` and select it. This node exposes all the information from the hit.
        *   We are interested in the **Location** (an FVector) where the trace hit the world (e.g., the ground).
    *   **Get a Reference to Your Unit:**
        *   **Important Note:** In a real RTS, you'd have a selection system to know which unit(s) the player currently has selected. For this quick start, we'll use a simpler method to get our single test unit. This is **not** how you'd do it in a full game with multiple units!
        *   From the **True** execution pin of the **Branch** node (meaning our click hit something), drag a wire and search for `Get All Actors Of Class`. Select it.
            *   For the **Actor Class** input pin on this node, click the dropdown and select your `BP_TestUnit` class.
        *   The `Get All Actors Of Class` node outputs an array. Since we (hopefully) only have one `BP_TestUnit` in our test level, we can get the first one. Drag a wire from the **Out Actors** array pin and search for `Get (a copy)`. Select it. Leave the index as `0`.
        *   Drag a wire from the output of the `Get (a copy)` node (which is an Actor Reference) and search for `IsValid`. Add an **IsValid** node (the one with the question mark icon, often called "Is Valid Exec"). Connect the **True** pin of the previous Branch node to the input execution pin of this IsValid node.
            *   *(This checks if we actually found a `BP_TestUnit` and if it's valid, preventing errors if it's not there or was destroyed.)*
    *   **Construct `FRTSOrderData`:**
        *   **Why?** The `URTSOrderHelper::IssueOrder` function (and ultimately `URTSOrderComponent`) expects an `FRTSOrderData` struct that contains all the details about the command. (Referencing [Section 2.1.6.1 `FRTSOrderData`](#2.1.6.1-FRTSOrderData)).
        *   From the **Is Valid** execution pin of the `IsValid` node, drag a wire and search for `Make FRTSOrderData`. Select it.
        *   Now, we need to fill in the fields of the `Make FRTSOrderData` node:
            *   **Order Type:** Click the dropdown and select your `BP_Order_Move_Test` class.
            *   **bUseLocation:** Check this box (make it `true`) because our move order targets a location.
            *   **Location (Vector2D):**
                *   From the `Break Hit Result` node, take the **Location** (FVector) output pin.
                *   Drag a wire from it and search for `Make Vector2D (Vector)`. This node converts an FVector to an FVector2D by taking its X and Y components. Connect its output to the **Location** input of `Make FRTSOrderData`.
            *   **Target (Actor):** Leave this as `None` (nullptr) because our move order only needs a location, not an actor target.
            *   **Index (Integer):** Set this to `-1` (or leave as default 0 if it doesn't matter for `URTSMoveOrder`, but -1 is common for "no index").
    *   **Issue the Order (Server Authority is Key!):**
        *   **The Golden Rule of Multiplayer:** Actions that change the game state (like issuing orders) *must* happen on the server. Clients tell the server what they want to do, and the server executes it.
        *   For this quick start, especially if you're just testing in single-player (where the client *is* the server), you could call `IssueOrder` directly. However, let's set up the proper structure for future multiplayer readiness.
        *   **Create a Custom Event (Run on Server):**
            *   Right-click in an empty area of the Event Graph and search for `Add Custom Event...`. Name it something like `Server_IssueMoveOrder`.
            *   Select the new `Server_IssueMoveOrder` event node. In its **Details** panel, under "Replication," change **Replicates** from "Not Replicated" to **Run on Server**.
            *   **(Optional but good for security):** You can also check "Reliable" if the order is critical and must arrive.
            *   Now, add input parameters to this custom event so we can pass the unit and target location to it:
                *   Click the **+** next to "Inputs" in the Details panel of the `Server_IssueMoveOrder` node.
                *   Name the first parameter `UnitToOrder` and set its type to `BP_TestUnit` (Object Reference).
                *   Click **+** again. Name the second parameter `TargetLocation2D` and set its type to `Vector 2D`.
        *   **Call the Server Event:**
            *   Go back to where you created the `FRTSOrderData` (after the `IsValid` check for the unit).
            *   Drag a wire from the execution pin of the `Make FRTSOrderData` node.
            *   Search for your server event by name: `Server_IssueMoveOrder`. Select the *function call* node for it.
            *   Connect the reference to your `BP_TestUnit` (from the `Get (a copy)` node's output) to the `UnitToOrder` input of `Server_IssueMoveOrder`.
            *   Connect the `FVector2D` you created from the hit location to the `TargetLocation2D` input of `Server_IssueMoveOrder`.
        *   **Implement Logic Inside the Server Event:**
            *   Now, go to the `Event Server_IssueMoveOrder` node itself.
            *   From its execution pin, drag a wire. We need to make another `FRTSOrderData` struct here *on the server* using the parameters passed in. Search for `Make FRTSOrderData`.
                *   **Order Type:** `BP_Order_Move_Test`.
                *   **bUseLocation:** `true`.
                *   **Location (Vector2D):** Connect the `TargetLocation2D` input pin of the `Server_IssueMoveOrder` event to this.
                *   **Target (Actor):** `None`.
                *   **Index (Integer):** `-1`.
            *   From the execution pin of this server-side `Make FRTSOrderData`, drag a wire and search for `IssueOrder (RTSOrderHelper)`. Select the static function from `URTSOrderHelper`. (Referencing [Section 2.1.8 `URTSOrderHelper` - Part 1](#2.1.8.-URTSOrderHelper---Part-1-Order-Validation--Issuance)).
                *   **OrderedActor:** Connect the `UnitToOrder` input pin of the `Server_IssueMoveOrder` event to this.
                *   **Order:** Connect the output `FRTSOrderData` from the server-side `Make FRTSOrderData` node to this.
    *   Your Event Graph in `BP_TestPlayerController` should now look something like this flow:
        ```
        Event InputAction IssueOrderCommand (Pressed)
            --> Get Hit Result Under Cursor By Channel
            --> Branch (Return Value is True?)
                --> (True) Break Hit Result
                --> (True) Get All Actors Of Class (BP_TestUnit)
                --> (True) Get (a copy, index 0)
                --> (True) IsValid (on the unit reference)
                    --> (Is Valid) Make FRTSOrderData (Client-side, for passing to RPC)
                        (OrderType: BP_Order_Move_Test, Location: from HitResult X,Y, bUseLocation: true)
                    --> (Is Valid) Call Server_IssueMoveOrder 
                        (UnitToOrder: unit ref, TargetLocation2D: from HitResult X,Y)

        Event Server_IssueMoveOrder (Run on Server) --(UnitToOrder, TargetLocation2D)-->
            --> Make FRTSOrderData (Server-side)
                (OrderType: BP_Order_Move_Test, Location: from TargetLocation2D input, bUseLocation: true)
            --> Call URTSOrderHelper::IssueOrder
                (OrderedActor: UnitToOrder input, Order: from server-side Make node)
        ```
3.  **Compile and Save** `BP_TestPlayerController`.











**0.6. Testing & Verification**

Now that all the pieces are in place, it's time to play our test level and verify that the "Move" order is working as expected.

1.  **Open Your Test Level:**
    *   Ensure the level you set up in **Section 0.4** (with the `BP_TestUnit` instance, NavMesh, and `BP_TestGameMode` assigned) is currently open in the Unreal Editor.

2.  **Play in Editor (PIE):**
    *   In the main editor toolbar, click the **Play** button (the green triangle icon). The game should start.
    *   You should see your mouse cursor (as enabled in `BP_TestPlayerController`).
    *   You should be able to move the camera around (likely using default spectator controls if you didn't set up a custom camera pawn, which is fine for this test).

3.  **Verify AI Controller Possession:**
    *   While the game is running, you can quickly check if your unit is being controlled by the correct AI.
    *   Press the **tilde key (~)** or the key configured to open the console (usually above Tab).
    *   Type `showdebug AI` and press Enter.
    *   Look at your `BP_TestUnit` instance in the game world. You should see some debug text overlaid on it or near it. If it's possessed by an AI Controller, it will typically show the name of the AI Controller class (e.g., `BP_AIC_TestUnit_C`) and the current Behavior Tree being executed (which should initially be `BT_Stop_Idle_Test`).
    *   This confirms your `BP_TestUnit`'s "Auto Possess AI" setting and `AIControllerClass` assignment are working.
    *   Type `showdebug AI` again in the console to toggle it off if it's too distracting.

4.  **Issue the Move Order:**
    *   Navigate your camera so you can see your `BP_TestUnit` and a clear patch of ground (that should be covered by the NavMesh, i.e., was green when you pressed 'P' in the editor).
    *   **Right-click** on the ground at the location where you want your unit to move.

5.  **Observe the Unit's Behavior:**
    *   **Expected Outcome:** Your `BP_TestUnit` instance should start moving from its current position towards the location you right-clicked.
    *   It should follow a path generated by the navigation system.
    *   Once it reaches the destination (within the "Acceptable Radius" of the "Move To" task in `BT_Move_Test`), it should stop.
    *   After stopping (and if `BTTask_FinishOrder` is correctly implemented and called), the `URTSOrderComponent` will recognize the move order is complete. Since there are no other orders in the queue, it should then issue the `BP_Order_Stop_Test`, and the unit's AI should switch to executing `BT_Stop_Idle_Test` (our simple "Wait" behavior). You might see this switch if you have `showdebug AI` enabled.

6.  **Check the Output Log:**
    *   After playing (or even during play if you have it open), check the **Output Log** window (Window -> Developer Tools -> Output Log).
    *   Look for any error messages, especially those prefixed with `LogRTS:` (our plugin's log category) or `LogBlueprint:` or `LogAI:` that might indicate problems.
    *   Successful `URTSOrderHelper::IssueOrder` calls (if you added logging there or in your PlayerController) or messages from `URTSOrderComponent` could also appear.

**Verification Checklist:**

*   [ ] Is the `BP_TestUnit` present in the level when you start?
*   [ ] Is the mouse cursor visible?
*   [ ] Can you move the camera to see the unit and the ground?
*   [ ] Is there a green NavMesh visible on the ground when you press 'P' in the editor (do this *before* playing to confirm setup)?
*   [ ] Does the unit move when you right-click on a valid NavMesh location?
*   [ ] Does it move towards the correct clicked location?
*   [ ] Does it stop when it reaches the location?
*   [ ] (If `showdebug AI` is on) Does the Behavior Tree switch from `BT_Move_Test` back to `BT_Stop_Idle_Test` after the move is complete (assuming `BTTask_FinishOrder` is working)?
*   [ ] Are there any critical error messages in the Output Log?

---

If everything worked, congratulations! You've successfully set up the core components of the ColonyOrders plugin and issued your first command. This demonstrates the fundamental flow:

Player Input -> PlayerController (RPC to Server) -> `URTSOrderHelper::IssueOrder` -> `URTSOrderComponent` -> `ARTSCharacterAIController` -> Blackboard Update -> Behavior Tree Execution (`BT_Move_Test`) -> Unit Moves -> Behavior Tree Completes (`BTTask_FinishOrder`) -> AI Controller Notifies OrderComponent -> OrderComponent switches to Idle Order (`BP_Order_Stop_Test`).





Understood. Troubleshooting is a crucial part of any guide, especially a "Quick Start." Even if you're not following along with an actual project right now, understanding these common pitfalls will be very helpful when you (or other users) do.

---

**0.7. Troubleshooting Common Issues**

If your unit isn't moving or behaving as expected after following the previous steps, here's a checklist of common issues and how to investigate them. Remember to check the **Output Log** (Window -> Developer Tools -> Output Log) for error messages, as they often provide direct clues.

**Issue 1: Unit Doesn't Move at All**

*   **No NavMesh or Invalid Target Location:**
    *   **Check:** In the editor (before playing), press 'P'. Is there a green NavMesh covering the area you're clicking and where the unit is?
    *   **Fix:** Ensure your `NavMeshBoundsVolume` is correctly placed, scaled to cover the playable area, and actually encompasses a walkable surface. Make sure you are clicking on the green NavMesh area when issuing the move command.
*   **AI Controller Not Possessing Pawn:**
    *   **Check:** While playing, open the console (~) and type `showdebug AI`. Select your unit. Does the debug information show your `BP_AIC_TestUnit` (or similar) as the controller and a Behavior Tree running (initially `BT_Stop_Idle_Test`)?
    *   **Fix:**
        *   In `BP_TestUnit` Class Defaults, ensure **AI Controller Class** is set to your `BP_AIC_TestUnit`.
        *   Ensure **Auto Possess AI** is set to "Placed in World or Spawned."
*   **PlayerController Input Not Firing or Not Reaching Server:**
    *   **Check (Client-Side Input):** In `BP_TestPlayerController`, put a `Print String` node right after your `InputAction IssueOrderCommand` (Pressed) event. Does it print when you right-click?
    *   **Check (Server RPC):** If you set up the "Run on Server" custom event, put a `Print String` node at the *beginning* of that server event. Does it print after the client-side input fires?
    *   **Fix:**
        *   Verify your Input Action mapping in Project Settings.
        *   Ensure the PlayerController Blueprint is correctly assigned in your GameMode (`BP_TestGameMode`).
        *   If the server event isn't firing, double-check its "Replicates" setting is "Run on Server" and that you are calling this server event node (not trying to execute the event definition itself) from the client-side input logic.
*   **No `URTSOrderComponent` on the Unit:**
    *   **Check:** Does `BP_TestUnit` have the `OrderComponent` added in its Components panel?
    *   **Fix:** Add it if missing. The `URTSOrderHelper::IssueOrder` function will log an error if it can't find this component.
*   **`OrderType` in `FRTSOrderData` is Null or Invalid:**
    *   **Check:** In `BP_TestPlayerController` (specifically in the server-side event where you `Make FRTSOrderData`), ensure the `Order Type` pin is connected to your `BP_Order_Move_Test` class.
    *   **Fix:** Connect the correct order class.
*   **Behavior Tree Not Assigned to `BP_Order_Move_Test`:**
    *   **Check:** Open `BP_Order_Move_Test`, go to Class Defaults. Is the `Behavior Tree` property under "RTS Behavior" set to your `BT_Move_Test`?
    *   **Fix:** Assign the correct Behavior Tree. If this is null, `URTSOrderHelper::GetBehaviorTree` (called by `ARTSCharacterAIController`) will return null, and the order will likely fail.
*   **Blackboard Not Assigned or Keys Incorrect in `BP_AIC_TestUnit`:**
    *   **Check:** In `BP_AIC_TestUnit` Class Defaults, is `CharacterBlackboardAsset` set to your `BB_TestUnit`?
    *   **Check:** Open `BB_TestUnit`. Are all the keys (`Order_Location`, etc.) present with the **exact names** and **correct types** as specified in [Section 0.2.2](#0.2.2.-Creating-a-Basic-AI-Controller-(Blueprint)) (referencing `URTSBlackboardHelper` definitions)? Typos or wrong types here are very common issues.
    *   **Fix:** Assign the Blackboard and correct any key name/type mismatches.
*   **"Move To" Task in `BT_Move_Test` is Misconfigured:**
    *   **Check:** In `BT_Move_Test`, select the "Move To" task. Is its `Blackboard Key` property set to `Order_Location`?
    *   **Fix:** Select the correct Blackboard key.

**Issue 2: Unit Moves, but Not Correctly, or Order Doesn't "Complete"**

*   **Unit Moves to (0,0,0) or an Unexpected Location:**
    *   **Check:** Put `Print String` nodes in `BP_TestPlayerController` to display the `HitLocation` from the line trace. Is it what you expect?
    *   **Check:** In `BT_Move_Test`, if you select the AI while it's moving (and have `showdebug AI` on, then select "Blackboard" in the AI debug view), inspect the value of the `Order_Location` key. Is it correct?
    *   **Fix:** Debug your line trace logic or how `Order_Location` is being set. Ensure the 2D to 3D conversion (if any) is correct. The current quick start sets Z=0 for the `Order_Location` in the Blackboard; ensure your NavMesh covers Z=0.
*   **Order Never Finishes / Unit Gets Stuck in Move Behavior Tree:**
    *   **Check:** Is your `BTTask_FinishOrder` correctly implemented and placed *after* the "Move To" task in a `Sequence` in `BT_Move_Test`? Does it call `BehaviorTreeEnded(Succeeded)` on your `BP_AIC_TestUnit` and then `Finish Execute(true)`?
    *   **Check:** Does the "Move To" task ever actually succeed? If `Acceptable Radius` is too small or the target is unreachable, "Move To" might never finish.
    *   **Fix:** Ensure `BTTask_FinishOrder` is correctly implemented and reachable in the Behavior Tree. Adjust `Acceptable Radius` on the "Move To" task if needed. The `URTSOrderComponent` relies on the `FRTSOrderCallback` (which `ARTSCharacterAIController` triggers after `BehaviorTreeEnded`) to know the order is done.
*   **FloatingPawnMovement Speed is Zero or Too Low:**
    *   **Check:** In `BP_TestUnit`, select the `FloatingPawnMovement` component. In its Details panel, what is `Max Speed` set to?
    *   **Fix:** Increase `Max Speed` to a reasonable value (e.g., 300-600 for a typical human-sized unit).

**Issue 3: Errors in the Output Log**

*   **"Blackboard not set up for [PawnName], can't receive orders." (from `LogRTS`):**
    *   **Cause:** `ARTSCharacterAIController::VerifyBlackboard()` failed.
    *   **Fix:** Ensure `CharacterBlackboardAsset` is correctly assigned in your `BP_AIC_TestUnit` Class Defaults.
*   **"Ordered actor is invalid." or "The specified actor has no order component." (from `LogRTS` via `URTSOrderHelper` or `URTSOrderComponent`):**
    *   **Cause:** The actor reference passed to `IssueOrder` was null, or it was valid but lacked a `URTSOrderComponent`.
    *   **Fix:** Ensure you're getting a valid actor reference in `BP_TestPlayerController` and that your `BP_TestUnit` has `URTSOrderComponent` added.
*   **"The specified pawn ... does not have the required 'RTSCharacterAIController'..." (from `LogRTS` via `URTSOrderWithBehavior::IssueOrder`):**
    *   **Cause:** The pawn being ordered is not controlled by an `ARTSCharacterAIController` (or a child class).
    *   **Fix:** Check `AIControllerClass` on `BP_TestUnit`.
*   **Errors related to "Can't find Blackboard key..." in Behavior Tree logs:**
    *   **Cause:** Mismatch between key names/types in your `BB_TestUnit` asset and what the Behavior Tree tasks/decorators are trying to access.
    *   **Fix:** Double-check key names and types against `URTSBlackboardHelper` definitions.

**General Debugging Tips:**

*   **`Print String` is Your Friend:** Add `Print String` nodes liberally in your Blueprints (PlayerController, Behavior Tree Tasks, Order Blueprints if they had event graphs) to trace execution flow and variable values.
*   **UE Visual Logger (Window -> Developer Tools -> Visual Logger):** Can be invaluable for tracing AI behavior, Behavior Tree execution, and Gameplay Tag changes. You might need to add `GameplayDebugger` and `AIModule` to your project's `.Build.cs` if not already there, and enable relevant logging categories.
*   **Gameplay Debugger (Apostrophe ' key by default during PIE):** Provides a lot of runtime information about AI, navigation, and Gameplay Abilities. Cycle through categories with NumPad keys.
*   **Step Through Blueprints:** Use Blueprint breakpoints to pause execution and inspect variables.
*   **Simplify:** If something complex isn't working, temporarily simplify it. For example, replace a complex Behavior Tree with just a "Move To" and a "FinishOrder" task to isolate problems.

By systematically checking these common issues, you should be able to get your first move order working!






**0.8. Next Steps & Further Exploration**

Congratulations on getting your first unit to respond to a "Move" order using the ColonyOrders plugin! You've now seen a practical example of how several core components interact:

*   The **Player Controller** capturing input.
*   **`FRTSOrderData`** packaging the command.
*   **`URTSOrderHelper`** facilitating order issuance.
*   **`URTSOrderComponent`** on the unit managing the order.
*   **`ARTSCharacterAIController`** receiving the order and using its...
*   **`UBlackboardData`** (Blackboard) to store order parameters, which are then read by a...
*   **`UBehaviorTree`** to execute the actual movement logic.
*   And the **`URTSAbilitySystemComponent`** standing by to manage tags and (soon) abilities.

This fundamental loop is the basis for many other commands and behaviors you'll want to implement in your RTS game.

**Where to Go From Here?**

Now that you have a basic unit moving, you're well-equipped to explore more advanced features and create more complex interactions. We highly recommend diving into the following sections of this documentation, which build upon the concepts you've just put into practice:

*   **[3.1. Creating a New Unit/Building Order](#3.1.-Creating-a-New-Unit/Building-Order):**
    Learn how to define entirely new types of orders beyond "Move" or "Stop." This could be for attacking, gathering resources, constructing buildings, or any custom action your units need to perform. You'll build upon your understanding of `URTSOrder` and its specializations.

*   **[3.2. Designing and Implementing a New Gameplay Ability](#3.2.-Designing-and-Implementing-a-New-Gameplay-Ability):**
    Unleash the power of the Gameplay Ability System! This guide will show you how to create custom abilities (spells, special attacks, buffs/debuffs) using `URTSGameplayAbility` and integrate them so they can be triggered by orders (like `URTSUseAbilityOrder`).

*   **[3.3. Setting up Auto-Cast Abilities / Auto-Orders](#3.3.-Setting-up-Auto-Cast-Abilities-/-Auto-Orders):**
    Make your units more autonomous. Learn how to configure abilities to be auto-cast under certain conditions (e.g., a medic automatically healing nearby allies) using the `URTSAutoOrderComponent` and `IRTSAutoOrderProvider` interface (which your `URTSAbilitySystemComponent` already implements).

*   **[3.4. Defining and Using Unit Attributes](#3.4.-Defining-and-Using-Unit-Attributes):**
    Dive deeper into unit statistics. This section will guide you through creating custom `URTSAttributeSet`s (for things like Health, Mana, Energy, Speed) and using Curve Tables to define their base values, leveraging the `NameTag` on your `URTSAbilitySystemComponent`.

*   **[3.5. Leveraging Gameplay Tags for Conditional Logic](#3.5.-Leveraging-Gameplay-Tags-for-Conditional-Logic):**
    Gameplay Tags are incredibly powerful. This guide will show you more examples of how to use `URTSGlobalTags` and custom tags to control order validity (`FRTSOrderTagRequirements`), ability activation, and create dynamic gameplay interactions.

*   **[3.6. Configuring AI to Respond to Orders](#3.6.-Configuring-AI-to-Respond-to-Orders):**
    Expand on the basic AI setup. Learn more about designing robust Behavior Trees for different orders, using `URTSBlackboardHelper` effectively, and creating custom Behavior Tree nodes (Tasks, Services, Decorators) to achieve sophisticated AI behaviors.

**Don't forget to explore the detailed documentation for each class and system we touched upon:**

*   [Section 2.1 The Order System](#2.1.-The-Order-System) (for `URTSOrderComponent`, `URTSOrder` types, `URTSOrderHelper`, etc.)
*   [Section 2.2 Gameplay Ability System (GAS) Integration](#2.2.-Gameplay-Ability-System-(GAS)-Integration) (for `URTSAbilitySystemComponent`, `URTSGameplayAbility`, `URTSAttributeSet`, `URTSGlobalTags`, etc.)
*   [Section 2.3 AI & Behavior Trees](#2.3.-AI-&-Behavior-Trees) (for `ARTSCharacterAIController`, `URTSBlackboardHelper`)

By building upon this Quick Start foundation and exploring these guides, you'll be well on your way to creating complex and engaging RTS gameplay with the ColonyOrders plugin. Happy developing!



















## 3. Practical Guides & How-Tos

These guides provide step-by-step instructions and best practices for implementing common RTS features using the ColonyOrders plugin. They will often refer back to the detailed component documentation in Section 2.

---

**3.1. Creating a New Unit/Building Order**

Beyond the standard "Move," "Attack," and "Stop" orders, your RTS game will likely require custom orders for various unit or building actions, such as:

*   Gathering resources
*   Constructing a specific building
*   Patrolling an area
*   Using a special non-ability action (e.g., "Deploy Siege Mode")
*   Producing a unit from a factory

This guide will walk you through the general process of creating a new order type, focusing on an example like a "Gather Resources" order.

**Prerequisites:**

*   You have completed the [Quick Start Guide](#0.-Quick-Start-Guide:-Your-First-Move-Order) or have a similar basic setup with units, AI controllers, and the ColonyOrders plugin integrated.
*   You understand the roles of `URTSOrder`, `URTSOrderComponent`, `ARTSCharacterAIController`, `UBehaviorTree`, and `UBlackboardData` as detailed in Section 2.

**Steps to Create a New Order:**

**Step 1: Define the Order's Concept and Requirements**

Before writing any code or creating Blueprints, clearly define what your new order should do:

*   **Name:** E.g., "Gather Resources."
*   **Purpose:** E.g., "Command a worker unit to move to a resource node, gather from it, and return to a drop-off point."
*   **Target Type (`ERTSTargetType`):**
    *   For "Gather Resources," this would likely be `ERTSTargetType::ACTOR` (targeting the resource node like a Gold Mine or Tree).
*   **Source Actor Requirements (`FRTSOrderTagRequirements::Source...Tags`):**
    *   What tags must the unit issuing the order have/not have?
    *   E.g., `SourceRequiredTags`: `Status.Permanent.CanGather`.
    *   E.g., `SourceBlockedTags`: `Status.Changing.Immobilized`, `Status.Changing.GatherCapacityReached`.
*   **Target Actor/Location Requirements (`FRTSOrderTagRequirements::Target...Tags`):**
    *   What tags must the target have/not have?
    *   E.g., `TargetRequiredTags`: `Status.Permanent.IsResourceSource`, `Resource.Gold` (if specific to gold), `Relationship.Visible`.
    *   E.g., `TargetBlockedTags`: If the resource node can be depleted, perhaps `Status.Changing.Depleted`.
*   **Success Conditions (`FRTSOrderTagRequirements::Success...Tags`):**
    *   When is this order considered fully "successful"? For a continuous gather order, this might be tricky. Perhaps success is one full cycle, or perhaps it's an order that continues until explicitly canceled or a condition (like inventory full) is met, in which case the `SuccessTagRequirements` might be less relevant, and the Behavior Tree handles the loop. For this example, let's assume it's a "gather one load" order. Success might be when `Status.Changing.IsCarryingResources` is true AND the unit is back at a drop-off. This gets complex quickly and often the BT just "succeeds" per trip.
*   **Group Execution (`ERTSOrderGroupExecutionType`):**
    *   Likely `ALL` or `MOST_SUITABLE_UNIT` (e.g., closest worker). For simplicity, let's assume `ALL` for now.
*   **Individual Target Locations (`bIsCreatingIndividualTargetLocations`):**
    *   For gathering, if multiple units target the same large mine, you might want them to spread out. So, `true`, and you'd implement `CreateIndividualTargetLocations` to find different spots around the resource node. For a single tree, maybe `false`.
*   **Required Range:**
    *   How close does the unit need to be to the resource node to start gathering? E.g., 100 units.
*   **Behavior Tree Logic Outline:**
    1.  Move to the target resource node (using `Order_Target` from Blackboard).
    2.  Once in range, play "gathering" animation.
    3.  Simulate resource gain (e.g., add to an inventory component, update a variable).
    4.  Check if gather capacity is reached.
    5.  If capacity reached:
        *   Find the nearest resource drop-off point (e.g., Town Hall).
        *   Move to the drop-off point.
        *   Play "drop-off" animation.
        *   Deposit resources.
        *   (Loop) If original order was continuous, go back to step 1 (targeting original node or finding a new one).
    6.  Signal order completion/cycle completion (e.g., via `BTTask_FinishOrder`).

**Step 2: Create the C++ Base Class for the Order (Optional, but Recommended for Complex Logic)**

For non-trivial orders, starting with a C++ base provides more control and performance. If your order is simple and primarily involves running a Behavior Tree with standard targeting, you might be able to create it as a Blueprint child directly from `URTSCharacterAIOrder`.

1.  **Create New C++ Class:**
    *   In Unreal Editor, **Tools -> New C++ Class...**
    *   Choose `URTSCharacterAIOrder` as the parent class (or `URTSOrderWithBehavior` if it's not strictly for AI Pawns but still uses a BT). (Referencing [Section 2.1.3.3 `URTSCharacterAIOrder`](#2.1.3.3-URTSCharacterAIOrder)).
    *   Name it something like `URTSGatherOrder`. Add it to your plugin or game module.

2.  **Implement Constructor (`.cpp`):**
    ```cpp
    // RTSGatherOrder.h
    #pragma once
    #include "Orders/RTSCharacterAIOrder.h"
    #include "RTSGatherOrder.generated.h"

    UCLASS(Abstract, Blueprintable) // Abstract if it doesn't implement all, Blueprintable to make BP children
    class COLONYORDERS_API URTSGatherOrder : public URTSCharacterAIOrder
    {
        GENERATED_BODY()
    public:
        URTSGatherOrder();

        // Override virtual functions as needed
        virtual float GetRequiredRange(const AActor* OrderedActor, int32 Index) const override;
        // Potentially override CanObeyOrder, IsValidTarget if complex C++ logic is needed
        // For complex formations around resource node:
        // virtual void CreateIndividualTargetLocations(const TArray<AActor*>& OrderedActors, const FRTSOrderTargetData& TargetData, TArray<FVector2D>& OutTargetLocations) const override;
    };

    // RTSGatherOrder.cpp
    #include "RTSGatherOrder.h" // Your header
    #include "AbilitySystem/RTSGlobalTags.h" // For URTSGlobalTags

    URTSGatherOrder::URTSGatherOrder()
    {
        // Set properties inherited from URTSCharacterAIOrder and its parents
        TargetType = ERTSTargetType::ACTOR; // We target a resource node (Actor)
        bIsCreatingIndividualTargetLocations = true; // May want workers to spread out
        GroupExecutionType = ERTSOrderGroupExecutionType::ALL;

        // Set Display Name (can also be set in BP child)
        // Name = NSLOCTEXT("GameOrders", "GatherOrderName", "Gather Resources"); 

        // Define Tag Requirements
        TagRequirements.SourceRequiredTags.AddTag(URTSGlobalTags::Status_Permanent_CanGather());
        TagRequirements.SourceBlockedTags.AddTag(URTSGlobalTags::Status_Changing_Immobilized());
        TagRequirements.SourceBlockedTags.AddTag(URTSGlobalTags::Status_Changing_GatherCapacityReached()); // Don't issue if already full

        TagRequirements.TargetRequiredTags.AddTag(URTSGlobalTags::Status_Permanent_IsResourceSource());
        TagRequirements.TargetRequiredTags.AddTag(URTSGlobalTags::Relationship_Visible());
        // Example: TagRequirements.TargetRequiredTags.AddTag(FGameplayTag::RequestGameplayTag("Resource.Type.Gold")); // If this order is ONLY for gold
        // TagRequirements.TargetBlockedTags.AddTag(FGameplayTag::RequestGameplayTag("Resource.Status.Depleted"));
        
        // For a continuous gather, SuccessTagRequirements might be minimal, as the BT handles the loop.
        // If it was "gather one load", success might be:
        // SuccessTagRequirements.SourceRequiredTags.AddTag(URTSGlobalTags::Status_Changing_IsCarryingResources());
    }

    float URTSGatherOrder::GetRequiredRange(const AActor* OrderedActor, int32 Index) const
    {
        return 150.0f; // Example: 1.5 meters to start gathering
    }

    // void URTSGatherOrder::CreateIndividualTargetLocations(...) const { /* Implement custom spread logic */ }
    ```

3.  **Override Virtual Functions as Needed:**
    *   `GetRequiredRange()`: As shown above.
    *   `CanObeyOrder()` / `IsValidTarget()`: If your C++ class needs to perform complex checks beyond simple tag matching (which can be configured in BP Class Defaults on the child).
    *   `CreateIndividualTargetLocations()`: If you need specific C++ logic for how multiple units position themselves around a resource node (e.g., finding distinct "slots" on a large mine).

**Step 3: Create the Behavior Tree for the Order**

This is where the actual AI logic for performing the order resides.

1.  **Create a New Behavior Tree Asset:**
    *   In the Content Drawer (e.g., "AI" folder), right-click -> Artificial Intelligence -> Behavior Tree.
    *   Name it `BT_GatherResources`.
2.  **Design the Logic (High-Level Example):**
    *   **ROOT -> Selector (MainGatherLoop - set to Loop Decorator if continuous)**
        *   **Sequence (Gather Full Load)**
            *   `Order_Target` (Blackboard key for the resource node) needs to be valid (Decorator: Blackboard Key Is Set).
            *   `Order_Target` still has resources (Decorator: Custom, checks target's resource component).
            *   `Self` does NOT have `Status.Changing.GatherCapacityReached` (Decorator: Blackboard or GameplayTag Query).
            *   **Move To** `Order_Target` (using `GetRequiredRange` from the order, possibly via a custom BT Service that updates a `GatherRange` Blackboard key).
            *   **Play Animation** (Task: "GatheringAnim").
            *   **Wait** (Task: Represents time to gather one unit of resource, e.g., 1 second).
            *   **Apply Gameplay Effect to Self** (Task: Custom, grants +1 of the resource, updates inventory, potentially adds `Status.Changing.IsCarryingResources` if not already present. Could also check for capacity reached and add `Status.Changing.GatherCapacityReached`).
            *   (This sequence would loop implicitly if part of a larger looping selector in the BT, or if it's designed for one "tick" of gathering and the main order is re-evaluated).
        *   **Sequence (Return Resources)**
            *   `Self` HAS `Status.Changing.GatherCapacityReached` (Decorator).
            *   **Find Nearest DropOff** (Task: Custom, uses EQS or other logic to find an actor with `Status.Permanent.IsResourceDrain` and sets its location/actor to a new Blackboard key like `DropOffTarget`).
            *   **Move To** `DropOffTarget`.
            *   **Play Animation** (Task: "DropOffAnim").
            *   **Apply Gameplay Effect to Self/Game State** (Task: Custom, removes resources from inventory, adds to player's global resources, removes `Status.Changing.GatherCapacityReached` and `Status.Changing.IsCarryingResources`).
        *   **[BTTask_FinishOrder]** (Task: From Quick Start) - This needs careful placement. For a continuous gather, this might only be called if the order is externally canceled or the resource depletes. If it's "gather one load," it's called after dropping off.
    *   *(This is a simplified outline. Real gather logic can be much more complex, handling resource depletion, finding new nodes, etc.)*
3.  **Ensure Blackboard Keys are Used:** The BT will need to read `Order_Target` (the resource node) and potentially other keys set by `ARTSCharacterAIController`.

**Step 4: Create the Blueprint Order Class**

This links your C++ order class (if you made one) or a base plugin order class to the Behavior Tree and allows designers to configure UI and specific tag requirements.

1.  **Create Blueprint Class:**
    *   In the Content Drawer (e.g., "Orders" folder), right-click -> Blueprint Class.
    *   Parent class: `URTSGatherOrder` (if you made the C++ class) or `URTSCharacterAIOrder` (if implementing directly in BP from a generic base).
    *   Name it `BP_Order_GatherGold` (if it's specific to gold).
2.  **Configure Class Defaults:**
    *   Open `BP_Order_GatherGold`. Go to Class Defaults.
    *   **RTS Behavior -> Behavior Tree:** Assign your `BT_GatherResources`.
    *   **RTS Display:** Set `Name`, `Icon`, `Description`.
    *   **RTS Requirements -> Tag Requirements / Success Tag Requirements:**
        *   Even if some tags were set in the C++ constructor, you can review and refine them here. For example, for `BP_Order_GatherGold`:
            *   `TagRequirements.TargetRequiredTags`: Add `Resource.Type.Gold` (a custom tag you'd define).
        *   This is where designers can easily tweak conditions without C++ changes.
    *   Adjust other inherited properties like `RequiredRange` (if not handled in C++), `GroupExecutionType`, etc.
3.  Compile and Save.

**Step 5: Make the Order Issuable**

You need a way for players to issue this new order.

1.  **PlayerController Input:**
    *   Similar to the "Move" order in the Quick Start ([Section 0.5](#0.5.-Issuing-the-Move-Order-(from-PlayerController))), add input handling to your `BP_TestPlayerController`.
    *   When the player issues the command (e.g., clicks a "Gather" UI button then clicks a resource node, or right-clicks a resource node with a worker selected):
        *   Get the selected worker(s) (`OrderedActor`).
        *   Get the targeted resource node (`TargetActor`).
        *   Construct an `FRTSOrderData`:
            *   `OrderType`: `BP_Order_GatherGold::StaticClass()`.
            *   `Target`: The resource node actor.
            *   `bUseLocation`: Potentially `true` if `CreateIndividualTargetLocations` needs a central point, setting `Location` to the resource node's location.
            *   `Index`: `-1` unless your gather order has variants.
        *   Call the server RPC that then calls `URTSOrderHelper::IssueOrder(OrderedActor, GatherOrderData)`.
2.  **UI (Optional):** Create a UI button that, when clicked, sets the PlayerController into a "Gather Targeting Mode" and then uses the `BP_Order_GatherGold` order type.

**Step 6: Testing and Iteration**

*   Place worker units (that have `URTSGatherOrder` prerequisites like `Status.Permanent.CanGather` tag from their `URTSAbilitySystemComponent` setup) and resource nodes in your test level.
*   Ensure resource nodes have the correct tags (e.g., `Status.Permanent.IsResourceSource`, `Resource.Type.Gold`).
*   Issue the order and observe:
    *   Does the unit move to the resource?
    *   Does the `BT_GatherResources` Behavior Tree execute? (Use `showdebug AI`).
    *   Does the unit perform gather-like actions?
    *   Does it attempt to return to a drop-off?
*   Use the Output Log, Visual Logger, and Behavior Tree debugger to troubleshoot.

**Example: "Deploy Siege Mode" Order (Simpler, no complex loop)**

*   **Concept:** A tank unit deploys, becoming immobile but gaining increased range/damage.
*   **C++ Order (`URTSDeploySiegeModeOrder` from `URTSCharacterAIOrder`):**
    *   Constructor: `TargetType = ERTSTargetType::NONE`. Blocks if `Status.Changing.Immobilized` already.
    *   `AreAutoOrdersAllowedDuringOrder()`: Returns `false` (unit is focused).
*   **Behavior Tree (`BT_DeploySiegeMode`):**
    *   Sequence:
        *   Play "Deploy" Animation (Task, waits for completion).
        *   Apply Gameplay Effect (Task: adds `Status.Changing.Immobilized`, `Status.Buff.SiegeModeDamageBonus`, removes `Status.Permanent.Movable`).
        *   `BTTask_FinishOrder(Succeeded)`.
    *   *(A separate "Undeploy" order would reverse this.)*
*   **Blueprint Order (`BP_Order_DeploySiege`):** Links to `BT_DeploySiegeMode`, sets UI.
*   **Player Input:** UI button creates `FRTSOrderData` with `BP_Order_DeploySiege` type.

This guide provides a general framework. The complexity of your `URTSOrder` C++ class and especially your Behavior Tree will depend heavily on the specifics of the order you are implementing. Remember to leverage the detailed documentation for each component involved!


















**3.2. Designing and Implementing a New Gameplay Ability**

Gameplay Abilities are the heart of special actions, spells, and unique unit skills in your RTS. The ColonyOrders plugin builds upon Unreal Engine's Gameplay Ability System (GAS), providing `URTSGameplayAbility` as a specialized base. This guide will walk you through creating a new ability.

Let's imagine we're creating a simple targeted damage ability, like a "Magic Bolt."

**Prerequisites:**

*   You've completed the [Quick Start Guide](#0.-Quick-Start-Guide:-Your-First-Move-Order) or have a similar setup. This means you have units with `URTSAbilitySystemComponent` and `URTSOrderComponent`.
*   You understand the roles of `URTSGameplayAbility`, `URTSAbilitySystemComponent`, `URTSGameplayEffect`, and `URTSUseAbilityOrder` as detailed in Section 2.2.

**Steps to Create a New Gameplay Ability:**

**Step 1: Define the Ability's Concept and Mechanics**

Before creating assets, clearly define your ability:

*   **Name:** E.g., "Magic Bolt."
*   **Purpose:** E.g., "Deals 100 magic damage to a single enemy target at medium range. Costs 50 mana. Has a 5-second cooldown."
*   **Target Type (`ERTSTargetType`):** For "Magic Bolt," this is `ERTSTargetType::ACTOR`.
*   **Range:** E.g., 800 units.
*   **Cost:** Mana Cost (e.g., 50 Mana). This will be implemented via a `UGameplayEffect`.
*   **Cooldown:** Duration (e.g., 5 seconds). This will also be implemented via a `UGameplayEffect`.
*   **Effects/Damage:** What attributes does it affect on the target? (e.g., reduces "Health" attribute). How is damage calculated? (Direct value, scales with caster stats?).
*   **Caster Requirements (Tags):**
    *   `ActivationRequiredTags`: E.g., `Status.Changing.IsAlive`.
    *   `ActivationBlockedTags`: E.g., `Status.Changing.Silenced`.
*   **Target Requirements (Tags):**
    *   `TargetRequiredTags`: E.g., `Status.Changing.IsAlive`, `Relationship.Hostile`, `Relationship.Visible`.
    *   `TargetBlockedTags`: E.g., `Status.Changing.Invulnerable`, `Effect.Type.MagicImmune`.
*   **UI:** Icon, description text.
*   **Auto-Cast Potential?** (`bAIPlayerAutoAbility`, `bHumanPlayerAutoAbility`): Maybe for AI, not for human players initially.
*   **Process Policy (`ERTSAbilityProcessPolicy`):** If it's a quick cast, maybe `INSTANT` (if no travel time) or `CAN_BE_CANCELED` (if there's a cast animation/projectile). Let's assume `CAN_BE_CANCELED` for a projectile.

**Step 2: Create Supporting Gameplay Effects (Cost, Cooldown, Damage)**

Abilities in GAS often use `UGameplayEffect`s to handle costs, cooldowns, and the application of damage/healing/buffs. We'll use `URTSGameplayEffect` if we want them to have UI representations (though cost/cooldown GEs often don't need them).

1.  **Mana Cost Gameplay Effect:**
    *   In the Content Drawer (e.g., in an "Abilities/Effects" folder), right-click -> Blueprint Class.
    *   Parent Class: `GameplayEffect` (or `URTSGameplayEffect` if you want UI for it, though unusual for a cost).
    *   Name: `GE_MagicBolt_Cost_Mana`.
    *   Open it. Go to Class Defaults.
    *   **Duration Policy:** Set to **Instant**.
    *   **Modifiers:**
        *   Add an element.
        *   Attribute: Select your "Mana" attribute (e.g., from `UMyManaAttributeSet::ManaAttribute()`). You'll need to have created this attribute set first, as per [Section 3.4. Defining and Using Unit Attributes](#3.4.-Defining-and-Using-Unit-Attributes).
        *   Modifier Op: **Add**.
        *   Magnitude -> Scalable Float: Set Value to `-50` (to subtract 50 mana).
    *   Compile and Save.

2.  **Cooldown Gameplay Effect:**
    *   Create another Blueprint Class, parent `GameplayEffect`.
    *   Name: `GE_MagicBolt_Cooldown`.
    *   Open it. Go to Class Defaults.
    *   **Duration Policy:** Set to **Has Duration**.
    *   **Duration Magnitude -> Scalable Float:** Set Value to `5.0` (for 5 seconds).
    *   **GrantedTags:**
        *   Add an element.
        *   Tag: Create or select a unique tag representing this specific cooldown, e.g., `Cooldown.Ability.MagicBolt`. This tag is what the ability will check for to see if it's on cooldown.
    *   Compile and Save.

3.  **Damage Gameplay Effect:**
    *   Create another Blueprint Class, parent `URTSGameplayEffect` (so we can give it a "damage type" icon/name if desired, though often damage is just a number).
    *   Name: `GE_MagicBolt_Damage`.
    *   Open it. Go to Class Defaults.
    *   **Duration Policy:** Set to **Instant**.
    *   **Modifiers:**
        *   Add an element.
        *   Attribute: Select your "Health" attribute (e.g., from `UMyHealthAttributeSet::HealthAttribute()`).
        *   Modifier Op: **Add**.
        *   Magnitude -> Scalable Float: Set Value to `-100` (to deal 100 damage).
            *   *(Alternatively, for more advanced damage, you'd use an ExecutionCalculation here. See GAS documentation for `UGameplayEffectExecutionCalculation`.)*
    *   (Optional) Configure `Icon`, `EffectName` (e.g., "Magic Damage") under "RTS Display".
    *   Compile and Save.

**Step 3: Create the Gameplay Ability Blueprint**

This is where we define the "Magic Bolt" ability itself.

1.  **Create Ability Blueprint:**
    *   In the Content Drawer (e.g., "Abilities" folder), right-click -> Blueprint Class.
    *   Parent Class: `URTSGameplayAbility` (Referencing [Section 2.2.2 `URTSGameplayAbility`](#2.2.2-URTSGameplayAbility)).
    *   Name: `GA_MagicBolt`. Double-click to open it.

2.  **Configure Class Defaults:**
    *   Select **Class Defaults** in the toolbar. In the **Details** panel:
        *   **Ability Tags:** (Under "Ability") Add a unique tag for this ability, e.g., `Ability.Active.MagicBolt`.
        *   **Cancel Abilities with Tag / Block Abilities with Tag:** Configure if this ability should cancel/block others.
        *   **Activation Required Tags / Activation Blocked Tags:** (Under "Tags")
            *   `ActivationRequiredTags`: Add `URTSGlobalTags::Status_Changing_IsAlive()`.
            *   `ActivationBlockedTags`: Add `URTSGlobalTags::Status_Changing_Silenced()`.
        *   **Cost Gameplay Effect Class:** (Under "Costs") Set to `GE_MagicBolt_Cost_Mana`.
        *   **Cooldown Gameplay Effect Class:** (Under "Cooldown") Set to `GE_MagicBolt_Cooldown`. The "Cooldown Tags" in this section will automatically populate with the tags granted by `GE_MagicBolt_Cooldown` (i.e., `Cooldown.Ability.MagicBolt`).
        *   **RTS Category:**
            *   `AbilityProcessPolicy`: `CAN_BE_CANCELED` (allows interruption during cast/projectile travel).
            *   `GroupExecutionType`: `MOST_SUITABLE_UNIT` or `SELECTED_UNIT`.
        *   **RTS Targeting Category:**
            *   `TargetType`: `ACTOR`.
            *   `AbilityPreviewData`:
                *   `OrderPreviewClass`: (Optional) If you have a targeting reticle actor (child of `ARTSOrderPreview`), assign it here.
                *   `SnapMode`: E.g., `ORDERPREVIEW_SnapToCursor` if it's ground targeted, or not set if it's purely actor targeted and range is shown differently.
        *   **RTS Display Category:**
            *   `Icon`: Assign an icon texture.
            *   `Name`: "Magic Bolt" (as FText).
            *   `Description`: "Deals {Damage} magic damage to an enemy. Costs {ManaCost} Mana. Cooldown: {CooldownTime}s." (We'll format this).
        *   **RTS Level Category:**
            *   `MaxLevel`: `1` (if it's a single-level ability for now).
        *   **RTS Auto Abilities Category:**
            *   `bAIPlayerAutoAbility`: `true` (if AI should use it).
            *   `bIsTargetScoreOverridden`: `true` (if we want custom AI targeting logic).
            *   (Other auto-ability flags as needed).
        *   **Source Tags / Target Tags Categories (for Order System integration):**
            *   `SourceRequiredTags`: `URTSGlobalTags::Status_Changing_IsAlive()`.
            *   `SourceBlockedTags`: `URTSGlobalTags::Status_Changing_Silenced()`.
            *   `TargetRequiredTags`: `URTSGlobalTags::Status_Changing_IsAlive()`, `URTSGlobalTags::Relationship_Hostile()`, `URTSGlobalTags::Relationship_Visible()`.
            *   `TargetBlockedTags`: `URTSGlobalTags::Status_Changing_Invulnerable()`.

3.  **Implement Ability Logic (Event Graph):**
    *   **GetRange:**
        *   In the "My Blueprint" panel, override the function `GetRange`.
        *   Inside this function, add a `Return Node` and set its value to your desired range (e.g., `800.0`).
    *   **FormatDescription (Optional but good for UI):**
        *   Override `FormatDescription`.
        *   Inside, use `Make Map (Gameplay Attribute to Float)` to get current values for ManaCost (from `GE_MagicBolt_Cost_Mana` CDO's modifier) and Cooldown (from `GE_MagicBolt_Cooldown` CDO's duration). For Damage, you might directly use the value from `GE_MagicBolt_Damage` or calculate it if it scales.
        *   Use a `Format Text` node with your `InDescription` and the map of arguments to create `OutDescription`.
            *   *(Getting these values dynamically can be complex from within FormatDescription. A simpler start is to hardcode them in the description or update the description text directly when the ability levels up or stats change, if applicable.)*
    *   **GetTargetScore (If `bIsTargetScoreOverridden` is true, for AI):**
        *   Override `GetTargetScore`.
        *   Implement logic: e.g., score higher for low-health enemies, or specific enemy types. `OutScore` should be set.
    *   **ActivateAbility:**
        *   This is where the main effect happens. Override `Event ActivateAbility` (if instance per actor/execution) or `Event ActivateAbilityFromEvent` (if non-instanced and triggered by event). Let's assume `Event ActivateAbility`.
        *   **Get Target Data:** The ability will be activated with target data. You can get it using `GetCurrentAbilityTargetData`.
        *   **Validate Target:** Get the first actor from the target data. Check if it's valid and still meets conditions (e.g., still alive, hostile). If not, call `CancelAbility` or `EndAbility` and return.
        *   **(Optional) Play Caster Animation/Sound:** Use `PlayMontageAndWait` or play sounds.
        *   **(Optional) Spawn Projectile:**
            *   If it's a projectile, spawn your projectile actor. The projectile would then handle collision and applying the damage effect.
            *   Pass necessary info to the projectile (Instigator, TargetActor, DamageEffectClass: `GE_MagicBolt_Damage`).
        *   **Apply Damage Effect (If Instant/Melee Hit):**
            *   If it's an instant hit (no projectile), create an EffectSpec from `GE_MagicBolt_Damage`: `MakeOutgoingGameplayEffectSpec` (Handle: Self, EffectClass: `GE_MagicBolt_Damage`).
            *   Apply it to the target: `ApplyGameplayEffectSpecToTarget` (Target: TargetActor's ASC, Spec: The one you made).
        *   **Commit Ability:** Call `CommitAbility` (this applies cost and cooldown). If it fails (e.g., not enough mana), the ability might end here. You can branch off the return value.
        *   **End Ability:** Call `EndAbility` to finish the ability's execution.
        *   Example Flow for Instant Damage:
            ```
            Event ActivateAbility
                --> GetCurrentAbilityTargetData --> GetTargetDataFromHandle(index 0) --> GetHitResultFromTargetData --> BreakHitResult --> (TargetActor)
                --> IsValid (TargetActor)
                    --> (True) CommitAbility
                        --> (True from Commit) MakeOutgoingGameplayEffectSpec (Handle: Self, Class: GE_MagicBolt_Damage)
                            --> ApplyGameplayEffectSpecToTarget (Target: TargetActor's ASC, Spec: from Make)
                        --> EndAbility
                    --> (False from Commit or IsValid) CancelAbility (or EndAbility)
            ```

4.  Compile and Save `GA_MagicBolt`.

**Step 4: Grant the Ability to a Unit**

1.  Open your `BP_TestUnit` Blueprint.
2.  Select its `AbilitySystemComponent`.
3.  In the Details panel, under "RTS":
    *   Find the **Abilities** array. Click **+** to add an element.
    *   In the new element's dropdown, select your `GA_MagicBolt` class.
    *   *(Alternatively, if it's an unlockable ability, add it to the `UnlockableAbilities` array.)*
4.  Compile and Save `BP_TestUnit`.

**Step 5: Set up `URTSUseAbilityOrder` (If not already done globally)**

Your `URTSAbilitySystemComponent` on `BP_TestUnit` needs to know which `URTSUseAbilityOrder` Blueprint to use when an ability is triggered as an order.

1.  **Create a "Use Ability" Order Blueprint (if you don't have one from the Quick Start):**
    *   Create a Blueprint class, parent `URTSUseAbilityOrder`. Name it e.g., `BP_Order_UseAbility_Base`.
    *   **Create a generic "Use Ability" Behavior Tree (`BT_UseAbility_Base`):**
        *   This BT would typically:
            1.  Read `Order_Target`, `Order_Location`, `Order_Index` from Blackboard.
            2.  Get the ability class using `Order_Index` (custom BT task or service).
            3.  Get the ability's range (e.g., `URTSAbilitySystemHelper::GetAbilityRange`).
            4.  **Move To** target within ability range.
            5.  **(Optional) Face Target.**
            6.  **Trigger the Ability:** Send a Gameplay Event using `URTSAbilitySystemHelper::CreateGameplayEventData` and `SendGameplayEvent`. The event tag would be derived from the ability at `Order_Index`.
            7.  Call `BTTask_FinishOrder`.
    *   In `BP_Order_UseAbility_Base` Class Defaults, assign `BT_UseAbility_Base` to its `BehaviorTree` property.
    *   Configure its `Name` (e.g., "Use Ability") and a generic icon in "RTS Display".
2.  **Assign to ASC:**
    *   Open `BP_TestUnit`. Select its `AbilitySystemComponent`.
    *   In Details, under "RTS|Orders", set **Use Ability Order** to your `BP_Order_UseAbility_Base`.
3.  Compile and Save.

**Step 6: Issue the Ability Order (from PlayerController)**

This is similar to issuing the Move order, but now the `FRTSOrderData` will use `BP_Order_UseAbility_Base` (or whatever you named the `UseAbilityOrder` on the ASC) as its `OrderType`, and the `Index` will correspond to `GA_MagicBolt`'s position in `BP_TestUnit`'s `AbilitySystemComponent->Abilities` array (likely 0 if it's the first one).

1.  In `BP_TestPlayerController`, add new input handling (e.g., for a "1" key press, or a UI button click).
2.  When triggered:
    *   Get selected unit (`BP_TestUnit`).
    *   Get target actor (e.g., via line trace or if a target is already selected in UI).
    *   Get the `URTSAbilitySystemComponent` from the selected unit. Get its `UseAbilityOrder` property (this is the `TSoftClassPtr<URTSUseAbilityOrder>`).
    *   Construct `FRTSOrderData`:
        *   `OrderType`: The `UseAbilityOrder` class from the unit's ASC.
        *   `Index`: The index of `GA_MagicBolt` in the unit's `Abilities` array (e.g., `0`).
        *   `Target`: The enemy actor.
        *   `bUseLocation`: `false` (unless the ability is location-targeted).
    *   Call your server RPC, which then calls `URTSOrderHelper::IssueOrder`.

**Step 7: Testing and Iteration**

*   Place your `BP_TestUnit` and an enemy target in the level.
*   Ensure the enemy has an ASC and Health attribute if you want to see damage.
*   Play and trigger the ability order.
*   Observe:
    *   Does the unit's AI run the `BT_UseAbility_Base`?
    *   Does it move into range?
    *   Does `GA_MagicBolt` activate?
    *   Is mana consumed? Is cooldown applied? Is damage dealt?
    *   Check Output Log and Gameplay Debugger (`showdebug abilitysystem`) for clues.

This is a comprehensive overview. Creating a new ability involves several interconnected parts: the ability logic itself (`URTSGameplayAbility`), supporting gameplay effects for costs/cooldowns/payloads, granting it to units, and providing a way to trigger it via the order system (`URTSUseAbilityOrder` and input handling).

-













**3.3. Setting up Auto-Cast Abilities / Auto-Orders**

Auto-cast abilities (or auto-orders) allow units to automatically use certain abilities or issue default orders (like attacking) when specific conditions are met, without direct player intervention for each instance. For example, a medic unit might automatically heal nearby injured allies, or a combat unit might automatically attack enemies that come into range.

This guide will walk you through the steps to make an existing ability auto-castable and explain how the system works. We'll assume you have an ability like the "Magic Bolt" from the previous guide ([Section 3.2](#3.2.-Designing-and-Implementing-a-New-Gameplay-Ability)) that you now want to make auto-castable by an AI unit.

**Prerequisites:**

*   You have a unit Blueprint (e.g., `BP_TestUnit`) with:
    *   `URTSAbilitySystemComponent` ([Section 2.2.1](#2.2.1-URTSAbilitySystemComponent))
    *   `URTSOrderComponent` ([Section 2.1.1](#2.1.1-URTSOrderComponent))
    *   `URTSAutoOrderComponent` ([Section 2.1.5.1](#2.1.5.1-URTSAutoOrderComponent))
*   You have a Gameplay Ability Blueprint (e.g., `GA_MagicBolt`) derived from `URTSGameplayAbility` ([Section 2.2.2](#2.2.2-URTSGameplayAbility)) that is granted to your unit.
*   You have a Blueprint subclass of `URTSUseAbilityOrder` (e.g., `BP_Order_UseAbility_Base` from the previous guide) with a generic "Use Ability" Behavior Tree assigned. This `BP_Order_UseAbility_Base` should be set as the **Use Ability Order** property on your unit's `URTSAbilitySystemComponent`.
*   **Crucially:** You have a system in place that periodically calls `CheckAutoOrders()` on your `URTSAutoOrderComponent` instances. (As mentioned in [Section 2.1.5.1](#2.1.5.1-URTSAutoOrderComponent), this is often a manager in the GameMode that updates units in buckets for performance. Without this periodic call, auto-orders will not fire).

**Steps to Set Up an Auto-Cast Ability:**

**Step 1: Configure the `URTSGameplayAbility` for Auto-Cast**

The ability itself needs to be flagged as auto-castable.

1.  **Open Your Ability Blueprint:**
    *   Navigate to your ability Blueprint (e.g., `GA_MagicBolt`) in the Content Drawer and open it.
2.  **Access Class Defaults:**
    *   In the Blueprint editor, click on **Class Defaults** in the toolbar.
3.  **Configure "RTS Auto Abilities" Properties:**
    *   In the **Details** panel, find the "RTS Auto Abilities" category.
    *   **`bAIPlayerAutoAbility`:**
        *   Check this box (`true`) if you want AI-controlled units to be able to use this ability automatically.
        *   *(For our "Magic Bolt" example, let's assume we want AI to auto-cast it.)*
    *   **`bHumanPlayerAutoAbility`:**
        *   Check this box (`true`) if you want human players to be able to toggle auto-casting for this ability on their units (e.g., via a UI button).
        *   *(For "Magic Bolt," you might leave this unchecked for now if it's a powerful spell you want players to manually target, or check it if it's a more spammable/utility spell.)*
    *   **`bHumanPlayerAutoAutoAbilityInitialState`:**
        *   If `bHumanPlayerAutoAbility` is `true`, this determines if the auto-cast is enabled by default for human players when the unit spawns.
    *   **`bIsTargetScoreOverridden`:**
        *   If `true`, the AI will use this ability's custom `GetTargetScore` implementation (if you've overridden it in `GA_MagicBolt`) to decide which target is best for auto-casting.
        *   If `false` (or if `GetTargetScore` isn't overridden in the ability), the `URTSUseAbilityOrder` (and its parent `URTSOrder`) will use its default target scoring logic (which is often distance-based).
        *   *(For "Magic Bolt," if you want it to prioritize low-health enemies, you'd check this and implement `GetTargetScore` in `GA_MagicBolt` accordingly.)*
    *   **`AcquisitionRadiusOverride` & `bIsAcquisitionRadiusOverridden`:**
        *   If this ability should have a specific range at which it automatically looks for targets (different from the unit's default attack acquisition range), check `bIsAcquisitionRadiusOverridden` and set `AcquisitionRadiusOverride` to the desired value (in cm).
        *   If `bIsAcquisitionRadiusOverridden` is `false`, the `URTSAutoOrderComponent` will try to get a default acquisition radius (e.g., from an `URTSAttackComponent` if present, or you might need to customize `URTSAutoOrderComponent::GetAcquisitionRadius` if no such component exists).
        *   *(For "Magic Bolt," if its cast range is 800, you might set `AcquisitionRadiusOverride` to 800 or slightly more, and check `bIsAcquisitionRadiusOverridden`.)*
4.  **Compile and Save** your `GA_MagicBolt` Blueprint.

**Step 2: Verify `URTSAbilitySystemComponent` Setup**

The `URTSAbilitySystemComponent` on your unit acts as an `IRTSAutoOrderProvider`.

1.  **Open Your Unit Blueprint:** (e.g., `BP_TestUnit`).
2.  Select its `AbilitySystemComponent`.
3.  **Ensure `UseAbilityOrder` is Set:**
    *   In the Details panel, under "RTS|Orders", make sure the **Use Ability Order** property is set to your `BP_Order_UseAbility_Base` (or equivalent) Blueprint class. This is the `URTSUseAbilityOrder` subclass that has the generic "use ability" Behavior Tree.
    *   **Why?** When `URTSAbilitySystemComponent::GetAutoOrders_Implementation` runs, it provides `FRTSOrderTypeWithIndex` entries. For abilities, the `OrderType` in that struct will be this `UseAbilityOrder` property, and the `Index` will point to the ability in the ASC's list.

**Step 3: Ensure `URTSAutoOrderComponent` is Present and Active**

1.  **Component Present:** Verify your `BP_TestUnit` has the `URTSAutoOrderComponent` added.
2.  **Periodic `CheckAutoOrders()` Call:**
    *   **This is critical and not automatically handled by the component itself.** Your game needs a system to periodically call `URTSAutoOrderComponent::CheckAutoOrders()` on all relevant units.
    *   **Common Approach (Manager System):**
        *   Create a manager class (e.g., in your `AGameModeBase` or `AGameStateBase` subclass).
        *   Maintain a list of actors that have `URTSAutoOrderComponent`. Actors can register themselves with this manager in their `BeginPlay`.
        *   In the manager's `Tick`, implement a "bucketed update": iterate through a *subset* of registered actors each tick and call `CheckAutoOrders()` on them. This distributes the performance load.
        *   The commented-out code in `URTSAutoOrderComponent::BeginPlay` (`GameMode->AddAutoOrderActor(Owner);`) hints at such a system.
    *   **Simple (Less Performant) Test:** For quick testing in a very small scene, you could have `BP_TestUnit::Tick` get its `AutoOrderComponent` and call `CheckAutoOrders()`, but **this is not recommended for production** as it would run every frame for every unit.

**Step 4: Define AI Logic for Using the Ability (Behavior Tree)**

The Behavior Tree assigned to your `BP_Order_UseAbility_Base` (the one set in `URTSAbilitySystemComponent::UseAbilityOrder`) needs to be able to:

1.  **Identify the Target Ability:**
    *   It will receive the `Order_Index` (for `GA_MagicBolt`) on its Blackboard from `ARTSCharacterAIController`.
    *   A custom BT Service or Task can use this `Order_Index` and the `ControlledPawn`'s `URTSAbilitySystemComponent` to get the `TSubclassOf<URTSGameplayAbility>` (i.e., `GA_MagicBolt`).
2.  **Get Ability Properties:**
    *   From the ability class, get its `TargetType`, `Range` (using `URTSAbilitySystemHelper::GetAbilityRange`), and any other necessary info. Store these on the Blackboard if other nodes need them.
3.  **Move into Range (if needed):**
    *   If the ability is targeted (`TargetType` is `ACTOR` or `LOCATION`) and the `Order_Target` (from the auto-order system) or `Order_Location` is set:
        *   Use a "Move To" task, setting its `AcceptanceRadius` based on the ability's range.
4.  **Activate the Ability:**
    *   The most common way is to send a Gameplay Event.
        *   Construct `FGameplayEventData` using `URTSAbilitySystemHelper::CreateGameplayEventData`, passing the current unit as `Source`, the `Order_Target` (found by `URTSAutoOrderComponent`) as `TargetData`, and `GA_MagicBolt` as the `Ability`.
        *   Call `URTSAbilitySystemHelper::SendGameplayEvent` to the unit itself (as `GA_MagicBolt` is granted to it and listens for its own event trigger tag).
5.  **Signal Completion:** Use your `BTTask_FinishOrder` to call `BehaviorTreeEnded(Succeeded)` on the AI controller.

**Step 5: Testing and Verification**

1.  Place your `BP_TestUnit` (with `GA_MagicBolt` configured for AI auto-cast) in your test level.
2.  Place a suitable enemy target actor within the `AcquisitionRadiusOverride` you set on `GA_MagicBolt`. Ensure the enemy is hostile and meets any `TargetRequiredTags` of `GA_MagicBolt`.
3.  Ensure your `CheckAutoOrders()` calling mechanism is active.
4.  Play the level.
5.  **Observe:**
    *   Does `BP_TestUnit` detect the enemy?
    *   Does its `URTSAutoOrderComponent` issue a `BP_Order_UseAbility_Base` order with the correct `Index` for `GA_MagicBolt`? (Use `showdebug AI` to see current order type on Blackboard).
    *   Does the `BT_UseAbility_Base` Behavior Tree execute?
    *   Does the unit move into range (if needed) and then activate `GA_MagicBolt` (e.g., play animation, projectile, apply damage)?
    *   Are mana costs and cooldowns applied correctly?
6.  **Human Player Toggle (If `bHumanPlayerAutoAbility` was true):**
    *   You would need to create UI (e.g., an ability button with a toggle).
    *   When the toggle state changes, the UI would call (via server RPC) `URTSOrderHelper::SetHumanPlayerAutoOrderState`, passing the `BP_TestUnit`, an `FRTSOrderTypeWithIndex` for `GA_MagicBolt` (using the `UseAbilityOrder` class from the ASC and the correct index), and the new `bEnable` state.
    *   Verify that toggling it on/off correctly enables/disables the auto-cast behavior for that unit.

**Troubleshooting Auto-Orders:**

*   **Ability Not Flagged:** Double-check `bAIPlayerAutoAbility` (and/or `bHumanPlayerAutoAbility` and `HumanPlayerAutoOrderStates`) on the `URTSGameplayAbility` asset and that `URTSAutoOrderComponent` is picking up these flags correctly.
*   **`CheckAutoOrders()` Not Being Called:** This is a very common issue. Verify your manager system or test setup is indeed calling this function periodically *on the server*.
*   **`UseAbilityOrder` Not Set on ASC:** `URTSAbilitySystemComponent` needs its `UseAbilityOrder` property (a `TSoftClassPtr<URTSUseAbilityOrder>`) properly set to a Blueprint that has a Behavior Tree. If this is null, `GetAutoOrders_Implementation` won't be able to provide ability-based auto-orders.
*   **Acquisition Radius Issues:**
    *   Is the `AcquisitionRadiusOverride` on the ability appropriate?
    *   If not overridden, how is `URTSAutoOrderComponent::GetAcquisitionRadius` determining the range? Does the unit have an `URTSAttackComponent` or is a default of 0 being used, preventing target finding?
*   **Target Validation Failures:** The `URTSAutoOrderComponent` calls `URTSOrderHelper::FindTargetForOrder`. This internally uses `URTSOrder::GetTargetScore` and validates against the ability's (via `URTSUseAbilityOrder`) target tag requirements.
    *   Use `Print String` or the debugger in `GA_MagicBolt`'s `GetTargetScore` (if overridden) and its tag requirement getters to see if valid targets are being filtered out unexpectedly.
*   **Behavior Tree Logic:** The "Use Ability" BT might not be correctly identifying the ability via `Order_Index`, moving to range, or sending the Gameplay Event. Debug the BT step-by-step.
*   **Order Interruption Policy:** `URTSAutoOrderComponent` uses `InsertOrderBeforeCurrentOrder`. Ensure the unit's main tasks (defined by its `URTSOrderComponent::CurrentOrder`) can be interrupted or that `AreAutoOrdersAllowedDuringOrder` returns true for that main order.

Setting up auto-cast abilities involves ensuring the ability itself is configured for it, the `URTSAbilitySystemComponent` correctly provides it as an auto-order candidate, the `URTSAutoOrderComponent` is actively checking, and the associated Behavior Tree can correctly execute the indexed ability.











**3.4. Defining and Using Unit Attributes**

Attributes are the numerical statistics that define your units and buildings – things like Health, Mana, Attack Damage, Movement Speed, Armor, etc. The ColonyOrders plugin uses Unreal Engine's Gameplay Ability System (GAS), where attributes are defined within `UAttributeSet` classes. The plugin provides `URTSAttributeSet` as a base and `URTSAttackAttributeSet` as a concrete example.

This guide will walk you through:
1.  Creating a new custom `URTSAttributeSet` (e.g., for Health and Mana).
2.  Adding attributes to it.
3.  Configuring the `URTSAbilitySystemComponent` to use this attribute set.
4.  Setting up a Curve Table to initialize these attributes.
5.  Accessing and modifying these attributes via Gameplay Abilities and Effects.

**Prerequisites:**

*   You have a project with the ColonyOrders plugin set up.
*   You have a unit Blueprint (e.g., `BP_TestUnit`) with a `URTSAbilitySystemComponent` added, as covered in the [Quick Start Guide](#0.-Quick-Start-Guide:-Your-First-Move-Order) or [Section 2.2.1](#2.2.1-URTSAbilitySystemComponent).

**Step 1: Create a New Custom Attribute Set (C++)**

Attributes are best defined in C++.

1.  **Add a New C++ Class:**
    *   In the Unreal Editor, go to **Tools -> New C++ Class...**
    *   Check "Show All Classes."
    *   Search for `RTSAttributeSet` and select it as the parent class. (Referencing [Section 2.2.3.1 `URTSAttributeSet`](#2.2.3.1-URTSAttributeSet)).
    *   Click Next.
    *   Name your new class (e.g., `URTSCoreStatsSet`). Choose your plugin or game module. Click "Create Class."
    *   Unreal Engine will compile and open your IDE (Visual Studio, Rider, etc.).

2.  **Define Attributes in the Header (`.h` file):**
    Open `URTSCoreStatsSet.h`. You'll add `FGameplayAttributeData` properties for each attribute. Remember to include necessary headers.

    ```cpp
    // RTSCoreStatsSet.h
    #pragma once

    #include "CoreMinimal.h"
    #include "AbilitySystem/RTSAttributeSet.h" // Your base RTSAttributeSet
    #include "AbilitySystemComponent.h" // For ATTRIBUTE_ACCESSORS
    #include "RTSCoreStatsSet.generated.h"

    // Uses UAttributeSet::ATTRIBUTE_ACCESSORS macro to generate Getters, Setters, Inits.
    // Health_Property will be FProperty* 
    // Health_ATTRIBUTE will be FGameplayAttribute
    #define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
        GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
        GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
        GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
        GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

    UCLASS()
    class COLONYORDERS_API URTSCoreStatsSet : public URTSAttributeSet // Or YOURGAME_API if in game module
    {
        GENERATED_BODY()

    public:
        URTSCoreStatsSet();

        //~ Begin UAttributeSet Interface
        virtual void PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const override;
        virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override; // Note: Non-const for current value clamping
        virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;
        //~ End UAttributeSet Interface

        //~ Begin URTSAttributeSet Interface
        virtual void PostInitializeProperties(bool bInitialInit) override;
        virtual void GetDefaultStatusTags(FGameplayTagContainer& OutStatusTags) const override;
        //~ End URTSAttributeSet Interface
        
        virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

        // --- Health Attributes ---
        UPROPERTY(BlueprintReadOnly, Category = "Attributes|Health", ReplicatedUsing = OnRep_Health)
        FGameplayAttributeData Health;
        ATTRIBUTE_ACCESSORS(URTSCoreStatsSet, Health);

        UPROPERTY(BlueprintReadOnly, Category = "Attributes|Health", ReplicatedUsing = OnRep_MaxHealth)
        FGameplayAttributeData MaxHealth;
        ATTRIBUTE_ACCESSORS(URTSCoreStatsSet, MaxHealth);

        // --- Mana Attributes ---
        UPROPERTY(BlueprintReadOnly, Category = "Attributes|Mana", ReplicatedUsing = OnRep_Mana)
        FGameplayAttributeData Mana;
        ATTRIBUTE_ACCESSORS(URTSCoreStatsSet, Mana);

        UPROPERTY(BlueprintReadOnly, Category = "Attributes|Mana", ReplicatedUsing = OnRep_MaxMana)
        FGameplayAttributeData MaxMana;
        ATTRIBUTE_ACCESSORS(URTSCoreStatsSet, MaxMana);
        
        // --- Movement Speed Attribute ---
        UPROPERTY(BlueprintReadOnly, Category = "Attributes|Movement", ReplicatedUsing = OnRep_MovementSpeed)
        FGameplayAttributeData MovementSpeed;
        ATTRIBUTE_ACCESSORS(URTSCoreStatsSet, MovementSpeed);

    protected:
        UFUNCTION()
        virtual void OnRep_Health(const FGameplayAttributeData& OldHealth);
        UFUNCTION()
        virtual void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);
        UFUNCTION()
        virtual void OnRep_Mana(const FGameplayAttributeData& OldMana);
        UFUNCTION()
        virtual void OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana);
        UFUNCTION()
        virtual void OnRep_MovementSpeed(const FGameplayAttributeData& OldMovementSpeed);
    };
    ```
    *   **`ATTRIBUTE_ACCESSORS` Macro:** This standard GAS macro generates getter/setter/initter functions for your attributes (e.g., `GetHealth()`, `SetHealth(float NewVal)`, `InitHealth(float NewVal)`).
    *   **`FGameplayAttributeData`:** This struct (from GAS) actually holds the `BaseValue` and `CurrentValue` for each attribute. You expose this as a `UPROPERTY`.
    *   **`ReplicatedUsing = OnRep_FunctionName`:** This is crucial for multiplayer. When the server changes an attribute, it replicates to clients, and the specified `OnRep_` function is called on the client.

3.  **Implement the `.cpp` file:**
    Open `URTSCoreStatsSet.cpp`.

    ```cpp
    // RTSCoreStatsSet.cpp
    #include "RTSCoreStatsSet.h" // Your header
    #include "Net/UnrealNetwork.h"
    #include "GameplayEffectExtension.h" // For FGameplayEffectModCallbackData
    #include "AbilitySystem/RTSGlobalTags.h" // For status tags

    URTSCoreStatsSet::URTSCoreStatsSet()
    {
        // Initialize default values here if they are truly fixed and not data-driven
        // For example, if MovementSpeed always starts at a certain value before table lookup:
        // InitMovementSpeed(300.f); 
    }

    void URTSCoreStatsSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
    {
        Super::GetLifetimeReplicatedProps(OutLifetimeProps);

        DOREPLIFETIME_CONDITION_NOTIFY(URTSCoreStatsSet, Health, COND_None, REPNOTIFY_Always);
        DOREPLIFETIME_CONDITION_NOTIFY(URTSCoreStatsSet, MaxHealth, COND_None, REPNOTIFY_Always);
        DOREPLIFETIME_CONDITION_NOTIFY(URTSCoreStatsSet, Mana, COND_None, REPNOTIFY_Always);
        DOREPLIFETIME_CONDITION_NOTIFY(URTSCoreStatsSet, MaxMana, COND_None, REPNOTIFY_Always);
        DOREPLIFETIME_CONDITION_NOTIFY(URTSCoreStatsSet, MovementSpeed, COND_None, REPNOTIFY_Always);
    }

    // --- OnRep Functions (Boilerplate for replication) ---
    void URTSCoreStatsSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
    {
        GAMEPLAYATTRIBUTE_REPNOTIFY(URTSCoreStatsSet, Health, OldHealth);
    }

    void URTSCoreStatsSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
    {
        GAMEPLAYATTRIBUTE_REPNOTIFY(URTSCoreStatsSet, MaxHealth, OldMaxHealth);
    }

    void URTSCoreStatsSet::OnRep_Mana(const FGameplayAttributeData& OldMana)
    {
        GAMEPLAYATTRIBUTE_REPNOTIFY(URTSCoreStatsSet, Mana, OldMana);
    }

    void URTSCoreStatsSet::OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana)
    {
        GAMEPLAYATTRIBUTE_REPNOTIFY(URTSCoreStatsSet, MaxMana, OldMaxMana);
    }
    
    void URTSCoreStatsSet::OnRep_MovementSpeed(const FGameplayAttributeData& OldMovementSpeed)
    {
        GAMEPLAYATTRIBUTE_REPNOTIFY(URTSCoreStatsSet, MovementSpeed, OldMovementSpeed);
    }

    // --- URTSAttributeSet Overrides ---
    void URTSCoreStatsSet::PostInitializeProperties(bool bInitialInit)
    {
        Super::PostInitializeProperties(bInitialInit);

        if (bInitialInit)
        {
            // Set current values to max values on initial spawn after base values are loaded
            SetHealth(GetMaxHealth());
            SetMana(GetMaxMana());
        }
    }

    void URTSCoreStatsSet::GetDefaultStatusTags(FGameplayTagContainer& OutStatusTags) const
    {
        Super::GetDefaultStatusTags(OutStatusTags);
        // Example: If having movement speed implies the unit is generally movable
        if (GetMovementSpeed() > 0.f) // Or just always add it if this set implies movability
        {
            OutStatusTags.AddTag(URTSGlobalTags::Status_Permanent_Movable());
        }
        // If having health/maxhealth means it's "damageable" or "targetable" in some way:
        // OutStatusTags.AddTag(FGameplayTag::RequestGameplayTag("Status.Permanent.IsDamageable"));
    }
    
    // --- UAttributeSet Overrides (Clamping, PostEffectExecute) ---
    void URTSCoreStatsSet::PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const
    {
        Super::PreAttributeBaseChange(Attribute, NewValue);

        // Example: Clamp MaxHealth to be at least 1
        if (Attribute == GetMaxHealthAttribute())
        {
            NewValue = FMath::Max(NewValue, 1.f);
        }
        else if (Attribute == GetMaxManaAttribute())
        {
            NewValue = FMath::Max(NewValue, 0.f);
        }
        else if (Attribute == GetMovementSpeedAttribute())
        {
            NewValue = FMath::Max(NewValue, 0.f);
        }
    }
    
    void URTSCoreStatsSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
    {
        Super::PreAttributeChange(Attribute, NewValue);

        // This is called before a CURRENT value change. Clamp current Health and Mana.
        if (Attribute == GetHealthAttribute())
        {
            NewValue = FMath::Clamp(NewValue, 0.f, GetMaxHealth());
        }
        else if (Attribute == GetManaAttribute())
        {
            NewValue = FMath::Clamp(NewValue, 0.f, GetMaxMana());
        }
    }

    void URTSCoreStatsSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
    {
        Super::PostGameplayEffectExecute(Data);

        // Example: If Health was changed, ensure it doesn't go above MaxHealth or below 0
        // (PreAttributeChange should handle this, but PostGameplayEffectExecute is where you react to the change)
        if (Data.EvaluatedData.Attribute == GetHealthAttribute())
        {
            SetHealth(FMath::Clamp(GetHealth(), 0.0f, GetMaxHealth()));
            // UE_LOG(LogTemp, Warning, TEXT("Health changed to %f for %s"), GetHealth(), *GetOwningAbilitySystemComponent()->GetOwnerActor()->GetName());

            if (GetHealth() <= 0.0f && !GetOwningAbilitySystemComponent()->HasMatchingGameplayTag(URTSGlobalTags::Status_Changing_IsAlive() ) == false ) // Check if already "dead" by tag
            {
                // Handle death logic here or send a gameplay event
                // e.g., GetOwningAbilitySystemComponent()->AddLooseGameplayTag(URTSGlobalTags::State_Dead());
                //      GetOwningAbilitySystemComponent()->RemoveLooseGameplayTag(URTSGlobalTags::Status_Changing_IsAlive());
                //      (This logic is often in a HealthComponent or the ASC itself reacting to a "Dead" tag)
                UE_LOG(LogTemp, Warning, TEXT("%s has died!"), *GetOwningAbilitySystemComponent()->GetOwnerActor()->GetName());
                // For now, just log. Proper death handling is more complex.
            }
        }
        else if (Data.EvaluatedData.Attribute == GetManaAttribute())
        {
            SetMana(FMath::Clamp(GetMana(), 0.0f, GetMaxMana()));
        }
    }
    ```
    *   **Replication:** The `DOREPLIFETIME_CONDITION_NOTIFY` macros set up replication. `REPNOTIFY_Always` ensures the `OnRep_` function is called even if the value set is the same as before (useful for some edge cases).
    *   **`PreAttributeBaseChange` vs `PreAttributeChange`:**
        *   `PreAttributeBaseChange` is for when the *BaseValue* of an attribute is directly changed (e.g., by `FAttributeSetInitter` from a curve table on level up).
        *   `PreAttributeChange` is for when the *CurrentValue* is about to be changed (e.g., by a direct `SetHealth()` call, though most current value changes come from Gameplay Effects, which go through `PostGameplayEffectExecute`). It's good for clamping current values.
    *   **`PostGameplayEffectExecute`:** This is a critical function. It's called *after* a `UGameplayEffect` has modified an attribute in this set. This is where you react to changes:
        *   Clamp current Health/Mana again (as a safeguard or if effects don't perfectly clamp).
        *   Implement "on damage taken" logic (e.g., check for death if Health <= 0, play sounds, update UI).
        *   Trigger other events based on attribute thresholds.

4.  **Compile your C++ code.**

**Step 2: Add the Attribute Set to Your Unit's `URTSAbilitySystemComponent`**

1.  Open your unit Blueprint (e.g., `BP_TestUnit`).
2.  Select its `AbilitySystemComponent`.
3.  In the **Details** panel, find the "Ability System" category -> **Default Starting Data** array.
4.  Click the **+** icon to add a new element if one doesn't exist for your new set, or modify an existing one.
5.  For the **Attributes** property of this new element, click the dropdown and select your new attribute set class (e.g., `RTSCoreStatsSet`).
6.  Compile and Save `BP_TestUnit`.

**Step 3: Set up a Curve Table for Attribute Initialization**

To have data-driven initial values for your attributes (especially `MaxHealth`, `MaxMana`, `MovementSpeed` base values per level):

1.  **Create a Curve Table Asset:**
    *   In the Content Drawer, right-click -> Miscellaneous -> Curve Table.
    *   Select `CurveFloat` as the curve type.
    *   Name it something like `CT_UnitBaseStats`. Double-click to open it.
2.  **Add Rows to the Curve Table:**
    *   Click the **+ Add** button in the Curve Table editor to add a new row.
    *   **Row Name Convention:** The row name must follow the pattern: `UnitNameTagPart.AttributePropertyName`.
        *   `UnitNameTagPart`: This is the last part of the `NameTag` you set on your unit's `URTSAbilitySystemComponent`. If `NameTag` was `Unit.Test.BasicGrunt`, then `UnitNameTagPart` is `BasicGrunt`.
        *   `AttributePropertyName`: This is the exact C++ FProperty name of the attribute in your attribute set (e.g., `MaxHealth`, `MaxMana`, `MovementSpeed`).
    *   **Examples for `BP_TestUnit` (if its `NameTag` ends in `BasicGrunt`):**
        *   Row 1 Name: `BasicGrunt.MaxHealth`
        *   Row 2 Name: `BasicGrunt.MaxMana`
        *   Row 3 Name: `BasicGrunt.MovementSpeed`
    *   **Edit the Curves:** For each row, you can define a curve.
        *   Right-click on the curve graph -> Add Key.
        *   Set the **Time** of the key to the unit level (e.g., Time `1.0` for Level 1).
        *   Set the **Value** of the key to the attribute's base value at that level (e.g., for `BasicGrunt.MaxHealth` at Level 1, Value might be `100.0`).
        *   Add more keys for different levels to create a progression.
3.  Save `CT_UnitBaseStats`.

4.  **Link the Curve Table to GAS Globals (if not already done for other attributes):**
    *   The `FAttributeSetInitter` (a global GAS object) needs to know which curve tables to use. This is typically configured in `Config/DefaultGame.ini`.
    *   Open your project's `Config/DefaultGame.ini`.
    *   Add or ensure you have a section like this:
        ```ini
        [/Script/GameplayAbilities.AbilitySystemGlobals]
        GlobalAttributeSetDefaultsTableNames="/Game/Path/To/Your/CT_UnitBaseStats.CT_UnitBaseStats" 
        ; Add other curve tables here if you have multiple, separated by comma or new lines with the same key
        ; GlobalAttributeSetDefaultsTableNames="/Game/Path/To/CT_AttackStats.CT_AttackStats"
        ```
        Replace `/Game/Path/To/Your/` with the actual path to your `CT_UnitBaseStats` asset in the Content Browser (e.g., `/Game/Blueprints/AI/Attributes/CT_UnitBaseStats.CT_UnitBaseStats`). You can get this path by right-clicking the asset and choosing "Copy Reference."
    *   *(Note: If you already have `GlobalAttributeSetDefaultsTableNames` for other attribute sets like `URTSAttackAttributeSet`, you can add your new table to the list, or ensure your new attributes are in one of the already listed tables.)*

**Step 4: Verify Attribute Initialization**

1.  When your `BP_TestUnit` spawns in the game (after `BeginPlay` on its `URTSAbilitySystemComponent`):
    *   `URTSAbilitySystemComponent::InitializeAttributes` will be called.
    *   This will use `FAttributeSetInitter` to look up rows in `CT_UnitBaseStats` (and any other configured tables) matching `BasicGrunt.MaxHealth`, `BasicGrunt.MaxMana`, etc., for the unit's current level.
    *   The `BaseValue` of these attributes in `URTSCoreStatsSet` will be set.
    *   Then, `URTSCoreStatsSet::PostInitializeProperties` will run, setting `Health` to `MaxHealth` and `Mana` to `MaxMana`.
2.  **Debugging:**
    *   While playing, select your unit. In the console, type `showdebug abilitysystem`. This will display current attribute values.
    *   You can also use `Print String` nodes in `URTSCoreStatsSet::PostInitializeProperties` or `PostGameplayEffectExecute` to log values.

**Step 5: Using Attributes in Gameplay Abilities and Effects**

1.  **Reading Attributes in Abilities:**
    *   In an `URTSGameplayAbility` (e.g., `GA_MagicBolt`), you can get the caster's or target's ASC and read attribute values:
        ```cpp
        // Inside GA_MagicBolt's ActivateAbility
        // UAbilitySystemComponent* CasterASC = GetAbilitySystemComponentFromActorInfo_Ensured();
        // float CurrentMana = CasterASC->GetNumericAttribute(URTSCoreStatsSet::GetManaAttribute()); // Using static getter
        // if (CurrentMana < RequiredManaForThisSpell) { CancelAbility(); return; }
        ```
2.  **Modifying Attributes with Gameplay Effects:**
    *   This is the standard way to change attributes (deal damage, heal, restore mana, apply buffs/debuffs).
    *   Create a `URTSGameplayEffect` Blueprint (e.g., `GE_Heal`).
    *   In its Class Defaults, go to **Modifiers**.
    *   Add a modifier:
        *   Attribute: `URTSCoreStatsSet::HealthAttribute()` (select via dropdown).
        *   Modifier Op: `Add`.
        *   Magnitude: Scalable Float (e.g., Value = `25` to heal 25 health).
    *   In an ability, you would then `MakeOutgoingGameplayEffectSpec` for `GE_Heal` and `ApplyGameplayEffectSpecToTarget` or `ApplyGameplayEffectSpecToSelf`.
3.  **Costs and Cooldowns:**
    *   As shown in [Section 3.2](#3.2.-Designing-and-Implementing-a-New-Gameplay-Ability), ability costs (like mana) and cooldowns are also implemented using Gameplay Effects that modify attributes (mana) or apply tags with durations (cooldowns).

**Example: Applying a "Slow" Debuff**

1.  **GE_SlowMovement (`URTSGameplayEffect` child):**
    *   Duration: 5 seconds.
    *   Modifiers:
        *   Attribute: `URTSCoreStatsSet::MovementSpeedAttribute()`
        *   Modifier Op: `Multiply`
        *   Magnitude: `0.5` (reduces movement speed by 50%).
    *   Granted Tags: Add `Status.Debuff.Slowed` (a custom tag you define).
    *   UI: Set Icon, Name "Slowed", Description.
2.  **GA_SlowingTrap (Ability):**
    *   When activated (e.g., unit steps on a trap), applies `GE_SlowMovement` to the unit.

This provides a solid foundation for defining and managing any numerical stat your units might need, making them data-driven and integrated with the powerful Gameplay Ability System.
















**3.5. Leveraging Gameplay Tags for Conditional Logic**

Gameplay Tags (`FGameplayTag`) are a cornerstone of both the Gameplay Ability System (GAS) and the ColonyOrders plugin. They are hierarchical names (e.g., `Status.Changing.Stunned`, `Relationship.Hostile`) used to represent a wide array of states, conditions, relationships, and events in a flexible and efficient manner. This guide will show you practical examples of how to use them for conditional logic.

**Prerequisites:**

*   You have a project with the ColonyOrders plugin set up.
*   You are familiar with `URTSAbilitySystemComponent` ([Section 2.2.1](#2.2.1-URTSAbilitySystemComponent)), `URTSOrder` ([Section 2.1.2](#2.1.2-URTSOrder)) and its `FRTSOrderTagRequirements` ([Section 2.1.6.3](#2.1.6.3-FRTSOrderTagRequirements)), `URTSGameplayAbility` ([Section 2.2.2](#2.2.2-URTSGameplayAbility)), `URTSGameplayEffect` ([Section 2.2.3.3](#2.2.3.3-URTSGameplayEffect)), and `URTSGlobalTags` ([Section 2.2.4](#2.2.4-URTSGlobalTags)).
*   You have defined relevant Gameplay Tags for your game, either by using those in `URTSGlobalTags` or by creating your own (typically in `Config/DefaultGameplayTags.ini` and potentially a game-specific global tags C++ class).

**Core Concepts for Tag-Based Conditional Logic:**

1.  **Tag Presence/Absence:** The most basic form is checking if an actor *has* or *does not have* specific tags.
2.  **Tag Queries:** More complex queries can check for "all of these tags," "any of these tags," or "none of these tags."
3.  **Dynamic Tag Application:** Gameplay Effects are commonly used to temporarily grant or remove tags, thereby changing an actor's state and how conditional logic evaluates against it.
4.  **Event Triggering:** Abilities can be triggered when specific Gameplay Event Tags are sent to an actor's ASC.

**Use Cases & Examples:**

**1. Conditional Order Issuance (Using `FRTSOrderTagRequirements`)**

This is the most direct way tags control orders. `URTSOrder` subclasses have `TagRequirements` and `SuccessTagRequirements` properties.

*   **Scenario:** An "EMP Blast" order should only be issuable by a special unit that has an "EMP Emitter" and only against mechanical targets that are not currently EMP-shielded.
*   **Implementation:**
    1.  **Define Tags:**
        *   `Unit.Capability.HasEMPEmitter` (Permanent status for the caster)
        *   `Unit.Type.Mechanical` (Permanent status for the target)
        *   `Effect.Buff.EMPShielded` (Temporary changing status on the target)
    2.  **Create `BP_Order_EMPBlast` (child of `URTSCharacterAIOrder`):**
    3.  In its **Class Defaults -> RTS Requirements -> Tag Requirements**:
        *   **Source Required Tags:** Add `Unit.Capability.HasEMPEmitter`.
        *   **Source Blocked Tags:** (e.g., `Status.Changing.Silenced` if it's like a spell).
        *   **Target Required Tags:** Add `Unit.Type.Mechanical`, `Relationship.Hostile`, `Relationship.Visible`.
        *   **Target Blocked Tags:** Add `Effect.Buff.EMPShielded`.
    4.  **Logic:**
        *   When the player tries to issue `BP_Order_EMPBlast`, `URTSOrderHelper::CanObeyOrder` will check the source actor's tags against `SourceRequiredTags` / `SourceBlockedTags`.
        *   `URTSOrderHelper::IsValidTarget` will check the target actor's tags against `TargetRequiredTags` / `TargetBlockedTags`.
        *   If any condition fails, the order cannot be issued (or the target is invalid). The `FRTSOrderErrorTags` struct can provide feedback on which tags caused the failure.

**2. Conditional Ability Activation (Using `URTSGameplayAbility` Tag Properties)**

`URTSGameplayAbility` (and base `UGameplayAbility`) has several tag containers to control its activation:

*   `Ability Tags`: Tags the ability *itself* possesses (for categorization, cancellation).
*   `Cancel Abilities with Tag` / `Block Abilities with Tag`: Standard GAS interaction control.
*   `Activation Required Tags`: Tags the *caster* must have to activate.
*   `Activation Blocked Tags`: Tags the *caster* must NOT have to activate.
*   `Source Required/Blocked Tags`: Similar to Activation Tags, but often used by `URTSUseAbilityOrder` for its checks.
*   `Target Required/Blocked Tags`: Tags the *target* must/must not have.

*   **Scenario:** A "Phase Shift" defensive ability can only be used if the caster is not already "Phased" and has enough "Energy" (represented by a tag like `Status.Resource.EnergySufficient`).
*   **Implementation:**
    1.  **Define Tags:**
        *   `Status.Changing.Phased`
        *   `Status.Resource.EnergySufficient` (This tag would be granted/removed by a system that monitors the Energy attribute).
    2.  **Create `GA_PhaseShift` (child of `URTSGameplayAbility`):**
    3.  In its **Class Defaults**:
        *   **Activation Blocked Tags:** Add `Status.Changing.Phased`.
        *   **Activation Required Tags:** Add `Status.Resource.EnergySufficient`.
        *   (In `ActivateAbility`): Apply a `GE_PhaseShift` effect that grants `Status.Changing.Phased` for a duration and potentially `Status.Changing.Invulnerable`.
    4.  **Logic:**
        *   When the unit tries to activate `GA_PhaseShift` (e.g., via `URTSUseAbilityOrder`), `UGameplayAbility::CanActivateAbility()` (called by `URTSUseAbilityOrder::CanObeyOrder`) will check these caster tags. If the unit is already phased or lacks sufficient energy (tag), activation fails.

**3. Conditional Gameplay Effects (Using `Ongoing Tag Requirements` or `Application Tag Requirements` on `UGameplayEffect`)**

Gameplay Effects themselves can have tag requirements for application or for staying active.

*   **Scenario:** A "Regeneration" buff should only apply if the unit is "Organic" and should be removed if the unit becomes "Undead."
*   **Implementation:**
    1.  **Define Tags:** `Unit.Type.Organic`, `Unit.Type.Undead`.
    2.  **Create `GE_Regeneration` (child of `URTSGameplayEffect`):**
    3.  In its **Class Defaults**:
        *   **Application Tag Requirements -> Ongoing Tag Requirements -> Must Be Present:** Add `Unit.Type.Organic`.
            *   *(This means the effect will only apply if the target has `Unit.Type.Organic` when the effect is first applied, and will be removed if this tag is ever lost.)*
        *   **Application Tag Requirements -> Ongoing Tag Requirements -> Must Be Absent:** Add `Unit.Type.Undead`.
            *   *(This means the effect will be removed if the target ever gains the `Unit.Type.Undead` tag.)*
        *   **Modifiers:** Add a modifier for +Health regeneration.
    4.  **Logic:** If a unit has `GE_Regeneration` active and later gains `Unit.Type.Undead` (e.g., via a debuff), `GE_Regeneration` will automatically be removed by GAS.

**4. Conditional Logic within Behavior Trees (Using Blackboard and Tag Queries)**

Behavior Trees can use Decorators to check Gameplay Tags on the AI-controlled pawn or its target.

*   **Scenario:** An AI unit should only attempt to use its "EMP Blast" ability if its current target is `Unit.Type.Mechanical`.
*   **Implementation:**
    1.  **Ensure Target Tags on Blackboard:** When `ARTSCharacterAIController` sets the `Order_Target` on the Blackboard, it doesn't automatically put the target's tags there. The Behavior Tree would need to get the target actor and then query its tags.
    2.  **Custom BT Decorator (Blueprint or C++):** Create a `UBTDecorator_BlueprintBase` named `BTD_TargetHasTag`.
        *   Properties: `FGameplayTag TagToCheck`.
        *   Override `PerformConditionCheckAI`.
        *   Inside `PerformConditionCheckAI`:
            *   Get the AI Controller and Pawn.
            *   Get the target actor from the Blackboard (e.g., from `Order_Target` key).
            *   If target is valid, get its `URTSAbilitySystemComponent`.
            *   Check if `TargetASC->HasMatchingGameplayTag(TagToCheck)`. Return true/false.
    3.  **In `BT_EMPBlast` Behavior Tree:**
        *   Before the sequence/task that actually casts the EMP Blast:
            *   Add your `BTD_TargetHasTag` decorator.
            *   Set its `TagToCheck` property to `Unit.Type.Mechanical`.
    4.  **Logic:** The Behavior Tree branch for casting EMP Blast will only execute if the current target has the `Unit.Type.Mechanical` tag.

**5. Dynamic Tag Application via Abilities/Effects for State Changes**

Tags are frequently added/removed by Gameplay Effects applied by abilities to represent state changes.

*   **Scenario:** A "Stun" ability.
*   **Implementation:**
    1.  **`GA_StunShot` (Ability):**
        *   When activated, applies `GE_Stun` to the target.
    2.  **`GE_Stun` (Effect):**
        *   Duration: e.g., 3 seconds.
        *   **Granted Tags:** Adds `URTSGlobalTags::Status_Changing_Immobilized()` and potentially `URTSGlobalTags::Status_Changing_Silenced()`, `URTSGlobalTags::Status_Changing_Unarmed()`.
    3.  **Logic:**
        *   While `GE_Stun` is active, the target unit will have these "Stunned-like" tags.
        *   Other systems react:
            *   `URTSMoveOrder` will be blocked for the stunned unit because of `Status.Changing.Immobilized`.
            *   `URTSAttackOrder` will be blocked because of `Status.Changing.Unarmed`.
            *   `URTSUseAbilityOrder` will be blocked because of `Status.Changing.Silenced`.
        *   When `GE_Stun` expires, GAS automatically removes the granted tags, and the unit returns to normal.

**6. Using `URTSAbilitySystemHelper` for Tag Checks in Blueprints/C++**

[Section 2.2.6 `URTSAbilitySystemHelper` - Part 4](#2.2.6.-URTSAbilitySystemHelper---Part-4-Tags) details many functions for tag checking.

*   **Scenario:** In a unit's Blueprint, you want to play a special "low health" visual effect if its Health is low AND it's not currently "cloaked".
*   **Implementation (in `BP_TestUnit` Event Tick or a bound event):**
    ```blueprint
    Event Tick
        --> GetAbilitySystemComponent --> HasMatchingGameplayTag (Tag: Status.Changing.Stealthed) --> Branch (Condition: NOT result of HasMatching)
            --> (True from Branch: Not Stealthed) GetAbilitySystemComponent --> GetFloatAttributeValue (Attribute: Health) --> [CompareFloat (Health < 25% of MaxHealth)] --> Branch
                --> (True from Compare: Low Health & Not Stealthed) PlayLowHealthEffect (Custom Event)
    ```

**Tips for Leveraging Tags:**

*   **Be Granular but Sensible:** Define tags that represent meaningful game states. Don't over-tag with hyper-specific states if a slightly more general tag combined with attribute checks would suffice.
*   **Use Hierarchies:** `Status.Buff.AttackSpeed` is better than just `AttackSpeedBuff`. It allows querying for all `Status.Buff.*` or all `Status.*`.
*   **Source of Truth for Tags:** Use `URTSGlobalTags` or a game-specific equivalent for common tags. Add custom tags to `DefaultGameplayTags.ini`.
*   **Combine Tags with Attribute Checks:** Sometimes a tag isn't enough. "Is Health Low?" is an attribute check. "Is Health Low AND Stunned?" combines attribute and tag checks.
*   **Tags for Events:** Use tags for Gameplay Events to trigger abilities in a decoupled way.
*   **Debug with `showdebug abilitysystem`:** This console command is invaluable for seeing an actor's current tags at runtime.

By thoughtfully applying and checking Gameplay Tags, you can create very dynamic, responsive, and complex conditional logic for your orders, abilities, and AI behaviors with relative ease and clarity.






**3.6. Configuring AI to Respond to Orders**

For AI-controlled units to execute orders from the ColonyOrders plugin (specifically those derived from `URTSOrderWithBehavior`), you need to configure their AI Controller, define a Blackboard for communication, and design Behavior Trees that implement the actual logic for each order.

This guide will walk you through the key steps and considerations for making your AI units effectively respond to commands like "Move," "Attack," or custom orders.

**Prerequisites:**

*   You have completed the [Quick Start Guide](#0.-Quick-Start-Guide:-Your-First-Move-Order) or have a similar setup:
    *   A unit Pawn (e.g., `BP_TestUnit`) with `URTSOrderComponent` and `URTSAbilitySystemComponent`.
    *   An AI Controller Blueprint (e.g., `BP_AIC_TestUnit`) derived from `ARTSCharacterAIController`, assigned to your unit.
*   You understand `ARTSCharacterAIController` ([Section 2.3.1](#2.3.1-ARTSCharacterAIController)), `UBlackboardData` & `URTSBlackboardHelper` ([Section 2.3.2](#2.3.2-URTSBlackboardHelper)), and the basics of `UBehaviorTree`.
*   You have `URTSOrder` Blueprints (e.g., `BP_Order_Move_Test`, `BP_Order_Attack_Test`) derived from `URTSOrderWithBehavior` (or its children like `URTSCharacterAIOrder`).

**Core AI Order Execution Flow:**

1.  An order (`FRTSOrderData`) is issued to the unit's `URTSOrderComponent`.
2.  If the order is of a type derived from `URTSOrderWithBehavior`, its `IssueOrder` method (as implemented in `URTSOrderWithBehavior`) calls `ARTSCharacterAIController::IssueOrder`.
3.  The `ARTSCharacterAIController`:
    *   Retrieves the `UBehaviorTree` asset specified in the `URTSOrderWithBehavior` subclass (e.g., from `BP_Order_Move_Test`).
    *   Populates its `UBlackboardComponent` with data from the `FRTSOrderData` (target actor, location, index, range, home location) using keys from `URTSBlackboardHelper`.
    *   Starts or restarts the specified Behavior Tree.
4.  The Behavior Tree executes, reading information from the Blackboard to perform actions.
5.  A task at the end of relevant Behavior Tree branches (e.g., our `BTTask_FinishOrder`) calls `ARTSCharacterAIController::BehaviorTreeEnded()` to signal completion.
6.  `ARTSCharacterAIController` then invokes the `FRTSOrderCallback`, notifying `URTSOrderComponent` that the order has finished.

**Steps to Configure AI for a New Order:**

Let's assume you've created a new order, `BP_Order_Patrol`, derived from `URTSCharacterAIOrder`, which requires the unit to move between two or more points defined in some way (e.g., passed as an array of locations, or two specific Blackboard keys).

**Step 1: Define Blackboard Keys for the New Order (If Necessary)**

If your new order requires parameters not covered by the standard keys in `URTSBlackboardHelper` (Order_Location, Order_Target, etc.), you'll need to define new Blackboard keys.

1.  **Open Your Blackboard Asset:** (e.g., `BB_TestUnit`).
2.  **Add New Keys:**
    *   For a patrol order with two points:
        *   Click **+ New Key**, type **Vector**, name it `PatrolPointA_Location`.
        *   Click **+ New Key**, type **Vector**, name it `PatrolPointB_Location`.
    *   If patrol points were an array (more complex): You might store an index `CurrentPatrolPointIndex` (Int) and have a C++ BT node or service retrieve the actual FVector from an array stored elsewhere (e.g., on the AI Controller or a dedicated component). For simplicity, we'll stick to two distinct points for this example.
3.  Save the Blackboard asset.

**Step 2: Update `ARTSCharacterAIController` (If New Keys Need Custom Setting)**

The base `ARTSCharacterAIController::SetBlackboardValues` only handles the standard keys. If your `BP_Order_Patrol` needs to pass `PatrolPointA_Location` and `PatrolPointB_Location` through `FRTSOrderData` (which isn't designed for arbitrary extra data), you have a few options:

*   **Option A (Recommended for custom data): Modify `FRTSOrderData` and `ARTSCharacterAIController`:**
    1.  Add `FVector PatrolPointA_Optional;` and `FVector PatrolPointB_Optional;` (and `bool bUsePatrolPoints;`) to `FRTSOrderData`.
    2.  In your `BP_AIC_TestUnit` (or a C++ child of `ARTSCharacterAIController`), override `SetBlackboardValues`:
        ```cpp
        // In BP_AIC_TestUnit (or C++ child)
        // void AMyCustomAIC::SetBlackboardValues(const FRTSOrderData& Order, const FVector& HomeLocation)
        // {
        //     Super::SetBlackboardValues(Order, HomeLocation); // Call base to set standard keys
        //
        //     if (Blackboard && Order.OrderType == UBP_Order_Patrol_C::StaticClass()) // Check if it's our patrol order
        //     {
        //         // Assuming FRTSOrderData was extended or you're getting these from Order.Target/Index in a clever way
        //         // For this example, let's pretend Order.Target is Point A and Order.Location (as FVector) is Point B
        //         if (Order.Target)
        //         {
        //             Blackboard->SetValueAsVector(TEXT("PatrolPointA_Location"), Order.Target->GetActorLocation());
        //         }
        //         if (Order.bUseLocation) // We'd repurpose Order.Location for Point B
        //         {
        //             Blackboard->SetValueAsVector(TEXT("PatrolPointB_Location"), FVector(Order.Location.X, Order.Location.Y, GetPawn() ? GetPawn()->GetActorLocation().Z : 0.f));
        //         }
        //     }
        // }
        ```
    *   This requires your input system to populate these extended `FRTSOrderData` fields or use existing fields creatively.

*   **Option B (Simpler for fixed points, less flexible): Hardcode patrol points in BT or have unit remember them.** This is less about the *order* passing them and more about the unit's inherent behavior.

For this guide, let's assume we use **Option A** and have found a way to pass two locations into `FRTSOrderData` (e.g., `Target` actor for point A, `Location` for point B's X,Y).

**Step 3: Design the Behavior Tree (`BT_Patrol`)**

1.  **Create `BT_Patrol` Behavior Tree Asset.**
2.  **Logic Outline:**
    *   **ROOT -> Selector (to allow restart/looping)**
        *   **Sequence (Main Patrol Loop)**
            *   **Decorator: Loop (e.g., 5 times, or infinite if it's a continuous patrol until new order)**
            *   **Sequence (Move to A, then B)**
                *   **Task: Move To** (Blackboard Key: `PatrolPointA_Location`)
                *   **Task: Wait** (e.g., 2 seconds at patrol point A)
                *   **Task: Move To** (Blackboard Key: `PatrolPointB_Location`)
                *   **Task: Wait** (e.g., 2 seconds at patrol point B)
            *   **Task: `BTTask_FinishOrder(Succeeded)`** (Called after the loop finishes or if the patrol is considered "done" after one cycle, depending on design).
    *   *(This is a very basic patrol. Real patrols might involve scanning for enemies, different pathing, etc.)*

**Step 4: Create and Configure the Order Blueprint (`BP_Order_Patrol`)**

1.  Create `BP_Order_Patrol` as a child of `URTSCharacterAIOrder` (or your custom `URTSGatherOrder`-like C++ base if you made one for patrol).
2.  **Class Defaults:**
    *   **RTS Behavior -> Behavior Tree:** Assign `BT_Patrol`.
    *   **RTS Display:** Set Name "Patrol", Icon, etc.
    *   **RTS Targeting:**
        *   If using Option A from Step 2, `TargetType` might be `ACTOR` (for point A) and you'd need input logic to also get a location for point B.
        *   Alternatively, if the patrol points are intrinsic to the unit or an area, `TargetType` could be `NONE` or `LOCATION` (for the center of the patrol area, with points derived).
        *   For simplicity, if we assume player clicks two points: the *first* click could set a temp variable in PlayerController, the *second* click issues the `BP_Order_Patrol` with `Target` being an invisible actor spawned at first click, and `Location` being the second click. This is complex input handling.
        *   A simpler patrol might just use `Order_Location` as one point and `Order_HomeLocation` as the other, making it patrol between its "home" and a designated point.
    *   Configure `TagRequirements` (e.g., unit must be `Status.Permanent.Movable`).

**Step 5: Implement Input Logic in PlayerController**

This is the most game-specific part.

1.  If your patrol order needs two points:
    *   The PlayerController might enter a "Patrol Targeting Mode" after a UI button click.
    *   First right-click stores Point A (e.g., spawns a temporary marker actor or stores the FVector).
    *   Second right-click gets Point B.
    *   Then, construct `FRTSOrderData` for `BP_Order_Patrol`.
        *   `OrderType`: `BP_Order_Patrol_C::StaticClass()`.
        *   If using `Target` for Point A and `Location` for Point B:
            *   `Target`: Temporary actor at Point A.
            *   `Location`: FVector2D of Point B.
            *   `bUseLocation`: `true`.
        *   Issue via server RPC.
2.  If patrolling between current `HomeLocation` and a new point:
    *   Right-click provides the new point (`Order_Location`).
    *   The `ARTSCharacterAIController` already sets `Order_HomeLocation`.
    *   The `BT_Patrol` would read `Order_Location` and `Order_HomeLocation`.

**Step 6: Implement Behavior Tree Nodes (Tasks, Services, Decorators)**

Your Behavior Tree will likely need:

*   **Tasks:**
    *   Standard "Move To," "Wait," "Play Animation."
    *   `BTTask_FinishOrder` (from Quick Start) to signal completion to the `ARTSCharacterAIController`.
    *   Custom tasks if needed (e.g., "ScanForEnemiesAtPatrolPoint," "UpdateNextPatrolPointIndex").
*   **Services:**
    *   To run periodically while a branch is active. E.g., a service on the "Move To" sequence that checks if an enemy is sighted, potentially interrupting the patrol to engage (this would involve Behavior Tree Aborts and switching to an Attack BT).
*   **Decorators:**
    *   To control branch execution: "Blackboard" (key is set/not set, value comparison), "GameplayTag Query" (check tags on self), custom decorators (e.g., "IsTargetActorValidAndHostile").

**Example: Attack Order AI Configuration (`BP_Order_Attack_Test`)**

1.  **Blackboard Keys Used:** `Order_Target` (enemy actor), `Order_Range` (attack range).
2.  **Behavior Tree (`BT_Attack_Test`):**
    *   **ROOT -> Selector (MainAttackLogic)**
        *   **Sequence (Engage Target)**
            *   **Decorator:** Blackboard `Order_Target` is Set.
            *   **Decorator:** Custom `BTD_IsTargetValid` (checks if `Order_Target` is alive, visible, hostile).
            *   **Service (on this Sequence):** `BTS_UpdateTargetLocation` (periodically updates an `AttackTarget_Location` Blackboard key with `Order_Target`'s current location, so "Move To" below can track a moving target).
            *   **Selector (Positioning and Attacking)**
                *   **Sequence (Attack if in Range)**
                    *   **Decorator:** `BTD_IsTargetInRange` (gets `Order_Target`, self location, `Order_Range` from Blackboard, checks distance).
                    *   **Task:** (Optional) "Face Target" (`Order_Target`).
                    *   **Task:** "Play Attack Animation."
                    *   **Task:** "Trigger Attack Ability Event" (sends Gameplay Event, e.g., `Event.Attack`, to self, using `Order_Index` if the attack order can specify different attack types/abilities).
                    *   **Task:** "Wait" (for attack cooldown/animation duration).
                *   **Sequence (Move to Target if Out of Range)**
                    *   **Decorator:** `BTD_IsTargetInRange` (Inverted - i.e., execute if *not* in range).
                    *   **Task:** "Move To" (Blackboard Key: `AttackTarget_Location` (updated by service), Acceptance Radius: `Order_Range * 0.9`).
        *   **Task:** `BTTask_FinishOrder` (Called if target is no longer valid/set, or if the attack sequence naturally concludes e.g. target dies - though target death often makes `BTD_IsTargetValid` fail, aborting this branch).
    *   *(This BT structure allows the unit to move to the target if out of range, then repeatedly attack once in range. The outer selector and decorators handle conditions like the target dying or becoming invalid.)*

**Tips for Configuring AI:**

*   **Start Simple:** Get one basic order (like Move or a simple Attack) working end-to-end before adding many complex behaviors.
*   **Modular Behavior Trees:** Use Behavior Tree "Run Behavior" tasks to call sub-trees for common actions (e.g., a generic "EngageTarget" sub-tree called by both Attack orders and auto-attack responses).
*   **Custom BT Nodes:** Don't hesitate to create custom Blueprint Tasks, Services, and Decorators for game-specific logic that's hard to express with built-in nodes.
*   **Use `URTSBlackboardHelper`:** For reading standard order parameters in your BT nodes.
*   **Debugging is Key:**
    *   **`showdebug AI` (console command):** Essential for seeing which BT is running and the state of nodes.
    *   **Behavior Tree Editor Debugger:** Allows you to pause, step through, and see Blackboard values live.
    *   **Visual Logger (Window -> Developer Tools -> Visual Logger):** Provides a timeline of AI events, BT execution, and Blackboard changes.
*   **Iterate:** AI behavior often requires a lot of tweaking. Test, observe, adjust, repeat.

By carefully designing your Behavior Trees and ensuring they correctly interact with the Blackboard values set by `ARTSCharacterAIController` (which are derived from `FRTSOrderData`), you can create AI that responds effectively and intelligently to the orders from the ColonyOrders plugin.







That's an excellent scenario to cover! This involves moving beyond direct player commands for individual units and into a more systemic, game-state-driven approach to order issuance. This is common for things like idle worker reassignment or automated responses to global game events.

Let's frame this as an addition to our "Practical Guides & How-Tos," or it could even be an "Advanced Topics" example. We'll call it:

**3.7. Implementing Game State-Driven Automated Orders (Example: Auto-Construction)**

This guide will outline how to create a system where placing a building foundation automatically dispatches available, idle builder units to construct it.

**Core Idea:**
A central game system (often residing in `AGameStateBase` or a custom manager class) will monitor game events (like a building foundation being placed). When such an event occurs, this system will find suitable units (idle builders) and issue them a "Construct" order targeting the new foundation.

**Prerequisites:**

*   All setups from the [Quick Start Guide](#0.-Quick-Start-Guide:-Your-First-Move-Order).
*   A "Builder" unit type (e.g., `BP_BuilderUnit`) with:
    *   `URTSAbilitySystemComponent` configured with `Status.Permanent.CanConstruct` tag (e.g., via its `InitialTags` or from an `URTSAttributeSet` that grants it).
    *   `URTSOrderComponent`.
    *   An AI Controller (e.g., `BP_AIC_BuilderUnit` derived from `ARTSCharacterAIController`).
*   A "Construct Building" order (e.g., `BP_Order_Construct`) derived from `URTSCharacterAIOrder`. This order's associated Behavior Tree (`BT_Construct`) would handle moving to the foundation and performing the construction actions (playing animation, applying a "construction progress" Gameplay Effect or calling a build function on the foundation).
*   A "Building Foundation" actor (e.g., `BP_BuildingFoundation`) that, when placed, needs to be constructed. It should have relevant tags like `Building.Site.NeedsConstruction` and perhaps `Building.Type.BarracksSite`.

**Steps to Implement Auto-Construction Assignment:**

**Step 1: Event Notification - Building Foundation Placed**

The system needs to know when a new construction site requires builders.

1.  **In `BP_BuildingFoundation` (or its C++ parent):**
    *   In its `BeginPlay` event (or when it's officially "placed" by the player and ready for construction):
        *   Get a reference to your `AGameStateBase` subclass (e.g., `BP_MyGameState`).
        *   Call a custom event or interface function on the GameState, passing `self` (the foundation actor) as a parameter.
        ```blueprint
        // In BP_BuildingFoundation - Event BeginPlay
        Event BeginPlay
            --> GetGameState --> Cast To BP_MyGameState
                --> (Cast Succeeded) Call NotifyNewConstructionSite (Target: self from Cast, FoundationActor: self)
        ```

**Step 2: GameState Logic - Finding and Dispatching Builders**

Your `BP_MyGameState` (or a dedicated manager it owns) will handle the logic.

1.  **Create `NotifyNewConstructionSite` Event in `BP_MyGameState`:**
    *   This event takes an `Actor` (the `BP_BuildingFoundation` instance) as input.
2.  **Implement `NotifyNewConstructionSite` Logic:**
    *   **Find Available Builders:**
        *   Use `Get All Actors Of Class With Tag` (or `Get All Actors Of Class` then filter).
            *   Actor Class: `BP_BuilderUnit` (or your builder pawn base class).
            *   Tag: `URTSGlobalTags::Status_Permanent_CanConstruct()`. *(This initial filter helps narrow down potential candidates.)*
        *   Loop through the found actors. For each potential builder:
            *   **Get its `URTSOrderComponent`**.
            *   Check if `OrderComponent->IsIdle()`. (Referencing [Section 2.1.1 `URTSOrderComponent`](#2.1.1-URTSOrderComponent) for `IsIdle`).
            *   **(Optional but good):** Check if the builder already has the new foundation in its order queue for construction (to prevent re-assigning if it was already manually tasked). This is more complex and might involve iterating the `OrderComponent->GetCurrentOrderDataQueue()`. For simplicity, we'll skip this for now.
            *   **(Optional):** Check distance. You might only want the closest idle builder(s).
            *   If the builder is idle and meets any other criteria, add it to a list of `AvailableBuilders`.
    *   **Dispatch a Builder (or Builders):**
        *   If `AvailableBuilders` is not empty:
            *   Select a builder (e.g., the first one, or the closest one). Let's say `SelectedBuilder`.
            *   **Construct `FRTSOrderData` for the "Construct" order:**
                *   `OrderType`: `BP_Order_Construct::StaticClass()`.
                *   `Target`: The `FoundationActor` passed into this event.
                *   `bUseLocation`: `false` (as we are targeting an actor).
                *   `Index`: `-1` (unless your construct order has variants).
            *   **Issue the Order:**
                *   Get the `URTSOrderComponent` from `SelectedBuilder`.
                *   Call `OrderComponent->IssueOrder(ConstructOrderData)`.
                    *   *(Remember: If `BP_MyGameState` is handling this, it's already on the server, so a direct call to `IssueOrder` is fine. If this logic were initiated from a client UI, it would need an RPC.)*
            *   **(Optional):** If you want multiple builders, assign one, remove it from `AvailableBuilders`, and repeat until enough builders are assigned or the list is empty.
            *   **(Optional):** Mark the `FoundationActor` with a tag like `Building.Site.HasBuilderAssigned` to prevent other idle builders from also trying to auto-assign in a subsequent check (if your idle builder AI also has logic to find work).

**Step 3: Builder's "Construct" Order (`BP_Order_Construct` & `BT_Construct`)**

1.  **`BP_Order_Construct` (child of `URTSCharacterAIOrder`):**
    *   **Class Defaults:**
        *   `BehaviorTree`: Assign `BT_Construct`.
        *   `TargetType`: `ERTSTargetType::ACTOR`.
        *   `TagRequirements`:
            *   `SourceRequiredTags`: `URTSGlobalTags::Status_Permanent_CanConstruct()`.
            *   `SourceBlockedTags`: `URTSGlobalTags::Status_Changing_Immobilized()`.
            *   `TargetRequiredTags`: `Building.Site.NeedsConstruction` (a custom tag for foundations), `Relationship.Friendly` (or `Relationship.SamePlayer`), `Relationship.Visible`.
        *   `RequiredRange`: A short range, e.g., `100.0f` (how close to be to the foundation to "work" on it).
2.  **`BT_Construct` (Behavior Tree):**
    *   **ROOT -> Sequence**
        *   **Decorator:** Blackboard key `Order_Target` (the foundation) is Set and is Valid (not pending kill, still has `Building.Site.NeedsConstruction` tag).
        *   **Task: Move To** `Order_Target` (using `Order_Range` from Blackboard for acceptance radius).
        *   **Task: Play Animation** ("Constructing").
        *   **Service (on this Sequence, or on a looping "Work" sequence): `BTS_ApplyConstructionProgress`**
            *   This service runs periodically while the builder is "constructing."
            *   It would get `Order_Target` (the foundation).
            *   Call a function or interface event on the foundation actor like `ApplyBuildProgress(float ProgressAmount)`.
            *   The foundation actor itself would manage its "build progress" (e.g., current construction points vs. total needed).
            *   When progress is 100%, the foundation actor changes itself into the completed building (e.g., spawns the real building, destroys itself) and potentially removes its `Building.Site.NeedsConstruction` tag.
        *   **Decorator (on the main construction sequence/loop): Check if construction is complete.**
            *   This decorator would check if the `Order_Target` (foundation) no longer has the `Building.Site.NeedsConstruction` tag OR if it's become invalid (meaning it was replaced by the completed building).
            *   If construction is complete, this branch of the BT should succeed.
        *   **Task: `BTTask_FinishOrder(Succeeded)`** (Called when construction is complete according to the decorator above).
    *   *(This BT is simplified. Real construction might involve the builder gaining/losing a `Status.Changing.Constructing` tag, consuming resources, etc.)*

**Step 4: Foundation Actor Logic (`BP_BuildingFoundation`)**

1.  **Properties:**
    *   `float CurrentBuildProgress`
    *   `float MaxBuildProgress`
2.  **Function/Event `ApplyBuildProgress(float Amount)`:**
    *   Increments `CurrentBuildProgress`.
    *   If `CurrentBuildProgress >= MaxBuildProgress`:
        *   Call `CompleteConstruction()`.
3.  **Function/Event `CompleteConstruction()`:**
    *   Spawn the actual completed building actor (e.g., `BP_Barracks`).
    *   Copy any relevant properties (e.g., player owner).
    *   Remove the `Building.Site.NeedsConstruction` tag from self (or simply destroy self).
    *   Destroy self (`BP_BuildingFoundation`).

**How this System Works Together:**

1.  Player places `BP_BuildingFoundation`.
2.  `BP_BuildingFoundation` (BeginPlay) tells `BP_MyGameState`: "I'm new and need building!"
3.  `BP_MyGameState` looks for an idle `BP_BuilderUnit` with `Status.Permanent.CanConstruct`.
4.  `BP_MyGameState` issues a `BP_Order_Construct` to an available `BP_BuilderUnit`, targeting the `BP_BuildingFoundation`.
5.  The builder's `URTSOrderComponent` receives the order.
6.  Its `BP_AIC_BuilderUnit` runs `BT_Construct`.
7.  `BT_Construct` moves the builder to the foundation.
8.  The `BTS_ApplyConstructionProgress` service in the BT periodically calls `ApplyBuildProgress` on the foundation.
9.  The foundation tracks progress. When complete, it transforms into the final building.
10. The builder's `BT_Construct` sees the foundation is no longer "NeedsConstruction" (or is destroyed) and its `BTTask_FinishOrder` runs, completing the "Construct" order.
11. The builder becomes idle again, ready for new tasks (manual or another auto-assignment from GameState).

**Extending This Concept:**

*   **Multiple Builders:** GameState could assign multiple idle builders to one foundation if the foundation supports it (e.g., by having multiple "build slots" or just allowing faster construction with more builders).
*   **Repair Orders:** A similar system could auto-assign builders with `Status.Permanent.CanRepair` to damaged friendly buildings that have an `Status.Changing.Injured` tag and `Building.NeedsRepair` tag.
*   **Idle Worker Gathering:** If a resource node has space and there are idle workers with `Status.Permanent.CanGather`, the GameState could auto-assign them to gather.
*   **Priority System:** The GameState could prioritize tasks (e.g., repairing critical defenses over new construction).
*   **Resource Costs:** The "Place Foundation" action by the player would deduct resources. The construction process itself might also consume resources over time, managed by the builder's BT or the foundation.

This type of centralized, game-state-aware order dispatching is powerful for creating a more dynamic and automated game world, reducing the need for constant player micromanagement for routine tasks. It leverages the existing order and tag systems by having a "manager" entity intelligently issue standard orders.





