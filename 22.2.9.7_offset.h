#pragma once

#ifndef Offset_h
#define Offset_h
constexpr auto Offset_GObjects = 0x09361120;
constexpr auto Offset_GWorld = 0x093A2780;
constexpr auto Offset_XenuineDecrypt = 0x07D85428;
constexpr auto Offset_GNames = 0x0958A800;
constexpr auto Offset_ElementsPerChunk = 0x3EF0;

constexpr auto Offset_ObjID = 0x0020;
constexpr auto Offset_XorKey1 = 0x9547812;
constexpr auto Offset_XorKey2 = 0x46711EB5;
constexpr auto Offset_Value = 0x0009;
constexpr auto Offset_UsingRor = 0x0000;

constexpr auto Offset_CurrentLevel = 0x09A0;
constexpr auto Offset_myActors = 0x0000;
constexpr auto Offset_Actors = 0x0040;
constexpr auto Offset_GameInstance = 0x0320;
constexpr auto Offset_LocalPlayers = 0x0038;
constexpr auto Offset_PlayerController = 0x0038;
constexpr auto Offset_AcknowledgedPawn = 0x0488;
constexpr auto Offset_PlayerCameraManager = 0x04A8;
constexpr auto Offset_LocalPlayersPTR = 0x094E2B70;

constexpr auto Offset_LineTraceSingle = 0x05DF1F3C;
constexpr auto Offset_CurrentBuildNumber = 0x091CCC60;
constexpr auto Offset_GameWindowSize = 0x091701A0;
constexpr auto Offset_CheckTab = 0x093B5B02;
constexpr auto Offset_IsGameInlobby = 0x0919F9F8;

constexpr auto Offset_InactiveStateInputComponent = 0x06C8;
constexpr auto Offset_WorldOrigin = 0x0810;
constexpr auto Offset_MyHUD = 0x04A0;
constexpr auto Offset_BlockInputWidgetList = 0x0568;
constexpr auto Offset_TrainingMapGrid = 0x06B0;
constexpr auto Offset_Slot = 0x0038;
constexpr auto Offset_LayoutData = 0x0040;
constexpr auto Offset_WidgetStateMap = 0x0500;
constexpr auto Offset_SelectMinimapSizeIndex = 0x05C0;
constexpr auto Offset_Visibility = 0x00A9;

constexpr auto Offset_PlayerState = 0x0420;
constexpr auto Offset_PlayerStatistics = 0x0504;
constexpr auto Offset_PubgIdData = 0x0CA8;
constexpr auto Offset_SpectatedCount = 0x1A60;
constexpr auto Offset_LastSubmitTime = 0x0768;
constexpr auto Offset_LastRenderTime = 0x076C;
constexpr auto Offset_LastRenderTimeOnScreen = 0x0770;
constexpr auto Offset_Health = 0x0878;
constexpr auto Offset_GroggyHealth = 0x0F5C;
constexpr auto Offset_CharacterState = 0x1281;
constexpr auto Offset_Team = 0x19E8;
constexpr auto Offset_LastTeamNum = 0x19F0;
constexpr auto Offset_CharacterName = 0x28A0;
constexpr auto Offset_AimOffsets = 0x15E0;
constexpr auto Offset_ControlRotation = 0x0428;

constexpr auto Offset_RootComponent = 0x0388;
constexpr auto Offset_ComponentLocation = 0x02E0;

constexpr auto Offset_Mesh = 0x0500;
constexpr auto Offset_StaticMesh = 0x0AE0;
constexpr auto Offset_ComponentToWorld = 0x02D0;

constexpr auto Offset_CameraLocation = 0x15F0;
constexpr auto Offset_CameraRotation = 0x1054;
constexpr auto Offset_CameraFov = 0x1064;

constexpr auto Offset_ItemPackage = 0x0570;
constexpr auto Offset_ItemTableRowBase = 0x00B0;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0438;
constexpr auto Offset_DroppedItemGroup = 0x0290;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0748;

constexpr auto Offset_WeaponProcessor = 0x0890;
constexpr auto Offset_EquippedWeapons = 0x0208;
constexpr auto Offset_CurrentWeaponIndex = 0x0311;
constexpr auto Offset_WeaponTrajectoryData = 0x1000;
constexpr auto Offset_TrajectoryGravityZ = 0x0FEC;
constexpr auto Offset_TrajectoryConfig = 0x0108;
constexpr auto Offset_FloatCurves = 0x0038;
constexpr auto Offset_CharacterMovement = 0x0478;
constexpr auto Offset_Acceleration = 0x03A8;
constexpr auto Offset_MaxAcceleration = 0x0308;
constexpr auto Offset_LastUpdateVelocity = 0x03D0;

constexpr auto Offset_AnimScriptInstance = 0x0C80;
constexpr auto Offset_ControlRotation_CP = 0x0774;
constexpr auto Offset_RecoilADSRotation_CP = 0x09CC;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DE4;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DE8;
constexpr auto Offset_bIsScoping_CP = 0x0CF6;

constexpr auto Offset_VehicleRiderComponent = 0x1B08;
constexpr auto Offset_SeatIndex = 0x0228;
constexpr auto Offset_LastVehiclePawn = 0x0260;
constexpr auto Offset_ReplicatedMovement = 0x00E0;

constexpr auto Offset_ExplodeState = 0x0570;
constexpr auto Offset_TimeTillExplosion = 0x072C;
constexpr auto Offset_TickStartVelocity = 0x0820;
#endif
