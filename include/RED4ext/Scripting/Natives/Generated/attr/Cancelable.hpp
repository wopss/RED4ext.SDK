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
struct Cancelable : attr::Attribute
{
    static constexpr const char* NAME = "attrCancelable";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(Cancelable, 0x30);
} // namespace attr
using attrCancelable = attr::Cancelable;
} // namespace RED4ext

// clang-format on
