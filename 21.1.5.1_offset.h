#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x0920CAA0;
constexpr auto Offset_GWorld = 0x0924E080;
constexpr auto Offset_XenuineDecrypt = 0x07C27628;
constexpr auto Offset_FNameEntry = 0x09433860;
constexpr auto Offset_ChunkSize = 0x4050;
constexpr auto Offset_ObjID = 0x0008;

constexpr auto Offset_XorKey1 = 0xE80BFFDD;
constexpr auto Offset_XorKey2 = 0xD617DAC3;
constexpr auto Offset_RorValue = 0x01;
constexpr auto Offset_IsingRor = true;

constexpr auto Offset_CurrentLevel = 0x01F8;
constexpr auto Offset_Actors = 0x0178;
constexpr auto Offset_GameInstance = 0x0268;
constexpr auto Offset_LocalPlayers = 0x00D8;
constexpr auto Offset_PlayerController = 0x0030;
constexpr auto Offset_AcknowledgedPawn = 0x0488;
constexpr auto Offset_PlayerCameraManager = 0x04A8;
constexpr auto Offset_LocalPlayersPTR = 0x0938D470;

constexpr auto Offset_BackpackState = 0x09464830;
constexpr auto Offset_IsHall = 0x0904DE38;
constexpr auto Offset_InactiveStateInputComponent = 0x06C8;
constexpr auto Offset_WorldOrigin = 0x08C0;

constexpr auto Offset_MyHUD = 0x04A0;
constexpr auto Offset_BlockInputWidgetList = 0x0560;
constexpr auto Offset_TrainingMapGrid = 0x06A0;
constexpr auto Offset_MapWidget = 0x06D0;
constexpr auto Offset_Slot = 0x0030;
constexpr auto Offset_LayoutData = 0x0038;

constexpr auto Offset_PlayerState = 0x0420;
constexpr auto Offset_PlayerStatistics = 0x08B4;
constexpr auto Offset_DamageDealtOnEnemy = 0x04AC;
constexpr auto Offset_PubgIdData = 0x0CA8;
constexpr auto Offset_SpectatedCount = 0x0F08;
constexpr auto Offset_LastRenderTime = 0x076C;
constexpr auto Offset_Health = 0x0870;
constexpr auto Offset_GroggyHealth = 0x0EE0;
constexpr auto Offset_Team = 0x1B58;
constexpr auto Offset_LastTeamNum = 0x1B60;
constexpr auto Offset_LastSquadMemberIndex = 0x1B68;
constexpr auto Offset_CharacterName = 0x1300;
constexpr auto Offset_AimOffsets = 0x15B0;
constexpr auto Offset_ControlRotation = 0x0430;

constexpr auto Offset_RootComponent = 0x00E8;
constexpr auto Offset_ComponentLocation = 0x0280;

constexpr auto Offset_Mesh = 0x04F0;
constexpr auto Offset_StaticMesh = 0x0AE0;
constexpr auto Offset_ComponentToWorld = 0x0270;

constexpr auto Offset_CameraLocation = 0x15EC;
constexpr auto Offset_CameraRotation = 0x1604;
constexpr auto Offset_CameraFov = 0x15E8;

constexpr auto Offset_ItemPackage = 0x0568;
constexpr auto Offset_ItemInformationComponent = 0x00A8;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0428;
constexpr auto Offset_DroppedItemGroup = 0x01E8;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0748;

constexpr auto Offset_WeaponProcessor = 0x0888;
constexpr auto Offset_EquippedWeapons = 0x01F8;
constexpr auto Offset_CurrentWeaponIndex = 0x02F9;
constexpr auto Offset_WeaponTrajectoryData = 0x1000;
constexpr auto Offset_TrajectoryGravityZ = 0x0F2C;
constexpr auto Offset_TrajectoryConfig = 0x0100;
constexpr auto Offset_RichCurve = 0x0088;
constexpr auto Offset_CharacterMovement = 0x04E8;
constexpr auto Offset_Acceleration = 0x0398;
constexpr auto Offset_MaxAcceleration = 0x02F8;
constexpr auto Offset_LastUpdateVelocity = 0x03C0;

constexpr auto Offset_AnimScriptInstance = 0x0C80;
constexpr auto Offset_ControlRotation_CP = 0x076C;
constexpr auto Offset_RecoilADSRotation_CP = 0x09CC;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DDC;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DE0;
constexpr auto Offset_bLocalFPP_CP = 0x0F18;
constexpr auto Offset_bIsScoping_CP = 0x0CF6;
constexpr auto Offset_bIsReloading_CP = 0x08B8;

constexpr auto Offset_VehicleRiderComponent = 0x1C70;
constexpr auto Offset_SeatIndex = 0x0218;
constexpr auto Offset_LastVehiclePawn = 0x0250;
constexpr auto Offset_ReplicatedMovement = 0x0068;

//ATslProjectile
constexpr auto Offset_TickStartVelocity = 0x0820;
constexpr auto Offset_TimeTillExplosion = 0x0724;
constexpr auto Offset_PreExplosionTime = 0x0720;
constexpr auto Offset_ExplosionDelay = 0x05C0;
constexpr auto Offset_ProjectileConfig = 0x05C8;
constexpr auto Offset_ExplodeState = 0x0568;
#endif
