#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EChildOrder.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidget.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LineVertex.hpp>

namespace RED4ext
{
namespace ink { 
struct LinePatternWidget : ink::ImageWidget
{
    static constexpr const char* NAME = "inkLinePatternWidget";
    static constexpr const char* ALIAS = "inkLinePattern";

    DynArray<ink::LineVertex> vertexList; // 310
    uint8_t unk320[0x324 - 0x320]; // 320
    float spacing; // 324
    float looseSpacing; // 328
    float startOffset; // 32C
    float endOffset; // 330
    float fadeInLength; // 334
    bool rotateWithSegment; // 338
    ink::EChildOrder patternDirection; // 339
    uint8_t unk33A[0x340 - 0x33A]; // 33A
};
RED4EXT_ASSERT_SIZE(LinePatternWidget, 0x340);
} // namespace ink
using inkLinePattern = ink::LinePatternWidget;
} // namespace RED4ext
