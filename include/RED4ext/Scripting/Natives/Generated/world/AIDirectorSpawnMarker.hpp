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
struct AIDirectorSpawnMarker : world::IMarker
{
    static constexpr const char* NAME = "worldAIDirectorSpawnMarker";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AIDirectorSpawnMarker, 0x30);
} // namespace world
using worldAIDirectorSpawnMarker = world::AIDirectorSpawnMarker;
} // namespace RED4ext

// clang-format on
