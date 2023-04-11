#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/PeerID.hpp>

namespace RED4ext
{
namespace grs
{
struct GatherAreaReplicatedInfo
{
    static constexpr const char* NAME = "grsGatherAreaReplicatedInfo";
    static constexpr const char* ALIAS = NAME;

    bool enabled; // 00
    uint8_t unk01[0x4 - 0x1]; // 1
    StaticArray<net::PeerID, 7> enteredPlayerIDs; // 04
    bool hasActiveQuestListener; // 10
    uint8_t unk11[0x14 - 0x11]; // 11
};
RED4EXT_ASSERT_SIZE(GatherAreaReplicatedInfo, 0x14);
} // namespace grs
using grsGatherAreaReplicatedInfo = grs::GatherAreaReplicatedInfo;
} // namespace RED4ext

// clang-format on
