#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CacheMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidget.hpp>

namespace RED4ext
{
namespace ink { 
struct CacheWidget : ink::CompoundWidget
{
    static constexpr const char* NAME = "inkCacheWidget";
    static constexpr const char* ALIAS = "inkCacheWidget";

    CName externalDynamicTexture; // 220
    Vector2 innerScale; // 228
    ink::CacheMode mode; // 230
    uint8_t unk231[0x280 - 0x231]; // 231
};
RED4EXT_ASSERT_SIZE(CacheWidget, 0x280);
} // namespace ink
} // namespace RED4ext
