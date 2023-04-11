#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/IMarker.hpp>

namespace RED4ext
{
namespace world
{
struct SpawnPointMarker : world::IMarker
{
    static constexpr const char* NAME = "worldSpawnPointMarker";
    static constexpr const char* ALIAS = NAME;

    uint32_t type; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
};
RED4EXT_ASSERT_SIZE(SpawnPointMarker, 0x38);
} // namespace world
using worldSpawnPointMarker = world::SpawnPointMarker;
} // namespace RED4ext

// clang-format on
