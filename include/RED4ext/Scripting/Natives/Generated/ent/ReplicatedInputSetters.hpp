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
struct ReplicatedInputSetters
{
    static constexpr const char* NAME = "entReplicatedInputSetters";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x10 - 0x0]; // 0
    net::Time serverReplicatedTime; // 10
    uint8_t unk18[0x20 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(ReplicatedInputSetters, 0x20);
} // namespace ent
using entReplicatedInputSetters = ent::ReplicatedInputSetters;
} // namespace RED4ext

// clang-format on
