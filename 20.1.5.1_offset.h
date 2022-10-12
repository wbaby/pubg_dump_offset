#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x090B27F0;
constexpr auto Offset_GWorld = 0x090F3B70;
constexpr auto Offset_XenuineDecrypt = 0x0758E628;
constexpr auto Offset_FNameEntry = 0x092D1338;
constexpr auto Offset_ChunkSize = 0x41A8;
constexpr auto Offset_ObjID = 0x001C;

constexpr auto Offset_XorKey1 = 0x3F1A729F;
constexpr auto Offset_XorKey2 = 0x854D03B5;
constexpr auto Offset_RorValue = 0x07;
constexpr auto Offset_IsingRor = false;

constexpr auto Offset_CurrentLevel = 0x02D8;
constexpr auto Offset_Actors = 0x0040;
constexpr auto Offset_GameInstance = 0x0218;
constexpr auto Offset_LocalPlayers = 0x0058;
constexpr auto Offset_PlayerController = 0x0030;
constexpr auto Offset_AcknowledgedPawn = 0x0470;
constexpr auto Offset_PlayerCameraManager = 0x0490;
constexpr auto Offset_LocalPlayersPTR = 0x0922E840;

constexpr auto Offset_PlayerState = 0x0400;
constexpr auto Offset_PlayerStatistics = 0x0894;
constexpr auto Offset_SpectatedCount = 0x2064;
constexpr auto Offset_LastRenderTime = 0x075C;
constexpr auto Offset_Health = 0x0860;
constexpr auto Offset_GroggyHealth = 0x2818;
constexpr auto Offset_Team = 0x1950;
constexpr auto Offset_LastTeamNum = 0x1958;
constexpr auto Offset_LastSquadMemberIndex = 0x1960;
constexpr auto Offset_CharacterName = 0x2628;
constexpr auto Offset_LastAimOffsets = 0x14DC;
constexpr auto Offset_AimOffsets = 0x14D0;
constexpr auto Offset_ControlRotation = 0x0400;

constexpr auto Offset_RootComponent = 0x0168;
constexpr auto Offset_ComponentLocation = 0x0320;

constexpr auto Offset_Mesh = 0x0540;
constexpr auto Offset_StaticMesh = 0x0AD0;
constexpr auto Offset_ComponentToWorld = 0x0310;

constexpr auto Offset_CameraLocation = 0x161C;
constexpr auto Offset_CameraRotation = 0x1604;
constexpr auto Offset_CameraFov = 0x1070;

constexpr auto Offset_ItemPackage = 0x0558;
constexpr auto Offset_ItemInformationComponent = 0x00A8;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0418;
constexpr auto Offset_DroppedItemGroup = 0x0318;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0738;

constexpr auto Offset_WeaponProcessor = 0x0878;
constexpr auto Offset_EquippedWeapons = 0x01F8;
constexpr auto Offset_CurrentWeaponIndex = 0x2D9;
constexpr auto Offset_WeaponTrajectoryData = 0x1010;
constexpr auto Offset_TrajectoryGravityZ = 0x0F2C;
constexpr auto Offset_TrajectoryConfig = 0x0100;
constexpr auto Offset_FloatCurves = 0x0030;
constexpr auto Offset_CharacterMovement = 0x0448;
constexpr auto Offset_Acceleration = 0x0398;
constexpr auto Offset_MaxAcceleration = 0x02F8;
constexpr auto Offset_LastUpdateVelocity = 0x03C0;

constexpr auto Offset_AnimScriptInstance = 0x0C70;
constexpr auto Offset_ControlRotation_CP = 0x076C;
constexpr auto Offset_RecoilADSRotation_CP = 0x09CC;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DDC;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DE0;
constexpr auto Offset_bIsScoping_CP = 0x0CF6;
constexpr auto Offset_bIsReloading_CP = 0x08B8;

constexpr auto Offset_VehicleRiderComponent = 0x1AF0;
constexpr auto Offset_SeatIndex = 0x0218;
constexpr auto Offset_LastVehiclePawn = 0x0250;
constexpr auto Offset_ReplicatedMovement = 0x0068;

constexpr auto Offset_BackpackState = 0x09302189;
constexpr auto Offset_IsHall = 0x08EF8278;
constexpr auto Offset_MapState = 0x06B0;
constexpr auto Offset_WorldOrigin = 0x07F4;

//TslWheeledVehicle
constexpr auto Offset_VehicleCommonComponent = 0x0B20;
constexpr auto Offset_vehiclesHealth = 0x02C8;
constexpr auto Offset_vehiclesHealthMax = 0x02CC;
constexpr auto Offset_vehiclesFuel = 0x02D0;
constexpr auto Offset_vehiclesFuelMax = 0x02D4;

#endif
