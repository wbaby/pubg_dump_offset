#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x0921EAA0;
constexpr auto Offset_GWorld = 0x09260080;
constexpr auto Offset_XenuineDecrypt = 0x07C39728;
constexpr auto Offset_FNameEntry = 0x09445850;
constexpr auto Offset_ChunkSize = 0x4054;
constexpr auto Offset_ObjID = 0x0008;

constexpr auto Offset_XorKey1 = 0x61CB7254;
constexpr auto Offset_XorKey2 = 0x9F1304CD;
constexpr auto Offset_RorValue = 0x0C;
constexpr auto Offset_IsingRor = true;

constexpr auto Offset_CurrentLevel = 0x0130;
constexpr auto Offset_Actors = 0x01B0;
constexpr auto Offset_GameInstance = 0x00C8;
constexpr auto Offset_LocalPlayers = 0x00E0;
constexpr auto Offset_PlayerController = 0x0030;
constexpr auto Offset_AcknowledgedPawn = 0x0470;
constexpr auto Offset_PlayerCameraManager = 0x0490;
constexpr auto Offset_LocalPlayersPTR = 0x0939F440;

constexpr auto Offset_PlayerState = 0x0420;
constexpr auto Offset_PlayerStatistics = 0x08D4;
constexpr auto Offset_DamageDealtOnEnemy = 0x04A0;
constexpr auto Offset_SpectatedCount = 0x1078;
constexpr auto Offset_LastRenderTime = 0x076C;
constexpr auto Offset_Health = 0x0860;
constexpr auto Offset_GroggyHealth = 0x0E70;
constexpr auto Offset_Team = 0x1A28;
constexpr auto Offset_LastTeamNum = 0x1A30;
constexpr auto Offset_LastSquadMemberIndex = 0x1A38;
constexpr auto Offset_CharacterName = 0x0EC8;
constexpr auto Offset_AimOffsets = 0x1590;
constexpr auto Offset_ControlRotation = 0x0400;

constexpr auto Offset_RootComponent = 0x02A0;
constexpr auto Offset_ComponentLocation = 0x0280;

constexpr auto Offset_Mesh = 0x0450;
constexpr auto Offset_StaticMesh = 0x0AE0;
constexpr auto Offset_ComponentToWorld = 0x0270;

constexpr auto Offset_CameraLocation = 0x0A54;
constexpr auto Offset_CameraRotation = 0x0A7C;
constexpr auto Offset_CameraFov = 0x0A8C;

constexpr auto Offset_ItemPackage = 0x0558;
constexpr auto Offset_ItemInformationComponent = 0x00A8;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0418;
constexpr auto Offset_DroppedItemGroup = 0x00C8;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0748;

constexpr auto Offset_WeaponProcessor = 0x0878;
constexpr auto Offset_EquippedWeapons = 0x01F8;
constexpr auto Offset_CurrentWeaponIndex = 0x02F9;
constexpr auto Offset_WeaponTrajectoryData = 0x1008;
constexpr auto Offset_TrajectoryGravityZ = 0x0F28;
constexpr auto Offset_TrajectoryConfig = 0x0100;
constexpr auto Offset_RichCurve = 0x0088;
constexpr auto Offset_CharacterMovement = 0x0540;
constexpr auto Offset_Acceleration = 0x0398;
constexpr auto Offset_MaxAcceleration = 0x02F8;
constexpr auto Offset_LastUpdateVelocity = 0x03C0;

constexpr auto Offset_AnimScriptInstance = 0x0C80;
constexpr auto Offset_ControlRotation_CP = 0x076C;
constexpr auto Offset_RecoilADSRotation_CP = 0x09CC;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DDC;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DE0;

constexpr auto Offset_VehicleRiderComponent = 0x1BD0;
constexpr auto Offset_SeatIndex = 0x0218;
constexpr auto Offset_LastVehiclePawn = 0x0250;
constexpr auto Offset_ReplicatedMovement = 0x0050;

constexpr auto Offset_TickStartVelocity = 0x0810;
constexpr auto Offset_TimeTillExplosion = 0x0714;
constexpr auto Offset_PreExplosionTime = 0x0710;
constexpr auto Offset_ExplosionDelay = 0x05B0;
constexpr auto Offset_ProjectileConfig = 0x05B8;
constexpr auto Offset_ExplodeState = 0x0558;

constexpr auto Offset_BackpackState = 0x09476830;
constexpr auto Offset_IsHall = 0x0905FDB8;
constexpr auto Offset_InactiveStateInputComponent = 0x06B0;
constexpr auto Offset_WorldOrigin = 0x00E0;

#endif
