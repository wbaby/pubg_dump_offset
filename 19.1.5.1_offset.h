#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x08CCEB20;
constexpr auto Offset_GWorld = 0x08D0FFD0;
constexpr auto Offset_XenuineDecrypt = 0x070E3D28;
constexpr auto Offset_FNameEntry = 0x08EE4250;
constexpr auto Offset_ChunkSize = 0x41A4;
constexpr auto Offset_ObjID = 0x0008;

constexpr auto Offset_CurrentLevel = 0x00B8;
constexpr auto Offset_Actors = 0x0148;
constexpr auto Offset_GameInstance = 0x0738;
constexpr auto Offset_LocalPlayers = 0x00E8;
constexpr auto Offset_PlayerController = 0x0030;
constexpr auto Offset_AcknowledgedPawn = 0x0480;
constexpr auto Offset_PlayerCameraManager = 0x04A0;
constexpr auto Offset_LocalPlayersPTR = 0x08E47DF0;

constexpr auto Offset_PlayerState = 0x0428;
constexpr auto Offset_PlayerStatistics = 0x09B8;
constexpr auto Offset_SpectatedCount = 0x0E9C;
constexpr auto Offset_LastRenderTime = 0x076C;
constexpr auto Offset_Health = 0x1878;
constexpr auto Offset_GroggyHealth = 0x1874;
constexpr auto Offset_LastTeamNum = 0x1BE0;
constexpr auto Offset_CharacterName = 0x0F90;
constexpr auto Offset_BaseAnimInstance = 0x2B28;
constexpr auto Offset_LastAimOffsets = 0x152C;
constexpr auto Offset_AimOffsets = 0x1520;
constexpr auto Offset_IsScope = 0x0A44;

constexpr auto Offset_RootComponent = 0x0100;
constexpr auto Offset_ComponentLocation = 0x0270;

constexpr auto Offset_Mesh = 0x0550;
constexpr auto Offset_StaticMesh = 0x0AE0;
constexpr auto Offset_ComponentToWorld = 0x0260;

constexpr auto Offset_CameraLocation = 0x1CBC;
constexpr auto Offset_CameraRotation = 0x1CA8;
constexpr auto Offset_CameraFov = 0x1720;

constexpr auto Offset_ItemPackage = 0x0568;
constexpr auto Offset_ItemInformationComponent = 0x00A8;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0428;
constexpr auto Offset_DroppedItemGroup = 0x0138;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0728;

constexpr auto Offset_WeaponProcessor = 0x1B90;
constexpr auto Offset_EquippedWeapons = 0x02A8;
constexpr auto Offset_CurrentWeaponIndex = 0x02C9;
constexpr auto Offset_WeaponTrajectoryData = 0x1008;
constexpr auto Offset_TrajectoryGravityZ = 0x0F64;
constexpr auto Offset_TrajectoryConfig = 0x0100;
constexpr auto Offset_FloatCurves = 0x0030;
constexpr auto Offset_CharacterMovement = 0x0508;
constexpr auto Offset_Acceleration = 0x0398;
constexpr auto Offset_MaxAcceleration = 0x02F8;
constexpr auto Offset_LastUpdateVelocity = 0x03C0;

constexpr auto Offset_AnimScriptInstance = 0x0C80;
constexpr auto Offset_ControlRotation_CP = 0x072C;
constexpr auto Offset_RecoilADSRotation_CP = 0x09C4;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DD4;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DD8;

constexpr auto Offset_VehicleRiderComponent = 0x1C68;
constexpr auto Offset_SeatIndex = 0x0218;
constexpr auto Offset_LastVehiclePawn = 0x0250;
constexpr auto Offset_ReplicatedMovement = 0x0068;

constexpr auto Offset_BackpackState = 0x08F14FA3;
constexpr auto Offset_IsHall = 0x08B12C78;
constexpr auto Offset_MapState = 0x06C0;
constexpr auto Offset_WorldToMap = 0x0030;

constexpr auto Offset_XorKey1 = 0xA67CF4A6;
constexpr auto Offset_XorKey2 = 0xDA52ECF6;
constexpr auto Offset_RorValue = 0x0A;
constexpr auto Offset_IsingRor = true;

#endif