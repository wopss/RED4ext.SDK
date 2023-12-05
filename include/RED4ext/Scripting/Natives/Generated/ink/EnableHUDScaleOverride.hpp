#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/InitializedWidgetUserData.hpp>

namespace RED4ext
{
namespace ink
{
struct EnableHUDScaleOverride : ink::InitializedWidgetUserData
{
    static constexpr const char* NAME = "inkEnableHUDScaleOverride";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x50 - 0x48]; // 48
    float scalingInterpolationValue; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(EnableHUDScaleOverride, 0x58);
} // namespace ink
using inkEnableHUDScaleOverride = ink::EnableHUDScaleOverride;
} // namespace RED4ext

// clang-format on
