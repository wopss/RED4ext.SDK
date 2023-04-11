#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct FinalBoardsEnableSkipCredits_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questFinalBoardsEnableSkipCredits_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool enableSkipping; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(FinalBoardsEnableSkipCredits_NodeType, 0x40);
} // namespace quest
using questFinalBoardsEnableSkipCredits_NodeType = quest::FinalBoardsEnableSkipCredits_NodeType;
} // namespace RED4ext

// clang-format on
