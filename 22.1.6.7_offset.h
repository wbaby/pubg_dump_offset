#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x09371020;
constexpr auto Offset_GWorld = 0x093B2670;
constexpr auto Offset_XenuineDecrypt = 0x07D6EF28;
constexpr auto Offset_FNameEntry = 0x09597F88;
constexpr auto Offset_ChunkSize = 0x3E70;

constexpr auto Offset_ObjID = 0x0024;
constexpr auto Offset_XorKey1 = 0xA42ADA38;
constexpr auto Offset_XorKey2 = 0x127EBCA2;
constexpr auto Offset_RorValue = 0x0004;
constexpr auto Offset_IsingRor = 0x0001;

constexpr auto Offset_CurrentLevel = 0x0968;
constexpr auto Offset_Actors = 0x0098;
constexpr auto Offset_GameInstance = 0x0870;
constexpr auto Offset_LocalPlayers = 0x00B8;
constexpr auto Offset_PlayerController = 0x0038;
constexpr auto Offset_AcknowledgedPawn = 0x0498;
constexpr auto Offset_PlayerCameraManager = 0x04B8;
constexpr auto Offset_LocalPlayersPTR = 0x094F2640;

constexpr auto Offset_LineTraceSingle = 0x05DF069C;
constexpr auto Offset_CurrentBuildNumber = 0x091DCCA0;
constexpr auto Offset_GameWindowSize = 0x09180120;
constexpr auto Offset_CheckTab = 0x095C8FB9;
constexpr auto Offset_IsGameInlobby = 0x091AFA38;

constexpr auto Offset_InactiveStateInputComponent = 0x06D8;
constexpr auto Offset_WorldOrigin = 0x019C;
constexpr auto Offset_MyHUD = 0x04B0;
constexpr auto Offset_BlockInputWidgetList = 0x0578;
constexpr auto Offset_TrainingMapGrid = 0x06B0;
constexpr auto Offset_Slot = 0x0038;
constexpr auto Offset_LayoutData = 0x0040;
constexpr auto Offset_WidgetStateMap = 0x0510;
constexpr auto Offset_SelectMinimapSizeIndex = 0x05C0;
constexpr auto Offset_Visibility = 0x00A9;

constexpr auto Offset_PlayerState = 0x0440;
constexpr auto Offset_PlayerStatistics = 0x06D8;
constexpr auto Offset_DamageDealtOnEnemy = 0x0620;
constexpr auto Offset_PubgIdData = 0x0CD8;
constexpr auto Offset_SpectatedCount = 0x221C;
constexpr auto Offset_LastRenderTime = 0x077C;
constexpr auto Offset_Health = 0x0888;
constexpr auto Offset_GroggyHealth = 0x1534;
constexpr auto Offset_Team = 0x1148;
constexpr auto Offset_LastTeamNum = 0x1150;
constexpr auto Offset_LastSquadMemberIndex = 0x1158;
constexpr auto Offset_CharacterName = 0x2220;
constexpr auto Offset_AimOffsets = 0x1760;
constexpr auto Offset_ControlRotation = 0x0458;
constexpr auto Offset_AttachParent = 0x0310;
constexpr auto Offset_bActorEnableCollision = 0x0050;

constexpr auto Offset_RootComponent = 0x02C0;
constexpr auto Offset_ComponentLocation = 0x0220;

constexpr auto Offset_Mesh = 0x0528;
constexpr auto Offset_StaticMesh = 0x0AF0;
constexpr auto Offset_ComponentToWorld = 0x0210;

constexpr auto Offset_CameraLocation = 0x10A0;
constexpr auto Offset_CameraRotation = 0x108C;
constexpr auto Offset_CameraFov = 0x109C;

constexpr auto Offset_ItemPackage = 0x0580;
constexpr auto Offset_ItemInformationComponent = 0x00B0;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0448;
constexpr auto Offset_DroppedItemGroup = 0x0318;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0758;

constexpr auto Offset_WeaponProcessor = 0x08A0;
constexpr auto Offset_EquippedWeapons = 0x0208;
constexpr auto Offset_CurrentWeaponIndex = 0x0309;
constexpr auto Offset_WeaponTrajectoryData = 0x1008;
constexpr auto Offset_TrajectoryGravityZ = 0x0FEC;
constexpr auto Offset_TrajectoryConfig = 0x0108;
constexpr auto Offset_FloatCurves = 0x0038;
constexpr auto Offset_CharacterMovement = 0x0520;
constexpr auto Offset_Acceleration = 0x03A8;
constexpr auto Offset_MaxAcceleration = 0x0308;
constexpr auto Offset_LastUpdateVelocity = 0x03D0;

constexpr auto Offset_AnimScriptInstance = 0x0C90;
constexpr auto Offset_ControlRotation_CP = 0x0774;
constexpr auto Offset_RecoilADSRotation_CP = 0x09CC;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DE4;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DE8;

constexpr auto Offset_VehicleRiderComponent = 0x1CD8;
constexpr auto Offset_SeatIndex = 0x0228;
constexpr auto Offset_LastVehiclePawn = 0x0260;
constexpr auto Offset_ReplicatedMovement = 0x0070;
#endif
