#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace world { 
struct CompiledNodeInstanceSetupInfo
{
    static constexpr const char* NAME = "worldCompiledNodeInstanceSetupInfo";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x80 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(CompiledNodeInstanceSetupInfo, 0x80);
} // namespace world
} // namespace RED4ext
