#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace quest
{
struct ReactionPresetRecordSelector : ISerializable
{
    static constexpr const char* NAME = "questReactionPresetRecordSelector";
    static constexpr const char* ALIAS = NAME;

    bool isGanger; // 30
    bool isCivilian; // 31
    bool isCorpo; // 32
    bool isPolice; // 33
    bool isMechanical; // 34
    bool isNoReaction; // 35
    bool setDefault; // 36
    uint8_t unk37[0x38 - 0x37]; // 37
    TweakDBID gangerRecordID; // 38
    TweakDBID civilianRecordID; // 40
    TweakDBID corpoRecordID; // 48
    TweakDBID policeRecordID; // 50
    TweakDBID mechanicalRecordID; // 58
    TweakDBID noReactionRecordID; // 60
};
RED4EXT_ASSERT_SIZE(ReactionPresetRecordSelector, 0x68);
} // namespace quest
using questReactionPresetRecordSelector = quest::ReactionPresetRecordSelector;
} // namespace RED4ext

// clang-format on
