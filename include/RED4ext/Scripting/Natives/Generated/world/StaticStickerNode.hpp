#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
struct CBitmapTexture;

namespace world
{
struct StaticStickerNode : world::Node
{
    static constexpr const char* NAME = "worldStaticStickerNode";
    static constexpr const char* ALIAS = NAME;

    DynArray<CString> labels; // 38
    DynArray<RaRef<CBitmapTexture>> sprites; // 48
    uint8_t unk58[0x78 - 0x58]; // 58
    Color textColor; // 78
    Color backgroundColor; // 7C
    int32_t spriteSize; // 80
    float scale; // 84
    float visibilityDistance; // 88
    bool showBackground; // 8C
    bool alignSpritesHorizontally; // 8D
    uint8_t unk8E[0x90 - 0x8E]; // 8E
};
RED4EXT_ASSERT_SIZE(StaticStickerNode, 0x90);
} // namespace world
using worldStaticStickerNode = world::StaticStickerNode;
} // namespace RED4ext

// clang-format on
