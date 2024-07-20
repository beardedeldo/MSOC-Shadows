# Shadow Division Developer Team - Arma Reforger Tools

## Set up and Contributing 
- Shadow Division Developer that have received the right permissions to this repository, download this repository locally to begin work. 
- We welcome contributions! If you have training materials, scenarios, or other resources to share, please fork the repository and submit a pull request. [Fork](https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/working-with-forks/fork-a-repo). If you want to join us on our journey to Arma 4: [https://discord.gg/shadowdivision](https://discord.gg/shadowdivision). 

## License and Change Log 
- Choose a project to open (e.g., ShadowScenarioTemplate) in the Arma Reforger Worskhop. Note the README directory. This contains information about the Change Log and License. Please review these before starting any work. 

## Naming Conventions
### General Naming Convention
- Use a first letter uppercase followed by all lowercase naming schema: `Map_update`
- Use underscores to separate words: `Custom_aresenal_usmc`
- Add version: `Custom_aresenal_usmc_v001`
> v(MajorChange)(MinorChange)(Patch) 
- Be explicit with your naming yet concise

## Testing Procedures
- **Local Testing:** Test changes locally on your development environment (local workbench).
> During testing make sure to check: directory core > console.log, error.log, etc and note any issues in a README.md. 
- **Team Testing:** Share changes with the team for collaborative testing.
- **Test Server:** Deploy changes to the test server for broader testing.
- **Dedicated Server:** Finally, deploy changes to the dedicated server for production use.

## Refer to these resources often 
- [Scenario Framework Tutorial](https://community.bistudio.com/wiki/Arma_Reforger:Scenario_Framework_Setup_Tutorial) 
- [Scenario Framework Documentation](https://community.bistudio.com/wiki/Arma_Reforger:Scenario_Framework) 
> Make sure to read the documentation and understand the basic hierarchical structure: 

 **Basic_Layer**
  - Area1 
    - Layer1 
      - Slot1
      - Slot2

## World Editor Guidelines
When working in the world editor, you must follow the above recommended hierarchical structure. 
> The set this up, click on worlds, load Arland.et > new world > save as sub-scene (new world). Plugins > Game Mode Setup > choose Conflict, Game Master or Scenario. This will set up the Mission Header and load in all the Prerequisites needed for each mode. 

Upon initial load in of the ShadowDevTemplate project you will see the following: 
#### (World) Arland
- a_Prerequisites
  - Description: Holds basic prequisites/basic prefabs to allow development.
> You can either choose a ScenarioFramework.conf or load the following required Prefabs yourself:
```
GameModeSF.et
SCR_AIWorld.et
FactionManager_USxUSSR.et
LoadoutManager_USxUSSR.et
RadioManager.et
PerceptionManager.et
ScriptedChatEntity.et
TaskManager.et
```

- **aa_Start** ("Basic" Layer where initial spawn will occur). 
  - Area_main_base
    - Layer_base
      - Slot_arsenal_us
      - Slot_spawn_us

- **b_Tasks** (Will show tasks to be completed that can act as triggers). 
  - Area1_move
    - Base (Layer)
      - LayerTaskMove1
        - SlotMoveTo2

Brief definitions: (refer to [Scenario Framework Tutorial](https://community.bistudio.com/wiki/Arma_Reforger:Scenario_Framework_Setup_Tutorial) for more information) 
- **Area**
  - Description: Idea behind this is that your world/scenario is divided into several areas (as you can for example see on CombatOps Arland) and each area is handling its own things and has its purpose. Area has all the other components under it in its own hierarchy and it also serves with the Dynamic Spawn/Despawn as an enclosure.
- **Slot**
  - Description: Use to spawn any Prefabs with specific purposes (e.g., US arsenal, Radio Tower, AIs, Faction spawn, etc)
- **Tasks**
  - Description: Use to create tasks and workflows. 
- **Dynamic_spawn**
  - Description: Use to save performance by spawning only things that need to be spawned.  
- **Plugins**
  - Description: Use to add more functionality to Slots (e.g., plugin activates once any slot is destroyed). 
- **Logic**
  - Description: Use to develop more sophisticated workflows (e.g., count something and then execute an action via Actions).  
- **Actions**
  - Description: Use to perform actions on AI or based on conditions (similar to a player or Game Master in game) (e.g., AIActions = add waypoint > do something when waypoint completed; Set skill, perception factor, formation, stance, movment type, etc). 
- **QRF**
  - Description: Use to set up quick reaction force based on actions performed by a player or each time a threshold is reached. 

### Zen of Python Integration

Remember to abide by the principles of the Zen of Python:
- **Explicit is better than implicit**: Clearly define the purpose and content of each layer and naming convention.
- **Readability counts**: Use clear, understandable names that reflect their purpose.
- **In the face of ambiguity, refuse the temptation to guess**: Ensure naming reflects exactly what the layer or element contains.
- **Namespaces are one honking great idea**: Use namespaces (like prefixes in naming conventions) to avoid name collisions and to organize elements logically.

### Example Usage
- When creating a new AI behavior layer, name it in the format `AI_behavior_DescriptiveName`.
- Use underscores (`_`) to separate words in names for consistency and readability.

By adhering to these conventions and principles, we maintain consistency across our projects and facilitate better collaboration and understanding.

## License

This repository is licensed under the [CREATIVE COMMONS ATTRIBUTION-NON-COMMERCIAL-NODERIVS (CC BY-NC-ND)] license - see the below for brief explanation. 

*When incorporating any content from this source, kindly ensure proper attribution by including the following citations at the beginning of the materials:*
1. Please reference our current github: https://github.com/beardedeldo/shadow_dev
2. Shadow Division Milsim: [https://discord.gg/neXcdGx7](https://discord.gg/shadowdivision)

<details>
  <summary><strong>CC BY-NC-ND</strong></summary>

Creative Commons Attribution-NonCommercial-NoDerivs (CC BY-NC-ND):
Users are free to:
Share — copy and redistribute the material in any medium or format for non-commercial purposes.
Under the following terms:
Attribution — You must give appropriate credit, provide a link to the license, and indicate if changes were made. You may do so in any reasonable manner, but not in any way that suggests the licensor endorses you or your use.
NonCommercial — You may not use the material for commercial purposes.
NoDerivatives — If you remix, transform, or build upon the material, you may not distribute the modified material.

------
</details>











