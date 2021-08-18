#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IDistance.hpp>

namespace RED4ext
{
namespace quest { 
struct ObjectDistance : quest::IDistance
{
    static constexpr const char* NAME = "questObjectDistance";
    static constexpr const char* ALIAS = NAME;

    bool isPlayer; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
    game::EntityReference nodeRef1; // 38
    game::EntityReference nodeRef2; // 70
};
RED4EXT_ASSERT_SIZE(ObjectDistance, 0xA8);
} // namespace quest
} // namespace RED4ext
