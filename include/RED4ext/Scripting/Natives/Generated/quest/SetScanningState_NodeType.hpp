#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVisionModeNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ScanningState.hpp>

namespace RED4ext
{
namespace quest
{
struct SetScanningState_NodeType : quest::IVisionModeNodeType
{
    static constexpr const char* NAME = "questSetScanningState_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference objectRef; // 30
    quest::ScanningState state; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(SetScanningState_NodeType, 0x70);
} // namespace quest
using questSetScanningState_NodeType = quest::SetScanningState_NodeType;
} // namespace RED4ext

// clang-format on
