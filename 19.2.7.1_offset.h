#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x08D59F20;
constexpr auto Offset_GWorld = 0x08D9B380;
constexpr auto Offset_XenuineDecrypt = 0x07178E28;
constexpr auto Offset_FNameEntry = 0x08F70440;
constexpr auto Offset_ChunkSize = 0x41F4;
constexpr auto Offset_ObjID = 0x0018;

constexpr auto Offset_CurrentLevel = 0x0808;
constexpr auto Offset_Actors = 0x0250;
constexpr auto Offset_GameInstance = 0x09C8;
constexpr auto Offset_LocalPlayers = 0x00C8;
constexpr auto Offset_PlayerController = 0x0030;
constexpr auto Offset_AcknowledgedPawn = 0x0480;
constexpr auto Offset_PlayerCameraManager = 0x04A0;
constexpr auto Offset_LocalPlayersPTR = 0x08ED3600;

constexpr auto Offset_PlayerState = 0x0430;
constexpr auto Offset_PlayerStatistics = 0x04D8;
constexpr auto Offset_SpectatedCount = 0x21E8;
constexpr auto Offset_LastRenderTime = 0x075C;
constexpr auto Offset_Health = 0x0F2C;
constexpr auto Offset_GroggyHealth = 0x0AE0;
constexpr auto Offset_Team = 0x1B58;
constexpr auto Offset_LastTeamNum = 0x1B60;
constexpr auto Offset_CharacterName = 0x0EE0;
constexpr auto Offset_AimOffsets = 0x1750;
constexpr auto Offset_ControlRotation = 0x03F8;
constexpr auto Offset_IsScope = 0x0A44;

constexpr auto Offset_RootComponent = 0x0260;
constexpr auto Offset_ComponentLocation = 0x0240;

constexpr auto Offset_Mesh = 0x0510;
constexpr auto Offset_StaticMesh = 0x0AD0;
constexpr auto Offset_ComponentToWorld = 0x0230;

constexpr auto Offset_CameraLocation = 0x1744;
constexpr auto Offset_CameraRotation = 0x1754;
constexpr auto Offset_CameraFov = 0x1764;

constexpr auto Offset_ItemPackage = 0x0568;
constexpr auto Offset_ItemInformationComponent = 0x00A8;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0428;
constexpr auto Offset_DroppedItemGroup = 0x0190;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0728;

constexpr auto Offset_WeaponProcessor = 0x1030;
constexpr auto Offset_EquippedWeapons = 0x02A8;
constexpr auto Offset_CurrentWeaponIndex = 0x02C9;
constexpr auto Offset_WeaponTrajectoryData = 0x1008;
constexpr auto Offset_TrajectoryGravityZ = 0x0FE4;
constexpr auto Offset_TrajectoryConfig = 0x0100;
constexpr auto Offset_FloatCurves = 0x0030;
constexpr auto Offset_CharacterMovement = 0x0540;
constexpr auto Offset_Acceleration = 0x0398;
constexpr auto Offset_MaxAcceleration = 0x02F8;
constexpr auto Offset_LastUpdateVelocity = 0x03C0;

constexpr auto Offset_AnimScriptInstance = 0x0C70;
constexpr auto Offset_ControlRotation_CP = 0x076C;
constexpr auto Offset_RecoilADSRotation_CP = 0x09CC;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DDC;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DE0;

constexpr auto Offset_VehicleRiderComponent = 0x1C60;
constexpr auto Offset_SeatIndex = 0x0218;
constexpr auto Offset_LastVehiclePawn = 0x0250;
constexpr auto Offset_ReplicatedMovement = 0x0080;

constexpr auto Offset_BackpackState = 0x08FA1218;
constexpr auto Offset_IsHall = 0x08B9DDF8;
constexpr auto Offset_MapState = 0x06C0;
constexpr auto Offset_WorldToMap = 0x0268;

constexpr auto Offset_XorKey1 = 0x29A03FC5;
constexpr auto Offset_XorKey2 = 0x65160B55;
constexpr auto Offset_RorValue = 0x0D;
constexpr auto Offset_IsingRor = false;

//ATslGameState
constexpr auto Offset_GameState = 0x09C8;
constexpr auto Offset_LerpSafetyZonePosition = 0x048C;
constexpr auto Offset_LerpSafetyZoneRadius = 0x0678;
constexpr auto Offset_PoisonGasWarningPosition = 0x066C;
constexpr auto Offset_PoisonGasWarningRadius = 0x06C8;
constexpr auto Offset_RedZonePosition = 0x06DC;
constexpr auto Offset_RedZoneRadius = 0x0664;
constexpr auto Offset_BlackZonePosition = 0x0AE0;
constexpr auto Offset_BlackZoneRadius = 0x0AEC;
constexpr auto Offset_SafetyZoneBeginPosition = 0x0704;
constexpr auto Offset_SafetyZoneRadius = 0x06CC;

#endif
