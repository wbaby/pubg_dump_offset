#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x09262F20;
constexpr auto Offset_GWorld = 0x092A4570;
constexpr auto Offset_XenuineDecrypt = 0x07C7AD28;
constexpr auto Offset_FNameEntry = 0x09489EF8;
constexpr auto Offset_ChunkSize = 0x4160;

constexpr auto Offset_CurrentLevel = 0x07C8;
constexpr auto Offset_Actors = 0x0048;
constexpr auto Offset_GameInstance = 0x0218;
constexpr auto Offset_LocalPlayers = 0x00D8;
constexpr auto Offset_PlayerController = 0x0030;
constexpr auto Offset_AcknowledgedPawn = 0x0480;
constexpr auto Offset_PlayerCameraManager = 0x04A0;
constexpr auto Offset_LocalPlayersPTR = 0x093E4550;

constexpr auto Offset_LineTraceSingle = 0x05D0F21C;
constexpr auto Offset_GameWindowSize = 0x09072120;
constexpr auto Offset_CheckTab = 0x094BAF29;
constexpr auto Offset_IsGameInlobby = 0x090A19F8;

constexpr auto Offset_InactiveStateInputComponent = 0x06C0;
constexpr auto Offset_WorldOrigin = 0x02B0;
constexpr auto Offset_MyHUD = 0x0498;
constexpr auto Offset_BlockInputWidgetList = 0x0558;
constexpr auto Offset_TrainingMapGrid = 0x06A8;
constexpr auto Offset_Slot = 0x0030;
constexpr auto Offset_LayoutData = 0x0038;
constexpr auto Offset_WidgetStateMap = 0x04F0;
constexpr auto Offset_SelectMinimapSizeIndex = 0x05B8;
constexpr auto Offset_Visibility = 0x00A1;

constexpr auto Offset_PlayerState = 0x0420;
constexpr auto Offset_PlayerStatistics = 0x0A68;
constexpr auto Offset_DamageDealtOnEnemy = 0x0830;
constexpr auto Offset_PubgIdData = 0x0CA0;
constexpr auto Offset_SpectatedCount = 0x1358;
constexpr auto Offset_LastRenderTime = 0x076C;
constexpr auto Offset_Health = 0x0868;
constexpr auto Offset_GroggyHealth = 0x281C;
constexpr auto Offset_Team = 0x0FA8;
constexpr auto Offset_LastTeamNum = 0x0FB0;
constexpr auto Offset_LastSquadMemberIndex = 0x0FB8;
constexpr auto Offset_CharacterName = 0x1360;
constexpr auto Offset_AimOffsets = 0x1730;
constexpr auto Offset_ControlRotation = 0x0440;
constexpr auto Offset_AttachParent = 0x0290;
constexpr auto Offset_bActorEnableCollision = 0x0058;

constexpr auto Offset_RootComponent = 0x0108;
constexpr auto Offset_ComponentLocation = 0x0220;

constexpr auto Offset_Mesh = 0x04B8;
constexpr auto Offset_StaticMesh = 0x0AE0;
constexpr auto Offset_ComponentToWorld = 0x0210;

constexpr auto Offset_CameraLocation = 0x1068;
constexpr auto Offset_CameraRotation = 0x1054;
constexpr auto Offset_CameraFov = 0x107C;

constexpr auto Offset_ItemPackage = 0x0560;
constexpr auto Offset_ItemInformationComponent = 0x00A8;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0428;
constexpr auto Offset_DroppedItemGroup = 0x02B0;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0748;

constexpr auto Offset_WeaponProcessor = 0x0880;
constexpr auto Offset_EquippedWeapons = 0x01F8;
constexpr auto Offset_CurrentWeaponIndex = 0x02F9;
constexpr auto Offset_WeaponTrajectoryData = 0x1008;
constexpr auto Offset_TrajectoryGravityZ = 0x0F7C;
constexpr auto Offset_TrajectoryConfig = 0x0100;
constexpr auto Offset_FloatCurves = 0x0030;
constexpr auto Offset_CharacterMovement = 0x0518;
constexpr auto Offset_Acceleration = 0x0398;
constexpr auto Offset_MaxAcceleration = 0x02F8;
constexpr auto Offset_LastUpdateVelocity = 0x03C0;

constexpr auto Offset_AnimScriptInstance = 0x0C80;
constexpr auto Offset_ControlRotation_CP = 0x076C;
constexpr auto Offset_RecoilADSRotation_CP = 0x09CC;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DE4;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DE8;

constexpr auto Offset_VehicleRiderComponent = 0x1C68;
constexpr auto Offset_SeatIndex = 0x0218;
constexpr auto Offset_LastVehiclePawn = 0x0250;
constexpr auto Offset_ReplicatedMovement = 0x0078;

#endif
