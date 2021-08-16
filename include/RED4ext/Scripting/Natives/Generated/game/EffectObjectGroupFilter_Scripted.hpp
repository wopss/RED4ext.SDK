#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectGroupFilter.hpp>

namespace RED4ext
{
namespace game { 
struct EffectObjectGroupFilter_Scripted : game::EffectObjectGroupFilter
{
    static constexpr const char* NAME = "gameEffectObjectGroupFilter_Scripted";
    static constexpr const char* ALIAS = "EffectObjectGroupFilter_Scripted";

};
RED4EXT_ASSERT_SIZE(EffectObjectGroupFilter_Scripted, 0x40);
} // namespace game
using EffectObjectGroupFilter_Scripted = game::EffectObjectGroupFilter_Scripted;
} // namespace RED4ext
