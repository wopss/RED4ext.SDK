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
struct IEffect : IScriptable
{
    static constexpr const char* NAME = "gameIEffect";
    static constexpr const char* ALIAS = "IEffect";

};
RED4EXT_ASSERT_SIZE(IEffect, 0x40);
} // namespace game
using gameIEffect = game::IEffect;
using IEffect = game::IEffect;
} // namespace RED4ext

// clang-format on
