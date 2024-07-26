### This document contain #todos and logs changes dated by author. 
> Please use the below format. 
<details>
  <summary><strong>Change Logs</strong></summary>

> Author: Beard 07/07/24 :man_beard: 
>> Edited: Beard 07/22/24 :man_beard:  
----
### Patrols Set Up Process
  - See https://www.youtube.com/watch?v=SwtTNCbOIVk

### FinishTaskToCreateTaskLayer Process 
   - Under a Tasks area  
     - A_BriefingMoveTask (Area)
       - LayerTaskMove1 (LayerTaskMove)
        - SlotMoveTo1 (SlotMoveTo)
        - LogicCounter1 (LogicCounter)
      - A_Quarry (Area) 
       - LayerTaskClearArea2 (LayerTaskClearArea)
        - SlotClearArea1 (SlotClearArea) # Make sure to add US faction; otherwise it won't appear on map 
      - X_AIGroups (Layer)
        - X_CQC (Layer)
         - SlotAI ..
        - X_DF_squads1
         - SlotAI .. 

    Under SlotClearArea2: 
     - Adjust area size to encompass area of enemies 
     - Under Plugins **Activated By This Faction** add **US** 

    Under LogicCounter1: 
     - Input Action = SCR_SFActionInputOnTaskEventIncreaseCounter 
      - Task Layer Name: **LayerTaskMove1** 
      - Event Name: FINISHED 
    - OnActivate: 
     - Spawn Objects
     - Name of Objects To Spawn On Activation 
      + then, **LayerTaskClearArea2** # Point it to the next Area Task Layer here! 
      Activation Type: ON_TRIGGER_ACTVATION 
        

  Under SlotAI: 
   - Asset = object to spawn, choose a enemy squad 
   - Waypoints = SCR_ScenarioFramworkWaypointSet 
     - Layer Name + 
       - Patrol_waypoints (Layer)  
       [x] Spawn AI on WP Pos 
       WP to Spawn = AIWaypoint_Cycle.et 
    - Common: change group formation to column or line.  

>#### To Do ####

 [ ] Test during main operation 



>#### Completed Activity ✓ ####
- [x] Initial set up checks
  - [x] GameModeSFManager component add following tasks:
    - [x] Under Task Type availble add all 8 availble tasks (e.g., deliver, destroy, defend, etc) # These get only activated with ON_TASK_INIT selected by a LayerTask
  - [x] Changed Dynamic Despanw tick rate to 1

  - [x] Set up a dismounted patrol area and set at 1,100 with dynamic despawn 
   - [x] Set up 3 USSR Spatnes rifle squads to patrol area 
 
  - [x] Set up a clear area task for quarry (see set up in scenario)
  - [x]  Set up a clear area task for military base
  - [x]  Set up a clear area task for Durras 


- [x] Set up a SF Tasks for Guardian Angel Operation 
  - [x] Set up 3 areas: quarry, military site nearby, and small town (Durras) 
  - [x] Set up clear area tasks for each
   - [ ] In Area, select under SCR_ScenarioFrameworkArea Dynamic Despawn and **Show Debug Shapes in Workbench** to see area sphere (can adjust size in Dynamic Despawn Range)
   - [x] Make sure to select in last layer that will hold sub-layers and slots, Place Marker on Subject Slot (is checked) # This ensures marker will be on the correct slot

 - [x] In Quarry sub-layer, create a SlotAI and change SCR_FrameworkAI to Object to Spawn USSR group squad and change Waypoint Set to AIWaypointDefend.et
   - [x] Add a SlotClearArea, make sure faction is set to US, and change area radius, **must add faction to US**, and activation by Player 


------
</details>

