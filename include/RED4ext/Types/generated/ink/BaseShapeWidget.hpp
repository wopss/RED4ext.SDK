#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/Vector2.hpp>
#include <RED4ext/Types/generated/ink/LeafWidget.hpp>

namespace RED4ext
{
namespace ink { 
struct BaseShapeWidget : ink::LeafWidget
{
    static constexpr const char* NAME = "inkBaseShapeWidget";
    static constexpr const char* ALIAS = "inkBaseShape";

    uint8_t unk1F0[0x1F8 - 0x1F0]; // 1F0
    DynArray<Vector2> vertexList; // 1F8
    uint8_t unk208[0x220 - 0x208]; // 208
};
RED4EXT_ASSERT_SIZE(BaseShapeWidget, 0x220);
} // namespace ink
using inkBaseShape = ink::BaseShapeWidget;
} // namespace RED4ext
