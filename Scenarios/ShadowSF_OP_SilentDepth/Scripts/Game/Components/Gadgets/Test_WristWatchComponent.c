modded class RHS_WristWatchComponent : SCR_GadgetComponent
{
	override void EOnInit(IEntity owner)
	{
		super.EOnInit(owner);
		
		CycleModes(1);
	}
}