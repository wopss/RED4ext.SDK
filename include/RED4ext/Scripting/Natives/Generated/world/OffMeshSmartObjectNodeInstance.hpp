#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/OffMeshConnectionNodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) OffMeshSmartObjectNodeInstance : world::OffMeshConnectionNodeInstance
{
    static constexpr const char* NAME = "worldOffMeshSmartObjectNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkE0[0xF0 - 0xE0]; // E0
};
RED4EXT_ASSERT_SIZE(OffMeshSmartObjectNodeInstance, 0xF0);
} // namespace world
using worldOffMeshSmartObjectNodeInstance = world::OffMeshSmartObjectNodeInstance;
} // namespace RED4ext

// clang-format on
