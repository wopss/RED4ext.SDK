#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/SplinePoint.hpp>

namespace RED4ext
{
struct Spline : ISerializable
{
    static constexpr const char* NAME = "Spline";
    static constexpr const char* ALIAS = NAME;

    DynArray<SplinePoint> points; // 30
    uint8_t unk40[0x54 - 0x40]; // 40
    bool looped; // 54
    bool reversed; // 55
    bool hasDirection; // 56
    uint8_t unk57[0x58 - 0x57]; // 57
};
RED4EXT_ASSERT_SIZE(Spline, 0x58);
} // namespace RED4ext

// clang-format on
