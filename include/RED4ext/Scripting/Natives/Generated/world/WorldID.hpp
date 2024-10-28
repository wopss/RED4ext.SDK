#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <RED4ext/Scripting/Natives/worldWorldID.hpp>

namespace RED4ext
{
RED4EXT_ASSERT_SIZE(world::WorldID, 0x38);
using worldWorldID = world::WorldID;
} // namespace RED4ext

/*
#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace world
{
struct WorldID
{
    static constexpr const char* NAME = "worldWorldID";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x38 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(WorldID, 0x38);
} // namespace world
using worldWorldID = world::WorldID;
} // namespace RED4ext
*/

// clang-format on
