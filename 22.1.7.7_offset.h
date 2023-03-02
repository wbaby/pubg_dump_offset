#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x0937BF20;
constexpr auto Offset_GWorld = 0x093BD570;
constexpr auto Offset_XenuineDecrypt = 0x07D6D528;
constexpr auto Offset_FNameEntry = 0x095A2E88;
constexpr auto Offset_ChunkSize = 0x3E04;

constexpr auto Offset_ObjID = 0x001C;
constexpr auto Offset_XorKey1 = 0x816C68E7;
constexpr auto Offset_XorKey2 = 0x8BE99C48;
constexpr auto Offset_Value = 0x000A;
constexpr auto Offset_UsingRor = 0x0001;

constexpr auto Offset_CurrentLevel = 0x0748;
constexpr auto Offset_Actors = 0x0150;
constexpr auto Offset_GameInstance = 0x08F0;
constexpr auto Offset_LocalPlayers = 0x00E8;
constexpr auto Offset_PlayerController = 0x0038;
constexpr auto Offset_AcknowledgedPawn = 0x0478;
constexpr auto Offset_PlayerCameraManager = 0x0498;
constexpr auto Offset_LocalPlayersPTR = 0x094FD550;

constexpr auto Offset_LineTraceSingle = 0x05DF415C;
constexpr auto Offset_CurrentBuildNumber = 0x091E7C20;
constexpr auto Offset_GameWindowSize = 0x0918B120;
constexpr auto Offset_CheckTab = 0x095D3EB9;
constexpr auto Offset_IsGameInlobby = 0x091BA9B8;

constexpr auto Offset_InactiveStateInputComponent = 0x06B8;
constexpr auto Offset_WorldOrigin = 0x016C;
constexpr auto Offset_MyHUD = 0x0490;
constexpr auto Offset_BlockInputWidgetList = 0x0558;
constexpr auto Offset_TrainingMapGrid = 0x06B0;
constexpr auto Offset_Slot = 0x0038;
constexpr auto Offset_LayoutData = 0x0040;
constexpr auto Offset_WidgetStateMap = 0x04F0;
constexpr auto Offset_SelectMinimapSizeIndex = 0x05C0;
constexpr auto Offset_Visibility = 0x00A9;

constexpr auto Offset_PlayerState = 0x0408;
constexpr auto Offset_PlayerStatistics = 0x09D8;
constexpr auto Offset_PubgIdData = 0x0CB0;
constexpr auto Offset_SpectatedCount = 0x1090;
constexpr auto Offset_LastRenderTime = 0x077C;
constexpr auto Offset_Health = 0x0878;
constexpr auto Offset_GroggyHealth = 0x1414;
constexpr auto Offset_Team = 0x1B50;
constexpr auto Offset_LastTeamNum = 0x1B58;
constexpr auto Offset_CharacterName = 0x0FB0;
constexpr auto Offset_AimOffsets = 0x17C0;
constexpr auto Offset_ControlRotation = 0x03F0;

constexpr auto Offset_RootComponent = 0x02E0;
constexpr auto Offset_ComponentLocation = 0x0340;

constexpr auto Offset_Mesh = 0x0458;
constexpr auto Offset_StaticMesh = 0x0AF0;
constexpr auto Offset_ComponentToWorld = 0x0330;

constexpr auto Offset_CameraLocation = 0x1044;
constexpr auto Offset_CameraRotation = 0x1054;
constexpr auto Offset_CameraFov = 0x1050;

constexpr auto Offset_ItemPackage = 0x0560;
constexpr auto Offset_ItemInformationComponent = 0x00B0;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0428;
constexpr auto Offset_DroppedItemGroup = 0x0128;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0758;

constexpr auto Offset_WeaponProcessor = 0x0890;
constexpr auto Offset_EquippedWeapons = 0x0208;
constexpr auto Offset_CurrentWeaponIndex = 0x0309;
constexpr auto Offset_WeaponTrajectoryData = 0x1008;
constexpr auto Offset_TrajectoryGravityZ = 0x0FC4;
constexpr auto Offset_TrajectoryConfig = 0x0108;
constexpr auto Offset_FloatCurves = 0x0038;
constexpr auto Offset_CharacterMovement = 0x0460;
constexpr auto Offset_LastUpdateVelocity = 0x03D0;
constexpr auto Offset_WeaponConfig = 0x04D0;
constexpr auto Offset_Mesh3P = 0x07A0;
constexpr auto Offset_FiringAttachPoint = 0x0840;
constexpr auto Offset_ScopingAttachPoint = 0x0C00;
constexpr auto Offset_CurrentAmmoData = 0x0A10;

constexpr auto Offset_AnimScriptInstance = 0x0C90;
constexpr auto Offset_ControlRotation_CP = 0x0774;
constexpr auto Offset_RecoilADSRotation_CP = 0x09CC;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DE4;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DE8;
constexpr auto Offset_bIsScoping_CP = 0x0CF6;

constexpr auto Offset_VehicleRiderComponent = 0x1D00;
constexpr auto Offset_SeatIndex = 0x0228;
constexpr auto Offset_LastVehiclePawn = 0x0260;
constexpr auto Offset_ReplicatedMovement = 0x0058;

//ATslProjectile
constexpr auto Offset_ExplodeState = 0x0560;
constexpr auto Offset_TimeTillExplosion = 0x071C;
constexpr auto Offset_TickStartVelocity = 0x0810;

#endif
