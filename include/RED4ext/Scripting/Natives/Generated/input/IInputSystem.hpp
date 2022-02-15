#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace input { 
struct IInputSystem
{
    static constexpr const char* NAME = "inputIInputSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x148 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(IInputSystem, 0x148);
} // namespace input
} // namespace RED4ext
