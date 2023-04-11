#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game
{
struct StatusEffectReplicatedInfo
{
    static constexpr const char* NAME = "gameStatusEffectReplicatedInfo";
    static constexpr const char* ALIAS = NAME;

    TweakDBID statusEffectRecordID; // 00
    uint32_t stackCount; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
    CName source; // 10
};
RED4EXT_ASSERT_SIZE(StatusEffectReplicatedInfo, 0x18);
} // namespace game
using gameStatusEffectReplicatedInfo = game::StatusEffectReplicatedInfo;
} // namespace RED4ext

// clang-format on
