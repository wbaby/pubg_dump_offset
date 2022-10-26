#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GWorld = 0x09068B50;
constexpr auto Offset_XenuineDecrypt = 0x074DE628;
constexpr auto Offset_FNameEntry = 0x09246338;
constexpr auto Offset_ChunkSize = 0x3EB4;
constexpr auto Offset_ObjID = 0x001C;

constexpr auto Offset_XorKey1 = 0x5ADA69CB;
constexpr auto Offset_XorKey2 = 0x11337420;
constexpr auto Offset_RorValue = 0x07;
constexpr auto Offset_IsingRor = false;

constexpr auto Offset_CurrentLevel = 0x08A0;
constexpr auto Offset_Actors = 0x0040;
constexpr auto Offset_GameInstance = 0x0940;
constexpr auto Offset_LocalPlayers = 0x00F0;
constexpr auto Offset_PlayerController = 0x0038;
constexpr auto Offset_AcknowledgedPawn = 0x0490;
constexpr auto Offset_PlayerCameraManager = 0x04B0;
constexpr auto Offset_LocalPlayersPTR = 0x091A3820;

constexpr auto Offset_PlayerState = 0x0420;
constexpr auto Offset_PlayerStatistics = 0x04B8;
constexpr auto Offset_SpectatedCount = 0x1050;
constexpr auto Offset_LastRenderTime = 0x076C;
constexpr auto Offset_Health = 0x0870;
constexpr auto Offset_GroggyHealth = 0x2200;
constexpr auto Offset_Team = 0x11C0;
constexpr auto Offset_LastTeamNum = 0x11C8;
constexpr auto Offset_CharacterName = 0x18E8;
constexpr auto Offset_LastAimOffsets = 0x159C;
constexpr auto Offset_AimOffsets = 0x1590;
constexpr auto Offset_ControlRotation = 0x0420;

constexpr auto Offset_RootComponent = 0x0030;
constexpr auto Offset_ComponentLocation = 0x0240;

constexpr auto Offset_Mesh = 0x0510;
constexpr auto Offset_StaticMesh = 0x0AE0;
constexpr auto Offset_ComponentToWorld = 0x0230;

constexpr auto Offset_CameraLocation = 0x1CAC;
constexpr auto Offset_CameraRotation = 0x1710;
constexpr auto Offset_CameraFov = 0x1CA4;

constexpr auto Offset_ItemPackage = 0x0568;
constexpr auto Offset_ItemInformationComponent = 0x00B0;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0428;
constexpr auto Offset_DroppedItemGroup = 0x0260;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0748;

constexpr auto Offset_WeaponProcessor = 0x0888;
constexpr auto Offset_EquippedWeapons = 0x0208;
constexpr auto Offset_CurrentWeaponIndex = 0x02E9;
constexpr auto Offset_WeaponTrajectoryData = 0x1000;
constexpr auto Offset_TrajectoryGravityZ = 0x0F98;
constexpr auto Offset_TrajectoryConfig = 0x0108;
constexpr auto Offset_FloatCurves = 0x0038;
constexpr auto Offset_CharacterMovement = 0x04F8;
constexpr auto Offset_Acceleration = 0x03A8;
constexpr auto Offset_MaxAcceleration = 0x0308;
constexpr auto Offset_LastUpdateVelocity = 0x03D0;

constexpr auto Offset_AnimScriptInstance = 0x0C80;
constexpr auto Offset_ControlRotation_CP = 0x0774;
constexpr auto Offset_RecoilADSRotation_CP = 0x09CC;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DDC;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DE0;
constexpr auto Offset_bIsScoping_CP = 0x0CF6;
constexpr auto Offset_bIsReloading_CP = 0x08C0;

constexpr auto Offset_VehicleRiderComponent = 0x1C40;
constexpr auto Offset_SeatIndex = 0x0228;
constexpr auto Offset_LastVehiclePawn = 0x0260;
constexpr auto Offset_ReplicatedMovement = 0x00E8;

constexpr auto Offset_BackpackState = 0x092771A9;
constexpr auto Offset_IsHall = 0x08E6D278;
constexpr auto Offset_MapState = 0x06D0;
constexpr auto Offset_WorldOrigin = 0x0960;

//TslWheeledVehicle
constexpr auto Offset_VehicleCommonComponent = 0x0B40;
constexpr auto Offset_vehiclesHealth = 0x02D8;
constexpr auto Offset_vehiclesHealthMax = 0x02DC;
constexpr auto Offset_vehiclesFuel = 0x02E0;
constexpr auto Offset_vehiclesFuelMax = 0x02E4;

//ATslProjectile
constexpr auto Offset_TickStartVelocity = 0x0820;
constexpr auto Offset_TimeTillExplosion = 0x0724;
constexpr auto Offset_PreExplosionTime = 0x0720;
constexpr auto Offset_ExplosionDelay = 0x05C0;
constexpr auto Offset_ProjectileConfig = 0x05C8;
constexpr auto Offset_ExplodeState = 0x0568;

#endif
