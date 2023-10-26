#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace game::mappins
{
struct __declspec(align(0x10)) SenseCone
{
    static constexpr const char* NAME = "gamemappinsSenseCone";
    static constexpr const char* ALIAS = NAME;

    float length; // 00
    float width; // 04
    float angleDegrees; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
    Vector4 position1; // 10
    Vector4 position2; // 20
};
RED4EXT_ASSERT_SIZE(SenseCone, 0x30);
} // namespace game::mappins
using gamemappinsSenseCone = game::mappins::SenseCone;
} // namespace RED4ext

// clang-format on
