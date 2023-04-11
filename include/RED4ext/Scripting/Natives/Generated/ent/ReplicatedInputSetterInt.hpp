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
struct ReplicatedInputSetterInt : ent::ReplicatedInputSetterBase
{
    static constexpr const char* NAME = "entReplicatedInputSetterInt";
    static constexpr const char* ALIAS = NAME;

    int32_t value; // 18
    uint8_t unk1C[0x20 - 0x1C]; // 1C
};
RED4EXT_ASSERT_SIZE(ReplicatedInputSetterInt, 0x20);
} // namespace ent
using entReplicatedInputSetterInt = ent::ReplicatedInputSetterInt;
} // namespace RED4ext

// clang-format on
