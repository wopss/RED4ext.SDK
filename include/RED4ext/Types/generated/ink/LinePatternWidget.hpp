#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/ink/EChildOrder.hpp>
#include <RED4ext/Types/generated/ink/ImageWidget.hpp>
#include <RED4ext/Types/generated/ink/LineVertex.hpp>

namespace RED4ext
{
namespace ink { 
struct LinePatternWidget : ink::ImageWidget
{
    static constexpr const char* NAME = "inkLinePatternWidget";
    static constexpr const char* ALIAS = "inkLinePattern";

    DynArray<ink::LineVertex> vertexList; // 300
    uint8_t unk310[0x314 - 0x310]; // 310
    float spacing; // 314
    float looseSpacing; // 318
    float startOffset; // 31C
    float endOffset; // 320
    float fadeInLength; // 324
    bool rotateWithSegment; // 328
    ink::EChildOrder patternDirection; // 329
    uint8_t unk32A[0x330 - 0x32A]; // 32A
};
RED4EXT_ASSERT_SIZE(LinePatternWidget, 0x330);
} // namespace ink
using inkLinePattern = ink::LinePatternWidget;
} // namespace RED4ext
