#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
enum class InGameConfigUserSettingsSaveStatus : uint8_t
{
    NotSaved = 0,
    InternalError = 1,
    Saved = 2,
};
using UserSettingsSaveStatus = InGameConfigUserSettingsSaveStatus;
} // namespace RED4ext

// clang-format on
