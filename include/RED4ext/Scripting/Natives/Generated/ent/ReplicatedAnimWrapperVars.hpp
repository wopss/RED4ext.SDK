#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ReplicatedVariableValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/Time.hpp>

namespace RED4ext
{
namespace ent
{
struct ReplicatedAnimWrapperVars
{
    static constexpr const char* NAME = "entReplicatedAnimWrapperVars";
    static constexpr const char* ALIAS = NAME;

    DynArray<ent::ReplicatedVariableValue> data; // 00
    net::Time serverReplicatedTime; // 10
    uint8_t unk18[0x28 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(ReplicatedAnimWrapperVars, 0x28);
} // namespace ent
using entReplicatedAnimWrapperVars = ent::ReplicatedAnimWrapperVars;
} // namespace RED4ext

// clang-format on
