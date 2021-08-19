#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectPreAction.hpp>

namespace RED4ext
{
namespace game { 
struct EffectPreAction_Scripted : game::EffectPreAction
{
    static constexpr const char* NAME = "gameEffectPreAction_Scripted";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EffectPreAction_Scripted, 0x40);
} // namespace game
} // namespace RED4ext
