#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x08CFA0A0;
constexpr auto Offset_GWorld = 0x08D3B500;
constexpr auto Offset_XenuineDecrypt = 0x07117628;
constexpr auto Offset_FNameEntry = 0x08F105A0;
constexpr auto Offset_ChunkSize = 0x41B8;
constexpr auto Offset_ObjID = 0x0024;

constexpr auto Offset_XorKey1 = 0x65D2A73B;
constexpr auto Offset_XorKey2 = 0xE9C2FC83;
constexpr auto Offset_RorValue = 0x02;
constexpr auto Offset_IsingRor = true;

constexpr auto Offset_CurrentLevel = 0x08E8;
constexpr auto Offset_Actors = 0x0110;
constexpr auto Offset_GameInstance = 0x02B0;
constexpr auto Offset_LocalPlayers = 0x0060;
constexpr auto Offset_PlayerController = 0x0038;
constexpr auto Offset_AcknowledgedPawn = 0x0478;
constexpr auto Offset_PlayerCameraManager = 0x0498;
constexpr auto Offset_LocalPlayersPTR = 0x08E73770;

constexpr auto Offset_PlayerState = 0x0420;
constexpr auto Offset_PlayerStatistics = 0x04B8;
constexpr auto Offset_SpectatedCount = 0x0F0C;
constexpr auto Offset_LastRenderTime = 0x077C;
constexpr auto Offset_Health = 0x1AE0;
constexpr auto Offset_GroggyHealth = 0x10D0;
constexpr auto Offset_LastTeamNum = 0x1AA0;
constexpr auto Offset_LastSquadMemberIndex = 0x1AA8;
constexpr auto Offset_CharacterName = 0x0F90;
constexpr auto Offset_LastAimOffsets = 0x167C;
constexpr auto Offset_AimOffsets = 0x1670;
constexpr auto Offset_ControlRotation = 0x0448;

constexpr auto Offset_RootComponent = 0x03A0;
constexpr auto Offset_ComponentLocation = 0x02A0;

constexpr auto Offset_Mesh = 0x04B0;
constexpr auto Offset_StaticMesh = 0x0AF0;
constexpr auto Offset_ComponentToWorld = 0x0290;

constexpr auto Offset_CameraLocation = 0x1018;
constexpr auto Offset_CameraRotation = 0x103C;
constexpr auto Offset_CameraFov = 0x1038;

constexpr auto Offset_ItemPackage = 0x0560;
constexpr auto Offset_ItemInformationComponent = 0x00B0;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0420;
constexpr auto Offset_DroppedItemGroup = 0x40;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0748;

constexpr auto Offset_WeaponProcessor = 0x1BA8;
constexpr auto Offset_EquippedWeapons = 0x02B8;
constexpr auto Offset_CurrentWeaponIndex = 0x02D9;
constexpr auto Offset_WeaponTrajectoryData = 0x1008;
constexpr auto Offset_TrajectoryGravityZ = 0x0FCC;
constexpr auto Offset_TrajectoryConfig = 0x0108;
constexpr auto Offset_FloatCurves = 0x0038;
constexpr auto Offset_CharacterMovement = 0x0520;
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

constexpr auto Offset_VehicleRiderComponent = 0x1C28;
constexpr auto Offset_SeatIndex = 0x0228;
constexpr auto Offset_LastVehiclePawn = 0x0260;
constexpr auto Offset_ReplicatedMovement = 0x00B0;

constexpr auto Offset_BackpackState = 0x08F41379;
constexpr auto Offset_IsHall = 0x08B3DF38;
constexpr auto Offset_MapState = 0x06B8;
constexpr auto Offset_WorldOrigin = 0x09D0;

//TslWheeledVehicle
constexpr auto Offset_VehicleCommonComponent = 0x0B30;
constexpr auto Offset_vehiclesHealth = 0x02D8;
constexpr auto Offset_vehiclesHealthMax = 0x02DC;
constexpr auto Offset_vehiclesFuel = 0x02E0;
constexpr auto Offset_vehiclesFuelMax = 0x02E4;

//ATslGameState
constexpr auto Offset_GameState = 0x0808;

constexpr auto Offset_TotalWarningDuration = 0x0750;
constexpr auto Offset_NumAlivePlayers = 0x06E0;
constexpr auto Offset_NumJoinPlayers = 0x06F0;

constexpr auto Offset_LerpSafetyZonePosition = 0x06F4;
constexpr auto Offset_LerpSafetyZoneRadius = 0x0480;

constexpr auto Offset_PoisonGasWarningPosition = 0x0518;
constexpr auto Offset_PoisonGasWarningRadius = 0x0754;

constexpr auto Offset_RedZonePosition = 0x0524;
constexpr auto Offset_RedZoneRadius = 0x054C;

constexpr auto Offset_BlackZonePosition = 0x0AD0;
constexpr auto Offset_BlackZoneRadius = 0x0ADC;

constexpr auto Offset_SafetyZoneBeginPosition = 0x0550;
constexpr auto Offset_SafetyZoneRadius = 0x0760;

#endif
