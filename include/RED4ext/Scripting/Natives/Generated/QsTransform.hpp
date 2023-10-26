#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) QsTransform
{
    static constexpr const char* NAME = "QsTransform";
    static constexpr const char* ALIAS = NAME;

    Vector4 Translation; // 00
    Quaternion Rotation; // 10
    Vector4 Scale; // 20
};
RED4EXT_ASSERT_SIZE(QsTransform, 0x30);
} // namespace RED4ext

// clang-format on
