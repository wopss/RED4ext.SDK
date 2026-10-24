#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace input
{
struct EmporiumSettingsManager
{
    static constexpr const char* NAME = "inputEmporiumSettingsManager";
    static constexpr const char* ALIAS = "EmporiumSettingsManager";

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(EmporiumSettingsManager, 0x8);
} // namespace input
using inputEmporiumSettingsManager = input::EmporiumSettingsManager;
using EmporiumSettingsManager = input::EmporiumSettingsManager;
} // namespace RED4ext

// clang-format on
