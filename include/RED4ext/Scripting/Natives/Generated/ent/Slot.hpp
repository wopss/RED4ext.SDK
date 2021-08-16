#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace ent { 
struct Slot
{
    static constexpr const char* NAME = "entSlot";
    static constexpr const char* ALIAS = NAME;

    CName slotName; // 00
    CName boneName; // 08
    Vector3 relativePosition; // 10
    uint8_t unk1C[0x20 - 0x1C]; // 1C
    Quaternion relativeRotation; // 20
};
RED4EXT_ASSERT_SIZE(Slot, 0x30);
} // namespace ent
} // namespace RED4ext
