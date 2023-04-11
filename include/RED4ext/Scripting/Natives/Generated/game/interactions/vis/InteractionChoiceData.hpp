#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/EInputKey.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/ChoiceCaption.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/ChoiceTypeWrapper.hpp>

namespace RED4ext
{
namespace game::interactions::vis
{
struct InteractionChoiceData
{
    static constexpr const char* NAME = "gameinteractionsvisInteractionChoiceData";
    static constexpr const char* ALIAS = "InteractionChoiceData";

    CName inputAction; // 00
    EInputKey rawInputKey; // 08
    bool isHoldAction; // 0C
    uint8_t unk0D[0x10 - 0xD]; // D
    CString localizedName; // 10
    game::interactions::ChoiceTypeWrapper type; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
    DynArray<Variant> data; // 38
    game::interactions::ChoiceCaption captionParts; // 48
};
RED4EXT_ASSERT_SIZE(InteractionChoiceData, 0x58);
} // namespace game::interactions::vis
using gameinteractionsvisInteractionChoiceData = game::interactions::vis::InteractionChoiceData;
using InteractionChoiceData = game::interactions::vis::InteractionChoiceData;
} // namespace RED4ext

// clang-format on
