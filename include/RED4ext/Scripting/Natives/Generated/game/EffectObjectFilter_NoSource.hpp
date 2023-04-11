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
struct EffectObjectFilter_NoSource : game::EffectObjectGroupFilter
{
    static constexpr const char* NAME = "gameEffectObjectFilter_NoSource";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EffectObjectFilter_NoSource, 0x40);
} // namespace game
using gameEffectObjectFilter_NoSource = game::EffectObjectFilter_NoSource;
} // namespace RED4ext

// clang-format on
