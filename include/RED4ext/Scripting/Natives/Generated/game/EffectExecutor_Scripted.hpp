#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectExecutor.hpp>

namespace RED4ext
{
namespace game
{
struct EffectExecutor_Scripted : game::EffectExecutor
{
    static constexpr const char* NAME = "gameEffectExecutor_Scripted";
    static constexpr const char* ALIAS = "EffectExecutor_Scripted";

};
RED4EXT_ASSERT_SIZE(EffectExecutor_Scripted, 0x48);
} // namespace game
using gameEffectExecutor_Scripted = game::EffectExecutor_Scripted;
using EffectExecutor_Scripted = game::EffectExecutor_Scripted;
} // namespace RED4ext

// clang-format on
