#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/nav/gendebug/CompactCell.hpp>
#include <RED4ext/Scripting/Natives/Generated/nav/gendebug/SpansData.hpp>

namespace RED4ext
{
namespace nav::gendebug
{
struct __declspec(align(0x10)) Heightfield : ISerializable
{
    static constexpr const char* NAME = "navgendebugHeightfield";
    static constexpr const char* ALIAS = NAME;

    Box bounds; // 30
    float cellSize; // 50
    float cellHeight; // 54
    uint16_t width; // 58
    uint16_t height; // 5A
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    DynArray<nav::gendebug::CompactCell> cells; // 60
    nav::gendebug::SpansData rawSpans; // 70
    nav::gendebug::SpansData compactSpans; // A0
    DynArray<uint16_t> distancefield; // D0
    DynArray<uint16_t> regions; // E0
    uint16_t maxDistancefieldValue; // F0
    uint8_t unkF2[0x100 - 0xF2]; // F2
};
RED4EXT_ASSERT_SIZE(Heightfield, 0x100);
} // namespace nav::gendebug
using navgendebugHeightfield = nav::gendebug::Heightfield;
} // namespace RED4ext

// clang-format on
