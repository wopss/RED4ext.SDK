#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/StaticMeshNodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) AdvertisementNodeInstance : world::StaticMeshNodeInstance
{
    static constexpr const char* NAME = "worldAdvertisementNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk100[0x1F0 - 0x100]; // 100
};
RED4EXT_ASSERT_SIZE(AdvertisementNodeInstance, 0x1F0);
} // namespace world
using worldAdvertisementNodeInstance = world::AdvertisementNodeInstance;
} // namespace RED4ext

// clang-format on
