#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) CComStaticSkeletonDataEntry
{
    static constexpr const char* NAME = "CComStaticSkeletonDataEntry";
    static constexpr const char* ALIAS = NAME;

    int32_t boneIndex; // 00
    uint8_t unk04[0x10 - 0x4]; // 4
    Vector4 locationLS; // 10
    float mass; // 20
    uint8_t unk24[0x30 - 0x24]; // 24
};
RED4EXT_ASSERT_SIZE(CComStaticSkeletonDataEntry, 0x30);
} // namespace RED4ext

// clang-format on
