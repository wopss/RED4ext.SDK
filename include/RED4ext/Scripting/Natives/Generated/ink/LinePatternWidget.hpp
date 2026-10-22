#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
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

    DynArray<ink::LineVertex> vertexList; // 350
    uint8_t unk360[0x364 - 0x360]; // 360
    float spacing; // 364
    float looseSpacing; // 368
    float startOffset; // 36C
    float endOffset; // 370
    float fadeInLength; // 374
    bool rotateWithSegment; // 378
    ink::EChildOrder patternDirection; // 379
    uint8_t unk37A[0x380 - 0x37A]; // 37A
};
RED4EXT_ASSERT_SIZE(LinePatternWidget, 0x380);
} // namespace ink
using inkLinePatternWidget = ink::LinePatternWidget;
using inkLinePattern = ink::LinePatternWidget;
} // namespace RED4ext

// clang-format on
