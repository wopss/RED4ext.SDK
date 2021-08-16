#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace ink { 
struct IStateMachineState
{
    static constexpr const char* NAME = "inkIStateMachineState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x10 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(IStateMachineState, 0x10);
} // namespace ink
} // namespace RED4ext
