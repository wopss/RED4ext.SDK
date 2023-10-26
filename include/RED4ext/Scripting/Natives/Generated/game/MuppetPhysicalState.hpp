#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) MuppetPhysicalState
{
    static constexpr const char* NAME = "gameMuppetPhysicalState";
    static constexpr const char* ALIAS = NAME;

    Vector4 position; // 00
    float worldYaw; // 10
    uint8_t unk14[0x20 - 0x14]; // 14
    Vector4 velocity; // 20
    bool isOnGround; // 30
    uint8_t unk31[0x40 - 0x31]; // 31
    Vector4 groundNormal; // 40
};
RED4EXT_ASSERT_SIZE(MuppetPhysicalState, 0x50);
} // namespace game
using gameMuppetPhysicalState = game::MuppetPhysicalState;
} // namespace RED4ext

// clang-format on
