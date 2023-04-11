#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/HackingManager_ActionType.hpp>

namespace RED4ext
{
namespace quest
{
struct HackingManager_SetHacked : quest::HackingManager_ActionType
{
    static constexpr const char* NAME = "questHackingManager_SetHacked";
    static constexpr const char* ALIAS = NAME;

    bool hacked; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(HackingManager_SetHacked, 0x38);
} // namespace quest
using questHackingManager_SetHacked = quest::HackingManager_SetHacked;
} // namespace RED4ext

// clang-format on
