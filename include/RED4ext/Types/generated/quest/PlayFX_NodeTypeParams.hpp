#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/game/EntityReference.hpp>

namespace RED4ext
{
namespace quest { 
struct PlayFX_NodeTypeParams
{
    static constexpr const char* NAME = "questPlayFX_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    bool play; // 00
    uint8_t unk01[0x8 - 0x1]; // 1
    game::EntityReference objectRef; // 08
    bool isPlayer; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
    CName effectName; // 48
    uint32_t sequenceShift; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(PlayFX_NodeTypeParams, 0x58);
} // namespace quest
} // namespace RED4ext
