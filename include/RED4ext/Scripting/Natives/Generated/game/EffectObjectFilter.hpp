#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectNode.hpp>

namespace RED4ext
{
namespace game { 
struct EffectObjectFilter : game::EffectNode
{
    static constexpr const char* NAME = "gameEffectObjectFilter";
    static constexpr const char* ALIAS = "EffectObjectFilter";

};
RED4EXT_ASSERT_SIZE(EffectObjectFilter, 0x40);
} // namespace game
using EffectObjectFilter = game::EffectObjectFilter;
} // namespace RED4ext
