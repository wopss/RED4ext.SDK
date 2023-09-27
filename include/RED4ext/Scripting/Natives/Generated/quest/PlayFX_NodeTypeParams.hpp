#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>

namespace RED4ext
{
namespace quest
{
struct PlayFX_NodeTypeParams
{
    static constexpr const char* NAME = "questPlayFX_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference objectRef; // 00
    CName effectName; // 38
    CName effectInstanceName; // 40
    uint32_t sequenceShift; // 48
    bool isPlayer; // 4C
    bool play; // 4D
    bool save; // 4E
    uint8_t unk4F[0x50 - 0x4F]; // 4F
};
RED4EXT_ASSERT_SIZE(PlayFX_NodeTypeParams, 0x50);
} // namespace quest
using questPlayFX_NodeTypeParams = quest::PlayFX_NodeTypeParams;
} // namespace RED4ext

// clang-format on
