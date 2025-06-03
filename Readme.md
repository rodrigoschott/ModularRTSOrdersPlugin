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

