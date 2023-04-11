#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/MovementOrientationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/MovementType.hpp>

namespace RED4ext
{
namespace game
{
struct SmartObjectGate
{
    static constexpr const char* NAME = "gameSmartObjectGate";
    static constexpr const char* ALIAS = NAME;

    CName animationName; // 00
    move::MovementType movementType; // 08
    move::MovementOrientationType movementOrientationType; // 0C
};
RED4EXT_ASSERT_SIZE(SmartObjectGate, 0x10);
} // namespace game
using gameSmartObjectGate = game::SmartObjectGate;
} // namespace RED4ext

// clang-format on
