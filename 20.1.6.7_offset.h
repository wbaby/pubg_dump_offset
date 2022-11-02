#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GWorld = 0x08F99B30;
constexpr auto Offset_XenuineDecrypt = 0x07A01C28;
constexpr auto Offset_FNameEntry = 0x09177348;
constexpr auto Offset_ChunkSize = 0x3FC0;
constexpr auto Offset_ObjID = 0x0018;

constexpr auto Offset_XorKey1 = 0x1E11250B;
constexpr auto Offset_XorKey2 = 0x1A3B4ECE;
constexpr auto Offset_RorValue = 0x0A;
constexpr auto Offset_IsingRor = false;

constexpr auto Offset_CurrentLevel = 0x07B8;
constexpr auto Offset_Actors = 0x00D8;
constexpr auto Offset_GameInstance = 0x0A20;
constexpr auto Offset_LocalPlayers = 0x00F0;
constexpr auto Offset_PlayerController = 0x0038;
constexpr auto Offset_AcknowledgedPawn = 0x0490;
constexpr auto Offset_PlayerCameraManager = 0x04B0;
constexpr auto Offset_LocalPlayersPTR = 0x090D4800;

constexpr auto Offset_PlayerState = 0x0420;
constexpr auto Offset_PlayerStatistics = 0x0A64;
constexpr auto Offset_SpectatedCount = 0x1300;
constexpr auto Offset_LastRenderTime = 0x077C;
constexpr auto Offset_Health = 0x0880;
constexpr auto Offset_GroggyHealth = 0x0EC0;
constexpr auto Offset_Team = 0x1AA8;
constexpr auto Offset_LastTeamNum = 0x1AB0;
constexpr auto Offset_LastSquadMemberIndex = 0x1AB8;
constexpr auto Offset_CharacterName = 0x2268;
constexpr auto Offset_BaseAnimInstance = 0x2B28;
constexpr auto Offset_LastAimOffsets = 0x15AC;
constexpr auto Offset_AimOffsets = 0x15A0;
constexpr auto Offset_ControlRotation = 0x0438;

constexpr auto Offset_RootComponent = 0x0220;
constexpr auto Offset_ComponentLocation = 0x0220;

constexpr auto Offset_Mesh = 0x0550;
constexpr auto Offset_StaticMesh = 0x0AF0;
constexpr auto Offset_ComponentToWorld = 0x0210;

constexpr auto Offset_CameraLocation = 0x1CE0;
constexpr auto Offset_CameraRotation = 0x1748;
constexpr auto Offset_CameraFov = 0x1754;

constexpr auto Offset_ItemPackage = 0x0570;
constexpr auto Offset_ItemInformationComponent = 0x00B0;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0430;
constexpr auto Offset_DroppedItemGroup = 0x01C0;
constexpr auto Offset_DroppedItemGroup = 0x01C0;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0758;

constexpr auto Offset_WeaponProcessor = 0x0898;
constexpr auto Offset_EquippedWeapons = 0x0208;
constexpr auto Offset_CurrentWeaponIndex = 0x02E9;
constexpr auto Offset_WeaponTrajectoryData = 0x1008;
constexpr auto Offset_TrajectoryGravityZ = 0x0FCC;
constexpr auto Offset_TrajectoryConfig = 0x0108;
constexpr auto Offset_FloatCurves = 0x0038;
constexpr auto Offset_CharacterMovement = 0x04C0;
constexpr auto Offset_Acceleration = 0x03A8;
constexpr auto Offset_MaxAcceleration = 0x0308;
constexpr auto Offset_LastUpdateVelocity = 0x03D0;

constexpr auto Offset_AnimScriptInstance = 0x0C90;
constexpr auto Offset_ControlRotation_CP = 0x0774;
constexpr auto Offset_RecoilADSRotation_CP = 0x09CC;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DDC;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DE0;
constexpr auto Offset_bIsScoping_CP = 0x0CF6;
constexpr auto Offset_bIsReloading_CP = 0x08C0;

constexpr auto Offset_VehicleRiderComponent = 0x1CD0;
constexpr auto Offset_SeatIndex = 0x0228;
constexpr auto Offset_LastVehiclePawn = 0x0260;
constexpr auto Offset_ReplicatedMovement = 0x0060;

constexpr auto Offset_BackpackState = 0x091A8199;
constexpr auto Offset_IsHall = 0x08D9C238;
constexpr auto Offset_MapState = 0x06D0;
constexpr auto Offset_WorldOrigin = 0x03D0;

//TslWheeledVehicle
constexpr auto Offset_VehicleCommonComponent = 0x0B40;
constexpr auto Offset_vehiclesHealth = 0x02D8;
constexpr auto Offset_vehiclesHealthMax = 0x02DC;
constexpr auto Offset_vehiclesFuel = 0x02E0;
constexpr auto Offset_vehiclesFuelMax = 0x02E4;

//ATslProjectile
constexpr auto Offset_TickStartVelocity = 0x0820;
constexpr auto Offset_TimeTillExplosion = 0x072C;
constexpr auto Offset_PreExplosionTime = 0x0728;
constexpr auto Offset_ExplosionDelay = 0x05C8;
constexpr auto Offset_ProjectileConfig = 0x05D0;
constexpr auto Offset_ExplodeState = 0x0570;

#endif
