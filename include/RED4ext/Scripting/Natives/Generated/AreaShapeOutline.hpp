#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
struct AreaShapeOutline : ISerializable
{
    static constexpr const char* NAME = "AreaShapeOutline";
    static constexpr const char* ALIAS = NAME;

    DynArray<Vector3> points; // 30
    float height; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(AreaShapeOutline, 0x48);
} // namespace RED4ext

// clang-format on
