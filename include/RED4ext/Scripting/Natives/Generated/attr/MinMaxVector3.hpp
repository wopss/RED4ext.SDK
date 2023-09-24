#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/attr/Attribute.hpp>

namespace RED4ext
{
namespace attr
{
struct MinMaxVector3 : attr::Attribute
{
    static constexpr const char* NAME = "attrMinMaxVector3";
    static constexpr const char* ALIAS = NAME;

    Vector3 n; // 30
    Vector3 x; // 3C
};
RED4EXT_ASSERT_SIZE(MinMaxVector3, 0x48);
} // namespace attr
using attrMinMaxVector3 = attr::MinMaxVector3;
} // namespace RED4ext

// clang-format on
