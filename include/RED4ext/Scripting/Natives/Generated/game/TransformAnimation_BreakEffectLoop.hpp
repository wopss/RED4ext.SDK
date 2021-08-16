#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TransformAnimation_Effects.hpp>

namespace RED4ext
{
namespace game { 
struct TransformAnimation_BreakEffectLoop : game::TransformAnimation_Effects
{
    static constexpr const char* NAME = "gameTransformAnimation_BreakEffectLoop";
    static constexpr const char* ALIAS = NAME;

    CName effectTag; // 30
};
RED4EXT_ASSERT_SIZE(TransformAnimation_BreakEffectLoop, 0x38);
} // namespace game
} // namespace RED4ext
