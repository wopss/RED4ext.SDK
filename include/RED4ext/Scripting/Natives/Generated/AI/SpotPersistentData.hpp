#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/GlobalNodeID.hpp>

namespace RED4ext
{
namespace AI { 
struct SpotPersistentData
{
    static constexpr const char* NAME = "AISpotPersistentData";
    static constexpr const char* ALIAS = NAME;

    WorldTransform worldTransform; // 00
    world::GlobalNodeID globalNodeId; // 20
    bool isEnabled; // 28
    uint8_t unk29[0x30 - 0x29]; // 29
};
RED4EXT_ASSERT_SIZE(SpotPersistentData, 0x30);
} // namespace AI
} // namespace RED4ext
