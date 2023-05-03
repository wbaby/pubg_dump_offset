constexpr auto Offset_GUObjects = 0x092F89A0;
constexpr auto Offset_GWorld = 0x0933A028;
constexpr auto Offset_XenuineDecrypt = 0x07CBBB28;
constexpr auto Offset_GNames = 0x09524600;
constexpr auto Offset_ElementsPerChunk = 0x3FA0;

constexpr auto Offset_ObjID = 0x000C;
constexpr auto Offset_XorKey1 = 0x294FC94;
constexpr auto Offset_XorKey2 = 0xFE3FA9;
constexpr auto Offset_Value = 0x0000;
constexpr auto Offset_UsingRor = 0x0000;

constexpr auto Offset_CurrentLevel = 0x0168;
constexpr auto Offset_Actors = 0x0178;
constexpr auto Offset_GameInstance = 0x0218;
constexpr auto Offset_LocalPlayers = 0x0060;
constexpr auto Offset_PlayerController = 0x0038;
constexpr auto Offset_AcknowledgedPawn = 0x0480;
constexpr auto Offset_PlayerCameraManager = 0x04A0;
constexpr auto Offset_LocalPlayersPTR = 0x0947AC40;

constexpr auto Offset_LineTraceSingle = 0x05DF9554;
constexpr auto Offset_CurrentBuildNumber = 0x091662A0;
constexpr auto Offset_GameWindowSize = 0x091091A0;
constexpr auto Offset_CheckTab = 0x09555600;
constexpr auto Offset_IsGameInlobby = 0x09139038;

constexpr auto Offset_InactiveStateInputComponent = 0x06C0;
constexpr auto Offset_MyHUD = 0x0498;
constexpr auto Offset_BlockInputWidgetList = 0x0558;
constexpr auto Offset_WidgetStateMap = 0x04F0;
constexpr auto Offset_TrainingMapGrid = 0x06B0;
constexpr auto Offset_SelectMinimapSizeIndex = 0x05C0;
constexpr auto Offset_Slot = 0x0038;
constexpr auto Offset_LayoutData = 0x0040;
constexpr auto Offset_Visibility = 0x00A9;
constexpr auto Offset_OriginLocation = 0x00D4;

//TslCharacter
constexpr auto Offset_PlayerState = 0x0410;
constexpr auto Offset_PlayerName = 0x0438;
constexpr auto Offset_PlayerStatistics = 0x05F0;
constexpr auto Offset_PubgIdData = 0x0CA8;
constexpr auto Offset_SpectatedCount = 0x10B8;
constexpr auto Offset_Health = 0x0868;
constexpr auto Offset_GroggyHealth = 0x1B04;
constexpr auto Offset_Team = 0x1248;
constexpr auto Offset_LastTeamNum = 0x1250;
constexpr auto Offset_CharacterName = 0x1BA0;
constexpr auto Offset_AimOffsets = 0x1610;
constexpr auto Offset_ControlRotation = 0x0408;
constexpr auto Offset_Mesh = 0x0470;
constexpr auto Offset_StaticMesh = 0x0AE0;
constexpr auto Offset_LastSubmitTime = 0x0768;
constexpr auto Offset_LastRenderTime = 0x076C;
constexpr auto Offset_LastRenderTimeOnScreen = 0x0770;

//Actor
constexpr auto Offset_OwnedComponents = 0x0238;
constexpr auto Offset_RootComponent = 0x0318;

//SceneComponent
constexpr auto Offset_ComponentLocation = 0x0360;
constexpr auto Offset_ComponentToWorld = 0x0350;


//PlayerCameraManager
constexpr auto Offset_CameraLocation = 0x15E4;
constexpr auto Offset_CameraRotation = 0x15FC;
constexpr auto Offset_CameraFov = 0x15F8;

//Items
constexpr auto Offset_ItemPackage = 0x0560;
constexpr auto Offset_ItemTableRowBase = 0x00B0;
constexpr auto Offset_ItemName = 0x0018;
constexpr auto Offset_Category = 0x018C;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0428;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0748;

//ATslWeapon
constexpr auto Offset_WeaponProcessor = 0x0880;
constexpr auto Offset_EquippedWeapons = 0x0208;
constexpr auto Offset_CurrentWeaponIndex = 0x0311;
constexpr auto Offset_WeaponTrajectoryData = 0x1000;
constexpr auto Offset_TrajectoryGravityZ = 0x0F9C;
constexpr auto Offset_TrajectoryConfig = 0x0108;
constexpr auto Offset_FloatCurves = 0x0038;

constexpr auto Offset_CharacterMovement = 0x0490;
constexpr auto Offset_Acceleration = 0x03A8;
constexpr auto Offset_MaxAcceleration = 0x0308;
constexpr auto Offset_LastUpdateVelocity = 0x03D0;

constexpr auto Offset_AnimScriptInstance = 0x0C80;
constexpr auto Offset_ControlRotation_CP = 0x0774;
constexpr auto Offset_RecoilADSRotation_CP = 0x09CC;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DE4;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DE8;
constexpr auto Offset_bIsScoping_CP = 0x0CF6;

constexpr auto Offset_VehicleRiderComponent = 0x1C58;
constexpr auto Offset_SeatIndex = 0x0228;
constexpr auto Offset_LastVehiclePawn = 0x0260;
constexpr auto Offset_ReplicatedMovement = 0x0068;

//ATslProjectile
constexpr auto Offset_ExplodeState = 0x0560;
constexpr auto Offset_TimeTillExplosion = 0x071C;
constexpr auto Offset_TickStartVelocity = 0x0810;

//UTslVehicleCommonComponent
constexpr auto Offset_Floating_VehicleCommonComponent = 0x04B8;
constexpr auto Offset_Wheeled_VehicleCommonComponent = 0x0B50;
constexpr auto Offset_VehicleHealth = 0x02D0;
constexpr auto Offset_VehicleHealthMax = 0x02D4;
constexpr auto Offset_VehicleFuel = 0x02D8;
constexpr auto Offset_VehicleFuelMax = 0x02DC;
constexpr auto Offset_ExplosionTimer = 0x02E0;
constexpr auto Offset_ReplicatedSkinParam = 0x0458;
