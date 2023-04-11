#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/VoicesetInputToBlock.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>

namespace RED4ext
{
namespace quest
{
struct ChangeVoicesetState_NodeTypeParams
{
    static constexpr const char* NAME = "questChangeVoicesetState_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference puppetRef; // 00
    bool isPlayer; // 38
    bool enableVoicesetLines; // 39
    bool enableVoicesetGrunts; // 3A
    uint8_t unk3B[0x40 - 0x3B]; // 3B
    DynArray<ent::VoicesetInputToBlock> inputsToBlock; // 40
};
RED4EXT_ASSERT_SIZE(ChangeVoicesetState_NodeTypeParams, 0x50);
} // namespace quest
using questChangeVoicesetState_NodeTypeParams = quest::ChangeVoicesetState_NodeTypeParams;
} // namespace RED4ext

// clang-format on
