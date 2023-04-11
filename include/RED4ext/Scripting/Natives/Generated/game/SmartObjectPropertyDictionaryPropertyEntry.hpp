#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SmartObjectPointType.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/MovementOrientationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/MovementType.hpp>

namespace RED4ext
{
namespace game
{
struct SmartObjectPropertyDictionaryPropertyEntry
{
    static constexpr const char* NAME = "gameSmartObjectPropertyDictionaryPropertyEntry";
    static constexpr const char* ALIAS = NAME;

    uint16_t id; // 00
    uint8_t unk02[0x4 - 0x2]; // 2
    uint32_t usage; // 04
    CName animationName; // 08
    uint64_t sourceAnimset; // 10
    game::SmartObjectPointType type; // 18
    move::MovementType movementType; // 1C
    move::MovementOrientationType movementOrientation; // 20
    bool isOnNavmesh; // 24
    bool isReachable; // 25
    bool overObstacle; // 26
    uint8_t unk27[0x28 - 0x27]; // 27
};
RED4EXT_ASSERT_SIZE(SmartObjectPropertyDictionaryPropertyEntry, 0x28);
} // namespace game
using gameSmartObjectPropertyDictionaryPropertyEntry = game::SmartObjectPropertyDictionaryPropertyEntry;
} // namespace RED4ext

// clang-format on
