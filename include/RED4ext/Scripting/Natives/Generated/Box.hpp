#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
struct Box
{
    static constexpr const char* NAME = "Box";
    static constexpr const char* ALIAS = NAME;

    Vector4 Min; // 00
    Vector4 Max; // 10
};
RED4EXT_ASSERT_SIZE(Box, 0x20);
} // namespace RED4ext
