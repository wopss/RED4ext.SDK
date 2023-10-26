#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>

namespace RED4ext
{
namespace cp
{
struct __declspec(align(0x10)) ConveyorLine
{
    static constexpr const char* NAME = "cpConveyorLine";
    static constexpr const char* ALIAS = NAME;

    DynArray<Vector2> physicsValidRanges; // 00
    uint8_t unk10[0x30 - 0x10]; // 10
    NodeRef spline; // 30
    uint8_t unk38[0xB0 - 0x38]; // 38
    CName template_; // B0 -- template
    bool reverseDirection; // B8
    uint8_t unkB9[0xC0 - 0xB9]; // B9
};
RED4EXT_ASSERT_SIZE(ConveyorLine, 0xC0);
} // namespace cp
using cpConveyorLine = cp::ConveyorLine;
} // namespace RED4ext

// clang-format on
