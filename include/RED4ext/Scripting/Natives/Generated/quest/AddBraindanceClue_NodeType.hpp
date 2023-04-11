#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/EBraindanceLayer.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct AddBraindanceClue_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questAddBraindanceClue_NodeType";
    static constexpr const char* ALIAS = NAME;

    CName clueName; // 38
    float startTime; // 40
    float endTime; // 44
    game::ui::EBraindanceLayer layer; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(AddBraindanceClue_NodeType, 0x50);
} // namespace quest
using questAddBraindanceClue_NodeType = quest::AddBraindanceClue_NodeType;
} // namespace RED4ext

// clang-format on
