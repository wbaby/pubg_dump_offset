#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x08D2EFA0;
constexpr auto Offset_GWorld = 0x08D70400;
constexpr auto Offset_XenuineDecrypt = 0x07147628;
constexpr auto Offset_FNameEntry = 0x08F454A0;
constexpr auto Offset_ChunkSize = 0x3F9C;
constexpr auto Offset_ObjID = 0x000C;

constexpr auto Offset_XorKey1 = 0xEC29E8FD;
constexpr auto Offset_XorKey2 = 0xD40496DF;
constexpr auto Offset_RorValue = 0x03;
constexpr auto Offset_IsingRor = true;

constexpr auto Offset_CurrentLevel = 0x0800;
constexpr auto Offset_Actors = 0x00D0;
constexpr auto Offset_GameInstance = 0x0920;
constexpr auto Offset_LocalPlayers = 0x0068;
constexpr auto Offset_PlayerController = 0x0030;
constexpr auto Offset_AcknowledgedPawn = 0x0468;
constexpr auto Offset_PlayerCameraManager = 0x0488;
constexpr auto Offset_LocalPlayersPTR = 0x08EA8660;

constexpr auto Offset_PlayerState = 0x0418;
constexpr auto Offset_PlayerStatistics = 0x0A08;
constexpr auto Offset_SpectatedCount = 0x1A5C;
constexpr auto Offset_LastSubmitTime = 0x0768;
constexpr auto Offset_LastRenderTime = 0x076C;
constexpr auto Offset_LastRenderTimeOnScreen = 0x0770;
constexpr auto Offset_Health = 0x0F64;
constexpr auto Offset_GroggyHealth = 0x1A40;
constexpr auto Offset_LastTeamNum = 0x21C8;
constexpr auto Offset_LastSquadMemberIndex = 0x21D0;
constexpr auto Offset_CharacterName = 0x2158;
constexpr auto Offset_AimOffsets = 0x1460;
constexpr auto Offset_ControlRotation = 0x0430;
constexpr auto Offset_IsScope = 0x0A34;

constexpr auto Offset_RootComponent = 0x01B8;
constexpr auto Offset_ComponentLocation = 0x02E0;

constexpr auto Offset_Mesh = 0x0448;
constexpr auto Offset_StaticMesh = 0x0AE0;
constexpr auto Offset_ComponentToWorld = 0x02D0;

constexpr auto Offset_CameraLocation = 0x0A10;
constexpr auto Offset_CameraRotation = 0x0A30;
constexpr auto Offset_CameraFov = 0x0FC4;

constexpr auto Offset_ItemPackage = 0x0550;
constexpr auto Offset_ItemInformationComponent = 0x00A8;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0410;
constexpr auto Offset_DroppedItemGroup = 0x0038;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0738;

constexpr auto Offset_WeaponProcessor = 0x0E38;
constexpr auto Offset_EquippedWeapons = 0x02A8;
constexpr auto Offset_CurrentWeaponIndex = 0x02C9;
constexpr auto Offset_WeaponTrajectoryData = 0x1000;
constexpr auto Offset_TrajectoryGravityZ = 0x0F9C;
constexpr auto Offset_TrajectoryConfig = 0x0100;
constexpr auto Offset_FloatCurves = 0x0030;
constexpr auto Offset_CharacterMovement = 0x0530;
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

constexpr auto Offset_VehicleRiderComponent = 0x1BF0;
constexpr auto Offset_SeatIndex = 0x0218;
constexpr auto Offset_LastVehiclePawn = 0x0250;
constexpr auto Offset_ReplicatedMovement = 0x00B8;

constexpr auto Offset_BackpackState = 0x08F76279;
constexpr auto Offset_IsHall = 0x08B72E78;
constexpr auto Offset_MapState = 0x06A8;
constexpr auto Offset_WorldOrigin = 0x07EC;

//TslWheeledVehicle
constexpr auto Offset_VehicleCommonComponent = 0x0B20;
constexpr auto Offset_vehiclesHealth = 0x02C8;
constexpr auto Offset_vehiclesHealthMax = 0x02CC;
constexpr auto Offset_vehiclesFuel = 0x02D0;
constexpr auto Offset_vehiclesFuelMax = 0x02D4;

//ATslGameState
constexpr auto Offset_GameState = 0x0858;

constexpr auto Offset_TotalWarningDuration = 0x06F4;
constexpr auto Offset_NumAlivePlayers = 0x06B8;
constexpr auto Offset_NumJoinPlayers = 0x04C4;

constexpr auto Offset_LerpSafetyZonePosition = 0x04C8;
constexpr auto Offset_LerpSafetyZoneRadius = 0x0694;

constexpr auto Offset_PoisonGasWarningPosition = 0x06D8;
constexpr auto Offset_PoisonGasWarningRadius = 0x0484;

constexpr auto Offset_RedZonePosition = 0x04F0;
constexpr auto Offset_RedZoneRadius = 0x06C0;

constexpr auto Offset_BlackZonePosition = 0x0AB0;
constexpr auto Offset_BlackZoneRadius = 0x0ABC;

constexpr auto Offset_SafetyZoneBeginPosition = 0x04D4;
constexpr auto Offset_SafetyZoneRadius = 0x06BC;

#endif
