#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/WidgetHudComponentInterface.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) WidgetHudComponent : WidgetHudComponentInterface
{
    static constexpr const char* NAME = "WidgetHudComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk1F0[0x210 - 0x1F0]; // 1F0
};
RED4EXT_ASSERT_SIZE(WidgetHudComponent, 0x210);
} // namespace RED4ext

// clang-format on
