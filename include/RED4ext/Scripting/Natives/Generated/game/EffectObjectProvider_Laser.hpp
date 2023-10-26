#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectProvider_PhysicalRay.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) EffectObjectProvider_Laser : game::EffectObjectProvider_PhysicalRay
{
    static constexpr const char* NAME = "gameEffectObjectProvider_Laser";
    static constexpr const char* ALIAS = NAME;

    uint32_t inputTracesPerSecond; // F0
    uint8_t unkF4[0x100 - 0xF4]; // F4
    Vector4 inputRayOffset; // 100
};
RED4EXT_ASSERT_SIZE(EffectObjectProvider_Laser, 0x110);
} // namespace game
using gameEffectObjectProvider_Laser = game::EffectObjectProvider_Laser;
} // namespace RED4ext

// clang-format on
