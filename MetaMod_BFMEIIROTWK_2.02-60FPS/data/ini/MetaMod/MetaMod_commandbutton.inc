CommandButton Command_LUAScriptTrigger
	Command				= SPECIAL_POWER
	SpecialPower		= SpecialPower_LUAScriptTrigger
	TextLabel			= NAME:RunExternalLuaScipt
	ButtonImage			= MetaMod_RunExternalLuaScript
	DescriptLabel		= MetaMod:Descript_LUAScriptTrigger
	InPalantir	   	    = Yes
	ShowButton			= Yes
	Radial			    = No
End

CommandButton Command_ExecuteMenuSelection
	Command				= SPECIAL_POWER
	SpecialPower		= SpecialPower_ExecuteMenuSelection
	TextLabel			= NAME:MetaMenuExecute
	ButtonImage			= MetaMenu_ExecuteMenuSelection
	InPalantir	   	    = Yes
	ShowButton			= Yes
	Radial			    = No
End

CommandButton Command_MenuSelectionUp
	Command				= SPECIAL_POWER
	SpecialPower		= SpecialPower_MenuSelectionUp
	TextLabel			= NAME:MetaMenuSelectionUp
	ButtonImage			= MetaMenu_Up
	InPalantir	   	    = Yes
	ShowButton			= Yes
	Radial			    = No
End

CommandButton Command_MenuSelectionDown
	Command				= SPECIAL_POWER
	SpecialPower		= SpecialPower_MenuSelectionDown
	TextLabel			= NAME:MetaMenuSelectionDown
	ButtonImage			= MetaMenu_Down
	InPalantir	   	    = Yes
	ShowButton			= Yes
	Radial			    = No
End

CommandButton Command_MenuSelectionRight
	Command				= SPECIAL_POWER
	SpecialPower		= SpecialPower_MenuSelectionRight
	TextLabel			= NAME:MetaMenuNavigationRight
	ButtonImage			= MetaMenu_Right
	InPalantir	   	    = Yes
	ShowButton			= Yes
	Radial			    = No
End

CommandButton Command_MetaMenuSelectionLeft
	Command				= SPECIAL_POWER
	SpecialPower		= SpecialPower_MetaMenuSelectionLeft
	TextLabel			= NAME:MetaMenuNavigationLeft
	ButtonImage			= MetaMenu_Left
	InPalantir	   	    = Yes
	ShowButton			= Yes
	Radial			    = No
End

CommandButton Command_MetaMenuOpen
	Command				= SPELL_BOOK
    SpecialPower		= SpecialPower_MetaMenuOpen
	TextLabel			= NAME:MetaMenuOpen
	DescriptLabel		= MetaMod:Descript_MetaMenuOpen
	ButtonImage			= MetaMenu_ExecuteMenuSelection
	ButtonBorderType	= ACTION
	InPalantir	   	    = Yes
End

CommandButton Command_SpecialPowerEdgeCoordinateAnchorUpperRight
	Command				= SPECIAL_POWER
    SpecialPower		= SpecialPowerEdgeCoordinateAnchorUpperRight
	Options       		= NEED_TARGET_POS
End

CommandButton Command_SpecialPowerEdgeCoordinateAnchorDownRight
	Command				= SPECIAL_POWER
    SpecialPower		= SpecialPowerEdgeCoordinateAnchorDownRight
	Options       		= NEED_TARGET_POS
End

CommandButton Command_SpecialPowerEdgeCoordinateAnchorUpperLeft
	Command				= SPECIAL_POWER
    SpecialPower		= SpecialPowerEdgeCoordinateAnchorUpperLeft
	Options       		= NEED_TARGET_POS
End

CommandButton Command_MetaMenuSelectPosition
	Command       		= DOZER_CONSTRUCT
	Object        		= GondorFarm 
	TextLabel     		= CONTROLBAR:ConstructMenFarm
	ButtonImage   		= BCFarm
	ButtonBorderType    = BUILD 
	DescriptLabel       = CONTROLBAR:ToolTipConstructMenFarm
	Radial				= Yes
	;InPalantir	   		= Yes
End

CommandButton Command_ExecuteMenuSelectionSideBar
	Command				= SPELL_BOOK
	SpecialPower		= SpecialPower_ExecuteMenuSelection
	TextLabel			= NAME:MetaMenuExecute
	ButtonImage			= MetaMenu_ExecuteMenuSelection
	InPalantir	   	    = Yes
	ShowButton			= Yes
	Radial			    = No
End