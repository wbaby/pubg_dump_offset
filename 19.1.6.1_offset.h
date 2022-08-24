#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x08BF4AA0;
constexpr auto Offset_GWorld = 0x08C35F50;
constexpr auto Offset_XenuineDecrypt = 0x07023928;
constexpr auto Offset_FNameEntry = 0x08E0A1A0;
constexpr auto Offset_ChunkSize = 0x4138;
constexpr auto Offset_ObjID = 0x0024;

constexpr auto Offset_CurrentLevel = 0x0730;
constexpr auto Offset_Actors = 0x0088;
constexpr auto Offset_GameInstance = 0x0940;
constexpr auto Offset_LocalPlayers = 0x00C0;
constexpr auto Offset_PlayerController = 0x0038;
constexpr auto Offset_AcknowledgedPawn = 0x0490;
constexpr auto Offset_PlayerCameraManager = 0x04B0;
constexpr auto Offset_LocalPlayersPTR = 0x08D6DD60;

constexpr auto Offset_PlayerState = 0x0420;
constexpr auto Offset_PlayerStatistics = 0x0838;
constexpr auto Offset_SpectatedCount = 0x1484;
constexpr auto Offset_LastRenderTime = 0x077C;
constexpr auto Offset_Health = 0x21E0;
constexpr auto Offset_GroggyHealth = 0x1B90;
constexpr auto Offset_LastTeamNum = 0x13C0;
constexpr auto Offset_CharacterName = 0x13E0;
constexpr auto Offset_LastAimOffsets = 0x171C;
constexpr auto Offset_AimOffsets = 0x1710;
constexpr auto Offset_ControlRotation = 0x044C;
constexpr auto Offset_IsScope = 0x0A54;

constexpr auto Offset_RootComponent = 0x01C8;
constexpr auto Offset_ComponentLocation = 0x0230;

constexpr auto Offset_Mesh = 0x04E8;
constexpr auto Offset_StaticMesh = 0x0AF0;
constexpr auto Offset_ComponentToWorld = 0x0220;

constexpr auto Offset_CameraLocation = 0x1C0C;
constexpr auto Offset_CameraRotation = 0x1670;
constexpr auto Offset_CameraFov = 0x1C00;

constexpr auto Offset_ItemPackage = 0x0570;
constexpr auto Offset_ItemInformationComponent = 0x00B0;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0430;
constexpr auto Offset_DroppedItemGroup = 0x02D0;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0738;

constexpr auto Offset_WeaponProcessor = 0x1070;
constexpr auto Offset_EquippedWeapons = 0x02B8;
constexpr auto Offset_CurrentWeaponIndex = 0x02D9;
constexpr auto Offset_WeaponTrajectoryData = 0x0FF8;
constexpr auto Offset_TrajectoryGravityZ = 0x0F98;
constexpr auto Offset_TrajectoryConfig = 0x0108;
constexpr auto Offset_FloatCurves = 0x0038;
constexpr auto Offset_CharacterMovement = 0x04C8;
constexpr auto Offset_Acceleration = 0x03A8;
constexpr auto Offset_MaxAcceleration = 0x0308;
constexpr auto Offset_LastUpdateVelocity = 0x03D0;

constexpr auto Offset_AnimScriptInstance = 0x0C90;
constexpr auto Offset_ControlRotation_CP = 0x0734;
constexpr auto Offset_RecoilADSRotation_CP = 0x09C4;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DD4;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DD8;

constexpr auto Offset_VehicleRiderComponent = 0x1C78;
constexpr auto Offset_SeatIndex = 0x0228;
constexpr auto Offset_LastVehiclePawn = 0x0260;
constexpr auto Offset_ReplicatedMovement = 0x0080;

constexpr auto Offset_BackpackState = 0x08E3AEF3;
constexpr auto Offset_IsHall = 0x08A38C38;
constexpr auto Offset_MapState = 0x06D0;
constexpr auto Offset_WorldToMap = 0x011C;

constexpr auto Offset_XorKey1 = 0xB4C55ED6;
constexpr auto Offset_XorKey2 = 0x13EACF89;
constexpr auto Offset_RorValue = 0x04;
constexpr auto Offset_IsingRor = true;

#endif
