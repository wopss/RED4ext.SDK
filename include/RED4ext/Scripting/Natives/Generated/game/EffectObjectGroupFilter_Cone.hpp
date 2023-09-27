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
struct EffectObjectGroupFilter_Cone : game::EffectObjectGroupFilter
{
    static constexpr const char* NAME = "gameEffectObjectGroupFilter_Cone";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EffectObjectGroupFilter_Cone, 0x40);
} // namespace game
using gameEffectObjectGroupFilter_Cone = game::EffectObjectGroupFilter_Cone;
} // namespace RED4ext

// clang-format on
