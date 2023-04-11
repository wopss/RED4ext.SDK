#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatModifierData_Deprecated.hpp>

namespace RED4ext
{
namespace game
{
struct ConstantStatModifierData_Deprecated : game::StatModifierData_Deprecated
{
    static constexpr const char* NAME = "gameConstantStatModifierData_Deprecated";
    static constexpr const char* ALIAS = "gameConstantStatModifierData";

    float value; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(ConstantStatModifierData_Deprecated, 0x50);
} // namespace game
using gameConstantStatModifierData_Deprecated = game::ConstantStatModifierData_Deprecated;
using gameConstantStatModifierData = game::ConstantStatModifierData_Deprecated;
} // namespace RED4ext

// clang-format on
