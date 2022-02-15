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

    DynArray<ink::LineVertex> vertexList; // 330
    uint8_t unk340[0x344 - 0x340]; // 340
    float spacing; // 344
    float looseSpacing; // 348
    float startOffset; // 34C
    float endOffset; // 350
    float fadeInLength; // 354
    bool rotateWithSegment; // 358
    ink::EChildOrder patternDirection; // 359
    uint8_t unk35A[0x360 - 0x35A]; // 35A
};
RED4EXT_ASSERT_SIZE(LinePatternWidget, 0x360);
} // namespace ink
using inkLinePattern = ink::LinePatternWidget;
} // namespace RED4ext
