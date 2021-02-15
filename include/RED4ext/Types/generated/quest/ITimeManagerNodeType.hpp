#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/quest/ObjectNodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct ITimeManagerNodeType : quest::ObjectNodeType
{
    static constexpr const char* NAME = "questITimeManagerNodeType";
    static constexpr const char* ALIAS = NAME;

    CName source; // 30
};
RED4EXT_ASSERT_SIZE(ITimeManagerNodeType, 0x38);
} // namespace quest
} // namespace RED4ext
