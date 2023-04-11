#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/BlockoutArea.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/BlockoutEdge.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/BlockoutPoint.hpp>

namespace RED4ext
{
namespace world
{
struct BlockoutData : ISerializable
{
    static constexpr const char* NAME = "worldBlockoutData";
    static constexpr const char* ALIAS = NAME;

    DynArray<world::BlockoutPoint> points; // 30
    DynArray<world::BlockoutEdge> edges; // 40
    DynArray<world::BlockoutArea> areas; // 50
    DynArray<uint32_t> freePoints; // 60
    DynArray<uint32_t> freeEdges; // 70
    DynArray<uint32_t> freeAreas; // 80
    uint8_t unk90[0x98 - 0x90]; // 90
    Vector2 worldSize; // 98
    uint8_t unkA0[0xC0 - 0xA0]; // A0
};
RED4EXT_ASSERT_SIZE(BlockoutData, 0xC0);
} // namespace world
using worldBlockoutData = world::BlockoutData;
} // namespace RED4ext

// clang-format on
