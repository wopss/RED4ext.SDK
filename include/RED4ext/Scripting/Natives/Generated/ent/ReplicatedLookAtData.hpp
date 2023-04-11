#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/Time.hpp>

namespace RED4ext
{
namespace ent
{
struct ReplicatedLookAtData
{
    static constexpr const char* NAME = "entReplicatedLookAtData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    net::Time creationNetTime; // 08
};
RED4EXT_ASSERT_SIZE(ReplicatedLookAtData, 0x10);
} // namespace ent
using entReplicatedLookAtData = ent::ReplicatedLookAtData;
} // namespace RED4ext

// clang-format on
