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
struct EffectOutputParameter_Int
{
    static constexpr const char* NAME = "gameEffectOutputParameter_Int";
    static constexpr const char* ALIAS = "EffectOutputParameter_Int";

    uint8_t unk00[0x8 - 0x0]; // 0
    game::BlackboardPropertyBindingDefinition blackboardProperty; // 08
};
RED4EXT_ASSERT_SIZE(EffectOutputParameter_Int, 0x40);
} // namespace game
using gameEffectOutputParameter_Int = game::EffectOutputParameter_Int;
using EffectOutputParameter_Int = game::EffectOutputParameter_Int;
} // namespace RED4ext

// clang-format on
