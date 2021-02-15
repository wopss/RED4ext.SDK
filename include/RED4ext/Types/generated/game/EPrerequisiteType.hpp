#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game { 
enum class EPrerequisiteType : uint32_t
{
    None = 0,
    NestedPrereq = 1,
    StatValue = 2,
    StatPoolValue = 3,
    HealthAbsolute = 4,
    HealthPercent = 5,
    ItemInInventory = 6,
    ItemEquipped = 7,
    ItemCount = 8,
    QuestAchieved = 9,
    WasScanned = 10,
    Attitude = 11,
    Count = 12,
};
} // namespace game
} // namespace RED4ext
