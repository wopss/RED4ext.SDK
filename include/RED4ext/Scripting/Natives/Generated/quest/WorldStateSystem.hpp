#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IWorldStateSystem.hpp>

namespace RED4ext
{
namespace quest
{
struct WorldStateSystem : quest::IWorldStateSystem
{
    static constexpr const char* NAME = "questWorldStateSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x1F8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(WorldStateSystem, 0x1F8);
} // namespace quest
using questWorldStateSystem = quest::WorldStateSystem;
} // namespace RED4ext

// clang-format on
