#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/PlacedTrackItemPlayData.hpp>

namespace RED4ext
{
namespace effect
{
struct __declspec(align(0x10)) DecalPlayData : effect::PlacedTrackItemPlayData
{
    static constexpr const char* NAME = "effectDecalPlayData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x90 - 0x38]; // 38
};
RED4EXT_ASSERT_SIZE(DecalPlayData, 0x90);
} // namespace effect
using effectDecalPlayData = effect::DecalPlayData;
} // namespace RED4ext

// clang-format on
