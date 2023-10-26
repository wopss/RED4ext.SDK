#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/MovementOrientationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/MovementType.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IEntry.hpp>

namespace RED4ext
{
namespace work
{
struct __declspec(align(0x10)) EntryAnim : work::IEntry
{
    static constexpr const char* NAME = "workEntryAnim";
    static constexpr const char* ALIAS = NAME;

    CName animName; // 38
    CName idleAnim; // 40
    CName slotName; // 48
    float blendOutTime; // 50
    bool isSynchronized; // 54
    uint8_t unk55[0x60 - 0x55]; // 55
    Transform syncOffset; // 60
    move::MovementType movementType; // 80
    move::MovementOrientationType orientationType; // 84
    uint8_t unk88[0x90 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(EntryAnim, 0x90);
} // namespace work
using workEntryAnim = work::EntryAnim;
} // namespace RED4ext

// clang-format on
