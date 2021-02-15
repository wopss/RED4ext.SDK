#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/world/IRuntimeSystem.hpp>

namespace RED4ext
{
namespace world { 
struct RuntimeSystemCompiledTerrain : world::IRuntimeSystem
{
    static constexpr const char* NAME = "worldRuntimeSystemCompiledTerrain";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x98 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RuntimeSystemCompiledTerrain, 0x98);
} // namespace world
} // namespace RED4ext
