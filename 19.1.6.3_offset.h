#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x08C80AA0;
constexpr auto Offset_GWorld = 0x08CC1F50;
constexpr auto Offset_XenuineDecrypt = 0x0708D028;
constexpr auto Offset_FNameEntry = 0x08E961A0;
constexpr auto Offset_ChunkSize = 0x3EB0;
constexpr auto Offset_ObjID = 0x0010;

constexpr auto Offset_CurrentLevel = 0x00D0;
constexpr auto Offset_Actors = 0x0048;
constexpr auto Offset_GameInstance = 0x0210;
constexpr auto Offset_LocalPlayers = 0x00D0;
constexpr auto Offset_PlayerController = 0x0038;
constexpr auto Offset_AcknowledgedPawn = 0x0478;
constexpr auto Offset_PlayerCameraManager = 0x0498;
constexpr auto Offset_LocalPlayersPTR = 0x08DF9D50;

constexpr auto Offset_PlayerState = 0x0408;
constexpr auto Offset_PlayerStatistics = 0x0968;
constexpr auto Offset_SpectatedCount = 0x1024;
constexpr auto Offset_LastRenderTime = 0x076C;
constexpr auto Offset_Health = 0x0AE4;
constexpr auto Offset_GroggyHealth = 0x12AC;
constexpr auto Offset_LastTeamNum = 0x10E8;
constexpr auto Offset_CharacterName = 0x0F88;
constexpr auto Offset_AimOffsets = 0x1740;
constexpr auto Offset_ControlRotation = 0x0448;
constexpr auto Offset_IsScope = 0x0A44;

constexpr auto Offset_RootComponent = 0x0388;
constexpr auto Offset_ComponentLocation = 0x02C0;

constexpr auto Offset_Mesh = 0x0540;
constexpr auto Offset_StaticMesh = 0x0AE0;
constexpr auto Offset_ComponentToWorld = 0x02B0;

constexpr auto Offset_CameraLocation = 0x0A50;
constexpr auto Offset_CameraRotation = 0x0A3C;
constexpr auto Offset_CameraFov = 0x0A20;

constexpr auto Offset_ItemPackage = 0x0560;
constexpr auto Offset_ItemInformationComponent = 0x00B0;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0420;
constexpr auto Offset_DroppedItemGroup = 0x0280;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0728;

constexpr auto Offset_WeaponProcessor = 0x1368;
constexpr auto Offset_EquippedWeapons = 0x02B8;
constexpr auto Offset_CurrentWeaponIndex = 0x02D9;
constexpr auto Offset_WeaponTrajectoryData = 0x1008;
constexpr auto Offset_TrajectoryGravityZ = 0x0F48;
constexpr auto Offset_TrajectoryConfig = 0x0108;
constexpr auto Offset_FloatCurves = 0x0038;
constexpr auto Offset_CharacterMovement = 0x0450;
constexpr auto Offset_Acceleration = 0x03A8;
constexpr auto Offset_MaxAcceleration = 0x0308;
constexpr auto Offset_LastUpdateVelocity = 0x03D0;

constexpr auto Offset_AnimScriptInstance = 0x0C80;
constexpr auto Offset_ControlRotation_CP = 0x0734;
constexpr auto Offset_RecoilADSRotation_CP = 0x09C4;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DD4;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DD8;

constexpr auto Offset_VehicleRiderComponent = 0x1C28;
constexpr auto Offset_SeatIndex = 0x0228;
constexpr auto Offset_LastVehiclePawn = 0x0260;
constexpr auto Offset_ReplicatedMovement = 0x0060;

constexpr auto Offset_BackpackState = 0x08EC6EE3;
constexpr auto Offset_IsHall = 0x08AC4C38;
constexpr auto Offset_MapState = 0x06B8;
constexpr auto Offset_WorldToMap = 0x0168;

constexpr auto Offset_XorKey1 = 0x6428D89B;
constexpr auto Offset_XorKey2 = 0xB3BC2464;
constexpr auto Offset_RorValue = 0x09;
constexpr auto Offset_IsingRor = true;

#endif
