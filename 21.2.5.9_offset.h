#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x092C9C20;
constexpr auto Offset_GWorld = 0x0930B260;
constexpr auto Offset_XenuineDecrypt = 0x07CE0928;
constexpr auto Offset_FNameEntry = 0x094EFAA8;
constexpr auto Offset_ChunkSize = 0x3F94;

constexpr auto Offset_ObjID = 0x0010;
constexpr auto Offset_XorKey1 = 0xEFDD1981;
constexpr auto Offset_XorKey2 = 0x5CF601D7;
constexpr auto Offset_RorValue = 0x0F;
constexpr auto Offset_IsingRor = false;

constexpr auto Offset_CurrentLevel = 0x0878;
constexpr auto Offset_Actors = 0x0250;
constexpr auto Offset_PlayerController = 0x0030;
constexpr auto Offset_AcknowledgedPawn = 0x0490;
constexpr auto Offset_PlayerCameraManager = 0x04B0;
constexpr auto Offset_LocalPlayersPTR = 0x0944ABE0;

constexpr auto Offset_LineTraceSingle = 0x05D7B1F0;
constexpr auto Offset_CheckTab = 0x09520B29;
constexpr auto Offset_IsGameInlobby = 0x091086B8;
constexpr auto Offset_InactiveStateInputComponent = 0x06D0;
constexpr auto Offset_WorldOrigin = 0x0044;

constexpr auto Offset_MyHUD = 0x04A8;
constexpr auto Offset_BlockInputWidgetList = 0x0568;
constexpr auto Offset_TrainingMapGrid = 0x06A8;
constexpr auto Offset_MapWidget = 0x06D8;
constexpr auto Offset_Slot = 0x0030;
constexpr auto Offset_LayoutData = 0x0038;

constexpr auto Offset_PlayerState = 0x0430;
constexpr auto Offset_PlayerStatistics = 0x0828;
constexpr auto Offset_DamageDealtOnEnemy = 0x0824;
constexpr auto Offset_PubgIdData = 0x0C98;
constexpr auto Offset_SpectatedCount = 0x21E0;
constexpr auto Offset_LastRenderTime = 0x075C;
constexpr auto Offset_Health = 0x0870;
constexpr auto Offset_GroggyHealth = 0x197C;
constexpr auto Offset_Team = 0x1258;
constexpr auto Offset_LastTeamNum = 0x1260;
constexpr auto Offset_LastSquadMemberIndex = 0x1268;
constexpr auto Offset_CharacterName = 0x2178;
constexpr auto Offset_AimOffsets = 0x1570;
constexpr auto Offset_ControlRotation = 0x0430;
constexpr auto Offset_AttachParent = 0x0348;
constexpr auto Offset_bActorEnableCollision = 0x0050;

constexpr auto Offset_RootComponent = 0x0128;
constexpr auto Offset_ComponentLocation = 0x0310;

constexpr auto Offset_Mesh = 0x0558;
constexpr auto Offset_StaticMesh = 0x0AD0;
constexpr auto Offset_ComponentToWorld = 0x0300;

constexpr auto Offset_CameraLocation = 0x0A58;
constexpr auto Offset_CameraRotation = 0x0A64;
constexpr auto Offset_CameraFov = 0x0A4C;

constexpr auto Offset_ItemPackage = 0x0570;
constexpr auto Offset_ItemInformationComponent = 0x00A8;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0430;
constexpr auto Offset_DroppedItemGroup = 0x02A0;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0738;

constexpr auto Offset_WeaponProcessor = 0x0888;
constexpr auto Offset_EquippedWeapons = 0x01F8;
constexpr auto Offset_CurrentWeaponIndex = 0x02F9;
constexpr auto Offset_WeaponTrajectoryData = 0x1000;
constexpr auto Offset_TrajectoryGravityZ = 0x0FD4;
constexpr auto Offset_TrajectoryConfig = 0x0100;
constexpr auto Offset_FloatCurves = 0x0030;
constexpr auto Offset_CharacterMovement = 0x04E8;
constexpr auto Offset_Acceleration = 0x0398;
constexpr auto Offset_MaxAcceleration = 0x02F8;
constexpr auto Offset_LastUpdateVelocity = 0x03C0;

constexpr auto Offset_AnimScriptInstance = 0x0C70;
constexpr auto Offset_ControlRotation_CP = 0x076C;
constexpr auto Offset_RecoilADSRotation_CP = 0x09CC;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DE4;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DE8;

constexpr auto Offset_VehicleRiderComponent = 0x1C08;
constexpr auto Offset_SeatIndex = 0x0218;
constexpr auto Offset_LastVehiclePawn = 0x0250;
constexpr auto Offset_ReplicatedMovement = 0x0070;

#endif
