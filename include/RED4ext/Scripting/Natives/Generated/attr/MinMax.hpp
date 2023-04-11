#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/attr/Attribute.hpp>

namespace RED4ext
{
namespace attr
{
struct MinMax : attr::Attribute
{
    static constexpr const char* NAME = "attrMinMax";
    static constexpr const char* ALIAS = NAME;

    float n; // 30
    float x; // 34
};
RED4EXT_ASSERT_SIZE(MinMax, 0x38);
} // namespace attr
using attrMinMax = attr::MinMax;
} // namespace RED4ext

// clang-format on
