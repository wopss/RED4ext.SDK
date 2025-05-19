#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
enum class InGameConfigUserSettingsLoadStatus : int8_t
{
    NotLoaded = 0,
    InternalError = 1,
    FileIsMissing = 2,
    FileIsCorrupted = 3,
    Loaded = 4,
    ImportedFromOldVersion = 5,
};
using UserSettingsLoadStatus = InGameConfigUserSettingsLoadStatus;
} // namespace RED4ext

// clang-format on
