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
struct NotExposed : attr::Attribute
{
    static constexpr const char* NAME = "attrNotExposed";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(NotExposed, 0x30);
} // namespace attr
using attrNotExposed = attr::NotExposed;
} // namespace RED4ext

// clang-format on
