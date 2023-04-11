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
struct EffectOutputParameter_CName
{
    static constexpr const char* NAME = "gameEffectOutputParameter_CName";
    static constexpr const char* ALIAS = "EffectOutputParameter_CName";

    uint8_t unk00[0x8 - 0x0]; // 0
    game::BlackboardPropertyBindingDefinition blackboardProperty; // 08
};
RED4EXT_ASSERT_SIZE(EffectOutputParameter_CName, 0x40);
} // namespace game
using gameEffectOutputParameter_CName = game::EffectOutputParameter_CName;
using EffectOutputParameter_CName = game::EffectOutputParameter_CName;
} // namespace RED4ext

// clang-format on
