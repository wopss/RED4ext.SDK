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
struct EffectOutputParameter_Bool
{
    static constexpr const char* NAME = "gameEffectOutputParameter_Bool";
    static constexpr const char* ALIAS = "EffectOutputParameter_Bool";

    uint8_t unk00[0x8 - 0x0]; // 0
    game::BlackboardPropertyBindingDefinition blackboardProperty; // 08
};
RED4EXT_ASSERT_SIZE(EffectOutputParameter_Bool, 0x40);
} // namespace game
using gameEffectOutputParameter_Bool = game::EffectOutputParameter_Bool;
using EffectOutputParameter_Bool = game::EffectOutputParameter_Bool;
} // namespace RED4ext

// clang-format on
