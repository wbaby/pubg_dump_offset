#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x09381FA0;
constexpr auto Offset_GWorld = 0x093C35F0;
constexpr auto Offset_XenuineDecrypt = 0x07D9DB28;
constexpr auto Offset_FNameEntry = 0x095A8F08;
constexpr auto Offset_ElementsPerChunk = 0x3F40;


constexpr auto Offset_ObjID = 0x000C;
constexpr auto Offset_XorKey1 = 0xC316801E;
constexpr auto Offset_XorKey2 = 0x843BF9E;
constexpr auto Offset_Value = 0x0006;
constexpr auto Offset_UsingRor = 0x0000;

constexpr auto Offset_Actors = 0x0040;///0x01D0;
constexpr auto Offset_GameInstance = 0x0200;
constexpr auto Offset_LocalPlayers = 0x00E8;
constexpr auto Offset_PlayerController = 0x0038;
constexpr auto Offset_AcknowledgedPawn = 0x0498;
constexpr auto Offset_PlayerCameraManager = 0x04B8;
constexpr auto Offset_LocalPlayersPTR = 0x095035D0;

constexpr auto Offset_CurrentBuildNumber = 0x091EDC20;
constexpr auto Offset_GameWindowSize = 0x09191120;
constexpr auto Offset_CheckTab = 0x095D9F29;
constexpr auto Offset_IsGameInlobby = 0x091C09B8;

constexpr auto Offset_InactiveStateInputComponent = 0x06D8;
constexpr auto Offset_WorldOrigin = 0x08F8;
constexpr auto Offset_MyHUD = 0x04B0;
constexpr auto Offset_BlockInputWidgetList = 0x0570;
constexpr auto Offset_TrainingMapGrid = 0x06B0;
constexpr auto Offset_MapWidget = 0x0000;
constexpr auto Offset_Slot = 0x0038;
constexpr auto Offset_LayoutData = 0x0040;
constexpr auto Offset_WidgetStateMap = 0x0508;
constexpr auto Offset_SelectMinimapSizeIndex = 0x05C0;
constexpr auto Offset_Visibility = 0x00A9;

constexpr auto Offset_PlayerState = 0x0430;
constexpr auto Offset_PlayerStatistics = 0x04E8;
constexpr auto Offset_PubgIdData = 0x0CC0;
constexpr auto Offset_SpectatedCount = 0x21BC;
constexpr auto Offset_LastRenderTime = 0x076C;
constexpr auto Offset_Health = 0x0878;
constexpr auto Offset_GroggyHealth = 0x0F64;
constexpr auto Offset_Team = 0x2118;
constexpr auto Offset_LastTeamNum = 0x2120;
constexpr auto Offset_CharacterName = 0x1160;
constexpr auto Offset_AimOffsets = 0x1590;
constexpr auto Offset_ControlRotation = 0x0410;

constexpr auto Offset_RootComponent = 0x0378;
constexpr auto Offset_ComponentLocation = 0x02C0;

constexpr auto Offset_Mesh = 0x0530;
constexpr auto Offset_StaticMesh = 0x0AE0;
constexpr auto Offset_ComponentToWorld = 0x02B0;

constexpr auto Offset_CameraLocation = 0x1C08;
constexpr auto Offset_CameraRotation = 0x1664;
constexpr auto Offset_CameraFov = 0x1C04;

constexpr auto Offset_ItemPackage = 0x0578;
constexpr auto Offset_ItemInformationComponent = 0x00B0;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0440;
constexpr auto Offset_DroppedItemGroup = 0x0180;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0748;

constexpr auto Offset_WeaponProcessor = 0x0890;
constexpr auto Offset_EquippedWeapons = 0x0208;
constexpr auto Offset_CurrentWeaponIndex = 0x0309;
constexpr auto Offset_WeaponTrajectoryData = 0x1000;
constexpr auto Offset_TrajectoryGravityZ = 0x0FBC;
constexpr auto Offset_TrajectoryConfig = 0x0108;
constexpr auto Offset_FloatCurves = 0x0038;
constexpr auto Offset_CharacterMovement = 0x0520;
constexpr auto Offset_Acceleration = 0x03A8;
constexpr auto Offset_MaxAcceleration = 0x0308;
constexpr auto Offset_LastUpdateVelocity = 0x03D0;

constexpr auto Offset_AnimScriptInstance = 0x0C80;
constexpr auto Offset_ControlRotation_CP = 0x0774;
constexpr auto Offset_RecoilADSRotation_CP = 0x09CC;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DE4;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DE8;
constexpr auto Offset_bIsScoping_CP = 0x0CF6;

constexpr auto Offset_VehicleRiderComponent = 0x1BA0;
constexpr auto Offset_SeatIndex = 0x0228;
constexpr auto Offset_LastVehiclePawn = 0x0260;
constexpr auto Offset_ReplicatedMovement = 0x0068;

#endif
