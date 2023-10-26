#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/FallbackSlot.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/Slot.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) SlotComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "entSlotComponent";
    static constexpr const char* ALIAS = "SlotComponent";

    DynArray<ent::Slot> slots; // 120
    DynArray<ent::FallbackSlot> fallbackSlots; // 130
    uint8_t unk140[0x1A0 - 0x140]; // 140
};
RED4EXT_ASSERT_SIZE(SlotComponent, 0x1A0);
} // namespace ent
using entSlotComponent = ent::SlotComponent;
using SlotComponent = ent::SlotComponent;
} // namespace RED4ext

// clang-format on
