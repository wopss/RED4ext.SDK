#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldWidgetComponent.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) FrameWidgetComponent : WorldWidgetComponent
{
    static constexpr const char* NAME = "FrameWidgetComponent";
    static constexpr const char* ALIAS = "frameWidgetComponent";

    Vector2 dimensions; // 3A0
    uint8_t unk3A8[0x3B0 - 0x3A8]; // 3A8
};
RED4EXT_ASSERT_SIZE(FrameWidgetComponent, 0x3B0);
using frameWidgetComponent = FrameWidgetComponent;
} // namespace RED4ext

// clang-format on
