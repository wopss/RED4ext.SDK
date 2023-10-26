#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) FreeCameraLightSettings
{
    static constexpr const char* NAME = "gameFreeCameraLightSettings";
    static constexpr const char* ALIAS = NAME;

    Vector3 s; // 00
    float dius; // 0C
    float tensity; // 10
    float mperature; // 14
    uint8_t unk18[0x20 - 0x18]; // 18
    Vector4 lor; // 20
};
RED4EXT_ASSERT_SIZE(FreeCameraLightSettings, 0x30);
} // namespace game
using gameFreeCameraLightSettings = game::FreeCameraLightSettings;
} // namespace RED4ext

// clang-format on
