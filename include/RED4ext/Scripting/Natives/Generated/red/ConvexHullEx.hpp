#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace red { 
struct ConvexHullEx
{
    static constexpr const char* NAME = "redConvexHullEx";
    static constexpr const char* ALIAS = NAME;

    DataBuffer data; // 00
};
RED4EXT_ASSERT_SIZE(ConvexHullEx, 0x28);
} // namespace red
} // namespace RED4ext
