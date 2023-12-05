#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/ChoiceCaption.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/ChoiceLookAtDescriptor.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/ChoiceMetaData.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct Choice
{
    static constexpr const char* NAME = "gameinteractionsChoice";
    static constexpr const char* ALIAS = "InteractionChoice";

    CString caption; // 00
    game::interactions::ChoiceCaption captionParts; // 20
    DynArray<Variant> data; // 30
    game::interactions::ChoiceMetaData choiceMetaData; // 40
    uint8_t unk70[0x78 - 0x70]; // 70
    game::interactions::ChoiceLookAtDescriptor lookAtDescriptor; // 78
    uint8_t unk98[0x9A - 0x98]; // 98
    bool doNotTurnOffPreventionSystem; // 9A
    uint8_t unk9B[0xA0 - 0x9B]; // 9B
};
RED4EXT_ASSERT_SIZE(Choice, 0xA0);
} // namespace game::interactions
using gameinteractionsChoice = game::interactions::Choice;
using InteractionChoice = game::interactions::Choice;
} // namespace RED4ext

// clang-format on
