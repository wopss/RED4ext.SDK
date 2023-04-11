#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace world
{
struct BlockoutAreaOutline : ISerializable
{
    static constexpr const char* NAME = "worldBlockoutAreaOutline";
    static constexpr const char* ALIAS = NAME;

    DynArray<uint32_t> points; // 30
    DynArray<uint32_t> edges; // 40
};
RED4EXT_ASSERT_SIZE(BlockoutAreaOutline, 0x50);
} // namespace world
using worldBlockoutAreaOutline = world::BlockoutAreaOutline;
} // namespace RED4ext

// clang-format on
