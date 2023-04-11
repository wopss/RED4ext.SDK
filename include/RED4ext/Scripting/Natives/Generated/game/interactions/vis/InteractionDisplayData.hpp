#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/EInputKey.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/Choice.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/ChoiceTypeWrapper.hpp>

namespace RED4ext
{
namespace game::interactions::vis
{
struct InteractionDisplayData
{
    static constexpr const char* NAME = "gameinteractionsvisInteractionDisplayData";
    static constexpr const char* ALIAS = NAME;

    CName putAction; // 00
    EInputKey wInputKey; // 08
    bool HoldAction; // 0C
    uint8_t unk0D[0x10 - 0xD]; // D
    CString calizedName; // 10
    game::interactions::ChoiceTypeWrapper pe; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
    game::interactions::Choice oice; // 38
};
RED4EXT_ASSERT_SIZE(InteractionDisplayData, 0xD8);
} // namespace game::interactions::vis
using gameinteractionsvisInteractionDisplayData = game::interactions::vis::InteractionDisplayData;
} // namespace RED4ext

// clang-format on
