#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/quest/IQuestsHelper.hpp>

namespace RED4ext
{
namespace quest { 
struct QuestsHelper : quest::IQuestsHelper
{
    static constexpr const char* NAME = "questQuestsHelper";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x148 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(QuestsHelper, 0x148);
} // namespace quest
} // namespace RED4ext
