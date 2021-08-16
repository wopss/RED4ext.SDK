#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace vehicle { 
struct AutopilotTransformProvider
{
    static constexpr const char* NAME = "vehicleAutopilotTransformProvider";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x2A0 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(AutopilotTransformProvider, 0x2A0);
} // namespace vehicle
} // namespace RED4ext
