#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/ent/FallbackSlot.hpp>
#include <RED4ext/Types/generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Types/generated/ent/Slot.hpp>

namespace RED4ext
{
namespace ent { 
struct SlotComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "entSlotComponent";
    static constexpr const char* ALIAS = "SlotComponent";

    DynArray<ent::Slot> slots; // 120
    DynArray<ent::FallbackSlot> fallbackSlots; // 130
    uint8_t unk140[0x190 - 0x140]; // 140
};
RED4EXT_ASSERT_SIZE(SlotComponent, 0x190);
} // namespace ent
using SlotComponent = ent::SlotComponent;
} // namespace RED4ext
