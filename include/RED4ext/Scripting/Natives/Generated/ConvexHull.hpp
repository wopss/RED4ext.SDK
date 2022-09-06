#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
struct ConvexHull
{
    static constexpr const char* NAME = "ConvexHull";
    static constexpr const char* ALIAS = NAME;

    DynArray<Vector4> planes; // 00
};
RED4EXT_ASSERT_SIZE(ConvexHull, 0x10);
} // namespace RED4ext

// clang-format on
