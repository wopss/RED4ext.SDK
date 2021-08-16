#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
struct OrientedBox
{
    static constexpr const char* NAME = "OrientedBox";
    static constexpr const char* ALIAS = NAME;

    Vector4 position; // 00
    Vector4 edge_1; // 10 -- edge 1
    Vector4 edge_2; // 20 -- edge 2
};
RED4EXT_ASSERT_SIZE(OrientedBox, 0x30);
} // namespace RED4ext
