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
struct FinalBoardsLoadPonRSave_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questFinalBoardsLoadPonRSave_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool loadPointOfNoReturnSave; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(FinalBoardsLoadPonRSave_NodeType, 0x40);
} // namespace quest
using questFinalBoardsLoadPonRSave_NodeType = quest::FinalBoardsLoadPonRSave_NodeType;
} // namespace RED4ext

// clang-format on
