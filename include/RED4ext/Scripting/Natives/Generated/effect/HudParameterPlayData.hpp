#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/VisualComponentTrackItemPlayData.hpp>

namespace RED4ext
{
namespace effect
{
struct HudParameterPlayData : effect::VisualComponentTrackItemPlayData
{
    static constexpr const char* NAME = "effectHudParameterPlayData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x50 - 0x38]; // 38
};
RED4EXT_ASSERT_SIZE(HudParameterPlayData, 0x50);
} // namespace effect
using effectHudParameterPlayData = effect::HudParameterPlayData;
} // namespace RED4ext

// clang-format on
