#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>

namespace RED4ext
{
namespace world { struct BlockoutAreaOutline; }

namespace world
{
struct BlockoutArea : ISerializable
{
    static constexpr const char* NAME = "worldBlockoutArea";
    static constexpr const char* ALIAS = NAME;

    CString name; // 30
    Color color; // 50
    uint32_t parent; // 54
    DynArray<uint32_t> children; // 58
    DynArray<Handle<world::BlockoutAreaOutline>> outlines; // 68
    uint8_t unk78[0x98 - 0x78]; // 78
    bool isFree; // 98
    bool increaseTerrainStreamingDistance; // 99
    uint8_t unk9A[0xA0 - 0x9A]; // 9A
};
RED4EXT_ASSERT_SIZE(BlockoutArea, 0xA0);
} // namespace world
using worldBlockoutArea = world::BlockoutArea;
} // namespace RED4ext

// clang-format on
