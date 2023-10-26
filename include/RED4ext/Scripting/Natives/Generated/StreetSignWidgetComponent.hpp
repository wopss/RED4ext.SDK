#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/IWorldWidgetComponent.hpp>

namespace RED4ext
{
namespace ink { struct TweakDBIDSelector; }

struct __declspec(align(0x10)) StreetSignWidgetComponent : IWorldWidgetComponent
{
    static constexpr const char* NAME = "StreetSignWidgetComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk2B0[0x2C8 - 0x2B0]; // 2B0
    TweakDBID streetSignTDBID; // 2C8
    uint8_t unk2D0[0x2D8 - 0x2D0]; // 2D0
    uint32_t signVersion; // 2D8
    uint8_t unk2DC[0x2F0 - 0x2DC]; // 2DC
    Handle<ink::TweakDBIDSelector> signSelector; // 2F0
    uint8_t unk300[0x324 - 0x300]; // 300
    TweakDBID streetNameSignTDBID; // 324
    bool isAStreetName; // 32C
    uint8_t unk32D[0x330 - 0x32D]; // 32D
};
RED4EXT_ASSERT_SIZE(StreetSignWidgetComponent, 0x330);
} // namespace RED4ext

// clang-format on
