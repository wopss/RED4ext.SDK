#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IAdvertisementWidgetComponentWrapper.hpp>

namespace RED4ext
{
namespace world::ui
{
struct __declspec(align(0x10)) AdvertisementWidgetComponentWrapper : ink::IAdvertisementWidgetComponentWrapper
{
    static constexpr const char* NAME = "worlduiAdvertisementWidgetComponentWrapper";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk10[0x60 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(AdvertisementWidgetComponentWrapper, 0x60);
} // namespace world::ui
using worlduiAdvertisementWidgetComponentWrapper = world::ui::AdvertisementWidgetComponentWrapper;
} // namespace RED4ext

// clang-format on
