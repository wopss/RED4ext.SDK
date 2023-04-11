#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace game { struct Puppet; }

namespace game
{
struct WeakSpotReplicatedInfo
{
    static constexpr const char* NAME = "gameWeakSpotReplicatedInfo";
    static constexpr const char* ALIAS = NAME;

    uint64_t weakSpotRecordID; // 00
    float wsHealthValue; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
    WeakHandle<game::Puppet> LastDamageInstigator; // 10
};
RED4EXT_ASSERT_SIZE(WeakSpotReplicatedInfo, 0x20);
} // namespace game
using gameWeakSpotReplicatedInfo = game::WeakSpotReplicatedInfo;
} // namespace RED4ext

// clang-format on
