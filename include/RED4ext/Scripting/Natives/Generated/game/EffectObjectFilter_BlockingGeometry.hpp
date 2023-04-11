#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectGroupFilter.hpp>

namespace RED4ext
{
namespace game
{
struct EffectObjectFilter_BlockingGeometry : game::EffectObjectGroupFilter
{
    static constexpr const char* NAME = "gameEffectObjectFilter_BlockingGeometry";
    static constexpr const char* ALIAS = NAME;

    bool inclusive; // 40
    bool sortQueryResultsByDistance; // 41
    uint8_t unk42[0x48 - 0x42]; // 42
};
RED4EXT_ASSERT_SIZE(EffectObjectFilter_BlockingGeometry, 0x48);
} // namespace game
using gameEffectObjectFilter_BlockingGeometry = game::EffectObjectFilter_BlockingGeometry;
} // namespace RED4ext

// clang-format on
