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
    static constexpr const char* ALIAS = NAME;

    DynArray<ink::LineVertex> vertexList; // 320
    uint8_t unk330[0x334 - 0x330]; // 330
    float spacing; // 334
    float looseSpacing; // 338
    float startOffset; // 33C
    float endOffset; // 340
    float fadeInLength; // 344
    bool rotateWithSegment; // 348
    ink::EChildOrder patternDirection; // 349
    uint8_t unk34A[0x350 - 0x34A]; // 34A
};
RED4EXT_ASSERT_SIZE(LinePatternWidget, 0x350);
} // namespace ink
} // namespace RED4ext
