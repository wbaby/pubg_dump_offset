#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x09313760;
constexpr auto Offset_GWorld = 0x09354AE0;
constexpr auto Offset_XenuineDecrypt = 0x077EEE28;
constexpr auto Offset_FNameEntry = 0x095322A8;
constexpr auto Offset_ChunkSize = 0x416C;
constexpr auto Offset_ObjID = 0x0010;

constexpr auto Offset_XorKey1 = 0xA8322392;
constexpr auto Offset_XorKey2 = 0xA08BCE0E;
constexpr auto Offset_RorValue = 0x03;
constexpr auto Offset_IsingRor = true;

constexpr auto Offset_CurrentLevel = 0x0988;
constexpr auto Offset_Actors = 0x0210;
constexpr auto Offset_GameInstance = 0x02C8;
constexpr auto Offset_LocalPlayers = 0x0048;
constexpr auto Offset_PlayerController = 0x0030;
constexpr auto Offset_AcknowledgedPawn = 0x0478;
constexpr auto Offset_PlayerCameraManager = 0x0498;
constexpr auto Offset_LocalPlayersPTR = 0x0948F790;

constexpr auto Offset_PlayerState = 0x0418;
constexpr auto Offset_PlayerStatistics = 0x067C;
constexpr auto Offset_SpectatedCount = 0x1358;
constexpr auto Offset_LastRenderTime = 0x074C;
constexpr auto Offset_Health = 0x0860;
constexpr auto Offset_GroggyHealth = 0x1020;
constexpr auto Offset_LastTeamNum = 0x0FD0;
constexpr auto Offset_LastSquadMemberIndex = 0x0FD8;
constexpr auto Offset_CharacterName = 0x2260;
constexpr auto Offset_LastAimOffsets = 0x158C;
constexpr auto Offset_AimOffsets = 0x1580;
constexpr auto Offset_ControlRotation = 0x0400;

constexpr auto Offset_RootComponent = 0x01F0;
constexpr auto Offset_ComponentLocation = 0x0280;

constexpr auto Offset_Mesh = 0x0530;
constexpr auto Offset_StaticMesh = 0x0AC0;
constexpr auto Offset_ComponentToWorld = 0x0270;

constexpr auto Offset_CameraLocation = 0x0FA0;
constexpr auto Offset_CameraRotation = 0x0FAC;
constexpr auto Offset_CameraFov = 0x0FB8;

constexpr auto Offset_ItemPackage = 0x0558;
constexpr auto Offset_ItemInformationComponent = 0x00A8;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0418;
constexpr auto Offset_DroppedItemGroup = 0x0270;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0728;

constexpr auto Offset_WeaponProcessor = 0x0878;
constexpr auto Offset_EquippedWeapons = 0x01F8;
constexpr auto Offset_CurrentWeaponIndex = 0x02D9;
constexpr auto Offset_WeaponTrajectoryData = 0x0FF8;
constexpr auto Offset_TrajectoryGravityZ = 0x0FF0;
constexpr auto Offset_TrajectoryConfig = 0x0100;
constexpr auto Offset_FloatCurves = 0x0030;
constexpr auto Offset_CharacterMovement = 0x0540;
constexpr auto Offset_Acceleration = 0x0398;
constexpr auto Offset_MaxAcceleration = 0x02F8;
constexpr auto Offset_LastUpdateVelocity = 0x03C0;

constexpr auto Offset_AnimScriptInstance = 0x0C60;
constexpr auto Offset_ControlRotation_CP = 0x076C;
constexpr auto Offset_RecoilADSRotation_CP = 0x09CC;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DDC;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DE0;
constexpr auto Offset_bIsScoping_CP = 0x0CF6;
constexpr auto Offset_bIsReloading_CP = 0x08B8;

constexpr auto Offset_VehicleRiderComponent = 0x1C78;
constexpr auto Offset_SeatIndex = 0x0218;
constexpr auto Offset_LastVehiclePawn = 0x0250;
constexpr auto Offset_ReplicatedMovement = 0x0078;

constexpr auto Offset_BackpackState = 0x095630E9;
constexpr auto Offset_IsHall = 0x091591F8;
constexpr auto Offset_MapState = 0x06B8;
constexpr auto Offset_WorldOrigin = 0x08F8;

//TslWheeledVehicle
constexpr auto Offset_VehicleCommonComponent = 0x0B20;
constexpr auto Offset_vehiclesHealth = 0x02C8;
constexpr auto Offset_vehiclesHealthMax = 0x02CC;
constexpr auto Offset_vehiclesFuel = 0x02D0;
constexpr auto Offset_vehiclesFuelMax = 0x02D4;

//ATslProjectile
constexpr auto Offset_TickStartVelocity = 0x0810;
constexpr auto Offset_TimeTillExplosion = 0x0714;
constexpr auto Offset_PreExplosionTime = 0x0710;
constexpr auto Offset_ExplosionDelay = 0x05B0;
constexpr auto Offset_ProjectileConfig = 0x05B8;
constexpr auto Offset_ExplodeState = 0x0558;

#endif
