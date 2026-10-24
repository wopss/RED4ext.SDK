#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CacheMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidget.hpp>

namespace RED4ext
{
namespace ink
{
struct __declspec(align(0x10)) CacheWidget : ink::CompoundWidget
{
    static constexpr const char* NAME = "inkCacheWidget";
    static constexpr const char* ALIAS = NAME;

    CName externalDynamicTexture; // 240
    Vector2 innerScale; // 248
    ink::CacheMode mode; // 250
    uint8_t unk251[0x300 - 0x251]; // 251
};
RED4EXT_ASSERT_SIZE(CacheWidget, 0x300);
} // namespace ink
using inkCacheWidget = ink::CacheWidget;
} // namespace RED4ext

// clang-format on
