#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x09081BA0;
constexpr auto Offset_GWorld = 0x090C2F50;
constexpr auto Offset_XenuineDecrypt = 0x07AC9F28;
constexpr auto Offset_FNameEntry = 0x092A19E0;
constexpr auto Offset_ChunkSize = 0x40EC;
constexpr auto Offset_ObjID = 0x0024;

constexpr auto Offset_XorKey1 = 0x2DA25E23;
constexpr auto Offset_XorKey2 = 0x817346F8;
constexpr auto Offset_RorValue = 0x0A;
constexpr auto Offset_IsingRor = true;

constexpr auto Offset_CurrentLevel = 0x0A00;
constexpr auto Offset_Actors = 0x0048;
constexpr auto Offset_GameInstance = 0x0860;
constexpr auto Offset_LocalPlayers = 0x0048;
constexpr auto Offset_PlayerController = 0x0038;
constexpr auto Offset_AcknowledgedPawn = 0x0490;
constexpr auto Offset_PlayerCameraManager = 0x04B0;
constexpr auto Offset_LocalPlayersPTR = 0x091FE370;

constexpr auto Offset_PlayerState = 0x0420;
constexpr auto Offset_PlayerStatistics = 0x0860;
constexpr auto Offset_DamageDealtOnEnemy = 0x0840;
constexpr auto Offset_SpectatedCount = 0x0FA4;
constexpr auto Offset_LastSubmitTime = 0x0778;
constexpr auto Offset_LastRenderTime = 0x077C;
constexpr auto Offset_LastRenderTimeOnScreen = 0x0780;
constexpr auto Offset_Health = 0x0890;
constexpr auto Offset_HealthMax = 0x0894;
constexpr auto Offset_GroggyHealth = 0x1A48;
constexpr auto Offset_GroggyHealthMax = 0x1230;
constexpr auto Offset_Team = 0x1AD0;
constexpr auto Offset_LastTeamNum = 0x1AD8;
constexpr auto Offset_LastSquadMemberIndex = 0x1AE0;
constexpr auto Offset_CharacterName = 0x1400;
constexpr auto Offset_BaseAnimInstance = 0x2BA8;
constexpr auto Offset_LastAimOffsets = 0x16CC;
constexpr auto Offset_AimOffsets = 0x16C0;
constexpr auto Offset_ControlRotation = 0x0464;
constexpr auto Offset_ComponentVelocity = 0x0200;
constexpr auto Offset_AttachParent = 0x0280;

constexpr auto Offset_RootComponent = 0x0178;
constexpr auto Offset_ComponentLocation = 0x0330;

constexpr auto Offset_Mesh = 0x0478;
constexpr auto Offset_StaticMesh = 0x0AF0;
constexpr auto Offset_ComponentToWorld = 0x0320;

constexpr auto Offset_CameraLocation = 0x09C0;
constexpr auto Offset_CameraRotation = 0x09D0;
constexpr auto Offset_CameraFov = 0x0440;

constexpr auto Offset_ItemPackage = 0x0578;
constexpr auto Offset_ItemInformationComponent = 0x00B0;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0438;
constexpr auto Offset_DroppedItemGroup = 0x0338;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0758;

constexpr auto Offset_WeaponProcessor = 0x08A8;
constexpr auto Offset_EquippedWeapons = 0x0208;
constexpr auto Offset_CurrentWeaponIndex = 0x02E9;
constexpr auto Offset_WeaponTrajectoryData = 0x1000;
constexpr auto Offset_TrajectoryGravityZ = 0x0FE8;
constexpr auto Offset_TrajectoryConfig = 0x0108;
constexpr auto Offset_FloatCurves = 0x0038;
constexpr auto Offset_CharacterMovement = 0x0468;
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

constexpr auto Offset_VehicleRiderComponent = 0x1C00;
constexpr auto Offset_SeatIndex = 0x0228;
constexpr auto Offset_LastVehiclePawn = 0x0260;
constexpr auto Offset_ReplicatedMovement = 0x0070;

constexpr auto Offset_BackpackState = 0x092D29A1;
constexpr auto Offset_IsHall = 0x08EC0B38;
constexpr auto Offset_MapState = 0x06D0;
constexpr auto Offset_WorldOrigin = 0x0A10;

//TslWheeledVehicle
constexpr auto Offset_VehicleCommonComponent = 0x0B40;
constexpr auto Offset_vehiclesHealth = 0x02D8;
constexpr auto Offset_vehiclesHealthMax = 0x02DC;
constexpr auto Offset_vehiclesFuel = 0x02E0;
constexpr auto Offset_vehiclesFuelMax = 0x02E4;
constexpr auto Offset_ExplosionTimer = 0x02E8;
constexpr auto Offset_ReplicatedSkinParam = 0x0468;

//ATslProjectile
constexpr auto Offset_TickStartVelocity = 0x0830;
constexpr auto Offset_TimeTillExplosion = 0x0734;
constexpr auto Offset_PreExplosionTime = 0x0730;
constexpr auto Offset_ExplosionDelay = 0x05D0;
constexpr auto Offset_ProjectileConfig = 0x05D8;
constexpr auto Offset_ExplodeState = 0x0578;

//ATslGameState
constexpr auto Offset_GameState = 0x0998;
constexpr auto Offset_TotalWarningDuration = 0x0554;

constexpr auto Offset_NumAlivePlayers = 0x04F0;
constexpr auto Offset_NumJoinPlayers = 0x054C;

constexpr auto Offset_LerpSafetyZonePosition = 0x04F8;
constexpr auto Offset_LerpSafetyZoneRadius = 0x05B8;

constexpr auto Offset_PoisonGasWarningPosition = 0x0498;
constexpr auto Offset_PoisonGasWarningRadius = 0x05AC;

constexpr auto Offset_RedZonePosition = 0x055C;
constexpr auto Offset_RedZoneRadius = 0x0494;

constexpr auto Offset_BlackZonePosition = 0x0AF0;
constexpr auto Offset_BlackZoneRadius = 0x0AFC;

constexpr auto Offset_SafetyZoneBeginPosition = 0x04B0;
constexpr auto Offset_SafetyZoneRadius = 0x0488;
#endif
