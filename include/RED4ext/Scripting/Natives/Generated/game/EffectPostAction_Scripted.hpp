#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectPostAction.hpp>

namespace RED4ext
{
namespace game { 
struct EffectPostAction_Scripted : game::EffectPostAction
{
    static constexpr const char* NAME = "gameEffectPostAction_Scripted";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EffectPostAction_Scripted, 0x40);
} // namespace game
} // namespace RED4ext
