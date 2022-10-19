#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x08F7E810;
constexpr auto Offset_GWorld = 0x08FBFB90;
constexpr auto Offset_XenuineDecrypt = 0x07458928;
constexpr auto Offset_FNameEntry = 0x0919D328;
constexpr auto Offset_ChunkSize = 0x3E4C;
constexpr auto Offset_ObjID = 0x0018;

constexpr auto Offset_XorKey1 = 0x1B1DC4C1;
constexpr auto Offset_XorKey2 = 0xDCDFC7AC;
constexpr auto Offset_RorValue = 0x08;
constexpr auto Offset_IsingRor = false;

constexpr auto Offset_CurrentLevel = 0x0080;
constexpr auto Offset_Actors = 0x0040;
constexpr auto Offset_GameInstance = 0x0168;
constexpr auto Offset_LocalPlayers = 0x0070;
constexpr auto Offset_PlayerController = 0x0030;
constexpr auto Offset_AcknowledgedPawn = 0x0488;
constexpr auto Offset_PlayerCameraManager = 0x04A8;
constexpr auto Offset_LocalPlayersPTR = 0x090FA870;

constexpr auto Offset_PlayerState = 0x0410;
constexpr auto Offset_PlayerStatistics = 0x0824;
constexpr auto Offset_SpectatedCount = 0x10B0;
constexpr auto Offset_LastRenderTime = 0x076C;
constexpr auto Offset_Health = 0x0870;
constexpr auto Offset_GroggyHealth = 0x0E80;
constexpr auto Offset_Team = 0x1060;
constexpr auto Offset_LastTeamNum = 0x1068;
constexpr auto Offset_LastSquadMemberIndex = 0x1070;
constexpr auto Offset_CharacterName = 0x10B8;
constexpr auto Offset_LastAimOffsets = 0x177C;
constexpr auto Offset_AimOffsets = 0x1770;
constexpr auto Offset_ControlRotation = 0x0410;

constexpr auto Offset_RootComponent = 0x0100;
constexpr auto Offset_ComponentLocation = 0x0360;

constexpr auto Offset_Mesh = 0x0470;
constexpr auto Offset_StaticMesh = 0x0AE0;
constexpr auto Offset_ComponentToWorld = 0x0350;

constexpr auto Offset_CameraLocation = 0x0A4C;
constexpr auto Offset_CameraRotation = 0x0A60;
constexpr auto Offset_CameraFov = 0x0A44;

constexpr auto Offset_ItemPackage = 0x0568;
constexpr auto Offset_ItemInformationComponent = 0x00A8;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0428;
constexpr auto Offset_DroppedItemGroup = 0x0298;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0748;

constexpr auto Offset_WeaponProcessor = 0x0888;
constexpr auto Offset_EquippedWeapons = 0x01F8;
constexpr auto Offset_CurrentWeaponIndex = 0x02D9;
constexpr auto Offset_WeaponTrajectoryData = 0x1008;
constexpr auto Offset_TrajectoryGravityZ = 0x0F14;
constexpr auto Offset_TrajectoryConfig = 0x0100;
constexpr auto Offset_FloatCurves = 0x0030;
constexpr auto Offset_CharacterMovement = 0x0460;
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

constexpr auto Offset_VehicleRiderComponent = 0x1C40;
constexpr auto Offset_SeatIndex = 0x0218;
constexpr auto Offset_LastVehiclePawn = 0x0250;
constexpr auto Offset_ReplicatedMovement = 0x0070;

constexpr auto Offset_BackpackState = 0x091CE169;
constexpr auto Offset_IsHall = 0x08DC4278;
constexpr auto Offset_MapState = 0x06C8;
constexpr auto Offset_WorldOrigin = 0x0810;

//TslWheeledVehicle
constexpr auto Offset_VehicleCommonComponent = 0x0B30;
constexpr auto Offset_vehiclesHealth = 0x02C8;
constexpr auto Offset_vehiclesHealthMax = 0x02CC;
constexpr auto Offset_vehiclesFuel = 0x02D0;
constexpr auto Offset_vehiclesFuelMax = 0x02D4;

//ATslProjectile
constexpr auto Offset_TickStartVelocity = 0x0820;
constexpr auto Offset_TimeTillExplosion = 0x0724;
constexpr auto Offset_PreExplosionTime = 0x0720;
constexpr auto Offset_ExplosionDelay = 0x05C0;
constexpr auto Offset_ProjectileConfig = 0x05C8;
constexpr auto Offset_ExplodeState = 0x0568;

#endif
