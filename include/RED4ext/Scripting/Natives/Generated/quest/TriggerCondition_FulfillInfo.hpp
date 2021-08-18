#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace quest { 
struct TriggerCondition_FulfillInfo
{
    static constexpr const char* NAME = "questTriggerCondition_FulfillInfo";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x50 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(TriggerCondition_FulfillInfo, 0x50);
} // namespace quest
} // namespace RED4ext
