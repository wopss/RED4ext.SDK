#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectExecutor_NewEffect.hpp>

namespace RED4ext
{
namespace game
{
struct EffectExecutor_NewEffect_CopyData : game::EffectExecutor_NewEffect
{
    static constexpr const char* NAME = "gameEffectExecutor_NewEffect_CopyData";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EffectExecutor_NewEffect_CopyData, 0x60);
} // namespace game
using gameEffectExecutor_NewEffect_CopyData = game::EffectExecutor_NewEffect_CopyData;
} // namespace RED4ext

// clang-format on
