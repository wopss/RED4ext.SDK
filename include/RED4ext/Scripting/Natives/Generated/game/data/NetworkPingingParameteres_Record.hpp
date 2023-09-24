#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data
{
struct NetworkPingingParameteres_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataNetworkPingingParameteres_Record";
    static constexpr const char* ALIAS = "NetworkPingingParameteres_Record";

    uint8_t unk48[0x160 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(NetworkPingingParameteres_Record, 0x160);
} // namespace game::data
using gamedataNetworkPingingParameteres_Record = game::data::NetworkPingingParameteres_Record;
using NetworkPingingParameteres_Record = game::data::NetworkPingingParameteres_Record;
} // namespace RED4ext

// clang-format on
