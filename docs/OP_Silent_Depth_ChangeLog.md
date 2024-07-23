### This document contain #todos and logs changes dated by author. 
> Please use the below format. 

<details>
  <summary><strong>Change Logs</strong></summary>
  
> Author: Beard 07/07/24 :man_beard: 

>> Edited: Beard 07/19/24 :man_beard:  
----
>#### To Do ####


      
- [ ] Create a modern warfare template with the following dependencies: 
  - [ ] Add Phoenix Equipment, Common, Zelik Character, + Night Vision -- primarily for backpack radios 
  - [ ] Add Bacon LoadoutEditor, M4s Block II and URG, suppressors, RIS laser 

- [ ] Add save ability in GameSF to allow saving in arsenal
- [ ] Add custom faction arsenals at initial spawn

- [ ] Fix MOS (override and change), add to entity catalog and loadout manger
  - [ ] Add custom loadouts to each MOS
  - [ ] Test MOS load correctly
      
- [ ] Set up a custom Shadow Home Base at Everon Airport 
    - [x] 2x Helipads with supplies to allow spawning of helis
    - [x] Briefing tent 
    - [ ] Hang out area around a fire + radio with music 
    - [ ] Customize Arsenal area (US, USMC, RUS, AREF) by displaying items
      - [ ] Add only boxes for re-supply, gear, and patches? 
    - [x] Firing range with targets
    - [ ] CTA system 
    - [ ] CQC area 
 
  


>#### Completed Activity ✓ ####
- [x] Added MusicManager 
- [x] Expanded military base 
- [x] Added preset groups and freqs 
- [x] Added Waters training area 
- [x] Added appropriate navmesh to each navmeshcomponent (soldier, BTRlike, lowres) 
- [x] Use a custom script to set RHS Garmin watch to Navigation setting (change state from 0 to 1)

- [X] Customize Shadow 0311 RFLM loadout
   - [X] Medical in pants (3x Bandages, 2x Morphines, 2x Tourniquets, 2x Saline) 
   - [X] Navigation in Jacket (Map, flashlight)
   - [X] Smokes in FIBLE backpack (2x Concealmant smokes, 2x red smokes, 2x green smokes, 2x purple smokes) 
   - [X] Navigation in Jacket (Map)
   - [X] Gen III carrier plate 
   - [X] Gen 3 Rifleman (with radio in back)
     - [X] GL specific: Gen 3 Rifleman add 5x PMAGs, 2x Pistol Mags, 4x 40mm HDEP 
     - [X] Rifleman specific: Gen 3 Rifleman add 6x PMAGs, 2x Pistol Mags, 2x Frags, Falcon Radio 
- [x] Fix the loadouts for RFLM, GL, and SAW; issue with map not showing up in shirt + check SAW Mags missing from Vest 

- [X] Use the standard Shadow 0311 RFLM loadout and duplicate and create GL and SAW MOSs (see https://discord.com/channels/1177588857596817448/1192494049630879816) 
- [X] Adjust SCR_GameModeHealthSettings to: DOT = 0.3, Tourniquetted Leg Movment Slowdown = 0.5, Tourniquet Stren. Multiplyer = 0.75   
- [x] Created a custom Shadow 0311 GL `Character_RHS_USAF_USMC_GL_shadow.et`
- [x] Added Shadow 0311 GL `Character_RHS_USAF_USMC_GL_shadow.et` as a new SCR_EntityCatalog to `USMC_Characters.conf`
- [x] Tested Shadow 0311 GL character loaded locally @Beard 07/11/24
- [x] Add RHS License information to this README

------
</details>
