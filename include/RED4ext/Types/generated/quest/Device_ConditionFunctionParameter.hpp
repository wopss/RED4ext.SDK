#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>

namespace RED4ext
{
namespace quest { 
struct Device_ConditionFunctionParameter
{
    static constexpr const char* NAME = "questDevice_ConditionFunctionParameter";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    Variant value; // 08
};
RED4EXT_ASSERT_SIZE(Device_ConditionFunctionParameter, 0x20);
} // namespace quest
} // namespace RED4ext
