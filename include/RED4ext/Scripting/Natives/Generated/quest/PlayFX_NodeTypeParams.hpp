#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>

namespace RED4ext
{
namespace quest { 
struct PlayFX_NodeTypeParams
{
    static constexpr const char* NAME = "questPlayFX_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference objectRef; // 00
    CName effectName; // 38
    uint32_t sequenceShift; // 40
    bool isPlayer; // 44
    bool play; // 45
    uint8_t unk46[0x48 - 0x46]; // 46
};
RED4EXT_ASSERT_SIZE(PlayFX_NodeTypeParams, 0x48);
} // namespace quest
} // namespace RED4ext
