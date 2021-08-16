#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/Quaternion.hpp>
#include <RED4ext/Types/generated/Vector4.hpp>

namespace RED4ext
{
struct Transform
{
    static constexpr const char* NAME = "Transform";
    static constexpr const char* ALIAS = NAME;

    Vector4 position; // 00
    Quaternion orientation; // 10
};
RED4EXT_ASSERT_SIZE(Transform, 0x20);
} // namespace RED4ext
