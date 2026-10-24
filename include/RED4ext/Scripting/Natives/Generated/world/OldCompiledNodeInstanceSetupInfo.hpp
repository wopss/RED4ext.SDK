#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) OldCompiledNodeInstanceSetupInfo
{
    static constexpr const char* NAME = "worldOldCompiledNodeInstanceSetupInfo";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x90 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(OldCompiledNodeInstanceSetupInfo, 0x90);
} // namespace world
using worldOldCompiledNodeInstanceSetupInfo = world::OldCompiledNodeInstanceSetupInfo;
} // namespace RED4ext

// clang-format on
