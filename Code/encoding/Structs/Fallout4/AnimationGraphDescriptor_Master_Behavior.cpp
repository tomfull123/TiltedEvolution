#include <Structs/AnimationGraphDescriptorManager.h>
#include <Structs/Fallout4/AnimationGraphDescriptor_Master_Behavior.h>



AnimationGraphDescriptor_Master_Behavior::AnimationGraphDescriptor_Master_Behavior(AnimationGraphDescriptorManager& aManager)
{
    enum Variables
    {
        kfSpeedWalk = 0,
        kfSpeedRun = 1,
        kDirection = 2,
        kiSyncIdleLocomotion = 3,
        kCamPitchForward = 4,
        kCamPitchBackward = 5,
        kSpineTwist = 6,
        kCamRoll = 7,
        kiState = 8,
        kIsFirstPerson = 9,
        km_bEnablePitchTwistModifier = 10,
        kPitchOffset = 11,
        kiState_NPCDefault = 12,
        kCamPitch = 13,
        kCamPitchDamped = 14,
        kCamRollDamped = 15,
        kdamper_kP = 16,
        kdamper_kI = 17,
        kdamper_kD = 18,
        kSpineTwistDamped = 19,
        kTest = 20,
        kPitch = 21,
        kiSyncSprintState = 22,
        kIsSprinting = 23,
        kTurnDelta = 24,
        kfTEST = 25,
        kfDampenTwist = 26,
        kspeedDamped = 27,
        kisFiring = 28,
        kfDampenSighted = 29,
        kfTest3 = 30,
        kisReloading = 31,
        kfTurnDeltaSpeedLimited = 32,
        kiState_NPCSighted = 33,
        kfTurnDeltaSpeedLimit = 34,
        kTurnDeltaSpeedLimitedDampened = 35,
        kiAttackState = 36,
        kIsAttackReady = 37,
        kPitchDelta = 38,
        kTurnDeltaSmoothed = 39,
        kPitchDeltaSmoothed = 40,
        kTurnDeltaDamped = 41,
        kDirectionDamped = 42,
        kPitchDeltaDamped = 43,
        kTurnDeltaSmoothedDamped = 44,
        kPitchDeltaSmoothedDamped = 45,
        kbAnimationDriven = 46,
        kisAttackNotReady = 47,
        kVelocityZ = 48,
        kDirectionSmoothed = 49,
        kAimStability = 50,
        kiIsInSneak = 51,
        kisJumping = 52,
        kbAllowRotation = 53,
        kSpeed = 54,
        kbEquipOk = 55,
        kforceDirectionVector = 56,
        kcamerafromx = 57,
        kcamerafromy = 58,
        kcamerafromz = 59,
        kLookAtOutsideLimit = 60,
        kAimHeadingMax = 61,
        kAimPitchMax = 62,
        kBowAimOffsetHeading = 63,
        kBowAimOffsetPitch = 64,
        kbAimActive = 65,
        kAimHeadingCurrent = 66,
        kAimPitchCurrent = 67,
        kIsNPC = 68,
        kbHeadTrackingOn = 69,
        kbHeadTrackingOff = 70,
        kSampledSpeed = 71,
        kiSyncTurnState = 72,
        kisLevitating = 73,
        kbFailMoveStart = 74,
        kbIsSynced = 75,
        kbDelayMoveStart = 76,
        kbVoiceReady = 77,
        kFootIKDisable = 78,
        kbInJumpState = 79,
        kbWantCastVoice = 80,
        kIsStaggering = 81,
        kstaggerMagnitude = 82,
        kiGetUpType = 83,
        kiSyncFireState = 84,
        kIsSneaking = 85,
        kisMirrored = 86,
        kiSyncRunDirection = 87,
        kfTimeStep = 88,
        kSpineXTwist = 89,
        kSpineYTwist = 90,
        kSpineZTwist = 91,
        kfSpineTwistGain = 92,
        kfSpineTwistGainAdj = 93,
        kHeadZTwist = 94,
        kHeadYTwist = 95,
        kHeadXTwist = 96,
        kfHeadTwistGain = 97,
        kfHeadTwistGainAdj = 98,
        kfStumbleTimerThreshold = 99,
        kfStumbleSpeedStopThreshold = 100,
        kfStumbleDir = 101,
        kfStumbleDirDeltaStopThreshold = 102,
        kcHitReactionDir = 103,
        kcHitReactionBodyPart = 104,
        kiState_Raider_Stumble_Rifle = 105,
        kbNotHeadTrack = 106,
        kbShouldAimHeadTrack = 107,
        kbSupportedDeathAnim = 108,
        kbCCSupport = 109,
        kbCCOnStairs = 110,
        kfMaxForce = 111,
        kbAllowHeadTracking = 112,
        kbGraphDriven = 113,
        kbGraphDrivenTranslation = 114,
        kbGraphDrivenRotation = 115,
        kbGraphMotionIsAdditive = 116,
        kbShouldBeDrawn = 117,
        kiState_NPCSneaking = 118,
        kPose = 119,
        kLookAtSpine2_LimitAngleDeg = 120,
        kLookAtSpine2_OnGain = 121,
        kLookAtSpine2_OffGain = 122,
        kLookAtSpine2_OnLeadIn = 123,
        kLookAtSpine2_OffLeadIn = 124,
        kLookAtSpine2_Enabled = 125,
        kLookAtSpine2_FwdAxisLS = 126,
        kLookAtChest_FwdAxisLS = 127,
        kLookAtChest_LimitAngleDeg = 128,
        kLookAtChest_OnGain = 129,
        kLookAtChest_OffGain = 130,
        kLookAtChest_OnLeadIn = 131,
        kLookAtChest_OffLeadIn = 132,
        kLookAtChest_Enabled = 133,
        kLookAtNeck_FwdAxisLS = 134,
        kLookAtNeck_LimitAngleDeg = 135,
        kLookAtNeck_OnGain = 136,
        kLookAtNeck_OffGain = 137,
        kLookAtNeck_OnLeadIn = 138,
        kLookAtNeck_OffLeadIn = 139,
        kLookAtNeck_Enabled = 140,
        kLookAtHead_FwdAxisLS = 141,
        kLookAtHead_LimitAngleDeg = 142,
        kLookAtHead_OnGain = 143,
        kLookAtHead_OffGain = 144,
        kLookAtHead_OnLeadIn = 145,
        kLookAtHead_OffLeadIn = 146,
        kLookAtHead_Enabled = 147,
        kLookAtLimitAngleDeg = 148,
        kLookAtLimitAngleThresholdDeg = 149,
        kLookAtOnGain = 150,
        kLookAtOffGain = 151,
        kLookAtOnLeadIn = 152,
        kLookAtOffLeadIn = 153,
        kLookAtUseBoneGains = 154,
        kLookAtAdditive = 155,
        kLookAtOutOfRange = 156,
        kLookAtAdditiveClamp = 157,
        kLookAtUseIndividualLimits = 158,
        kLookAtHead_LimitAngleDegVert = 159,
        kLookAtNeck_LimitAngleDegVert = 160,
        kLookAtChest_LimitAngleDegVert = 161,
        kLookAtSpine2_LimitAngleDegVert = 162,
        kiState_PlayerDefault = 163,
        kLookAt_RotateBoneAboutAxis = 164,
        kiState_NPCSneakingScreenspace = 165,
        kiState_NPCScreenspace = 166,
        kiState_NPCMelee = 167,
        km_errorOutTranslation = 168,
        km_alignWithGroundRotation = 169,
        km_worldFromModelFeedbackGain = 170,
        kbGraphWantsFootIK = 171,
        kbClampAdditive = 172,
        kfik_OnOffGain = 173,
        kfik_GroundAscendingGain = 174,
        kfik_GroundDescendingGain = 175,
        kfik_footplantedgain = 176,
        kfik_FootRaisedGain = 177,
        kfik_FootUnlockGain = 178,
        kfik_ErrorUpDownBias = 179,
        kLookAtHead_LimitAngleVert_Dwn = 180,
        kLookAtNeck_LimitAngleVert_Dwn = 181,
        kbHumanoidFootIKDisable = 182,
        kBoolVariable = 183,
        kIsPlayer = 184,
        kiState_NPCGun = 185,
        kbIsFemale = 186,
        kfRagdollAnimAmount = 187,
        kfHitReactionEndTimer = 188,
        kiState_PlayerMelee = 189,
        kiState_NPCFastWalk = 190,
        kbBlockPipboy = 191,
        kbFreezeSpeedUpdate = 192,
        kbDoNotInterrupt = 193,
        kbInLandingState = 194,
        kbEnableRoot_IsActiveMod = 195,
        kfRandomClipStartTimePercentage = 196,
        kWalkSpeedMult = 197,
        kJogSpeedMult = 198,
        krunSpeedMult = 199,
        kiSyncLocomotionSpeed = 200,
        kiControlsIdleSync = 201,
        kbPathingInterruptibleIdle = 202,
        kbBlockPOVSwitch = 203,
        kiIsPlayer = 204,
        kSpeedSmoothed = 205,
        ktestBlend = 206,
        kLeftHandIKOn = 207,
        kbIsThrowing = 208,
        kiSyncWalkRun = 209,
        kfIdleStopTime = 210,
        kiSyncJumpState = 211,
        kbTalkableWithItem = 212,
        kEnable_bEquipOK = 213,
        kiDynamicLoopStartState = 214,
        kfBodyMorphOffset = 215,
        kbIsInMT = 216,
        kbManualGraphChange = 217,
        kbFreezeRotationUpdate = 218,
        kiPcapTalkGenerator = 219,
        kDirectionDegrees = 220,
        kiWantBlock = 221,
        kiState_NPCBlocking = 222,
        kiSyncForwardBackward = 223,
        kIsBlocking = 224,
        kfDirectAtSavedGain = 225,
        kAimHeadingMaxCCW = 226,
        kAimHeadingMaxCW = 227,
        kiSyncForwardBackward00 = 228,
        kfPitchUpLimit = 229,
        kfPitchDownLimit = 230,
        kGunGripPointer = 231,
        kbDisableIsAttackReady = 232,
        kfLocomotionWalkPlaybackSpeed = 233,
        kfLocomotionJogPlaybackSpeed = 234,
        kfLocomotionRunPlaybackSpeed = 235,
        kAimPitchMaxUp = 236,
        kAimPitchMaxDown = 237,
        kiLocomotionSpeedState = 238,
        kbUseRifleReadyDirectAt = 239,
        kiMeleeState = 240,
        kTEMPIsPlayer = 241,
        kbEquipOkIsActiveEnabled = 242,
        kiSyncSneakWalkRun = 243,
        kiSyncDirection = 244,
        kfLocomotionSneakWalkPlaybackSpeed = 245,
        kfLocomotionSneakRunPlaybackSpeed = 246,
        kRightArmInjuredPowerFist = 247,
        kweaponSpeedMult = 248,
        kbIsSneaking = 249,
        kfVaultDistance = 250,
        kbDisableAttackReady = 251,
        kbSyncDirection = 252,
        kbActorMobilityNotFullyCrippled = 253,
        kbRootRifleEquipOk = 254,
        kbAnimateWeaponBones = 255,
        kfVaultHeight = 256,
        kbForceIdleStop = 257,
        kiSyncShuffleState = 258,
        kisSightedOver = 259,
        kbPartialCover = 260,
        kRightHandIKOn = 261,
        kiSyncSightedState = 262,
        kiWeaponChargeMode = 263,
        kLeftHandIKControlsModifierActive = 264,
        kReloadSpeedMult = 265,
        kiSyncReadyAlertRelaxed = 266,
        k_TestInt = 267,
        kfLeftHandIKFadeOut = 268,
        kfLeftHandIKTransformOnFraction = 269,
        kbUseLeftHandIKDefaults = 270,
        kiSyncGunDown = 271,
        kiRifleDrawnStateID = 272,
        kbAimEnabled = 273,
        kbShuffleSighted2 = 274,
        kbShuffleSighted = 275,
        kbAimCaptureEnabled = 276,
        kInt32Variable00 = 277,
        k_test = 278,
        k_Test2 = 279,
        kGunGripPointer_Mirrored = 280,
        kHandIKControlsDataActive = 281,
        kHandIKControlsDataActive_Mirrored = 282,
        kRifleDrawnCurrentState = 283,
        k_TestBool = 284,
        kCurrentJumpState = 285,
        kbRenderFirstPersonInWorld = 286,
        kbDisableSpineTracking = 287,
        kbAdjust1stPersonFOV = 288,
        kpipboyUp = 289,
        kfControllerXSum = 290,
        kfControllerYSum = 291,
        kfPACameraAdd = 292,
        kfTestVar = 293,
        kfBodyCameraRotation = 294,
        kfPlaybackMult = 295,
        kbIsInFlavor = 296,
        kiTalkGenerator = 297,
        kstaggerDirection = 298,
    };
    // third person key
    uint64_t key = 8074503569708505439;

    AnimationGraphDescriptorManager::Builder s_builder(aManager, key,
        AnimationGraphDescriptor(
        {km_bEnablePitchTwistModifier,
            kIsSprinting,
            kisFiring,
            kisReloading,
            kIsAttackReady,
            kisAttackNotReady,
            kiIsInSneak,
            kisJumping,
            kbEquipOk,
            kbInJumpState,
            kIsStaggering,
            kIsSneaking,
            kisMirrored,
            kbNotHeadTrack,
            kbCCSupport,
            kbCCOnStairs,
            kbGraphDriven,
            kbGraphDrivenTranslation,
            kbGraphDrivenRotation,
            kbGraphWantsFootIK,
            kbIsFemale,
            kbIsThrowing,
            kEnable_bEquipOK,
            kIsBlocking,
            kbUseRifleReadyDirectAt,
            kbEquipOkIsActiveEnabled,
            kbIsSneaking,
            kbAimEnabled,
            kbForceIdleStop,
            kbActorMobilityNotFullyCrippled,
            kbSyncDirection,
            kbDisableAttackReady,
            kbAllowHeadTracking,
            kbInLandingState,
            kbIsInFlavor,
            kbAimActive,
            kbAllowRotation,
            kbUseLeftHandIKDefaults,
            kLeftHandIKOn,
            kbEnableRoot_IsActiveMod,
            kbIsInMT,
            kbRootRifleEquipOk,
            kbAimCaptureEnabled,
            kbDisableSpineTracking,
            kIsNPC,
            kIsPlayer,
            kbFreezeSpeedUpdate,
            kbFreezeRotationUpdate,
        },
        {kDirection,
            kfSpeedRun,
            kfSpeedWalk,
            kSpineTwist,
            kSpeed,
            kPitchOffset,
            kPitch,
            kTurnDelta,
            kDirectionSmoothed,
            kAimStability,
            kSampledSpeed,
            kSpeedSmoothed,
            kReloadSpeedMult,
            kTurnDeltaSmoothed,
            kWalkSpeedMult,
            krunSpeedMult,
            kDirectionDegrees,
            kJogSpeedMult,
            kweaponSpeedMult,
            kfLocomotionWalkPlaybackSpeed,
            kfLocomotionJogPlaybackSpeed,
            kfLocomotionRunPlaybackSpeed,
            kfLocomotionSneakRunPlaybackSpeed,
            kfLocomotionSneakWalkPlaybackSpeed,
            kfik_footplantedgain,
            kVelocityZ,
            kAimHeadingCurrent,
            kAimPitchCurrent,
            kfDirectAtSavedGain,
            kfPlaybackMult,
            kbAnimateWeaponBones,
        },
        {kTurnDelta,
            kiState,
            kiWeaponChargeMode,
            kiAttackState,
            kiGetUpType,
            kiState_Raider_Stumble_Rifle,
            kiState_NPCSneaking,
            kiState_PlayerDefault,
            kiState_NPCMelee,
            kiState_NPCGun,
            kiState_PlayerMelee,
            kiState_NPCFastWalk,
            kiControlsIdleSync,
            kiSyncWalkRun,
            kiState_NPCBlocking,
            kiLocomotionSpeedState,
            kiMeleeState,
            kCurrentJumpState,
            kiSyncTurnState,
            kbPathingInterruptibleIdle,
            kiSyncLocomotionSpeed,
            kiSyncShuffleState,
            kiSyncSneakWalkRun,
            kiSyncDirection,
            kiSyncForwardBackward00,
            kiSyncForwardBackward,
            kiSyncIdleLocomotion,
            kiSyncJumpState,
            kiSyncReadyAlertRelaxed,
            kiIsPlayer,
        }
    ));
}
