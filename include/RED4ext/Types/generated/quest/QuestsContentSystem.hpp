#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/quest/IQuestsContentSystem.hpp>

namespace RED4ext
{
namespace quest { 
struct QuestsContentSystem : quest::IQuestsContentSystem
{
    static constexpr const char* NAME = "questQuestsContentSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xF0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(QuestsContentSystem, 0xF0);
} // namespace quest
} // namespace RED4ext
