#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/MeshNodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) WaterPatchNodeInstance : world::MeshNodeInstance
{
    static constexpr const char* NAME = "worldWaterPatchNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk100[0x160 - 0x100]; // 100
};
RED4EXT_ASSERT_SIZE(WaterPatchNodeInstance, 0x160);
} // namespace world
using worldWaterPatchNodeInstance = world::WaterPatchNodeInstance;
} // namespace RED4ext

// clang-format on
