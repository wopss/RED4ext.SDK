#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace vehicle { 
struct SummonLogic
{
    static constexpr const char* NAME = "vehicleSummonLogic";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0xA8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(SummonLogic, 0xA8);
} // namespace vehicle
} // namespace RED4ext
