#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/BreachUITrackingChange.hpp>

namespace RED4ext
{
namespace game
{
struct BreachUIParameters : IScriptable
{
    static constexpr const char* NAME = "gameBreachUIParameters";
    static constexpr const char* ALIAS = "BreachUIParameters";

    game::BreachUITrackingChange trackingChange; // 40
    bool tracking; // 44
    bool visible; // 45
    bool almostTimeout; // 46
    uint8_t unk47[0x48 - 0x47]; // 47
    Vector2 position; // 48
    float radius; // 50
    float distance; // 54
    float health; // 58
    float maxHealth; // 5C
};
RED4EXT_ASSERT_SIZE(BreachUIParameters, 0x60);
} // namespace game
using gameBreachUIParameters = game::BreachUIParameters;
using BreachUIParameters = game::BreachUIParameters;
} // namespace RED4ext

// clang-format on
