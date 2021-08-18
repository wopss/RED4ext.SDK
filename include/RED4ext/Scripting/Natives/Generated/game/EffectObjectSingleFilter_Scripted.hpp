#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectSingleFilter.hpp>

namespace RED4ext
{
namespace game { 
struct EffectObjectSingleFilter_Scripted : game::EffectObjectSingleFilter
{
    static constexpr const char* NAME = "gameEffectObjectSingleFilter_Scripted";
    static constexpr const char* ALIAS = "EffectObjectSingleFilter_Scripted";

};
RED4EXT_ASSERT_SIZE(EffectObjectSingleFilter_Scripted, 0x40);
} // namespace game
using EffectObjectSingleFilter_Scripted = game::EffectObjectSingleFilter_Scripted;
} // namespace RED4ext
