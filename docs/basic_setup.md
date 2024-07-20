## Basic Setup
For detailed visual guidance, check out these excellent walkthrough videos by Blackheart_six: [Blackheart_six YouTube Channel](https://www.youtube.com/@blackheart_six).
> [Scenario Framework BI Tutorial](https://community.bistudio.com/wiki/Arma_Reforger:Scenario_Framework_Setup_Tutorial?useskin=darkvector)
> 

1. **Create a Local Directory Structure**
   - Set up your local directories where you will clone this repository and work on the ShadowScenarioTemplate. An example structure is as follows:
     ```plaintext
     MyProjects
     ├── ArmaReforgerProjects
     │   ├── Released
     │   ├── shadow_dev (this repository)
     │   └── WIP
     ```
2. **Download Required Mods**
   - Launch Arma Reforger and navigate to the Workshop. Download the mods you intend to use or need as dependencies. At a minimum, we recommend downloading the RHS Status Quo mod.
   - These mods will be saved in `MyGames > ArmaReforger > addons > mods` directories.

3. **Add Mods to Arma Reforger Tools**
   - Open Arma Reforger Tools. Click on `+Add Project`, then select `Add Existing Project`. Point to the `addons` directory and select the RHS mod.
   - RHS will now appear in your Projects browser with a locked symbol.

4. **Clone the GitHub Repository**
   - Close Arma Reforger Tools. Clone the `shadow_dev` repository from GitHub into your local `ArmaReforgerProjects` directory (refer to step 1 for the structure).

5. **Add the Cloned Project**
   - Reopen Arma Reforger Tools. Click on `+Add Project`, then select `Add Existing Project`. Navigate to your `ArmaReforgerProjects > shadow_dev` directory and click `Open`.


## Creating a New Project
1. **Setup Project Directories**
   - Create the following directories within your project folder:
     ```plaintext
     ProjectName
     ├── Missions
     ├── Worlds
     └── Images
     ```

2. **Create and Save a New World**
   - Navigate to the `ArmaReforger` directory and open an `Eden.ent` world file.
   - Click `New World`, save the world, and choose `Save as New Sub Scene`. Create a folder named `Eden` within your `Worlds` directory and save the new world there.

3. **Configure Game Mode**
   - With `Eden.ent` still open, go to `Plugins` and select `Game Mode Set Up`. Choose `Scenario Framework` and follow the prompts.
   - After setup, remove the default-loaded managers:
     - **FactionManager_Editor**: Pre-loads all faction options.
     - **LoadoutManager_Base**: Pre-loads base, allowing customization of initial loadouts.

4. **Adjust Navmesh Components**
   - Modify the following for proper AI functionality:
     - **SCR_AI_world**: Add the appropriate navmesh to each `NavmeshWorldComponent`:
       - **1st NavmeshWorldComponent (Soldiers)**: `NavmeshFile = GM_Eden.nmm` (found in `worlds > GameMaster > navmeshes`)
       - **2nd NavmeshWorldComponent (BTRlike)**: `NavmeshFile = GM_Eden_vehicles.nmm` (found in `worlds > GameMaster > navmeshes`)
       - **3rd NavmeshWorldComponent (Lowres)**: `NavmeshFile = LowResEden.nmm` (found in `worlds > MP > navmeshes`)
> Read [Navmesh update in 1.2](https://reforger.armaplatform.com/news/modding-update-june-7-2024) 

> See [Navmesh Tutorial](https://community.bistudio.com/wiki/Arma_Reforger:Navmesh_Tutorial)

5. **Set Up Respawn Logic**
   - Under `GameModeSF`, locate `SCR_RespawnSystemComponent`. 
   - Change the `SpawnLogic` by selecting the returning arrow to clear the default.
   - Type and find `SCR_MenuSpawnLogic` to set the new spawn logic.

> This guide should now cover all necessary steps for setting up and creating a new project.

## Overriding or Duplicating Items
> Read and understand what can and cannot be **overriden** and **duplicated**: https://community.bistudio.com/wiki/Arma_Reforger:Data_Modding_Basics

> Overriding: Override creates a new file which shares same GUID as original asset. This action allows to selectively replaces or add new elements to selected asset. 

> Duplicating: Duplication creates a new file, with new, unique GUID. Duplicated file contains all the data from the original file (including inheritance) but doesn't modify in any way original file. 

## Duplicating Items from a Mod Example 

### Customizing Uniforms and Soldiers

1. **Duplicate Items**
   - To obtain custom uniforms or duplicate soldiers from a mod, such as RHS, find the soldier you wish to customize. Right-click on the soldier and select `Duplicate` to create a local version in your working directory.
> NOTE: you can duplicate various items this way, from guns, ammo, gear, etc. Then modify it to your needs. 

> See [Directory Structure Basics](https://community.bistudio.com/wiki/Arma_Reforger:Directory_Structure)

> See [Prefab basics](https://community.bistudio.com/wiki/Arma_Reforger:Prefabs_Basics?useskin=darkvector)

2. **Customizing and Cataloging Entities**
   - Once you customize the duplicated soldier, ensure to duplicate the `Config/EntityCatalog`, and then add the custom soldier to the duplicated `Config/EntityCatalog`. This step prevents it from being overridden by the default settings from the original entity catalogue.
   - Ensure that you place the customized entities in your local directory.

3. **Naming Conventions**
   - Change the names of the duplicated and customized entities/components by appending `_shadow` to the end of their names. This helps differentiate your custom versions from the original ones and prevents conflicts.

