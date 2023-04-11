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
struct IStatusEffectListener : IScriptable
{
    static constexpr const char* NAME = "gameIStatusEffectListener";
    static constexpr const char* ALIAS = "IStatusEffectListener";

};
RED4EXT_ASSERT_SIZE(IStatusEffectListener, 0x40);
} // namespace game
using gameIStatusEffectListener = game::IStatusEffectListener;
using IStatusEffectListener = game::IStatusEffectListener;
} // namespace RED4ext

// clang-format on
