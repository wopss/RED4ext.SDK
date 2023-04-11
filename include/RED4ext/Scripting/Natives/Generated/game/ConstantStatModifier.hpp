#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatModifierBase.hpp>

namespace RED4ext
{
namespace game
{
struct ConstantStatModifier : game::StatModifierBase
{
    static constexpr const char* NAME = "gameConstantStatModifier";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk18[0x20 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(ConstantStatModifier, 0x20);
} // namespace game
using gameConstantStatModifier = game::ConstantStatModifier;
} // namespace RED4ext

// clang-format on
