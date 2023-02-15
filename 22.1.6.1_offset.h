#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x0930BFA0;
constexpr auto Offset_GWorld = 0x0934D5F0;
constexpr auto Offset_XenuineDecrypt = 0x07D25F28;
constexpr auto Offset_FNameEntry = 0x09532F88;
constexpr auto Offset_ChunkSize = 0x3FE8;

constexpr auto Offset_ObjID = 0x0018;
constexpr auto Offset_XorKey1 = 0x6DCDD0C3;
constexpr auto Offset_XorKey2 = 0x0EBDBD99;
constexpr auto Offset_RorValue = 0x05;
constexpr auto Offset_IsingRor = false;

constexpr auto Offset_CurrentLevel = 0x02A8;
constexpr auto Offset_Actors = 0x0230;
constexpr auto Offset_GameInstance = 0x09B0;
constexpr auto Offset_LocalPlayers = 0x00D0;
constexpr auto Offset_PlayerController = 0x0038;
constexpr auto Offset_AcknowledgedPawn = 0x0480;
constexpr auto Offset_PlayerCameraManager = 0x04A0;
constexpr auto Offset_LocalPlayersPTR = 0x0948D5E0;

constexpr auto Offset_LineTraceSingle = 0x05DB44E4;
constexpr auto Offset_GameWindowSize = 0x0911B120;
constexpr auto Offset_CheckTab = 0x09563FB9;
constexpr auto Offset_IsGameInlobby = 0x0914A9F8;

constexpr auto Offset_InactiveStateInputComponent = 0x06C0;
constexpr auto Offset_WorldOrigin = 0x02D4;
constexpr auto Offset_MyHUD = 0x0498;
constexpr auto Offset_BlockInputWidgetList = 0x0558;
constexpr auto Offset_TrainingMapGrid = 0x06B0;
constexpr auto Offset_Slot = 0x0038;
constexpr auto Offset_LayoutData = 0x0040;
constexpr auto Offset_WidgetStateMap = 0x04F0;
constexpr auto Offset_SelectMinimapSizeIndex = 0x05C0;
constexpr auto Offset_Visiblity = 0x00A9;

constexpr auto Offset_PlayerState = 0x0428;
constexpr auto Offset_PlayerStatistics = 0x06A0;
constexpr auto Offset_DamageDealtOnEnemy = 0x0A08;
constexpr auto Offset_PubgIdData = 0x0CA8;
constexpr auto Offset_SpectatedCount = 0x0EAC;
constexpr auto Offset_LastRenderTime = 0x077C;
constexpr auto Offset_Health = 0x0878;
constexpr auto Offset_GroggyHealth = 0x1B5C;
constexpr auto Offset_Team = 0x19C8;
constexpr auto Offset_LastTeamNum = 0x19D0;
constexpr auto Offset_LastSquadMemberIndex = 0x19D8;
constexpr auto Offset_CharacterName = 0x1948;
constexpr auto Offset_AimOffsets = 0x1520;
constexpr auto Offset_ControlRotation = 0x044C;
constexpr auto Offset_RootComponent = 0x0178;
constexpr auto Offset_ComponentLocation = 0x0220;

constexpr auto Offset_Mesh = 0x0508;
constexpr auto Offset_StaticMesh = 0x0AF0;
constexpr auto Offset_ComponentToWorld = 0x0210;

constexpr auto Offset_CameraLocation = 0x09A4;
constexpr auto Offset_CameraRotation = 0x09BC;
constexpr auto Offset_CameraFov = 0x09CC;

constexpr auto Offset_ItemPackage = 0x0560;
constexpr auto Offset_ItemInformationComponent = 0x00B0;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0428;
constexpr auto Offset_DroppedItemGroup = 0x02B8;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0758;

constexpr auto Offset_WeaponProcessor = 0x0890;
constexpr auto Offset_EquippedWeapons = 0x0208;
constexpr auto Offset_CurrentWeaponIndex = 0x0309;
constexpr auto Offset_WeaponTrajectoryData = 0x1008;
constexpr auto Offset_TrajectoryGravityZ = 0x0F94;
constexpr auto Offset_TrajectoryConfig = 0x0108;
constexpr auto Offset_FloatCurves = 0x0038;
constexpr auto Offset_CharacterMovement = 0x0550;
constexpr auto Offset_Acceleration = 0x03A8;
constexpr auto Offset_MaxAcceleration = 0x0308;
constexpr auto Offset_LastUpdateVelocity = 0x03D0;

constexpr auto Offset_AnimScriptInstance = 0x0C90;
constexpr auto Offset_ControlRotation_CP = 0x0774;
constexpr auto Offset_RecoilADSRotation_CP = 0x09CC;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DE4;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DE8;

constexpr auto Offset_VehicleRiderComponent = 0x1CF0;
constexpr auto Offset_SeatIndex = 0x0228;
constexpr auto Offset_LastVehiclePawn = 0x0260;
constexpr auto Offset_ReplicatedMovement = 0x0080;

#endif
