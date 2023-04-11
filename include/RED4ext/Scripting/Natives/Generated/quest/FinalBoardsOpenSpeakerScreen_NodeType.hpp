#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct FinalBoardsOpenSpeakerScreen_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questFinalBoardsOpenSpeakerScreen_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool openSpeakerScreen; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    CString speakerName; // 40
};
RED4EXT_ASSERT_SIZE(FinalBoardsOpenSpeakerScreen_NodeType, 0x60);
} // namespace quest
using questFinalBoardsOpenSpeakerScreen_NodeType = quest::FinalBoardsOpenSpeakerScreen_NodeType;
} // namespace RED4ext

// clang-format on
