#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/Time.hpp>

namespace RED4ext
{
namespace game
{
struct ActionReplicatedState
{
    static constexpr const char* NAME = "gameActionReplicatedState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    uint32_t replicationId; // 08
    uint16_t type; // 0C
    uint8_t unk0E[0x10 - 0xE]; // E
    net::Time startTimeStamp; // 10
    net::Time stopTimeStamp; // 18
    uint8_t updateBucket; // 20
    uint8_t unk21[0x28 - 0x21]; // 21
};
RED4EXT_ASSERT_SIZE(ActionReplicatedState, 0x28);
} // namespace game
using gameActionReplicatedState = game::ActionReplicatedState;
} // namespace RED4ext

// clang-format on
