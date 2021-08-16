#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace world { 
struct CompiledNodeInstanceSetupInfoBuffer
{
    static constexpr const char* NAME = "worldCompiledNodeInstanceSetupInfoBuffer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x28 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(CompiledNodeInstanceSetupInfoBuffer, 0x28);
} // namespace world
} // namespace RED4ext
