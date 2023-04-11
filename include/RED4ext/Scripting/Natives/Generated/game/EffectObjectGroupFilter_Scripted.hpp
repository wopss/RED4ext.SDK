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
struct EffectObjectGroupFilter_Scripted : game::EffectObjectGroupFilter
{
    static constexpr const char* NAME = "gameEffectObjectGroupFilter_Scripted";
    static constexpr const char* ALIAS = "EffectObjectGroupFilter_Scripted";

};
RED4EXT_ASSERT_SIZE(EffectObjectGroupFilter_Scripted, 0x40);
} // namespace game
using gameEffectObjectGroupFilter_Scripted = game::EffectObjectGroupFilter_Scripted;
using EffectObjectGroupFilter_Scripted = game::EffectObjectGroupFilter_Scripted;
} // namespace RED4ext

// clang-format on
