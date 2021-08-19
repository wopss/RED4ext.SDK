#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LeafWidget.hpp>

namespace RED4ext
{
struct Bink;

namespace ink { 
struct VideoWidget : ink::LeafWidget
{
    static constexpr const char* NAME = "inkVideoWidget";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk1F0[0x228 - 0x1F0]; // 1F0
    RaRef<Bink> videoResource; // 228
    uint8_t unk230[0x250 - 0x230]; // 230
    CName overriddenPlayerName; // 250
    uint8_t unk258[0x260 - 0x258]; // 258
    bool isParallaxEnabled; // 260
    uint8_t unk261[0x262 - 0x261]; // 261
    bool loop; // 262
    uint8_t unk263[0x26A - 0x263]; // 263
    bool prefetchVideo; // 26A
    uint8_t unk26B[0x2A0 - 0x26B]; // 26B
};
RED4EXT_ASSERT_SIZE(VideoWidget, 0x2A0);
} // namespace ink
} // namespace RED4ext
