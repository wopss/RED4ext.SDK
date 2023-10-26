#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EnvironmentDamageReceiverShape.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) EnvironmentDamageReceiverBox : game::EnvironmentDamageReceiverShape
{
    static constexpr const char* NAME = "gameEnvironmentDamageReceiverBox";
    static constexpr const char* ALIAS = NAME;

    Vector3 dimensions; // 50
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(EnvironmentDamageReceiverBox, 0x60);
} // namespace game
using gameEnvironmentDamageReceiverBox = game::EnvironmentDamageReceiverBox;
} // namespace RED4ext

// clang-format on
