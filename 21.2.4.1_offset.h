#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x0928A218;
constexpr auto Offset_GWorld = 0x09436340;
constexpr auto Offset_XenuineDecrypt = 0x07C40228;
constexpr auto Offset_FNameEntry = 0x09285348;
constexpr auto Offset_ChunkSize = 0x41E4;

constexpr auto Offset_ObjID = 0x0008;
constexpr auto Offset_XorKey1 = 0xD7DF91DC;
constexpr auto Offset_XorKey2 = 0x03464730;
constexpr auto Offset_RorValue = 0x0B;
constexpr auto Offset_IsingRor = true;

constexpr auto Offset_CurrentLevel = 0x0940;
constexpr auto Offset_Actors = 0x0138;
constexpr auto Offset_ActorsForGC = 0x0288;
constexpr auto Offset_GameInstance = 0x01A8;
constexpr auto Offset_LocalPlayers = 0x00C0;
constexpr auto Offset_PlayerController = 0x0030;
constexpr auto Offset_AcknowledgedPawn = 0x0490;
constexpr auto Offset_PlayerCameraManager = 0x04B0;

constexpr auto Offset_IsHall = 0x0945D168;
constexpr auto Offset_InactiveStateInputComponent = 0x06D0;
constexpr auto Offset_WorldOrigin = 0x072C;

constexpr auto Offset_PlayerState = 0x0438;
constexpr auto Offset_PlayerStatistics = 0x05F8;
constexpr auto Offset_DamageDealtOnEnemy = 0x0838;
constexpr auto Offset_PubgIdData = 0x0CB8;
constexpr auto Offset_SpectatedCount = 0x13A0;
constexpr auto Offset_LastRenderTime = 0x076C;
constexpr auto Offset_Health = 0x0880;
constexpr auto Offset_GroggyHealth = 0x0EDC;
constexpr auto Offset_Team = 0x10F8;
constexpr auto Offset_LastTeamNum = 0x1100;
constexpr auto Offset_LastSquadMemberIndex = 0x1108;
constexpr auto Offset_CharacterName = 0x0F28;
constexpr auto Offset_AimOffsets = 0x1660;
constexpr auto Offset_ControlRotation = 0x0458;
constexpr auto Offset_bActorEnableCollision = 0x0048;

constexpr auto Offset_RootComponent = 0x01D0;
constexpr auto Offset_ComponentLocation = 0x0240;

constexpr auto Offset_Mesh = 0x0558;
constexpr auto Offset_StaticMesh = 0x0AE0;
constexpr auto Offset_ComponentToWorld = 0x0230;

constexpr auto Offset_CameraLocation = 0x09F8;
constexpr auto Offset_CameraRotation = 0x0468;
constexpr auto Offset_CameraFov = 0x0A08;

constexpr auto Offset_ItemPackage = 0x0578;
constexpr auto Offset_ItemInformationComponent = 0x00A8;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0438;
constexpr auto Offset_DroppedItemGroup = 0x0120;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0748;

constexpr auto Offset_WeaponProcessor = 0x0898;
constexpr auto Offset_EquippedWeapons = 0x01F8;
constexpr auto Offset_CurrentWeaponIndex = 0x02E9;
constexpr auto Offset_WeaponTrajectoryData = 0x1000;
constexpr auto Offset_TrajectoryGravityZ = 0x0FCC;
constexpr auto Offset_TrajectoryConfig = 0x0100;
constexpr auto Offset_RichCurve = 0x0088;
constexpr auto Offset_CharacterMovement = 0x0568;
constexpr auto Offset_Acceleration = 0x0398;
constexpr auto Offset_MaxAcceleration = 0x02F8;
constexpr auto Offset_LastUpdateVelocity = 0x03C0;

constexpr auto Offset_AnimScriptInstance = 0x0C80;
constexpr auto Offset_ControlRotation_CP = 0x076C;
constexpr auto Offset_RecoilADSRotation_CP = 0x09CC;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DE4;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DE8;
constexpr auto Offset_bLocalFPP_CP = 0x0F28;
constexpr auto Offset_bIsScoping_CP = 0x0CF6;
constexpr auto Offset_bIsReloading_CP = 0x08B8;

constexpr auto Offset_VehicleRiderComponent = 0x1CC8;
constexpr auto Offset_SeatIndex = 0x0218;
constexpr auto Offset_LastVehiclePawn = 0x0250;
constexpr auto Offset_ReplicatedMovement = 0x0068;

#endif
