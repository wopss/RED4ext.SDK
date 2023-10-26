#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AdvertisementFormat.hpp>
#include <RED4ext/Scripting/Natives/Generated/IWorldWidgetComponent.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) AdvertisementWidgetComponent : IWorldWidgetComponent
{
    static constexpr const char* NAME = "AdvertisementWidgetComponent";
    static constexpr const char* ALIAS = NAME;

    AdvertisementFormat format; // 2B0
    uint8_t unk2B1[0x2B4 - 0x2B1]; // 2B1
    TweakDBID adGroupTDBID; // 2B4
    uint8_t unk2BC[0x2C4 - 0x2BC]; // 2BC
    bool enableOverride; // 2C4
    uint8_t unk2C5[0x2C8 - 0x2C5]; // 2C5
    TweakDBID adOverrideTDBID; // 2C8
    uint32_t adVersion; // 2D0
    bool useOnlyAttachedLights; // 2D4
    uint8_t unk2D5[0x330 - 0x2D5]; // 2D5
};
RED4EXT_ASSERT_SIZE(AdvertisementWidgetComponent, 0x330);
} // namespace RED4ext

// clang-format on
