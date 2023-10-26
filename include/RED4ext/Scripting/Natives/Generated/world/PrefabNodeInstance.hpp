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
struct __declspec(align(0x10)) PrefabNodeInstance : world::SnappableNodeInstance
{
    static constexpr const char* NAME = "worldPrefabNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0x1A0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(PrefabNodeInstance, 0x1A0);
} // namespace world
using worldPrefabNodeInstance = world::PrefabNodeInstance;
} // namespace RED4ext

// clang-format on
