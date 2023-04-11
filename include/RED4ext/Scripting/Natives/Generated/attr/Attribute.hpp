#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace attr
{
struct Attribute : ISerializable
{
    static constexpr const char* NAME = "attrAttribute";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(Attribute, 0x30);
} // namespace attr
using attrAttribute = attr::Attribute;
} // namespace RED4ext

// clang-format on
