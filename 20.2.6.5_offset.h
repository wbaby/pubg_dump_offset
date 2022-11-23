#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x090B1C20;
constexpr auto Offset_GWorld = 0x090F2FD0;
constexpr auto Offset_XenuineDecrypt = 0x07AE2528;
constexpr auto Offset_FNameEntry = 0x092D19F0;
constexpr auto Offset_ChunkSize = 0x3F70;
constexpr auto Offset_ObjID = 0x0014;

constexpr auto Offset_XorKey1 = 0xF2086122;
constexpr auto Offset_XorKey2 = 0x2A9398EB;
constexpr auto Offset_RorValue = 0x0E;
constexpr auto Offset_IsingRor = true;

constexpr auto Offset_CurrentLevel = 0x0320;
constexpr auto Offset_Actors = 0x00A0;
constexpr auto Offset_GameInstance = 0x0310;
constexpr auto Offset_LocalPlayers = 0x00E0;
constexpr auto Offset_PlayerController = 0x0030;
constexpr auto Offset_AcknowledgedPawn = 0x0490;
constexpr auto Offset_PlayerCameraManager = 0x04B0;
constexpr auto Offset_LocalPlayersPTR = 0x0922E3E0;

constexpr auto Offset_PlayerState = 0x0418;
constexpr auto Offset_PlayerStatistics = 0x0868;
constexpr auto Offset_SpectatedCount = 0x0EB0;
constexpr auto Offset_LastRenderTime = 0x075C;
constexpr auto Offset_Health = 0x0870;
constexpr auto Offset_GroggyHealth = 0x0E88;
constexpr auto Offset_Team = 0x21D0;
constexpr auto Offset_LastTeamNum = 0x21D8;
constexpr auto Offset_LastSquadMemberIndex = 0x21E0;
constexpr auto Offset_CharacterName = 0x12D0;
constexpr auto Offset_BaseAnimInstance = 0x2B28;
constexpr auto Offset_LastAimOffsets = 0x16AC;
constexpr auto Offset_AimOffsets = 0x16A0;
constexpr auto Offset_ControlRotation = 0x0428;

constexpr auto Offset_RootComponent = 0x0390;
constexpr auto Offset_ComponentLocation = 0x0290;

constexpr auto Offset_Mesh = 0x04E8;
constexpr auto Offset_StaticMesh = 0x0AD0;
constexpr auto Offset_ComponentToWorld = 0x0280;

constexpr auto Offset_CameraLocation = 0x1C74;
constexpr auto Offset_CameraRotation = 0x16E4;
constexpr auto Offset_CameraFov = 0x16E0;

constexpr auto Offset_ItemPackage = 0x0570;
constexpr auto Offset_ItemInformationComponent = 0x00A8;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0430;
constexpr auto Offset_DroppedItemGroup = 0x0228;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0738;

constexpr auto Offset_WeaponProcessor = 0x0888;
constexpr auto Offset_EquippedWeapons = 0x01F8;
constexpr auto Offset_CurrentWeaponIndex = 0x02D9;
constexpr auto Offset_WeaponTrajectoryData = 0x1010;
constexpr auto Offset_TrajectoryGravityZ = 0x0FC0;
constexpr auto Offset_TrajectoryConfig = 0x0100;
constexpr auto Offset_FloatCurves = 0x0030;
constexpr auto Offset_CharacterMovement = 0x0458;
constexpr auto Offset_Acceleration = 0x0398;
constexpr auto Offset_MaxAcceleration = 0x02F8;
constexpr auto Offset_LastUpdateVelocity = 0x03C0;

constexpr auto Offset_AnimScriptInstance = 0x0C70;
constexpr auto Offset_ControlRotation_CP = 0x076C;
constexpr auto Offset_RecoilADSRotation_CP = 0x09CC;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DDC;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DE0;
constexpr auto Offset_bIsScoping_CP = 0x0CF6;
constexpr auto Offset_bIsReloading_CP = 0x08B8;

constexpr auto Offset_VehicleRiderComponent = 0x1C80;
constexpr auto Offset_SeatIndex = 0x0218;
constexpr auto Offset_LastVehiclePawn = 0x0250;
constexpr auto Offset_ReplicatedMovement = 0x0078;

constexpr auto Offset_BackpackState = 0x093029C1;
constexpr auto Offset_IsHall = 0x08EF0C78;
constexpr auto Offset_MapState = 0x06D0;
constexpr auto Offset_WorldOrigin = 0x02B4;

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
constexpr auto Offset_TimeTillExplosion = 0x072C;
constexpr auto Offset_PreExplosionTime = 0x0728;
constexpr auto Offset_ExplosionDelay = 0x05C8;
constexpr auto Offset_ProjectileConfig = 0x05D0;
constexpr auto Offset_ExplodeState = 0x0570;

//ATslGameState
constexpr auto Offset_GameState = 0x0340;

constexpr auto Offset_TotalWarningDuration = 0x0660;
constexpr auto Offset_NumAlivePlayers = 0x0664;
constexpr auto Offset_NumJoinPlayers = 0x06F4;

constexpr auto Offset_LerpSafetyZonePosition = 0x06C8;
constexpr auto Offset_LerpSafetyZoneRadius = 0x0624;

constexpr auto Offset_PoisonGasWarningPosition = 0x06D8;
constexpr auto Offset_PoisonGasWarningRadius = 0x0658;

constexpr auto Offset_RedZonePosition = 0x06BC;
constexpr auto Offset_RedZoneRadius = 0x06D4;

constexpr auto Offset_BlackZonePosition = 0x0AE0;
constexpr auto Offset_BlackZoneRadius = 0x0AEC;

constexpr auto Offset_SafetyZoneBeginPosition = 0x0600;
constexpr auto Offset_SafetyZoneRadius = 0x0720;
#endif
