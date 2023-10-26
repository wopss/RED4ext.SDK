#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) SplinePoint
{
    static constexpr const char* NAME = "SplinePoint";
    static constexpr const char* ALIAS = NAME;

    Quaternion rotation; // 00
    Vector3 position; // 10
    NativeArray<Vector3, 2> tangents; // 1C
    uint8_t unk34[0x35 - 0x34]; // 34
    bool continuousTangents; // 35
    bool automaticTangents; // 36
    uint8_t unk37[0x38 - 0x37]; // 37
    uint32_t id; // 38
    uint8_t unk3C[0x50 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(SplinePoint, 0x50);
} // namespace RED4ext

// clang-format on
