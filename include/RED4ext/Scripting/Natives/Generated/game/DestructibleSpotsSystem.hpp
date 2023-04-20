#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/IDestructibleSpotsSystem.hpp>

namespace RED4ext
{
namespace game
{
struct DestructibleSpotsSystem : world::IDestructibleSpotsSystem
{
    static constexpr const char* NAME = "gameDestructibleSpotsSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x80 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(DestructibleSpotsSystem, 0x80);
} // namespace game
using gameDestructibleSpotsSystem = game::DestructibleSpotsSystem;
} // namespace RED4ext

// clang-format on
