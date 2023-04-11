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
struct EffectExecutor_SendStimuli : game::EffectExecutor
{
    static constexpr const char* NAME = "gameEffectExecutor_SendStimuli";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EffectExecutor_SendStimuli, 0x48);
} // namespace game
using gameEffectExecutor_SendStimuli = game::EffectExecutor_SendStimuli;
} // namespace RED4ext

// clang-format on
