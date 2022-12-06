#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x091E0AA0;
constexpr auto Offset_GWorld = 0x09222080;
constexpr auto Offset_XenuineDecrypt = 0x07BF5728;
constexpr auto Offset_FNameEntry = 0x09407450;
constexpr auto Offset_ChunkSize = 0x3E34;
constexpr auto Offset_ObjID = 0x001C;

constexpr auto Offset_XorKey1 = 0xF32E8A49;
constexpr auto Offset_XorKey2 = 0x6779B191;
constexpr auto Offset_RorValue = 0x00;
constexpr auto Offset_IsingRor = false;

constexpr auto Offset_CurrentLevel = 0x0958;
constexpr auto Offset_Actors = 0x00B8;
constexpr auto Offset_GameInstance = 0x0770;
constexpr auto Offset_LocalPlayers = 0x0030;
constexpr auto Offset_PlayerController = 0x0030;
constexpr auto Offset_AcknowledgedPawn = 0x0480;
constexpr auto Offset_PlayerCameraManager = 0x04A0;
constexpr auto Offset_LocalPlayersPTR = 0x09361430;

constexpr auto Offset_GameWindowX = 0x08FF3020;
constexpr auto Offset_GameWindowY = 0x08FF3024;
constexpr auto Offset_LineTraceSingle = 0x05CD8420;

constexpr auto Offset_PlayerState = 0x0418;
constexpr auto Offset_PlayerStatistics = 0x07C8;
constexpr auto Offset_DamageDealtOnEnemy = 0x0850;
constexpr auto Offset_SpectatedCount = 0x2374;
constexpr auto Offset_LastRenderTime = 0x076C;
constexpr auto Offset_Health = 0x0860;
constexpr auto Offset_GroggyHealth = 0x18F8;
constexpr auto Offset_Team = 0x0E10;
constexpr auto Offset_LastTeamNum = 0x0E18;
constexpr auto Offset_LastSquadMemberIndex = 0x0E20;
constexpr auto Offset_CharacterName = 0x1020;
constexpr auto Offset_AimOffsets = 0x1580;
constexpr auto Offset_ControlRotation = 0x03FC;

constexpr auto Offset_RootComponent = 0x0338;
constexpr auto Offset_ComponentLocation = 0x0360;

constexpr auto Offset_Mesh = 0x0500;
constexpr auto Offset_StaticMesh = 0x0AE0;
constexpr auto Offset_ComponentToWorld = 0x0350;

constexpr auto Offset_CameraLocation = 0x1BBC;
constexpr auto Offset_CameraRotation = 0x1BA0;
constexpr auto Offset_CameraFov = 0x1B94;

constexpr auto Offset_ItemPackage = 0x0568;
constexpr auto Offset_ItemInformationComponent = 0x00A8;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0428;
constexpr auto Offset_DroppedItemGroup = 0x0130;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0748;

constexpr auto Offset_WeaponProcessor = 0x0878;
constexpr auto Offset_EquippedWeapons = 0x01F8;
constexpr auto Offset_CurrentWeaponIndex = 0x02F9;
constexpr auto Offset_WeaponTrajectoryData = 0x1000;
constexpr auto Offset_TrajectoryGravityZ = 0x0FF4;
constexpr auto Offset_TrajectoryConfig = 0x0100;
constexpr auto Offset_FloatCurves = 0x0030;
constexpr auto Offset_CharacterMovement = 0x0470;
constexpr auto Offset_Acceleration = 0x0398;
constexpr auto Offset_MaxAcceleration = 0x02F8;
constexpr auto Offset_LastUpdateVelocity = 0x03C0;

constexpr auto Offset_AnimScriptInstance = 0x0C80;
constexpr auto Offset_ControlRotation_CP = 0x076C;
constexpr auto Offset_RecoilADSRotation_CP = 0x09CC;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DDC;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DE0;
constexpr auto Offset_bIsScoping_CP = 0x0CF6;
constexpr auto Offset_bIsReloading_CP = 0x08B8;

constexpr auto Offset_VehicleRiderComponent = 0x1C68;
constexpr auto Offset_SeatIndex = 0x0218;
constexpr auto Offset_LastVehiclePawn = 0x0250;
constexpr auto Offset_ReplicatedMovement = 0x0068;

//TslWheeledVehicle
constexpr auto Offset_VehicleCommonComponent = 0x0B30;
constexpr auto Offset_vehiclesHealth = 0x02C8;
constexpr auto Offset_vehiclesHealthMax = 0x02CC;
constexpr auto Offset_vehiclesFuel = 0x02D0;
constexpr auto Offset_vehiclesFuelMax = 0x02D4;
constexpr auto Offset_ExplosionTimer = 0x02D8;
constexpr auto Offset_ReplicatedSkinParam = 0x0458;

//ATslProjectile
constexpr auto Offset_TickStartVelocity = 0x0820;
constexpr auto Offset_TimeTillExplosion = 0x0724;
constexpr auto Offset_PreExplosionTime = 0x0720;
constexpr auto Offset_ExplosionDelay = 0x05C0;
constexpr auto Offset_ProjectileConfig = 0x05C8;
constexpr auto Offset_ExplodeState = 0x0568;

constexpr auto Offset_BackpackState = 0x09438450;
constexpr auto Offset_IsHall = 0x09021DB8;
constexpr auto Offset_MapState = 0x06C0;
constexpr auto Offset_WorldOrigin = 0x07AC;

constexpr auto Offset_MyHUD = 0x0498;
constexpr auto Offset_BlockInputWidgetList = 0x0560;
constexpr auto Offset_TrainingMapGrid = 0x06A0;
constexpr auto Offset_MapWidget = 0x06D0;
constexpr auto Offset_Slot = 0x30;
constexpr auto Offset_LayoutData = 0x38;

#endif
