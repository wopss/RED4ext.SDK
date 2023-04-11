#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game
{
struct EffectAction : IScriptable
{
    static constexpr const char* NAME = "gameEffectAction";
    static constexpr const char* ALIAS = "EffectAction";

};
RED4EXT_ASSERT_SIZE(EffectAction, 0x40);
} // namespace game
using gameEffectAction = game::EffectAction;
using EffectAction = game::EffectAction;
} // namespace RED4ext

// clang-format on
