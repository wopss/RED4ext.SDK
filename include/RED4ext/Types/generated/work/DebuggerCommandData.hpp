#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/work/IWorkspotCommandData.hpp>

namespace RED4ext
{
namespace work { 
struct DebuggerCommandData : work::IWorkspotCommandData
{
    static constexpr const char* NAME = "workDebuggerCommandData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0x10 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(DebuggerCommandData, 0x10);
} // namespace work
} // namespace RED4ext
