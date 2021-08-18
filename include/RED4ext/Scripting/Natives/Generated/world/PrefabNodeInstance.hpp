#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SnappableNodeInstance.hpp>

namespace RED4ext
{
namespace world { 
struct PrefabNodeInstance : world::SnappableNodeInstance
{
    static constexpr const char* NAME = "worldPrefabNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0x1A0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(PrefabNodeInstance, 0x1A0);
} // namespace world
} // namespace RED4ext
