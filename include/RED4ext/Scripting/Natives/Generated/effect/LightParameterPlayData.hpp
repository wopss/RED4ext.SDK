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
struct LightParameterPlayData : effect::VisualComponentTrackItemPlayData
{
    static constexpr const char* NAME = "effectLightParameterPlayData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x48 - 0x38]; // 38
};
RED4EXT_ASSERT_SIZE(LightParameterPlayData, 0x48);
} // namespace effect
using effectLightParameterPlayData = effect::LightParameterPlayData;
} // namespace RED4ext

// clang-format on
