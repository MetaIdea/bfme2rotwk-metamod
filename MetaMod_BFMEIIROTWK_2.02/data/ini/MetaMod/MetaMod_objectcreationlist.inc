ObjectCreationList OCL_LUAScriptTrigger
  CreateObject
    ObjectNames = LUAScriptTrigger
  End
End

ObjectCreationList OCL_ExecuteMenuSelection
  CreateObject
    ObjectNames = ExecuteMenuSelection
  End
End

ObjectCreationList OCL_MenuSelectionUp
  CreateObject
    ObjectNames = MenuSelectionUp
  End
End

ObjectCreationList OCL_MenuSelectionDown
  CreateObject
    ObjectNames = MenuSelectionDown
  End
End

ObjectCreationList OCL_MenuSelectionRight
  CreateObject
    ObjectNames = MenuSelectionRight
  End
End

ObjectCreationList OCL_MetaMenuSelectionLeft
  CreateObject
    ObjectNames = MetaMenuSelectionLeft
  End
End

ObjectCreationList OCL_MetaMenuOpen
  CreateObject
    ObjectNames = MetaMenuOpen
  End
End

ObjectCreationList OCL_ScriptTimer
	CreateObject
		ObjectNames = ScriptTimer
		Disposition = LIKE_EXISTING USE_WATER_SURFACE USE_CLIFF
		Count = 1
	End
End

ObjectCreationList OCL_ScriptTimerFast
	CreateObject
		ObjectNames = ScriptTimerFast
		Disposition = LIKE_EXISTING USE_WATER_SURFACE USE_CLIFF
		Count = 1
	End
End