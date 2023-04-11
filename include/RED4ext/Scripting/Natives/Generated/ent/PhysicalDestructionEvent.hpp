#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct PhysicalDestructionEvent : red::Event
{
    static constexpr const char* NAME = "entPhysicalDestructionEvent";
    static constexpr const char* ALIAS = "PhysicalDestructionEvent";

    CName componentName; // 40
    uint8_t levelOfDestruction; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(PhysicalDestructionEvent, 0x50);
} // namespace ent
using entPhysicalDestructionEvent = ent::PhysicalDestructionEvent;
using PhysicalDestructionEvent = ent::PhysicalDestructionEvent;
} // namespace RED4ext

// clang-format on
