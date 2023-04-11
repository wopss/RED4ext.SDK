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
struct EffectOutputParameter_Quat
{
    static constexpr const char* NAME = "gameEffectOutputParameter_Quat";
    static constexpr const char* ALIAS = "EffectOutputParameter_Quat";

    uint8_t unk00[0x8 - 0x0]; // 0
    game::BlackboardPropertyBindingDefinition blackboardProperty; // 08
};
RED4EXT_ASSERT_SIZE(EffectOutputParameter_Quat, 0x40);
} // namespace game
using gameEffectOutputParameter_Quat = game::EffectOutputParameter_Quat;
using EffectOutputParameter_Quat = game::EffectOutputParameter_Quat;
} // namespace RED4ext

// clang-format on
