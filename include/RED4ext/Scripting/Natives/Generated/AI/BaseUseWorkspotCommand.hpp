#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/Command.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/WorkEntryId.hpp>

namespace RED4ext
{
namespace AI
{
struct BaseUseWorkspotCommand : AI::Command
{
    static constexpr const char* NAME = "AIBaseUseWorkspotCommand";
    static constexpr const char* ALIAS = NAME;

    bool moveToWorkspot; // 60
    uint8_t unk61[0x68 - 0x61]; // 61
    CName forceEntryAnimName; // 68
    bool idleOnlyMode; // 70
    uint8_t unk71[0x74 - 0x71]; // 71
    work::WorkEntryId infiniteSequenceEntryId; // 74
    bool jumpToEntry; // 78
    uint8_t unk79[0x7C - 0x79]; // 79
    work::WorkEntryId entryId; // 7C
    CName entryTag; // 80
    DynArray<work::WorkEntryId> workExcludedGestures; // 88
    uint8_t unk98[0xD1 - 0x98]; // 98
    bool continueInCombat; // D1
    uint8_t unkD2[0x130 - 0xD2]; // D2
};
RED4EXT_ASSERT_SIZE(BaseUseWorkspotCommand, 0x130);
} // namespace AI
using AIBaseUseWorkspotCommand = AI::BaseUseWorkspotCommand;
} // namespace RED4ext

// clang-format on
