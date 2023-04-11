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
struct ReplicatedVariableValue
{
    static constexpr const char* NAME = "entReplicatedVariableValue";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    float value; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
    net::Time applyServerTime; // 10
};
RED4EXT_ASSERT_SIZE(ReplicatedVariableValue, 0x18);
} // namespace ent
using entReplicatedVariableValue = ent::ReplicatedVariableValue;
} // namespace RED4ext

// clang-format on
