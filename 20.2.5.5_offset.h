#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x090E9AA0;
constexpr auto Offset_GWorld = 0x0912AE50;
constexpr auto Offset_XenuineDecrypt = 0x07B34828;
constexpr auto Offset_FNameEntry = 0x093098E0;
constexpr auto Offset_ChunkSize = 0x3FDC;
constexpr auto Offset_ObjID = 0x0020;

constexpr auto Offset_XorKey1 = 0x4C9AED9B;
constexpr auto Offset_XorKey2 = 0x01A1A032;
constexpr auto Offset_RorValue = 0x08;
constexpr auto Offset_IsingRor = true;

constexpr auto Offset_CurrentLevel = 0x0650;
constexpr auto Offset_Actors = 0x00B8;
constexpr auto Offset_GameInstance = 0x01A0;
constexpr auto Offset_LocalPlayers = 0x0068;
constexpr auto Offset_PlayerController = 0x0030;
constexpr auto Offset_AcknowledgedPawn = 0x0490;
constexpr auto Offset_PlayerCameraManager = 0x04B0;
constexpr auto Offset_LocalPlayersPTR = 0x09266260;

constexpr auto Offset_PlayerState = 0x0418;
constexpr auto Offset_PlayerStatistics = 0x0A48;
constexpr auto Offset_SpectatedCount = 0x28C8;
constexpr auto Offset_LastRenderTime = 0x076C;
constexpr auto Offset_Health = 0x0880;
constexpr auto Offset_GroggyHealth = 0x2258;
constexpr auto Offset_Team = 0x1078;
constexpr auto Offset_LastTeamNum = 0x1080;
constexpr auto Offset_CharacterName = 0x13C0;
constexpr auto Offset_LastAimOffsets = 0x16AC;
constexpr auto Offset_AimOffsets = 0x16A0;
constexpr auto Offset_ControlRotation = 0x045C;
constexpr auto Offset_ComponentVelocity = 0x0360;

constexpr auto Offset_RootComponent = 0x02A0;
constexpr auto Offset_ComponentLocation = 0x0320;

constexpr auto Offset_Mesh = 0x0468;
constexpr auto Offset_StaticMesh = 0x0AE0;
constexpr auto Offset_ComponentToWorld = 0x0310;

constexpr auto Offset_CameraLocation = 0x1714;
constexpr auto Offset_CameraRotation = 0x1C90;
constexpr auto Offset_CameraFov = 0x1C9C;

constexpr auto Offset_ItemPackage = 0x0570;
constexpr auto Offset_ItemInformationComponent = 0x00A8;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0430;
constexpr auto Offset_DroppedItemGroup = 0x02A8;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0748;

constexpr auto Offset_WeaponProcessor = 0x0898;
constexpr auto Offset_EquippedWeapons = 0x01F8;
constexpr auto Offset_CurrentWeaponIndex = 0x02D9;
constexpr auto Offset_WeaponTrajectoryData = 0x1000;
constexpr auto Offset_TrajectoryGravityZ = 0x0FC4;
constexpr auto Offset_TrajectoryConfig = 0x0100;
constexpr auto Offset_FloatCurves = 0x0030;
constexpr auto Offset_CharacterMovement = 0x0478;
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

constexpr auto Offset_VehicleRiderComponent = 0x1C60;
constexpr auto Offset_SeatIndex = 0x0218;
constexpr auto Offset_LastVehiclePawn = 0x0250;
constexpr auto Offset_ReplicatedMovement = 0x0078;

constexpr auto Offset_BackpackState = 0x0933A8B1;
constexpr auto Offset_IsHall = 0x08F28AF8;
constexpr auto Offset_MapState = 0x06D0;
constexpr auto Offset_WorldOrigin = 0x0110;

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
constexpr auto Offset_GameState = 0x0610;
constexpr auto Offset_TotalWarningDuration = 0x04A4;

constexpr auto Offset_NumAlivePlayers = 0x0498;
constexpr auto Offset_NumJoinPlayers = 0x0730;

constexpr auto Offset_LerpSafetyZonePosition = 0x052C;
constexpr auto Offset_LerpSafetyZoneRadius = 0x06DC;

constexpr auto Offset_PoisonGasWarningPosition = 0x050C;
constexpr auto Offset_PoisonGasWarningRadius = 0x04EC;

constexpr auto Offset_RedZonePosition = 0x0548;
constexpr auto Offset_RedZoneRadius = 0x04FC;

constexpr auto Offset_BlackZonePosition = 0x0AF0;
constexpr auto Offset_BlackZoneRadius = 0x0AFC;

constexpr auto Offset_SafetyZoneBeginPosition = 0x077C;
constexpr auto Offset_SafetyZoneRadius = 0x0748;
#endif
