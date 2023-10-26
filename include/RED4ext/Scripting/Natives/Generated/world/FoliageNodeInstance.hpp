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
struct __declspec(align(0x10)) FoliageNodeInstance : world::INodeInstance
{
    static constexpr const char* NAME = "worldFoliageNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0x130 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(FoliageNodeInstance, 0x130);
} // namespace world
using worldFoliageNodeInstance = world::FoliageNodeInstance;
} // namespace RED4ext

// clang-format on
