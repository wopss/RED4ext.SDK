#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace world
{
struct CompiledNodeInstanceSetupInfoBuffer
{
    static constexpr const char* NAME = "worldCompiledNodeInstanceSetupInfoBuffer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x28 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(CompiledNodeInstanceSetupInfoBuffer, 0x28);
} // namespace world
using worldCompiledNodeInstanceSetupInfoBuffer = world::CompiledNodeInstanceSetupInfoBuffer;
} // namespace RED4ext

// clang-format on
