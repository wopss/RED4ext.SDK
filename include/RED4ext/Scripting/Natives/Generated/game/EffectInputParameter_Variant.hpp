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
struct EffectInputParameter_Variant
{
    static constexpr const char* NAME = "gameEffectInputParameter_Variant";
    static constexpr const char* ALIAS = "EffectInputParameter_Variant";

    uint8_t unk00[0x8 - 0x0]; // 0
    game::BlackboardPropertyBindingDefinition blackboardProperty; // 08
};
RED4EXT_ASSERT_SIZE(EffectInputParameter_Variant, 0x40);
} // namespace game
using gameEffectInputParameter_Variant = game::EffectInputParameter_Variant;
using EffectInputParameter_Variant = game::EffectInputParameter_Variant;
} // namespace RED4ext

// clang-format on
