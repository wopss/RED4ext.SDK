#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectPostAction.hpp>

namespace RED4ext
{
namespace game
{
struct EffectPostAction_Scripted : game::EffectPostAction
{
    static constexpr const char* NAME = "gameEffectPostAction_Scripted";
    static constexpr const char* ALIAS = "EffectPostAction_Scripted";

};
RED4EXT_ASSERT_SIZE(EffectPostAction_Scripted, 0x40);
} // namespace game
using gameEffectPostAction_Scripted = game::EffectPostAction_Scripted;
using EffectPostAction_Scripted = game::EffectPostAction_Scripted;
} // namespace RED4ext

// clang-format on
