#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldPosition.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/GlobalNodeID.hpp>

namespace RED4ext
{
namespace AI
{
struct SpotPersistentData
{
    static constexpr const char* NAME = "AISpotPersistentData";
    static constexpr const char* ALIAS = NAME;

    WorldPosition worldPosition; // 00
    uint8_t unk0C[0x10 - 0xC]; // C
    world::GlobalNodeID globalNodeId; // 10
    float yaw; // 18
    bool isEnabled; // 1C
    uint8_t unk1D[0x20 - 0x1D]; // 1D
};
RED4EXT_ASSERT_SIZE(SpotPersistentData, 0x20);
} // namespace AI
using AISpotPersistentData = AI::SpotPersistentData;
} // namespace RED4ext

// clang-format on
