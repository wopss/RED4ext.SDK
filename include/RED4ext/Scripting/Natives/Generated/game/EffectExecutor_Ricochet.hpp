#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectExecutor.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectOutputParameter_Vector.hpp>

namespace RED4ext
{
namespace game
{
struct EffectExecutor_Ricochet : game::EffectExecutor
{
    static constexpr const char* NAME = "gameEffectExecutor_Ricochet";
    static constexpr const char* ALIAS = NAME;

    game::EffectOutputParameter_Vector outputRicochetVector; // 48
};
RED4EXT_ASSERT_SIZE(EffectExecutor_Ricochet, 0x88);
} // namespace game
using gameEffectExecutor_Ricochet = game::EffectExecutor_Ricochet;
} // namespace RED4ext

// clang-format on
