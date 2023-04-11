#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/Time.hpp>

namespace RED4ext
{
namespace ent
{
struct ReplicatedInputSetterBase
{
    static constexpr const char* NAME = "entReplicatedInputSetterBase";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    CName name; // 08
    net::Time applyServerTime; // 10
};
RED4EXT_ASSERT_SIZE(ReplicatedInputSetterBase, 0x18);
} // namespace ent
using entReplicatedInputSetterBase = ent::ReplicatedInputSetterBase;
} // namespace RED4ext

// clang-format on
