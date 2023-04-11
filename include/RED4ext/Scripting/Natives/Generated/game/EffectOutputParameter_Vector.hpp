#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/BlackboardPropertyBindingDefinition.hpp>

namespace RED4ext
{
namespace game
{
struct EffectOutputParameter_Vector
{
    static constexpr const char* NAME = "gameEffectOutputParameter_Vector";
    static constexpr const char* ALIAS = "EffectOutputParameter_Vector";

    uint8_t unk00[0x8 - 0x0]; // 0
    game::BlackboardPropertyBindingDefinition blackboardProperty; // 08
};
RED4EXT_ASSERT_SIZE(EffectOutputParameter_Vector, 0x40);
} // namespace game
using gameEffectOutputParameter_Vector = game::EffectOutputParameter_Vector;
using EffectOutputParameter_Vector = game::EffectOutputParameter_Vector;
} // namespace RED4ext

// clang-format on
