#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/BrushMirrorType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/BrushTileType.hpp>

namespace RED4ext
{
namespace ink { struct TextureAtlas; }

namespace ink
{
struct WidgetBrush : IScriptable
{
    static constexpr const char* NAME = "inkWidgetBrush";
    static constexpr const char* ALIAS = NAME;

    Ref<ink::TextureAtlas> textureAtlas; // 40
    CName texturePartId; // 58
    ink::BrushTileType tileType; // 60
    ink::BrushMirrorType mirrorType; // 61
    uint8_t unk62[0x78 - 0x62]; // 62
};
RED4EXT_ASSERT_SIZE(WidgetBrush, 0x78);
} // namespace ink
using inkWidgetBrush = ink::WidgetBrush;
} // namespace RED4ext

// clang-format on
