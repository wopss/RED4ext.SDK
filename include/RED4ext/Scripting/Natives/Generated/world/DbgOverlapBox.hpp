#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) DbgOverlapBox
{
    static constexpr const char* NAME = "worldDbgOverlapBox";
    static constexpr const char* ALIAS = NAME;

    Box box; // 00
    Transform transform; // 20
    uint32_t level; // 40
    bool isHit; // 44
    uint8_t unk45[0x50 - 0x45]; // 45
};
RED4EXT_ASSERT_SIZE(DbgOverlapBox, 0x50);
} // namespace world
using worldDbgOverlapBox = world::DbgOverlapBox;
} // namespace RED4ext

// clang-format on
