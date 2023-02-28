#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x093E7FA0;
constexpr auto Offset_GWorld = 0x094295F0;
constexpr auto Offset_XenuineDecrypt = 0x07E04A28;
constexpr auto Offset_FNameEntry = 0x0960EEF8;
constexpr auto Offset_ChunkSize = 0x40F4;

constexpr auto Offset_ObjID = 0x0028;
constexpr auto Offset_XorKey1 = 0x6253ED2F;
constexpr auto Offset_XorKey2 = 0x7C8F662E;
constexpr auto Offset_RorValue = 0x0001;
constexpr auto Offset_IsingRor = 0x0000;

constexpr auto Offset_CurrentLevel = 0x0260;
constexpr auto Offset_Actors = 0x0150;
constexpr auto Offset_GameInstance = 0x0728;
constexpr auto Offset_LocalPlayers = 0x0048;
constexpr auto Offset_PlayerController = 0x0038;
constexpr auto Offset_AcknowledgedPawn = 0x0490;
constexpr auto Offset_PlayerCameraManager = 0x04B0;
constexpr auto Offset_LocalPlayersPTR = 0x095695D0;

constexpr auto Offset_CurrentBuildNumber = 0x09253C20;
constexpr auto Offset_GameWindowSize = 0x091F7120;
constexpr auto Offset_CheckTab = 0x0963FF19;
constexpr auto Offset_IsGameInlobby = 0x092269B8;

constexpr auto Offset_InactiveStateInputComponent = 0x06D0;
constexpr auto Offset_WorldOrigin = 0x0800;
constexpr auto Offset_MyHUD = 0x04A8;
constexpr auto Offset_BlockInputWidgetList = 0x0568;
constexpr auto Offset_TrainingMapGrid = 0x06B0;
constexpr auto Offset_Slot = 0x0038;
constexpr auto Offset_LayoutData = 0x0040;
constexpr auto Offset_WidgetStateMap = 0x0500;
constexpr auto Offset_SelectMinimapSizeIndex = 0x05C0;
constexpr auto Offset_Visibility = 0x00A9;

constexpr auto Offset_PlayerState = 0x0428;
constexpr auto Offset_PlayerStatistics = 0x0A50;
constexpr auto Offset_DamageDealtOnEnemy = 0x07E0;
constexpr auto Offset_PubgIdData = 0x0CA0;
constexpr auto Offset_SpectatedCount = 0x1B98;
constexpr auto Offset_LastRenderTime = 0x076C;
constexpr auto Offset_Health = 0x0878;
constexpr auto Offset_GroggyHealth = 0x1B94;
constexpr auto Offset_Team = 0x13A0;
constexpr auto Offset_LastTeamNum = 0x13A8;
constexpr auto Offset_LastSquadMemberIndex = 0x13B0;
constexpr auto Offset_CharacterName = 0x1A78;
constexpr auto Offset_AimOffsets = 0x15C0;
constexpr auto Offset_ControlRotation = 0x0418;
constexpr auto Offset_AttachParent = 0x0210;
constexpr auto Offset_bActorEnableCollision = 0x0058;

constexpr auto Offset_RootComponent = 0x0198;
constexpr auto Offset_ComponentLocation = 0x0360;

constexpr auto Offset_Mesh = 0x0478;
constexpr auto Offset_StaticMesh = 0x0AE0;
constexpr auto Offset_ComponentToWorld = 0x0350;

constexpr auto Offset_CameraLocation = 0x0A84;
constexpr auto Offset_CameraRotation = 0x0A98;
constexpr auto Offset_CameraFov = 0x1028;

constexpr auto Offset_ItemPackage = 0x0570;
constexpr auto Offset_ItemInformationComponent = 0x00B0;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0438;
constexpr auto Offset_DroppedItemGroup = 0x01B8;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0748;

constexpr auto Offset_WeaponProcessor = 0x0890;
constexpr auto Offset_EquippedWeapons = 0x0208;
constexpr auto Offset_CurrentWeaponIndex = 0x0309;
constexpr auto Offset_WeaponTrajectoryData = 0x0FF8;
constexpr auto Offset_TrajectoryGravityZ = 0x0F98;
constexpr auto Offset_TrajectoryConfig = 0x0108;
constexpr auto Offset_FloatCurves = 0x0038;
constexpr auto Offset_CharacterMovement = 0x04E8;
constexpr auto Offset_Acceleration = 0x03A8;
constexpr auto Offset_MaxAcceleration = 0x0308;
constexpr auto Offset_LastUpdateVelocity = 0x03D0;

constexpr auto Offset_AnimScriptInstance = 0x0C80;
constexpr auto Offset_ControlRotation_CP = 0x0774;
constexpr auto Offset_RecoilADSRotation_CP = 0x09CC;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DE4;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DE8;

constexpr auto Offset_VehicleRiderComponent = 0x1C60;
constexpr auto Offset_SeatIndex = 0x0228;
constexpr auto Offset_LastVehiclePawn = 0x0260;
constexpr auto Offset_ReplicatedMovement = 0x0078;
#endif
