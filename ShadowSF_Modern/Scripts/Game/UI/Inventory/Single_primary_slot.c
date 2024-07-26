modded class SCR_InventorySlotWeaponSlotsUI : SCR_InventorySlotUI
{
	private static ResourceName m_sLauncherWeaponSlot = "{5ADF2B58D3BD6433}UI/Textures/InventoryIcons/InvenorySlot-Launcher-Outline_UI.edds";
	
	override void Init()
	{
		super.Init();
		
		if (!m_pItem)
		{
			if (m_sWeaponSlotType == "primary")
				SetIcon(m_sPrimaryWeaponSlot);
			else if (m_sWeaponSlotType == "launcher")
				SetIcon(m_sLauncherWeaponSlot);
			else if (m_sWeaponSlotType == "secondary")
				SetIcon(m_sSecondaryWeaponSlot);
			else if (m_sWeaponSlotType == "grenade")
				SetIcon(m_sGrenadeWeaponSlot);
		}
	}
	
	override string SetSlotSize()
	{
		ESlotSize slotSize;
		string slotLayout = SLOT_LAYOUT_1x1;
		
		if (m_sWeaponSlotType == "primary" || m_sWeaponSlotType == "launcher")
			slotSize = ESlotSize.SLOT_2x1;
		else
			slotSize = ESlotSize.SLOT_1x1;
		
		switch (slotSize) 
		{
			case ESlotSize.SLOT_1x1:	{ m_iSizeX = 1; m_iSizeY = 1; } break;
			case ESlotSize.SLOT_2x1:	{ m_iSizeX = 2; m_iSizeY = 1; } break;
		}
		
		return slotLayout;		
	}
}