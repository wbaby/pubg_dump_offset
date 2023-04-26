constexpr auto Offset_GObjects = 0x092B19A0;
constexpr auto Offset_GWorld = 0x092F3028;
constexpr auto Offset_XenuineDecrypt = 0x07C92228;
constexpr auto Offset_GNames = 0x094DD680;
constexpr auto Offset_ElementsPerChunk = 0x4008;

constexpr auto Offset_ObjID = 0x0028;
constexpr auto Offset_XorKey1 = 0xB8DAE92D;
constexpr auto Offset_XorKey2 = 0xF751591A;
constexpr auto Offset_Value = 0x000A;
constexpr auto Offset_UsingRor = 0x0001;

constexpr auto Offset_CurrentLevel = 0x07F8;
constexpr auto Offset_Actors = 0x00F0;
constexpr auto Offset_GameInstance = 0x07E8;
constexpr auto Offset_LocalPlayers = 0x00E8;
constexpr auto Offset_PlayerController = 0x0038;
constexpr auto Offset_AcknowledgedPawn = 0x0480;
constexpr auto Offset_PlayerCameraManager = 0x04A0;
constexpr auto Offset_CameraViewBehaviour = 0x0B50;
constexpr auto Offset_LocalPlayersPTR = 0x09433C40;

//World
constexpr auto Offset_OriginLocation = 0x0888;
constexpr auto Offset_DeltaSeconds = 0x0780;
constexpr auto Offset_TimeSeconds = 0x038C;

constexpr auto Offset_GEngine = 0x0929A048;
constexpr auto Offset_GameViewport = 0x0108;
constexpr auto Offset_Overall = 0x0340;
constexpr auto Offset_Canvas = 0x0430;
constexpr auto Offset_DebugCanvas = 0x0438;
constexpr auto Offset_CanvasSize = 0x0048;
constexpr auto Offset_K2_DrawText = 0x05F84ED4;
constexpr auto Offset_K2_DrawPolygon = 0x05F84E18;
constexpr auto Offset_K2_DrawBox = 0x05F84B3C;
constexpr auto Offset_K2_DrawTexture = 0x05F85018;
constexpr auto Offset_AhudDrawText = 0x05D98AD8;
constexpr auto Offset_AhudDrawLine = 0x05D985C0;
constexpr auto Offset_AhudDrawRect = 0x05D98A14;

constexpr auto Offset_Fonts_Roboto = 0x094E7038;
constexpr auto Offset_GetUCanvcsCall = 0x00A2311C;
constexpr auto Offset_DebugUCanvcsId = 0x094EA5E8;
constexpr auto Offset_ConstDrawLineCall = 0x05D1578C;
constexpr auto Offset_ConstDrawRectCall = 0x05F7BABC;
constexpr auto Offset_ConstDrawCall = 0x009D7494;

constexpr auto Offset_GetIconTexture = 0x0088DD80;
constexpr auto Offset_ImportedSize = 0x00CC;
constexpr auto Offset_WeaponIcon = 0x0420;
constexpr auto Offset_WeaponIconRatio = 0x0428;

constexpr auto Offset_LineTraceSingle = 0x05DD5854;
constexpr auto Offset_CurrentBuildNumber = 0x0911F220;
constexpr auto Offset_GameWindowSize = 0x090C2120;
constexpr auto Offset_CheckTab = 0x0950E680;
constexpr auto Offset_IsGameInlobby = 0x090F1FB8;

constexpr auto Offset_InactiveStateInputComponent = 0x06C0;
constexpr auto Offset_MyHUD = 0x0498;
constexpr auto Offset_BlockInputWidgetList = 0x0558;
constexpr auto Offset_WidgetStateMap = 0x04F0;
constexpr auto Offset_TrainingMapGrid = 0x06B0;
constexpr auto Offset_SelectMinimapSizeIndex = 0x05C0;
constexpr auto Offset_Slot = 0x0038;
constexpr auto Offset_LayoutData = 0x0040;
constexpr auto Offset_Visibility = 0x00A9;

//TslCharacter
constexpr auto Offset_PlayerState = 0x0408;
constexpr auto Offset_PlayerName = 0x03F0;
constexpr auto Offset_PlayerStatistics = 0x0A70;
constexpr auto Offset_bIsInAircraft = 0x0A7C;
constexpr auto Offset_PubgIdData = 0x0CA0;
constexpr auto Offset_SpectatedCount = 0x1098;
constexpr auto Offset_Health = 0x0868;
constexpr auto Offset_GroggyHealth = 0x1164;
constexpr auto Offset_Team = 0x2128;
constexpr auto Offset_LastTeamNum = 0x2130;
constexpr auto Offset_CharacterName = 0x1078;
constexpr auto Offset_AimOffsets = 0x1650;
constexpr auto Offset_ControlRotation = 0x0400;
constexpr auto Offset_Mesh = 0x0448;
constexpr auto Offset_StaticMesh = 0x0AE0;
constexpr auto Offset_LastSubmitTime = 0x0768;
constexpr auto Offset_LastRenderTime = 0x076C;
constexpr auto Offset_LastRenderTimeOnScreen = 0x0770;

//Actor
constexpr auto Offset_OwnedComponents = 0x01D8;
constexpr auto Offset_RootComponent = 0x00F8;

//SceneComponent
constexpr auto Offset_ComponentLocation = 0x0280;
constexpr auto Offset_ComponentToWorld = 0x0270;

//PlayerCameraManager
constexpr auto Offset_CameraLocation = 0x0A80;
constexpr auto Offset_CameraRotation = 0x0AA0;
constexpr auto Offset_CameraFov = 0x0A8C;

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
constexpr auto Offset_WeaponTrajectoryData = 0x1008;
constexpr auto Offset_TrajectoryGravityZ = 0x0FAC;
constexpr auto Offset_TrajectoryConfig = 0x0108;
constexpr auto Offset_FloatCurves = 0x0038;

//CharacterMovement
constexpr auto Offset_CharacterMovement = 0x0450;
constexpr auto Offset_Acceleration = 0x03A8;
constexpr auto Offset_MaxAcceleration = 0x0308;
constexpr auto Offset_LastUpdateVelocity = 0x03D0;

constexpr auto Offset_AnimScriptInstance = 0x0C80;
constexpr auto Offset_ControlRotation_CP = 0x0774;
constexpr auto Offset_RecoilADSRotation_CP = 0x09CC;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DE4;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DE8;
constexpr auto Offset_bIsScoping_CP = 0x0CF6;

constexpr auto Offset_VehicleRiderComponent = 0x1BC0;
constexpr auto Offset_SeatIndex = 0x0228;
constexpr auto Offset_LastVehiclePawn = 0x0260;
constexpr auto Offset_ReplicatedMovement = 0x0080;
