#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LeafWidget.hpp>

namespace RED4ext
{
struct Bink;

namespace ink
{
struct __declspec(align(0x10)) VideoWidget : ink::LeafWidget
{
    static constexpr const char* NAME = "inkVideoWidget";
    static constexpr const char* ALIAS = "inkVideo";

    uint8_t unk200[0x238 - 0x200]; // 200
    RaRef<Bink> videoResource; // 238
    uint8_t unk240[0x260 - 0x240]; // 240
    CName overriddenPlayerName; // 260
    uint8_t unk268[0x270 - 0x268]; // 268
    bool isParallaxEnabled; // 270
    uint8_t unk271[0x272 - 0x271]; // 271
    bool loop; // 272
    uint8_t unk273[0x27A - 0x273]; // 273
    bool prefetchVideo; // 27A
    uint8_t unk27B[0x2B0 - 0x27B]; // 27B
};
RED4EXT_ASSERT_SIZE(VideoWidget, 0x2B0);
} // namespace ink
using inkVideoWidget = ink::VideoWidget;
using inkVideo = ink::VideoWidget;
} // namespace RED4ext

// clang-format on
