#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EChildOrder.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidget.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LineVertex.hpp>

namespace RED4ext
{
namespace ink
{
struct __declspec(align(0x10)) LinePatternWidget : ink::ImageWidget
{
    static constexpr const char* NAME = "inkLinePatternWidget";
    static constexpr const char* ALIAS = "inkLinePattern";

    DynArray<ink::LineVertex> vertexList; // 340
    uint8_t unk350[0x354 - 0x350]; // 350
    float spacing; // 354
    float looseSpacing; // 358
    float startOffset; // 35C
    float endOffset; // 360
    float fadeInLength; // 364
    bool rotateWithSegment; // 368
    ink::EChildOrder patternDirection; // 369
    uint8_t unk36A[0x370 - 0x36A]; // 36A
};
RED4EXT_ASSERT_SIZE(LinePatternWidget, 0x370);
} // namespace ink
using inkLinePatternWidget = ink::LinePatternWidget;
using inkLinePattern = ink::LinePatternWidget;
} // namespace RED4ext

// clang-format on
