#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/IPlacementEntries.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/SlotEntry.hpp>

namespace RED4ext
{
namespace effect
{
struct SlotEntries : effect::IPlacementEntries
{
    static constexpr const char* NAME = "effectSlotEntries";
    static constexpr const char* ALIAS = NAME;

    DynArray<effect::SlotEntry> slots; // 30
    bool inheritRotation; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(SlotEntries, 0x48);
} // namespace effect
using effectSlotEntries = effect::SlotEntries;
} // namespace RED4ext

// clang-format on
