#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x08D510A0;
constexpr auto Offset_GWorld = 0x08D92500;
constexpr auto Offset_XenuineDecrypt = 0x07168728;
constexpr auto Offset_FNameEntry = 0x08F675A0;
constexpr auto Offset_ChunkSize = 0x4040;
constexpr auto Offset_ObjID = 0x000C;

constexpr auto Offset_XorKey1 = 0xD6657937;
constexpr auto Offset_XorKey2 = 0x52AF7AF6;
constexpr auto Offset_RorValue = 0x03;
constexpr auto Offset_IsingRor = false;

constexpr auto Offset_CurrentLevel = 0x03D0;
constexpr auto Offset_Actors = 0x00C0;
constexpr auto Offset_GameInstance = 0x09A0;
constexpr auto Offset_LocalPlayers = 0x0040;
constexpr auto Offset_PlayerController = 0x0038;
constexpr auto Offset_AcknowledgedPawn = 0x0480;
constexpr auto Offset_PlayerCameraManager = 0x04A0;
constexpr auto Offset_LocalPlayersPTR = 0x08ECA770;

constexpr auto Offset_PlayerState = 0x0430;
constexpr auto Offset_PlayerStatistics = 0x0A2C;
constexpr auto Offset_DamageDealtOnEnemy = 0x0A00;
constexpr auto Offset_SpectatedCount = 0x1314;
constexpr auto Offset_LastRenderTime = 0x076C;
constexpr auto Offset_Health = 0x1958;
constexpr auto Offset_GroggyHealth = 0x1BA4;
constexpr auto Offset_LastTeamNum = 0x2228;
constexpr auto Offset_LastSquadMemberIndex = 0x2230;
constexpr auto Offset_CharacterName = 0x1388;
constexpr auto Offset_LastAimOffsets = 0x15CC;
constexpr auto Offset_AimOffsets = 0x15C0;
constexpr auto Offset_ControlRotation = 0x0450;
constexpr auto Offset_IsScope = 0x0A44;

constexpr auto Offset_RootComponent = 0x01C8;
constexpr auto Offset_ComponentLocation = 0x02B0;

constexpr auto Offset_Mesh = 0x04C0;
constexpr auto Offset_StaticMesh = 0x0AE0;
constexpr auto Offset_ComponentToWorld = 0x02A0;

constexpr auto Offset_CameraLocation = 0x1CBC;
constexpr auto Offset_CameraRotation = 0x1730;
constexpr auto Offset_CameraFov = 0x1CD4;

constexpr auto Offset_ItemPackage = 0x0568;
constexpr auto Offset_ItemInformationComponent = 0x00B0;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0428;
constexpr auto Offset_DroppedItemGroup = 0x0048;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0738;

constexpr auto Offset_WeaponProcessor = 0x1340;
constexpr auto Offset_EquippedWeapons = 0x02B8;
constexpr auto Offset_CurrentWeaponIndex = 0x02D9;
constexpr auto Offset_WeaponTrajectoryData = 0x1000;
constexpr auto Offset_TrajectoryGravityZ = 0x0F80;
constexpr auto Offset_TrajectoryConfig = 0x0108;
constexpr auto Offset_FloatCurves = 0x0038;
constexpr auto Offset_CharacterMovement = 0x0548;
constexpr auto Offset_Acceleration = 0x03A8;
constexpr auto Offset_MaxAcceleration = 0x0308;
constexpr auto Offset_LastUpdateVelocity = 0x03D0;

constexpr auto Offset_AnimScriptInstance = 0x0C80;
constexpr auto Offset_ControlRotation_CP = 0x0774;
constexpr auto Offset_RecoilADSRotation_CP = 0x09CC;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DDC;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DE0;

constexpr auto Offset_VehicleRiderComponent = 0x1C28;
constexpr auto Offset_SeatIndex = 0x0228;
constexpr auto Offset_LastVehiclePawn = 0x0260;
constexpr auto Offset_ReplicatedMovement = 0x00B8;

constexpr auto Offset_BackpackState = 0x08F98389;
constexpr auto Offset_IsHall = 0x08B94F38;
constexpr auto Offset_MapState = 0x06C0;
constexpr auto Offset_WorldOrigin = 0x08C4;

//TslWheeledVehicle
constexpr auto Offset_VehicleCommonComponent = 0x0B40;
constexpr auto Offset_vehiclesHealth = 0x02D8;
constexpr auto Offset_vehiclesHealthMax = 0x02DC;
constexpr auto Offset_vehiclesFuel = 0x02E0;
constexpr auto Offset_vehiclesFuelMax = 0x02E4;

//ATslGameState
constexpr auto Offset_GameState = 0x0360;

constexpr auto Offset_TotalWarningDuration = 0x0708;
constexpr auto Offset_NumAlivePlayers = 0x071C;
constexpr auto Offset_NumJoinPlayers = 0x06D0;

constexpr auto Offset_LerpSafetyZonePosition = 0x0778;
constexpr auto Offset_LerpSafetyZoneRadius = 0x04D8;

constexpr auto Offset_PoisonGasWarningPosition = 0x04BC;
constexpr auto Offset_PoisonGasWarningRadius = 0x04AC;

constexpr auto Offset_RedZonePosition = 0x0710;
constexpr auto Offset_RedZoneRadius = 0x04D4;

constexpr auto Offset_BlackZonePosition = 0x0AF0;
constexpr auto Offset_BlackZoneRadius = 0x0AFC;

constexpr auto Offset_SafetyZoneBeginPosition = 0x0480;
constexpr auto Offset_SafetyZoneRadius = 0x0698;

#endif
