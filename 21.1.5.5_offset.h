#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x091BAD20;
constexpr auto Offset_GWorld = 0x091FC300;
constexpr auto Offset_XenuineDecrypt = 0x07BF5128;
constexpr auto Offset_FNameEntry = 0x093E1B70;
constexpr auto Offset_ChunkSize = 0x4160;

constexpr auto Offset_ObjID = 0x000C;
constexpr auto Offset_XorKey1 = 0x99D08BB0;
constexpr auto Offset_XorKey2 = 0x60128D6D;
constexpr auto Offset_RorValue = 0x09;
constexpr auto Offset_IsingRor = false;

constexpr auto Offset_CurrentLevel = 0x02D8;
constexpr auto Offset_Actors = 0x0070;
constexpr auto Offset_GameInstance = 0x07A8;
constexpr auto Offset_LocalPlayers = 0x00B8;
constexpr auto Offset_PlayerController = 0x0038;
constexpr auto Offset_AcknowledgedPawn = 0x0490;
constexpr auto Offset_PlayerCameraManager = 0x04B0;
constexpr auto Offset_LocalPlayersPTR = 0x0933B6D0;

constexpr auto Offset_BackpackState = 0x09412B60;
constexpr auto Offset_IsHall = 0x08FFC0F8;
constexpr auto Offset_InactiveStateInputComponent = 0x06D0;
constexpr auto Offset_WorldOrigin = 0x02F0;

constexpr auto Offset_PlayerState = 0x0430;
constexpr auto Offset_PlayerStatistics = 0x04D8;
constexpr auto Offset_PubgIdData = 0x0CB8;
constexpr auto Offset_SpectatedCount = 0x1128;
constexpr auto Offset_LastRenderTime = 0x077C;
constexpr auto Offset_Health = 0x0870;
constexpr auto Offset_GroggyHealth = 0x1C78;
constexpr auto Offset_Team = 0x0F18;
constexpr auto Offset_LastTeamNum = 0x0F20;
constexpr auto Offset_LastSquadMemberIndex = 0x0F28;
constexpr auto Offset_CharacterName = 0x1388;
constexpr auto Offset_AimOffsets = 0x16D0;
constexpr auto Offset_ControlRotation = 0x044C;
constexpr auto Offset_bActorEnableCollision = 0x0050;

constexpr auto Offset_RootComponent = 0x0250;
constexpr auto Offset_ComponentLocation = 0x0240;

constexpr auto Offset_Mesh = 0x0528;
constexpr auto Offset_StaticMesh = 0x0AF0;
constexpr auto Offset_ComponentToWorld = 0x0230;

constexpr auto Offset_CameraLocation = 0x1C64;
constexpr auto Offset_CameraRotation = 0x1C40;
constexpr auto Offset_CameraFov = 0x1C5C;

constexpr auto Offset_ItemPackage = 0x0570;
constexpr auto Offset_ItemInformationComponent = 0x00B0;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0430;
constexpr auto Offset_DroppedItemGroup = 0x0278;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0758;

constexpr auto Offset_WeaponProcessor = 0x0888;
constexpr auto Offset_EquippedWeapons = 0x0208;
constexpr auto Offset_CurrentWeaponIndex = 0x0309;
constexpr auto Offset_WeaponTrajectoryData = 0x1008;
constexpr auto Offset_TrajectoryGravityZ = 0x0F54;
constexpr auto Offset_TrajectoryConfig = 0x0108;
constexpr auto Offset_RichCurve = 0x0098;
constexpr auto Offset_CharacterMovement = 0x0500;
constexpr auto Offset_Acceleration = 0x03A8;
constexpr auto Offset_MaxAcceleration = 0x0308;
constexpr auto Offset_LastUpdateVelocity = 0x03D0;

constexpr auto Offset_AnimScriptInstance = 0x0C90;
constexpr auto Offset_ControlRotation_CP = 0x0774;
constexpr auto Offset_RecoilADSRotation_CP = 0x09CC;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DDC;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DE0;

constexpr auto Offset_VehicleRiderComponent = 0x1D08;
constexpr auto Offset_SeatIndex = 0x0228;
constexpr auto Offset_LastVehiclePawn = 0x0260;
constexpr auto Offset_ReplicatedMovement = 0x0070;

//ATslProjectile
constexpr auto Offset_TickStartVelocity = 0x0820;
constexpr auto Offset_TimeTillExplosion = 0x072C;
constexpr auto Offset_PreExplosionTime = 0x0728;
constexpr auto Offset_ExplosionDelay = 0x05C8;
constexpr auto Offset_ProjectileConfig = 0x05D0;
constexpr auto Offset_ExplodeState = 0x0570;
#endif
