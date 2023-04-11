#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TriggerAreaNode.hpp>

namespace RED4ext
{
namespace world
{
struct LocationAreaNode : world::TriggerAreaNode
{
    static constexpr const char* NAME = "worldLocationAreaNode";
    static constexpr const char* ALIAS = NAME;

    CString locationName; // 70
    uint8_t unk90[0x98 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(LocationAreaNode, 0x98);
} // namespace world
using worldLocationAreaNode = world::LocationAreaNode;
} // namespace RED4ext

// clang-format on
