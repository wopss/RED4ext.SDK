#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/EntityReference.hpp>
#include <RED4ext/Types/generated/quest/ITutorial_NodeSubType.hpp>

namespace RED4ext
{
namespace quest { 
struct ShowHighlight_NodeSubType : quest::ITutorial_NodeSubType
{
    static constexpr const char* NAME = "questShowHighlight_NodeSubType";
    static constexpr const char* ALIAS = NAME;

    bool enable; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    game::EntityReference entityReference; // 40
};
RED4EXT_ASSERT_SIZE(ShowHighlight_NodeSubType, 0x78);
} // namespace quest
} // namespace RED4ext
