#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/Quaternion.hpp>
#include <RED4ext/Types/generated/Vector3.hpp>

namespace RED4ext
{
namespace effect { 
struct SlotEntry
{
    static constexpr const char* NAME = "effectSlotEntry";
    static constexpr const char* ALIAS = NAME;

    CName slotName; // 00
    Vector3 relativePosition; // 08
    uint8_t unk14[0x20 - 0x14]; // 14
    Quaternion relativeRotation; // 20
};
RED4EXT_ASSERT_SIZE(SlotEntry, 0x30);
} // namespace effect
} // namespace RED4ext
