#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x0945A120;
constexpr auto Offset_GWorld = 0x0949B780;
constexpr auto Offset_XenuineDecrypt = 0x07E80428;
constexpr auto Offset_GNames = 0x09683820;
constexpr auto Offset_ElementsPerChunk = 0x3FFC;

constexpr auto Offset_ObjID = 0x0008;
constexpr auto Offset_XorKey1 = 0xA8A70CCC;
constexpr auto Offset_XorKey2 = 0x6BA4C5FF;
constexpr auto Offset_Value = 0x000D;
constexpr auto Offset_UsingRor = 0x0001;

constexpr auto Offset_CurrentLevel = 0x0040;
constexpr auto Offset_Actors = 0x00D0;
constexpr auto Offset_GameInstance = 0x0748;
constexpr auto Offset_LocalPlayers = 0x00D0;
constexpr auto Offset_PlayerController = 0x0030;
constexpr auto Offset_AcknowledgedPawn = 0x0498;
constexpr auto Offset_PlayerCameraManager = 0x04B8;
constexpr auto Offset_LocalPlayersPTR = 0x095DBB60;

constexpr auto Offset_GEngine = 0x09442A60;
constexpr auto Offset_GameViewport = 0x0438;
constexpr auto Offset_Overall = 0x0350;
constexpr auto Offset_Canvas = 0x0448;
constexpr auto Offset_DebugCanvas = 0x0450;
constexpr auto Offset_CanvasSize = 0x0040;
constexpr auto Offset_K2_DrawText = 0x0609DDDC;
constexpr auto Offset_K2_DrawPolygon = 0x0609DD20;
constexpr auto Offset_K2_DrawBox = 0x0609DA4C;
constexpr auto Offset_K2_DrawTexture = 0x0609DF20;
constexpr auto Offset_AhudDrawText = 0x05EA38CC;
constexpr auto Offset_AhudDrawLine = 0x05EA33B4;
constexpr auto Offset_AhudDrawRect = 0x05EA3808;

constexpr auto Offset_Fonts_Roboto = 0x0968D1D8;
constexpr auto Offset_GetUCanvcsCall = 0x00975A64;
constexpr auto Offset_DebugUCanvcsId = 0x096907A8;
constexpr auto Offset_ConstDrawLineCall = 0x05E1F858;
constexpr auto Offset_ConstDrawRectCall = 0x06094844;
constexpr auto Offset_ConstDrawCall = 0x00CBD21C;

constexpr auto Offset_GetIconTexture = 0x00884028;
constexpr auto Offset_ImportedSize = 0x00C4;
constexpr auto Offset_WeaponIcon = 0x0438;
constexpr auto Offset_WeaponIconRatio = 0x0440;

constexpr auto Offset_LineTraceSingle = 0x05EE3F0C;
constexpr auto Offset_CurrentBuildNumber = 0x092C5C60;
constexpr auto Offset_GameWindowSize = 0x092691A0;
constexpr auto Offset_CheckTab = 0x094AEB02;
constexpr auto Offset_IsGameInlobby = 0x092989F8;

constexpr auto Offset_InactiveStateInputComponent = 0x06D8;
constexpr auto Offset_WorldOrigin = 0x02B8;
constexpr auto Offset_MyHUD = 0x04B0;
constexpr auto Offset_BlockInputWidgetList = 0x0570;
constexpr auto Offset_TrainingMapGrid = 0x06A8;
constexpr auto Offset_Slot = 0x0030;
constexpr auto Offset_LayoutData = 0x0038;
constexpr auto Offset_WidgetStateMap = 0x0508;
constexpr auto Offset_SelectMinimapSizeIndex = 0x05B8;
constexpr auto Offset_Visibility = 0x00A1;

constexpr auto Offset_PlayerState = 0x0440;
constexpr auto Offset_PlayerStatistics = 0x0A54;
constexpr auto Offset_PubgIdData = 0x0CB8;
constexpr auto Offset_SpectatedCount = 0x10F8;
constexpr auto Offset_LastSubmitTime = 0x0768;
constexpr auto Offset_LastRenderTime = 0x076C;
constexpr auto Offset_LastRenderTimeOnScreen = 0x0770;
constexpr auto Offset_Health = 0x0888;
constexpr auto Offset_GroggyHealth = 0x1AD4;
constexpr auto Offset_CharacterState = 0x0F98;
constexpr auto Offset_Team = 0x1AE8;
constexpr auto Offset_LastTeamNum = 0x1AF0;
constexpr auto Offset_CharacterName = 0x1260;
constexpr auto Offset_AimOffsets = 0x15D0;
constexpr auto Offset_ControlRotation = 0x0424;

constexpr auto Offset_OwnedComponents = 0x0258;
constexpr auto Offset_RootComponent = 0x0108;
constexpr auto Offset_ComponentLocation = 0x0200;

constexpr auto Offset_Mesh = 0x0528;
constexpr auto Offset_StaticMesh = 0x0AE0;
constexpr auto Offset_ComponentToWorld = 0x01F0;

constexpr auto Offset_CameraLocation = 0x1040;
constexpr auto Offset_CameraRotation = 0x0AAC;
constexpr auto Offset_CameraFov = 0x1050;

constexpr auto Offset_ItemPackage = 0x0578;
constexpr auto Offset_ItemTableRowBase = 0x00A8;
constexpr auto Offset_ItemName = 0x0018;
constexpr auto Offset_Category = 0x018C;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0440;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0748;

constexpr auto Offset_WeaponProcessor = 0x08A0;
constexpr auto Offset_EquippedWeapons = 0x01F8;
constexpr auto Offset_CurrentWeaponIndex = 0x0301;
constexpr auto Offset_WeaponTrajectoryData = 0x1008;
constexpr auto Offset_TrajectoryGravityZ = 0x0F14;
constexpr auto Offset_TrajectoryConfig = 0x0100;
constexpr auto Offset_FloatCurves = 0x0030;

constexpr auto Offset_CharacterMovement = 0x0550;
constexpr auto Offset_Acceleration = 0x0398;
constexpr auto Offset_MaxAcceleration = 0x02F8;
constexpr auto Offset_LastUpdateVelocity = 0x03C0;

constexpr auto Offset_AnimScriptInstance = 0x0C80;
constexpr auto Offset_ControlRotation_CP = 0x076C;
constexpr auto Offset_RecoilADSRotation_CP = 0x09CC;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DE4;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DE8;
constexpr auto Offset_bIsScoping_CP = 0x0CF6;

constexpr auto Offset_VehicleRiderComponent = 0x1BD8;
constexpr auto Offset_SeatIndex = 0x0218;
constexpr auto Offset_LastVehiclePawn = 0x0250;
constexpr auto Offset_ReplicatedMovement = 0x0060;

constexpr auto Offset_ExplodeState = 0x0578;
constexpr auto Offset_TimeTillExplosion = 0x0734;
constexpr auto Offset_TickStartVelocity = 0x0830;

constexpr auto Offset_Floating_VehicleCommonComponent = 0x04D8;
constexpr auto Offset_Wheeled_VehicleCommonComponent = 0x0B70;
constexpr auto Offset_VehicleHealth = 0x02C0;
constexpr auto Offset_VehicleHealthMax = 0x02C4;
constexpr auto Offset_VehicleFuel = 0x02C8;
constexpr auto Offset_VehicleFuelMax = 0x02CC;

#endif
