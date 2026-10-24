#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
enum class ESystemNotificationTypes : int32_t
{
    DiscOperationIndicator = 0,
    GenericNotModal = 1,
    AchievmentDebug = 2,
    GenericMenuInfo = 3,
    GenericYesNo = 4,
    Generic = 5,
    ExitGame = 6,
    StartNewGame = 7,
    NoDiscSpace = 8,
    OverwriteSaveFile = 9,
    OverwriteSaveFileXbCompatWarning = 10,
    LoadSaveFileInGame = 11,
    LoadSaveFile = 12,
    DeleteSaveFile = 13,
    TransferSaveFile = 14,
    CorruptedSaveFile = 15,
    UnreachableCloudFile = 16,
    RegionMismatchSaveFile = 17,
    NoPlayerProfile = 18,
    GameSaved = 19,
    SaveFailed = 20,
    ScreenshotSaved = 21,
    UnavailableForGuest = 22,
    EnableTelemetry = 23,
    PointOfNoReturn = 24,
    PointOfNoReturnWithReward = 25,
    PointOfNoReturnLootAdded = 26,
    GenericMenuError = 27,
    FirstModalHighPriority = 28,
    ControllerDisconnected = 29,
    TrialPeriodEnded = 30,
    TrialPeriodTimer = 31,
    FailedToRemoveTransferredSave = 32,
    LoadModdedSaveFile = 33,
    LoadModdedSaveFileOnUnsupportPlatform = 34,
    LoadModdedSaveFilePC = 35,
    ModLoadingPopup = 36,
    DeprecatedModPopup = 37,
    MAX = 38,
};
} // namespace RED4ext

// clang-format on
