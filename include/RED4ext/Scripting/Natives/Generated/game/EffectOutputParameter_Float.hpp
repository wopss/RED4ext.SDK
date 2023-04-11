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
struct EffectOutputParameter_Float
{
    static constexpr const char* NAME = "gameEffectOutputParameter_Float";
    static constexpr const char* ALIAS = "EffectOutputParameter_Float";

    uint8_t unk00[0x8 - 0x0]; // 0
    game::BlackboardPropertyBindingDefinition blackboardProperty; // 08
};
RED4EXT_ASSERT_SIZE(EffectOutputParameter_Float, 0x40);
} // namespace game
using gameEffectOutputParameter_Float = game::EffectOutputParameter_Float;
using EffectOutputParameter_Float = game::EffectOutputParameter_Float;
} // namespace RED4ext

// clang-format on
