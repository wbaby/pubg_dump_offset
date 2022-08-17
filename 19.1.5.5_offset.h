#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x08C8EB20;
constexpr auto Offset_GWorld = 0x08CCFFD0;
constexpr auto Offset_XenuineDecrypt = 0x0709C328;
constexpr auto Offset_FNameEntry = 0x08EA4210;
constexpr auto Offset_ChunkSize = 0x3EB0;
constexpr auto Offset_ObjID = 0x0020;

constexpr auto Offset_CurrentLevel = 0x00D8;
constexpr auto Offset_Actors = 0x00B0;
constexpr auto Offset_GameInstance = 0x09A0;
constexpr auto Offset_LocalPlayers = 0x00E0;
constexpr auto Offset_PlayerController = 0x0030;
constexpr auto Offset_AcknowledgedPawn = 0x0490;
constexpr auto Offset_PlayerCameraManager = 0x04B0;
constexpr auto Offset_LocalPlayersPTR = 0x08E07DC0;

constexpr auto Offset_PlayerState = 0x0420;
constexpr auto Offset_PlayerStatistics = 0x09B8;
constexpr auto Offset_SpectatedCount = 0x1C18;
constexpr auto Offset_LastRenderTime = 0x076C;
constexpr auto Offset_Health = 0x13C8;
constexpr auto Offset_GroggyHealth = 0x1538;
constexpr auto Offset_LastTeamNum = 0x1170;
constexpr auto Offset_CharacterName = 0x2248;
constexpr auto Offset_LastAimOffsets = 0x175C;
constexpr auto Offset_AimOffsets = 0x1750;
constexpr auto Offset_ControlRotation = 0x0430;
constexpr auto Offset_IsScope = 0x0A54;

constexpr auto Offset_RootComponent = 0x02C8;
constexpr auto Offset_ComponentLocation = 0x0240;

constexpr auto Offset_Mesh = 0x0460;
constexpr auto Offset_StaticMesh = 0x0AE0;
constexpr auto Offset_ComponentToWorld = 0x0230;

constexpr auto Offset_CameraLocation = 0x0428;
constexpr auto Offset_CameraRotation = 0x0434;
constexpr auto Offset_CameraFov = 0x0450;

constexpr auto Offset_ItemPackage = 0x0570;
constexpr auto Offset_ItemInformationComponent = 0x00A8;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0430;
constexpr auto Offset_DroppedItemGroup = 0x01B8;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0728;

constexpr auto Offset_WeaponProcessor = 0x0FC0;
constexpr auto Offset_EquippedWeapons = 0x02A8;
constexpr auto Offset_CurrentWeaponIndex = 0x02C9;
constexpr auto Offset_WeaponTrajectoryData = 0x1000;
constexpr auto Offset_TrajectoryGravityZ = 0x0F6C;
constexpr auto Offset_TrajectoryConfig = 0x0100;
constexpr auto Offset_FloatCurves = 0x0030;
constexpr auto Offset_CharacterMovement = 0x04E8;
constexpr auto Offset_Acceleration = 0x0398;
constexpr auto Offset_MaxAcceleration = 0x02F8;
constexpr auto Offset_LastUpdateVelocity = 0x03C0;

constexpr auto Offset_AnimScriptInstance = 0x0C80;
constexpr auto Offset_ControlRotation_CP = 0x072C;
constexpr auto Offset_RecoilADSRotation_CP = 0x09C4;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DD4;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DD8;

constexpr auto Offset_VehicleRiderComponent = 0x1CA0;
constexpr auto Offset_SeatIndex = 0x0218;
constexpr auto Offset_LastVehiclePawn = 0x0250;
constexpr auto Offset_ReplicatedMovement = 0x0078;

constexpr auto Offset_BackpackState = 0x08ED4F63;
constexpr auto Offset_IsHall = 0x08AD2CB8;
constexpr auto Offset_MapState = 0x06D0;
constexpr auto Offset_WorldToMap = 0x07B0;

constexpr auto Offset_XorKey1 = 0xFD6F6B5D;
constexpr auto Offset_XorKey2 = 0x32961BC8;
constexpr auto Offset_RorValue = 0x08;
constexpr auto Offset_IsingRor = false;

#endif
