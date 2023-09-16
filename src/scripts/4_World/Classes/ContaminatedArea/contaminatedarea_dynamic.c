modded class ContaminatedArea_Dynamic : EffectArea 
{
	override void EEOnCECreate() 
	{
		super.EEOnCECreate();
		Print("[BP] Dynamic area spawned at: " + GetPosition().ToString());
	}
}