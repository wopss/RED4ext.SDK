#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TriggerAreaNodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) AmbientAreaNodeInstance : world::TriggerAreaNodeInstance
{
    static constexpr const char* NAME = "worldAmbientAreaNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk100[0x120 - 0x100]; // 100
};
RED4EXT_ASSERT_SIZE(AmbientAreaNodeInstance, 0x120);
} // namespace world
using worldAmbientAreaNodeInstance = world::AmbientAreaNodeInstance;
} // namespace RED4ext

// clang-format on
