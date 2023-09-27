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
struct LongOperation : attr::Attribute
{
    static constexpr const char* NAME = "attrLongOperation";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(LongOperation, 0x30);
} // namespace attr
using attrLongOperation = attr::LongOperation;
} // namespace RED4ext

// clang-format on
