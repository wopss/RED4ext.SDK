#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
enum class InGameConfigNotificationType : int8_t
{
    RestartRequiredConfirmed = 0,
    RestartRequiredRejected = 1,
    ChangesApplied = 2,
    ChangesRejected = 3,
    ChangesLoadLastCheckpointApplied = 4,
    ChangesLoadLastCheckpointRejected = 5,
    Saved = 6,
    ErrorSaving = 7,
    Loaded = 8,
    LoadCanceled = 9,
    LoadInternalError = 10,
    Refresh = 11,
    LanguagePackInstalled = 12,
};
using ConfigNotificationType = InGameConfigNotificationType;
} // namespace RED4ext

// clang-format on
