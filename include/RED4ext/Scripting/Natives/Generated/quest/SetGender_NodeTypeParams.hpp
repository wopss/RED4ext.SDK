#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>

namespace RED4ext
{
namespace quest { 
struct SetGender_NodeTypeParams
{
    static constexpr const char* NAME = "questSetGender_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference puppetRef; // 00
    bool isPlayer; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    CName gender; // 40
};
RED4EXT_ASSERT_SIZE(SetGender_NodeTypeParams, 0x48);
} // namespace quest
} // namespace RED4ext
