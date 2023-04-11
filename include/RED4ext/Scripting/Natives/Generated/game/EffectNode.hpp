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
struct EffectNode : IScriptable
{
    static constexpr const char* NAME = "gameEffectNode";
    static constexpr const char* ALIAS = "EffectNode";

};
RED4EXT_ASSERT_SIZE(EffectNode, 0x40);
} // namespace game
using gameEffectNode = game::EffectNode;
using EffectNode = game::EffectNode;
} // namespace RED4ext

// clang-format on
