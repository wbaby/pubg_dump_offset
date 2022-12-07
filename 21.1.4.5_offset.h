#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x091CFA20;
constexpr auto Offset_GWorld = 0x09211000;
constexpr auto Offset_XenuineDecrypt = 0x07C0AF28;
constexpr auto Offset_FNameEntry = 0x093F63E0;
constexpr auto Offset_ChunkSize = 0x41CC;
constexpr auto Offset_ObjID = 0x0018;

constexpr auto Offset_XorKey1 = 0xDBA10866;
constexpr auto Offset_XorKey2 = 0xC7D35F00;
constexpr auto Offset_RorValue = 0x0D;
constexpr auto Offset_IsingRor = false;

constexpr auto Offset_CurrentLevel = 0x0748;
constexpr auto Offset_Actors = 0x00A0;
constexpr auto Offset_GameInstance = 0x06D8;
constexpr auto Offset_LocalPlayers = 0x00D8;
constexpr auto Offset_PlayerController = 0x0030;
constexpr auto Offset_AcknowledgedPawn = 0x0488;
constexpr auto Offset_PlayerCameraManager = 0x04A8;
constexpr auto Offset_LocalPlayersPTR = 0x093503D0;

constexpr auto Offset_LineTraceSingle = 0x05CEEF48;

constexpr auto Offset_PlayerState = 0x0410;
constexpr auto Offset_PlayerStatistics = 0x0620;
constexpr auto Offset_DamageDealtOnEnemy = 0x04C0;
constexpr auto Offset_SpectatedCount = 0x10D8;
constexpr auto Offset_LastRenderTime = 0x076C;
constexpr auto Offset_Health = 0x0870;
constexpr auto Offset_GroggyHealth = 0x1B60;
constexpr auto Offset_Team = 0x1530;
constexpr auto Offset_LastTeamNum = 0x1538;
constexpr auto Offset_LastSquadMemberIndex = 0x1540;
constexpr auto Offset_CharacterName = 0x1AA0;
constexpr auto Offset_AimOffsets = 0x1750;
constexpr auto Offset_ControlRotation = 0x0410;

constexpr auto Offset_RootComponent = 0x0308;
constexpr auto Offset_ComponentLocation = 0x0310;

constexpr auto Offset_Mesh = 0x0458;
constexpr auto Offset_StaticMesh = 0x0AE0;
constexpr auto Offset_ComponentToWorld = 0x0300;

constexpr auto Offset_CameraLocation = 0x1720;
constexpr auto Offset_CameraRotation = 0x172C;
constexpr auto Offset_CameraFov = 0x1740;

constexpr auto Offset_ItemPackage = 0x0568;
constexpr auto Offset_ItemInformationComponent = 0x00A8;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0428;
constexpr auto Offset_DroppedItemGroup = 0x0158;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0748;

constexpr auto Offset_WeaponProcessor = 0x0888;
constexpr auto Offset_EquippedWeapons = 0x01F8;
constexpr auto Offset_CurrentWeaponIndex = 0x02F9;
constexpr auto Offset_WeaponTrajectoryData = 0x1000;
constexpr auto Offset_TrajectoryGravityZ = 0x0F78;
constexpr auto Offset_TrajectoryConfig = 0x0100;
constexpr auto Offset_FloatCurves = 0x0030;
constexpr auto Offset_CharacterMovement = 0x0480;
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

constexpr auto Offset_VehicleRiderComponent = 0x1CD8;
constexpr auto Offset_SeatIndex = 0x0218;
constexpr auto Offset_LastVehiclePawn = 0x0250;
constexpr auto Offset_ReplicatedMovement = 0x00E0;

//TslWheeledVehicle
constexpr auto Offset_VehicleCommonComponent = 0x0B40;
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

constexpr auto Offset_BackpackState = 0x094273C0;
constexpr auto Offset_IsHall = 0x09010DB8;
constexpr auto Offset_InactiveStateInputComponent = 0x06C8;
constexpr auto Offset_WorldOrigin = 0x028C;

constexpr auto Offset_MyHUD = 0x04A0;
constexpr auto Offset_BlockInputWidgetList = 0x0560;
constexpr auto Offset_TrainingMapGrid = 0x06A0;
constexpr auto Offset_MapWidget = 0x06D0;
constexpr auto Offset_Slot = 0x0030;
constexpr auto Offset_LayoutData = 0x0038;

#endif
