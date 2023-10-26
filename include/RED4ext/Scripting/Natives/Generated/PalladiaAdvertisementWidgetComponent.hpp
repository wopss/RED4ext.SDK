#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AdvertisementWidgetComponent.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) PalladiaAdvertisementWidgetComponent : AdvertisementWidgetComponent
{
    static constexpr const char* NAME = "PalladiaAdvertisementWidgetComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk330[0x350 - 0x330]; // 330
};
RED4EXT_ASSERT_SIZE(PalladiaAdvertisementWidgetComponent, 0x350);
} // namespace RED4ext

// clang-format on
