#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/work/DebuggerCommandData.hpp>

namespace RED4ext
{
namespace work { 
struct AnimObjectDebuggerCommandData : work::DebuggerCommandData
{
    static constexpr const char* NAME = "workAnimObjectDebuggerCommandData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk10[0x20 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(AnimObjectDebuggerCommandData, 0x20);
} // namespace work
} // namespace RED4ext
