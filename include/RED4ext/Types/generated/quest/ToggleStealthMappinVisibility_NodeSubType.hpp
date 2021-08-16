#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/EntityReference.hpp>
#include <RED4ext/Types/generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest { 
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
} // namespace RED4ext
