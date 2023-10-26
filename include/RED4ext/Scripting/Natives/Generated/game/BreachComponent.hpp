#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) BreachComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gameBreachComponent";
    static constexpr const char* ALIAS = "BreachComponent";

    float radius; // 120
    uint8_t unk124[0x140 - 0x124]; // 124
    float healthPercentageOverride; // 140
    uint8_t unk144[0x170 - 0x144]; // 144
};
RED4EXT_ASSERT_SIZE(BreachComponent, 0x170);
} // namespace game
using gameBreachComponent = game::BreachComponent;
using BreachComponent = game::BreachComponent;
} // namespace RED4ext

// clang-format on
