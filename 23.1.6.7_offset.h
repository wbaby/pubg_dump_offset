constexpr auto Offset_GUObjects = 0x09319920;
constexpr auto Offset_GWorld = 0x0935AFA8;
constexpr auto Offset_XenuineDecrypt = 0x07CFBE28;
constexpr auto Offset_GNames = 0x09545600;
constexpr auto Offset_ElementsPerChunk = 0x4118;

constexpr auto Offset_ObjID = 0x001C;
constexpr auto Offset_XorKey1 = 0x791A16B9;
constexpr auto Offset_XorKey2 = 0xA36F8994;
constexpr auto Offset_Value = 0x0008;
constexpr auto Offset_UsingRor = 0x0001;

constexpr auto Offset_Actors = 0x0228;
constexpr auto Offset_GameInstance = 0x0948;
constexpr auto Offset_LocalPlayers = 0x00D8;
constexpr auto Offset_PlayerController = 0x0038;
constexpr auto Offset_AcknowledgedPawn = 0x0498;
constexpr auto Offset_PlayerCameraManager = 0x04B8;

constexpr auto Offset_LineTraceSingle = 0x05E3A6C8;
constexpr auto Offset_CurrentBuildNumber = 0x09187220;
constexpr auto Offset_GameWindowSize = 0x0912A120;
constexpr auto Offset_CheckTab = 0x09576620;
constexpr auto Offset_IsGameInlobby = 0x09159FB8;

constexpr auto Offset_InactiveStateInputComponent = 0x06D8;
constexpr auto Offset_MyHUD = 0x04B0;
constexpr auto Offset_BlockInputWidgetList = 0x0568;
constexpr auto Offset_WidgetStateMap = 0x0500;
constexpr auto Offset_TrainingMapGrid = 0x06B0;
constexpr auto Offset_SelectMinimapSizeIndex = 0x05C0;
constexpr auto Offset_Slot = 0x0038;
constexpr auto Offset_LayoutData = 0x0040;
constexpr auto Offset_Visibility = 0x00A9;

//TslCharacter
constexpr auto Offset_PlayerState = 0x0438;
constexpr auto Offset_PlayerName = 0x0460;
constexpr auto Offset_PlayerStatistics = 0x0A28;
constexpr auto Offset_bIsInAircraft = 0x0A90;
constexpr auto Offset_PubgIdData = 0x0CB8;
constexpr auto Offset_SpectatedCount = 0x19B0;
constexpr auto Offset_Health = 0x0888;
constexpr auto Offset_GroggyHealth = 0x2254;
constexpr auto Offset_CharacterState = 0x10E8;
constexpr auto Offset_Team = 0x27B0;
constexpr auto Offset_LastTeamNum = 0x27B8;
constexpr auto Offset_CharacterName = 0x13B8;
constexpr auto Offset_AimOffsets = 0x16B0;
constexpr auto Offset_Mesh = 0x04A8;
constexpr auto Offset_StaticMesh = 0x0AF0;
constexpr auto Offset_LastSubmitTime = 0x0778;
constexpr auto Offset_LastRenderTime = 0x077C;
constexpr auto Offset_LastRenderTimeOnScreen = 0x0780;

//Actor
constexpr auto Offset_OwnedComponents = 0x0208;
constexpr auto Offset_RootComponent = 0x01E8;

//SceneComponent
constexpr auto Offset_ComponentVelocity = 0x0310;
constexpr auto Offset_ComponentToWorld = 0x0200;
constexpr auto Offset_ComponentLocation = 0x0210;

//PlayerCameraManage
constexpr auto Offset_CameraLocation = 0x1724;
constexpr auto Offset_CameraRotation = 0x1CB0;
constexpr auto Offset_CameraFov = 0x1CCC;

//Items
constexpr auto Offset_ItemPackage = 0x0570;
constexpr auto Offset_PackageType = 0x05C4;
constexpr auto Offset_ItemTableRowBase = 0x00B0;
constexpr auto Offset_ItemName = 0x0018;
constexpr auto Offset_Category = 0x018C;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0438;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0758;

//ATslWeapon
constexpr auto Offset_WeaponProcessor = 0x08A0;
constexpr auto Offset_EquippedWeapons = 0x0208;
constexpr auto Offset_CurrentWeaponIndex = 0x0311;
constexpr auto Offset_WeaponTrajectoryData = 0x1000;
constexpr auto Offset_TrajectoryGravityZ = 0x0FDC;
constexpr auto Offset_TrajectoryConfig = 0x0108;
constexpr auto Offset_FloatCurves = 0x0038;
constexpr auto Offset_CharacterMovement = 0x0558;
constexpr auto Offset_StanceMode = 0x0500;
constexpr auto Offset_MovementMode = 0x02D0;
constexpr auto Offset_Acceleration = 0x03A8;
constexpr auto Offset_MaxAcceleration = 0x0308;
constexpr auto Offset_LastUpdateVelocity = 0x03D0;
constexpr auto Offset_PendingLaunchVelocity = 0x054C;

constexpr auto Offset_AnimScriptInstance = 0x0C90;
constexpr auto Offset_ControlRotation_CP = 0x0774;
constexpr auto Offset_RecoilADSRotation_CP = 0x09CC;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DE4;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DE8;
constexpr auto Offset_bIsScoping_CP = 0x0CF6;

constexpr auto Offset_VehicleRiderComponent = 0x1CB0;
constexpr auto Offset_SeatIndex = 0x0228;
constexpr auto Offset_LastVehiclePawn = 0x0260;
constexpr auto Offset_ReplicatedMovement = 0x0068;

//ATslProjectile
constexpr auto Offset_ProjectileParticleClass = 0x04C0;
constexpr auto Offset_ExplodeState = 0x0570;
constexpr auto Offset_ProjectileConfig = 0x05D0;
constexpr auto Offset_TimeTillExplosion = 0x072C;
constexpr auto Offset_TickStartVelocity = 0x0820;

//UTslVehicleCommonComponent
constexpr auto Offset_Floating_VehicleCommonComponent = 0x04D0;
constexpr auto Offset_Wheeled_VehicleCommonComponent = 0x0B60;
constexpr auto Offset_VehicleHealth = 0x02D0;
constexpr auto Offset_VehicleHealthMax = 0x02D4;
constexpr auto Offset_VehicleFuel = 0x02D8;
constexpr auto Offset_VehicleFuelMax = 0x02DC;
constexpr auto Offset_ExplosionTimer = 0x02E0;
constexpr auto Offset_ReplicatedSkinParam = 0x0458;
