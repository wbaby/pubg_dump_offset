#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x096FE120;
constexpr auto Offset_GWorld = 0x0973F780;
constexpr auto Offset_XenuineDecrypt = 0x08124D28;
constexpr auto Offset_GNames = 0x09927B10;
constexpr auto Offset_ElementsPerChunk = 0x40D4;

constexpr auto Offset_ObjID = 0x0008;
constexpr auto Offset_XorKey1 = 0xE40B009D;
constexpr auto Offset_XorKey2 = 0x96E431EF;
constexpr auto Offset_Value = 0x0002;
constexpr auto Offset_UsingRor = 0x0001;

constexpr auto Offset_CurrentLevel = 0x0750;
constexpr auto Offset_Actors = 0x00B8;
constexpr auto Offset_GameInstance = 0x06D0;
constexpr auto Offset_LocalPlayers = 0x0058;
constexpr auto Offset_PlayerController = 0x0038;
constexpr auto Offset_AcknowledgedPawn = 0x0490;
constexpr auto Offset_PlayerCameraManager = 0x04B0;
constexpr auto Offset_LocalPlayersPTR = 0x0987FB10;

constexpr auto Offset_LineTraceSingle = 0x06171A5C;
constexpr auto Offset_CurrentBuildNumber = 0x09569C60;
constexpr auto Offset_GameWindowSize = 0x0950D1A0;
constexpr auto Offset_CheckTab = 0x09752B02;
constexpr auto Offset_IsGameInlobby = 0x0953C9F8;

constexpr auto Offset_InactiveStateInputComponent = 0x06D0;
constexpr auto Offset_WorldOrigin = 0x0758;
constexpr auto Offset_MyHUD = 0x04A8;
constexpr auto Offset_BlockInputWidgetList = 0x0570;
constexpr auto Offset_TrainingMapGrid = 0x06B0;
constexpr auto Offset_Slot = 0x0038;
constexpr auto Offset_LayoutData = 0x0040;
constexpr auto Offset_WidgetStateMap = 0x0508;
constexpr auto Offset_SelectMinimapSizeIndex = 0x05C0;
constexpr auto Offset_Visibility = 0x00A9;

constexpr auto Offset_PlayerState = 0x0440;
constexpr auto Offset_PlayerStatistics = 0x0A30;
constexpr auto Offset_PubgIdData = 0x0CC0;
constexpr auto Offset_SpectatedCount = 0x1A30;
constexpr auto Offset_LastSubmitTime = 0x0768;
constexpr auto Offset_LastRenderTime = 0x076C;
constexpr auto Offset_LastRenderTimeOnScreen = 0x0770;
constexpr auto Offset_Health = 0x0888;
constexpr auto Offset_GroggyHealth = 0x13A4;
constexpr auto Offset_CharacterState = 0x1A64;
constexpr auto Offset_Team = 0x1A40;
constexpr auto Offset_LastTeamNum = 0x1A48;
constexpr auto Offset_CharacterName = 0x1340;
constexpr auto Offset_AimOffsets = 0x16D0;
constexpr auto Offset_ControlRotation = 0x0460;

constexpr auto Offset_RootComponent = 0x0270;
constexpr auto Offset_ComponentLocation = 0x02D0;

constexpr auto Offset_Mesh = 0x0540;
constexpr auto Offset_StaticMesh = 0x0AE0;
constexpr auto Offset_ComponentToWorld = 0x02C0;

constexpr auto Offset_CameraLocation = 0x09D0;
constexpr auto Offset_CameraRotation = 0x09B4;
constexpr auto Offset_CameraFov = 0x09CC;

constexpr auto Offset_ItemPackage = 0x0578;
constexpr auto Offset_ItemInformationComponent = 0x00B0;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_ItemName = 0x0018;
constexpr auto Offset_DroppedItem = 0x0440;
constexpr auto Offset_DroppedItemGroup = 0x03A0;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0748;

constexpr auto Offset_WeaponProcessor = 0x08A0;
constexpr auto Offset_EquippedWeapons = 0x0208;
constexpr auto Offset_CurrentWeaponIndex = 0x0311;
constexpr auto Offset_WeaponTrajectoryData = 0x1008;
constexpr auto Offset_TrajectoryGravityZ = 0x0FBC;
constexpr auto Offset_TrajectoryConfig = 0x0108;
constexpr auto Offset_FloatCurves = 0x0038;

constexpr auto Offset_CharacterMovement = 0x0530;
constexpr auto Offset_MovementMode = 0x02D0;
constexpr auto Offset_Acceleration = 0x03A8;
constexpr auto Offset_MaxAcceleration = 0x0308;
constexpr auto Offset_LastUpdateVelocity = 0x03D0;

constexpr auto Offset_AnimScriptInstance = 0x0C80;
constexpr auto Offset_ControlRotation_CP = 0x0774;
constexpr auto Offset_RecoilADSRotation_CP = 0x09CC;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DE4;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DE8;
constexpr auto Offset_bIsScoping_CP = 0x0CF6;

constexpr auto Offset_VehicleRiderComponent = 0x1CE0;
constexpr auto Offset_SeatIndex = 0x0228;
constexpr auto Offset_LastVehiclePawn = 0x0260;
constexpr auto Offset_ReplicatedMovement = 0x0070;

#endif
