#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace appearance
{
struct __declspec(align(0x10)) PartComponentOverrides
{
    static constexpr const char* NAME = "appearancePartComponentOverrides";
    static constexpr const char* ALIAS = NAME;

    CName componentName; // 00
    CName meshAppearance; // 08
    Transform initialTransform; // 10
    Vector3 visualScale; // 30
    bool useCustomTransform; // 3C
    bool acceptDismemberment; // 3D
    uint8_t unk3E[0x40 - 0x3E]; // 3E
    uint64_t chunkMask; // 40
    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(PartComponentOverrides, 0x50);
} // namespace appearance
using appearancePartComponentOverrides = appearance::PartComponentOverrides;
} // namespace RED4ext

// clang-format on
