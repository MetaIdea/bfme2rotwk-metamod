ObjectCreationList OCL_LUAScriptTrigger
  CreateObject
    ObjectNames = LUAScriptTrigger
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
End

ObjectCreationList OCL_ExecuteMenuSelection
  CreateObject
    ObjectNames = ExecuteMenuSelection
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
End

ObjectCreationList OCL_MenuSelectionUp
  CreateObject
    ObjectNames = MenuSelectionUp
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
End

ObjectCreationList OCL_MenuSelectionDown
  CreateObject
    ObjectNames = MenuSelectionDown
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
End

ObjectCreationList OCL_MenuSelectionRight
  CreateObject
    ObjectNames = MenuSelectionRight
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
End

ObjectCreationList OCL_MetaMenuSelectionLeft
  CreateObject
    ObjectNames = MetaMenuSelectionLeft
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
End

ObjectCreationList OCL_MetaMenuOpen
  CreateObject
    ObjectNames = MetaMenuOpen
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
End

ObjectCreationList OCL_ScriptTimer
	CreateObject
		ObjectNames = ScriptTimer
		IgnoreAllObjects = Yes
		IgnoreCommandPointLimit = Yes
	End
End

ObjectCreationList OCL_ScriptTimerFast
	CreateObject
		ObjectNames = ScriptTimerFast
		IgnoreAllObjects = Yes
		IgnoreCommandPointLimit = Yes
	End
End

ObjectCreationList OCL_MainCoroutine
	CreateObject
		ObjectNames = MainCoroutine
		IgnoreAllObjects = Yes
		IgnoreCommandPointLimit = Yes
	End
End

ObjectCreationList OCL_FinalCoordinateAnchor
  CreateObject
    ObjectNames = FinalCoordinateAnchor
    Offset = X:0 Y:0 Z:0
    Count = 1
    Disposition = LIKE_EXISTING ABSOLUTE_ANGLE
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
End

ObjectCreationList OCL_CoordinateAdd1X
  CreateObject
    ObjectNames = CoordinateAdd1X
    Offset = X:1 Y:0 Z:0
    Count = 1
    Disposition = LIKE_EXISTING ABSOLUTE_ANGLE
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
End

ObjectCreationList OCL_CoordinateAdd10X
  CreateObject
    ObjectNames = CoordinateAdd10X
    Offset = X:10 Y:0 Z:0
    Count = 1
    Disposition = LIKE_EXISTING ABSOLUTE_ANGLE
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
End		

ObjectCreationList OCL_CoordinateAdd100X
  CreateObject
    ObjectNames = CoordinateAdd100X
    Offset = X:100 Y:0 Z:0
    Count = 1
    Disposition = LIKE_EXISTING ABSOLUTE_ANGLE
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
End

ObjectCreationList OCL_CoordinateAdd1000X
  CreateObject
    ObjectNames = CoordinateAdd1000X
    Offset = X:1000 Y:0 Z:0
    Count = 1
    Disposition = LIKE_EXISTING ABSOLUTE_ANGLE
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
End
	
ObjectCreationList OCL_CoordinateAdd1Y
  CreateObject
    ObjectNames = CoordinateAdd1Y
    Offset = X:0 Y:1 Z:0
    Count = 1
    Disposition = LIKE_EXISTING ABSOLUTE_ANGLE
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
End

ObjectCreationList OCL_CoordinateAdd10Y
  CreateObject
    ObjectNames = CoordinateAdd10Y
    Offset = X:0 Y:10 Z:0
    Count = 1
    Disposition = LIKE_EXISTING ABSOLUTE_ANGLE
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
End

ObjectCreationList OCL_CoordinateAdd100Y
  CreateObject
    ObjectNames = CoordinateAdd100Y
    Offset = X:0 Y:100 Z:0
    Count = 1
    Disposition = LIKE_EXISTING ABSOLUTE_ANGLE
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
End

ObjectCreationList OCL_CoordinateAdd1000Y
  CreateObject
    ObjectNames = CoordinateAdd1000Y
    Offset = X:0 Y:1000 Z:0
    Count = 1
    Disposition = LIKE_EXISTING ABSOLUTE_ANGLE
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
End

ObjectCreationList OCL_CoordinateAddAll
  CreateObject
    ObjectNames = CoordinateAdd1X
    Offset = X:1 Y:0 Z:0
    Count = 1
    Disposition = LIKE_EXISTING ABSOLUTE_ANGLE
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
  CreateObject
    ObjectNames = CoordinateAdd10X
    Offset = X:10 Y:0 Z:0
    Count = 1
    Disposition = LIKE_EXISTING ABSOLUTE_ANGLE
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
  CreateObject
    ObjectNames = CoordinateAdd100X
    Offset = X:100 Y:0 Z:0
    Count = 1
    Disposition = LIKE_EXISTING ABSOLUTE_ANGLE
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
  CreateObject
    ObjectNames = CoordinateAdd1000X
    Offset = X:1000 Y:0 Z:0
    Count = 1
    Disposition = LIKE_EXISTING ABSOLUTE_ANGLE
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
  CreateObject
    ObjectNames = CoordinateAdd1Y
    Offset = X:0 Y:1 Z:0
    Count = 1
    Disposition = LIKE_EXISTING ABSOLUTE_ANGLE
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
  CreateObject
    ObjectNames = CoordinateAdd10Y
    Offset = X:0 Y:10 Z:0
    Count = 1
    Disposition = LIKE_EXISTING ABSOLUTE_ANGLE
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
  CreateObject
    ObjectNames = CoordinateAdd100Y
    Offset = X:0 Y:100 Z:0
    Count = 1
    Disposition = LIKE_EXISTING ABSOLUTE_ANGLE
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
  CreateObject
    ObjectNames = CoordinateAdd1000Y
    Offset = X:0 Y:1000 Z:0
    Count = 1
    Disposition = LIKE_EXISTING ABSOLUTE_ANGLE
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
End

ObjectCreationList OCL_EdgeCoordinateAnchorUpperRight
  CreateObject
    ObjectNames = EdgeCoordinateAnchorUpperRight
    Offset = X:0 Y:0 Z:-300
    Count = 1
    Disposition = LIKE_EXISTING
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
End

ObjectCreationList OCL_EdgeCoordinateAnchorExecutor
  CreateObject
    ObjectNames = EdgeCoordinateAnchorExecutor
    Offset = X:0 Y:0 Z:0
    Count = 1
    Disposition = LIKE_EXISTING
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
End

ObjectCreationList OCL_EdgeCoordinateAnchorDownLeft
  CreateObject
    ObjectNames = EdgeCoordinateAnchorDownLeft
    Offset = X:0 Y:0 Z:0
    Count = 1
    Disposition = LIKE_EXISTING
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
End

ObjectCreationList OCL_EdgeCoordinateAnchorUpperLeft
  CreateObject
    ObjectNames = EdgeCoordinateAnchorUpperLeft
    Offset = X:0 Y:0 Z:-300
    Count = 1
    Disposition = LIKE_EXISTING
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
End

ObjectCreationList OCL_EdgeCoordinateAnchorDownRightSpawner
  CreateObject
    ObjectNames = EdgeCoordinateAnchorDownRightSpawner
    Offset = X:-8300 Y:8300 Z:0
    Count = 1
    Disposition = LIKE_EXISTING
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
End

ObjectCreationList OCL_EdgeCoordinateAnchorDownRight
  CreateObject
    ObjectNames = EdgeCoordinateAnchorDownRight
    Offset = X:0 Y:0 Z:-300
    Count = 1
    Disposition = LIKE_EXISTING
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End
  CreateObject
    ObjectNames = EdgeCoordinateAnchorDownRightInAir
    Offset = X:0 Y:0 Z:0
    Count = 1
    Disposition = LIKE_EXISTING
	IgnoreAllObjects = Yes
	IgnoreCommandPointLimit = Yes
  End 
End
