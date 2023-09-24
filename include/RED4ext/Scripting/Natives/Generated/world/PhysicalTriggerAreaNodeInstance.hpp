#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/INodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct PhysicalTriggerAreaNodeInstance : world::INodeInstance
{
    static constexpr const char* NAME = "worldPhysicalTriggerAreaNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0xB0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(PhysicalTriggerAreaNodeInstance, 0xB0);
} // namespace world
using worldPhysicalTriggerAreaNodeInstance = world::PhysicalTriggerAreaNodeInstance;
} // namespace RED4ext

// clang-format on
