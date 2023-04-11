#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/ChoiceTypeWrapper.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct ChoiceMetaData
{
    static constexpr const char* NAME = "gameinteractionsChoiceMetaData";
    static constexpr const char* ALIAS = "InteractionChoiceMetaData";

    CString tweakDBName; // 00
    TweakDBID tweakDBID; // 20
    game::interactions::ChoiceTypeWrapper type; // 28
    uint8_t unk2C[0x30 - 0x2C]; // 2C
};
RED4EXT_ASSERT_SIZE(ChoiceMetaData, 0x30);
} // namespace game::interactions
using gameinteractionsChoiceMetaData = game::interactions::ChoiceMetaData;
using InteractionChoiceMetaData = game::interactions::ChoiceMetaData;
} // namespace RED4ext

// clang-format on
