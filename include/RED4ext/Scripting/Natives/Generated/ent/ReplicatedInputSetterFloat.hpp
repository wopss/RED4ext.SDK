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
struct ReplicatedInputSetterFloat : ent::ReplicatedInputSetterBase
{
    static constexpr const char* NAME = "entReplicatedInputSetterFloat";
    static constexpr const char* ALIAS = NAME;

    float value; // 18
    uint8_t unk1C[0x20 - 0x1C]; // 1C
};
RED4EXT_ASSERT_SIZE(ReplicatedInputSetterFloat, 0x20);
} // namespace ent
using entReplicatedInputSetterFloat = ent::ReplicatedInputSetterFloat;
} // namespace RED4ext

// clang-format on
