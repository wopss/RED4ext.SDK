#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace nav::gendebug
{
struct CompactPolygon : ISerializable
{
    static constexpr const char* NAME = "navgendebugCompactPolygon";
    static constexpr const char* ALIAS = NAME;

    uint16_t index; // 30
    uint8_t unk32[0x38 - 0x32]; // 32
    DynArray<uint16_t> indices; // 38
    DynArray<uint16_t> neighbors; // 48
    uint8_t area; // 58
    uint8_t unk59[0x5A - 0x59]; // 59
    uint16_t region; // 5A
    uint16_t flags; // 5C
    uint8_t unk5E[0x60 - 0x5E]; // 5E
};
RED4EXT_ASSERT_SIZE(CompactPolygon, 0x60);
} // namespace nav::gendebug
using navgendebugCompactPolygon = nav::gendebug::CompactPolygon;
} // namespace RED4ext

// clang-format on
