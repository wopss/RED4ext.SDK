#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>

namespace RED4ext
{
namespace world
{
struct BlockoutPoint : ISerializable
{
    static constexpr const char* NAME = "worldBlockoutPoint";
    static constexpr const char* ALIAS = NAME;

    Vector2 position; // 30
    DynArray<uint32_t> edges; // 38
    int32_t constraint; // 48
    bool isFree; // 4C
    uint8_t unk4D[0x50 - 0x4D]; // 4D
};
RED4EXT_ASSERT_SIZE(BlockoutPoint, 0x50);
} // namespace world
using worldBlockoutPoint = world::BlockoutPoint;
} // namespace RED4ext

// clang-format on
