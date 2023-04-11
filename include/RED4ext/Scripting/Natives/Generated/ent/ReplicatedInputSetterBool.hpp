#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ReplicatedInputSetterBase.hpp>

namespace RED4ext
{
namespace ent
{
struct ReplicatedInputSetterBool : ent::ReplicatedInputSetterBase
{
    static constexpr const char* NAME = "entReplicatedInputSetterBool";
    static constexpr const char* ALIAS = NAME;

    bool value; // 18
    uint8_t unk19[0x20 - 0x19]; // 19
};
RED4EXT_ASSERT_SIZE(ReplicatedInputSetterBool, 0x20);
} // namespace ent
using entReplicatedInputSetterBool = ent::ReplicatedInputSetterBool;
} // namespace RED4ext

// clang-format on
