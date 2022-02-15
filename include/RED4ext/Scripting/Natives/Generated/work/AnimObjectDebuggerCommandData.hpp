#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/DebuggerCommandData.hpp>

namespace RED4ext
{
namespace work { 
struct AnimObjectDebuggerCommandData : work::DebuggerCommandData
{
    static constexpr const char* NAME = "workAnimObjectDebuggerCommandData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk20[0x30 - 0x20]; // 20
};
RED4EXT_ASSERT_SIZE(AnimObjectDebuggerCommandData, 0x30);
} // namespace work
} // namespace RED4ext
