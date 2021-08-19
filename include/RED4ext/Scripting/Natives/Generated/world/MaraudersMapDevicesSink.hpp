#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace world { 
struct MaraudersMapDevicesSink : IScriptable
{
    static constexpr const char* NAME = "worldMaraudersMapDevicesSink";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x58 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(MaraudersMapDevicesSink, 0x58);
} // namespace world
} // namespace RED4ext
