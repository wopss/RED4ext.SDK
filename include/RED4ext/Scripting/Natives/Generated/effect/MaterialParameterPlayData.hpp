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
struct MaterialParameterPlayData : effect::VisualComponentTrackItemPlayData
{
    static constexpr const char* NAME = "effectMaterialParameterPlayData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x48 - 0x38]; // 38
};
RED4EXT_ASSERT_SIZE(MaterialParameterPlayData, 0x48);
} // namespace effect
using effectMaterialParameterPlayData = effect::MaterialParameterPlayData;
} // namespace RED4ext

// clang-format on
