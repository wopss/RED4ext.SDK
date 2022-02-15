#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace world { 
struct RuntimeScene
{
    static constexpr const char* NAME = "worldRuntimeScene";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x4B0 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(RuntimeScene, 0x4B0);
} // namespace world
} // namespace RED4ext
