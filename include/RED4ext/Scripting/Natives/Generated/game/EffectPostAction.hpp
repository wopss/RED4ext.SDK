#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectAction.hpp>

namespace RED4ext
{
namespace game { 
struct EffectPostAction : game::EffectAction
{
    static constexpr const char* NAME = "gameEffectPostAction";
    static constexpr const char* ALIAS = "EffectPostAction";

};
RED4EXT_ASSERT_SIZE(EffectPostAction, 0x40);
} // namespace game
using EffectPostAction = game::EffectPostAction;
} // namespace RED4ext
