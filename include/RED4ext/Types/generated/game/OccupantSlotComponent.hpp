#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/ent/SlotComponent.hpp>
#include <RED4ext/Types/generated/game/OccupantSlotData.hpp>

namespace RED4ext
{
namespace game { 
struct OccupantSlotComponent : ent::SlotComponent
{
    static constexpr const char* NAME = "gameOccupantSlotComponent";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::OccupantSlotData> slotData; // 190
};
RED4EXT_ASSERT_SIZE(OccupantSlotComponent, 0x1A0);
} // namespace game
} // namespace RED4ext
