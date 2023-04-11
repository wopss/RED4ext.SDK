#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>

namespace RED4ext
{
namespace game
{
struct StatsSeedKey
{
    static constexpr const char* NAME = "gameStatsSeedKey";
    static constexpr const char* ALIAS = NAME;

    ent::EntityID entityID; // 00
    TweakDBID recordID; // 08
    uint32_t seed; // 10
    uint8_t unk14[0x18 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(StatsSeedKey, 0x18);
} // namespace game
using gameStatsSeedKey = game::StatsSeedKey;
} // namespace RED4ext

// clang-format on
