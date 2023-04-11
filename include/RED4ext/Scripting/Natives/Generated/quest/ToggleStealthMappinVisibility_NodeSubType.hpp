#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct ToggleStealthMappinVisibility_NodeSubType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questToggleStealthMappinVisibility_NodeSubType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference entityReference; // 38
    bool show; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
};
RED4EXT_ASSERT_SIZE(ToggleStealthMappinVisibility_NodeSubType, 0x78);
} // namespace quest
using questToggleStealthMappinVisibility_NodeSubType = quest::ToggleStealthMappinVisibility_NodeSubType;
} // namespace RED4ext

// clang-format on
