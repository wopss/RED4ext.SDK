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
struct HackingManager_SetEnabled : quest::HackingManager_ActionType
{
    static constexpr const char* NAME = "questHackingManager_SetEnabled";
    static constexpr const char* ALIAS = NAME;

    bool enabled; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(HackingManager_SetEnabled, 0x38);
} // namespace quest
using questHackingManager_SetEnabled = quest::HackingManager_SetEnabled;
} // namespace RED4ext

// clang-format on
