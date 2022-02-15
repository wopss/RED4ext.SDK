#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/IRuntimeSystem.hpp>

namespace RED4ext
{
namespace world { 
struct RuntimeSystemDestruction : world::IRuntimeSystem
{
    static constexpr const char* NAME = "worldRuntimeSystemDestruction";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xB80 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RuntimeSystemDestruction, 0xB80);
} // namespace world
} // namespace RED4ext
