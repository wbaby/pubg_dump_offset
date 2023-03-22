#pragma once

#ifndef Offset_h
#define Offset_h
constexpr auto Offset_GObjects = 0x09353120;
constexpr auto Offset_GWorld = 0x09394780;
constexpr auto Offset_XenuineDecrypt = 0x07D77A28;
constexpr auto Offset_GNames = 0x0957C810;
constexpr auto Offset_ElementsPerChunk = 0x3E4C;

constexpr auto Offset_ObjID = 0x0020;
constexpr auto Offset_XorKey1 = 0xB4917AA1;
constexpr auto Offset_XorKey2 = 0x30CE83B8;
constexpr auto Offset_Value = 0x0009;
constexpr auto Offset_UsingRor = 0x0000;

constexpr auto Offset_CurrentLevel = 0x00D0;
constexpr auto Offset_Actors = 0x01F0;
constexpr auto Offset_GameInstance = 0x09B8;
constexpr auto Offset_LocalPlayers = 0x0050;
constexpr auto Offset_PlayerController = 0x0030;
constexpr auto Offset_AcknowledgedPawn = 0x0488;
constexpr auto Offset_PlayerCameraManager = 0x04A8;
constexpr auto Offset_LocalPlayersPTR = 0x094D4B40;

constexpr auto Offset_LineTraceSingle = 0x05DE2C7C;
constexpr auto Offset_CurrentBuildNumber = 0x091BEC60;
constexpr auto Offset_GameWindowSize = 0x091621A0;
constexpr auto Offset_CheckTab = 0x093A7B02;
constexpr auto Offset_IsGameInlobby = 0x091919F8;

constexpr auto Offset_InactiveStateInputComponent = 0x06C8;
constexpr auto Offset_WorldOrigin = 0x0908;
constexpr auto Offset_MyHUD = 0x04A0;
constexpr auto Offset_BlockInputWidgetList = 0x0560;
constexpr auto Offset_TrainingMapGrid = 0x06A8;
constexpr auto Offset_Slot = 0x0030;
constexpr auto Offset_LayoutData = 0x0038;
constexpr auto Offset_WidgetStateMap = 0x04F8;
constexpr auto Offset_SelectMinimapSizeIndex = 0x05B8;
constexpr auto Offset_Visibility = 0x00A1;

constexpr auto Offset_PlayerState = 0x0410;
constexpr auto Offset_PlayerStatistics = 0x07E8;
constexpr auto Offset_bIsInAircraft = 0x0A80;
constexpr auto Offset_PubgIdData = 0x0CA8;
constexpr auto Offset_SpectatedCount = 0x0B2C;
constexpr auto Offset_LastSubmitTime = 0x0758;
constexpr auto Offset_LastRenderTime = 0x075C;
constexpr auto Offset_LastRenderTimeOnScreen = 0x0760;
constexpr auto Offset_Health = 0x0878;
constexpr auto Offset_GroggyHealth = 0x199C;
constexpr auto Offset_CharacterState = 0x22B4;
constexpr auto Offset_Team = 0x0FB8;
constexpr auto Offset_LastTeamNum = 0x0FC0;
constexpr auto Offset_CharacterName = 0x1030;
constexpr auto Offset_AimOffsets = 0x15F0;
constexpr auto Offset_ControlRotation = 0x0458;

constexpr auto Offset_RootComponent = 0x0168;
constexpr auto Offset_ComponentLocation = 0x0300;

constexpr auto Offset_Mesh = 0x0538;
constexpr auto Offset_StaticMesh = 0x0AD0;
constexpr auto Offset_ComponentToWorld = 0x02F0;

constexpr auto Offset_CameraLocation = 0x104C;
constexpr auto Offset_CameraRotation = 0x1040;
constexpr auto Offset_CameraFov = 0x1028;

constexpr auto Offset_ItemPackage = 0x0568;
constexpr auto Offset_ItemInformationComponent = 0x00A8;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0430;
constexpr auto Offset_DroppedItemGroup = 0x0398;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0738;

constexpr auto Offset_WeaponProcessor = 0x0890;
constexpr auto Offset_EquippedWeapons = 0x01F8;
constexpr auto Offset_CurrentWeaponIndex = 0x0301;
constexpr auto Offset_WeaponTrajectoryData = 0x1000;
constexpr auto Offset_TrajectoryGravityZ = 0x0F1C;
constexpr auto Offset_TrajectoryConfig = 0x0100;
constexpr auto Offset_FloatCurves = 0x0030;

constexpr auto Offset_CharacterMovement = 0x0480;
constexpr auto Offset_Acceleration = 0x0398;
constexpr auto Offset_MaxAcceleration = 0x02F8;
constexpr auto Offset_LastUpdateVelocity = 0x03C0;

constexpr auto Offset_AnimScriptInstance = 0x0C70;
constexpr auto Offset_ControlRotation_CP = 0x076C;
constexpr auto Offset_RecoilADSRotation_CP = 0x09CC;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DE4;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DE8;
constexpr auto Offset_bIsScoping_CP = 0x0CF6;

constexpr auto Offset_VehicleRiderComponent = 0x1D00;
constexpr auto Offset_SeatIndex = 0x0218;
constexpr auto Offset_LastVehiclePawn = 0x0250;
constexpr auto Offset_ReplicatedMovement = 0x0090;

//ATslProjectile
constexpr auto Offset_ExplodeState = 0x0568;
constexpr auto Offset_TimeTillExplosion = 0x0724;
constexpr auto Offset_TickStartVelocity = 0x0820;

//UTslVehicleCommonComponent
constexpr auto Offset_Floating_VehicleCommonComponent = 0x04C0;
constexpr auto Offset_Wheeled_VehicleCommonComponent = 0x0B50;
constexpr auto Offset_VehicleHealth = 0x02C0;
constexpr auto Offset_VehicleHealthMax = 0x02C4;
constexpr auto Offset_VehicleFuel = 0x02C8;
constexpr auto Offset_VehicleFuelMax = 0x02CC;
constexpr auto Offset_ExplosionTimer = 0x02D0;
constexpr auto Offset_ReplicatedSkinParam = 0x0448;

#endif
