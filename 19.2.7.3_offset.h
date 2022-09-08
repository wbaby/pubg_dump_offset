#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x08FEFF20;
constexpr auto Offset_GWorld = 0x09031380;
constexpr auto Offset_XenuineDecrypt = 0x07429928;
constexpr auto Offset_FNameEntry = 0x09206410;
constexpr auto Offset_ChunkSize = 0x3F6C;
constexpr auto Offset_ObjID = 0x000C;

constexpr auto Offset_XorKey1 = 0x520D75E6;
constexpr auto Offset_XorKey2 = 0xEB27ADE8;
constexpr auto Offset_RorValue = 0x0C;
constexpr auto Offset_IsingRor = true;

constexpr auto Offset_CurrentLevel = 0x01A8;
constexpr auto Offset_Actors = 0x0048;
constexpr auto Offset_GameInstance = 0x0248;
constexpr auto Offset_LocalPlayers = 0x00D0;
constexpr auto Offset_PlayerController = 0x0030;
constexpr auto Offset_AcknowledgedPawn = 0x0480;
constexpr auto Offset_PlayerCameraManager = 0x04A0;
constexpr auto Offset_LocalPlayersPTR = 0x091695F0;

constexpr auto Offset_PlayerState = 0x0410;
constexpr auto Offset_PlayerStatistics = 0x0A54;
constexpr auto Offset_SpectatedCount = 0x1438;
constexpr auto Offset_LastRenderTime = 0x076C;
constexpr auto Offset_Health = 0x11E8;
constexpr auto Offset_GroggyHealth = 0x19A4;
constexpr auto Offset_LastTeamNum = 0x1408;
constexpr auto Offset_LastSquadMemberIndex = 0x1410;
constexpr auto Offset_CharacterName = 0x1AE8;
constexpr auto Offset_LastAimOffsets = 0x16BC;
constexpr auto Offset_AimOffsets = 0x16B0;
constexpr auto Offset_ControlRotation = 0x03F0;
constexpr auto Offset_IsScope = 0x0A44;

constexpr auto Offset_RootComponent = 0x0270;
constexpr auto Offset_ComponentLocation = 0x0310;

constexpr auto Offset_Mesh = 0x0480;
constexpr auto Offset_StaticMesh = 0x0AE0;
constexpr auto Offset_ComponentToWorld = 0x0300;

constexpr auto Offset_CameraLocation = 0x15C8;
constexpr auto Offset_CameraRotation = 0x1034;
constexpr auto Offset_CameraFov = 0x15D4;

constexpr auto Offset_ItemPackage = 0x0560;
constexpr auto Offset_ItemInformationComponent = 0x00A8;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0420;
constexpr auto Offset_DroppedItemGroup = 0x01A8;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0738;

constexpr auto Offset_WeaponProcessor = 0x1468;
constexpr auto Offset_EquippedWeapons = 0x02A8;
constexpr auto Offset_CurrentWeaponIndex = 0x02C9;
constexpr auto Offset_WeaponTrajectoryData = 0x1000;
constexpr auto Offset_TrajectoryGravityZ = 0x0F28;
constexpr auto Offset_TrajectoryConfig = 0x0100;
constexpr auto Offset_FloatCurves = 0x0030;
constexpr auto Offset_CharacterMovement = 0x0488;
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

constexpr auto Offset_VehicleRiderComponent = 0x1CC8;
constexpr auto Offset_SeatIndex = 0x0218;
constexpr auto Offset_LastVehiclePawn = 0x0250;
constexpr auto Offset_ReplicatedMovement = 0x0058;

constexpr auto Offset_BackpackState = 0x092371D9;
constexpr auto Offset_IsHall = 0x08E33DF8;
constexpr auto Offset_MapState = 0x06C0;
constexpr auto Offset_WorldLocation = 0x02DC;

//ATslGameState
constexpr auto Offset_GameState = 0x0248;
constexpr auto Offset_TotalWarningDuration = 0x04B4;
constexpr auto Offset_NumAlivePlayers = 0x0474;
constexpr auto Offset_NumJoinPlayers = 0x0748;

constexpr auto Offset_LerpSafetyZonePosition = 0x0738;
constexpr auto Offset_LerpSafetyZoneRadius = 0x04E8;

constexpr auto Offset_PoisonGasWarningPosition = 0x074C;
constexpr auto Offset_PoisonGasWarningRadius = 0x050C;

constexpr auto Offset_RedZonePosition = 0x0548;
constexpr auto Offset_RedZoneRadius = 0x0744;

constexpr auto Offset_BlackZonePosition = 0x0AD0;
constexpr auto Offset_BlackZoneRadius = 0x0ADC;

#endif
