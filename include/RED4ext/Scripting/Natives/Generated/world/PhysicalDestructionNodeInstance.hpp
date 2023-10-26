#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SnappableNodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) PhysicalDestructionNodeInstance : world::SnappableNodeInstance
{
    static constexpr const char* NAME = "worldPhysicalDestructionNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0x240 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(PhysicalDestructionNodeInstance, 0x240);
} // namespace world
using worldPhysicalDestructionNodeInstance = world::PhysicalDestructionNodeInstance;
} // namespace RED4ext

// clang-format on
