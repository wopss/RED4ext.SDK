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
struct __declspec(align(0x10)) StaticFogVolumeNodeInstance : world::INodeInstance
{
    static constexpr const char* NAME = "worldStaticFogVolumeNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0xA0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(StaticFogVolumeNodeInstance, 0xA0);
} // namespace world
using worldStaticFogVolumeNodeInstance = world::StaticFogVolumeNodeInstance;
} // namespace RED4ext

// clang-format on
