class ScreenBlack extends ScreenBase
{
	void ScreenBlack()
	{

	}
	
	void ~ScreenBlack()
	{

	}
	
    override Widget Init()
    {
		layoutRoot = GetGame().GetWorkspace().CreateWidgets( "BreakPoint/BPSyberiaScripts/layout/ScreenBlack.layout" );	
        return layoutRoot;
    }
}