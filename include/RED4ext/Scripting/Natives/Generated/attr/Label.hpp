#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/attr/Attribute.hpp>

namespace RED4ext
{
namespace attr
{
struct Label : attr::Attribute
{
    static constexpr const char* NAME = "attrLabel";
    static constexpr const char* ALIAS = NAME;

    CString xt; // 30
};
RED4EXT_ASSERT_SIZE(Label, 0x50);
} // namespace attr
using attrLabel = attr::Label;
} // namespace RED4ext

// clang-format on
