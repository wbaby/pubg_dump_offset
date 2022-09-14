#pragma once

#ifndef Offset_h
#define Offset_h

//By:Orange

constexpr auto Offset_GObjects = 0x08CC4FA0;
constexpr auto Offset_GWorld = 0x08D06400;
constexpr auto Offset_XenuineDecrypt = 0x070FE828;
constexpr auto Offset_FNameEntry = 0x08EDB550;
constexpr auto Offset_ChunkSize = 0x411C;
constexpr auto Offset_ObjID = 0x0014;

constexpr auto Offset_XorKey1 = 0xF8C77B9A;
constexpr auto Offset_XorKey2 = 0x5D830494;
constexpr auto Offset_RorValue = 0x06;
constexpr auto Offset_IsingRor = true;

constexpr auto Offset_CurrentLevel = 0x0168;
constexpr auto Offset_Actors = 0x00E0;
constexpr auto Offset_GameInstance = 0x07D0;
constexpr auto Offset_LocalPlayers = 0x00D0;
constexpr auto Offset_PlayerController = 0x0030;
constexpr auto Offset_AcknowledgedPawn = 0x0480;
constexpr auto Offset_PlayerCameraManager = 0x04A0;
constexpr auto Offset_LocalPlayersPTR = 0x08E3E690;

constexpr auto Offset_PlayerState = 0x0408;
constexpr auto Offset_PlayerStatistics = 0x097C;
constexpr auto Offset_SpectatedCount = 0x0E70;
constexpr auto Offset_LastRenderTime = 0x076C;
constexpr auto Offset_Health = 0x1104;
constexpr auto Offset_GroggyHealth = 0x12EC;
constexpr auto Offset_LastTeamNum = 0x27B0;
constexpr auto Offset_LastSquadMemberIndex = 0x27B8;
constexpr auto Offset_CharacterName = 0x0F78;
constexpr auto Offset_LastAimOffsets = 0x150C;
constexpr auto Offset_AimOffsets = 0x1500;
constexpr auto Offset_ControlRotation = 0x03F8;
constexpr auto Offset_IsScope = 0x0A44;

constexpr auto Offset_RootComponent = 0x02D0;
constexpr auto Offset_ComponentLocation = 0x0320;

constexpr auto Offset_Mesh = 0x0488;
constexpr auto Offset_StaticMesh = 0x0AE0;
constexpr auto Offset_ComponentToWorld = 0x0310;

constexpr auto Offset_CameraLocation = 0x0FA4;
constexpr auto Offset_CameraRotation = 0x0A18;
constexpr auto Offset_CameraFov = 0x0A14;

constexpr auto Offset_ItemPackage = 0x0560;
constexpr auto Offset_ItemInformationComponent = 0x00A8;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0420;
constexpr auto Offset_DroppedItemGroup = 0x0210;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0738;

constexpr auto Offset_WeaponProcessor = 0x10E8;
constexpr auto Offset_EquippedWeapons = 0x02A8;
constexpr auto Offset_CurrentWeaponIndex = 0x02C9;
constexpr auto Offset_WeaponTrajectoryData = 0x1010;
constexpr auto Offset_TrajectoryGravityZ = 0x0F38;
constexpr auto Offset_TrajectoryConfig = 0x0100;
constexpr auto Offset_FloatCurves = 0x0030;
constexpr auto Offset_CharacterMovement = 0x0450;
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

constexpr auto Offset_VehicleRiderComponent = 0x1B48;
constexpr auto Offset_SeatIndex = 0x0218;
constexpr auto Offset_LastVehiclePawn = 0x0250;
constexpr auto Offset_ReplicatedMovement = 0x0068;

constexpr auto Offset_BackpackState = 0x08F0C319;
constexpr auto Offset_IsHall = 0x08B08E38;
constexpr auto Offset_MapState = 0x06C0;
constexpr auto Offset_WorldLocation = 0x030C;

//TslWheeledVehicle
constexpr auto Offset_VehicleCommonComponent = 0x0B30;
constexpr auto Offset_vehiclesHealth = 0x02C8;
constexpr auto Offset_vehiclesHealthMax = 0x02CC;
constexpr auto Offset_vehiclesFuel = 0x02D0;
constexpr auto Offset_vehiclesFuelMax = 0x02D4;

//ATslGameState
constexpr auto Offset_GameState = 0x09B0;
constexpr auto Offset_TotalWarningDuration = 0x0728;
constexpr auto Offset_NumAlivePlayers = 0x0594;
constexpr auto Offset_NumJoinPlayers = 0x054C;

constexpr auto Offset_LerpSafetyZonePosition = 0x0498;
constexpr auto Offset_LerpSafetyZoneRadius = 0x04E4;

constexpr auto Offset_PoisonGasWarningPosition = 0x0550;
constexpr auto Offset_PoisonGasWarningRadius = 0x056C;

constexpr auto Offset_RedZonePosition = 0x052C;
constexpr auto Offset_RedZoneRadius = 0x0598;

constexpr auto Offset_BlackZonePosition = 0x0AD0;
constexpr auto Offset_BlackZoneRadius = 0x0ADC;

#endif
