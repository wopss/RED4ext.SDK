#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) WidgetBaseComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "WidgetBaseComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk120[0x1A0 - 0x120]; // 120
};
RED4EXT_ASSERT_SIZE(WidgetBaseComponent, 0x1A0);
} // namespace RED4ext

// clang-format on
