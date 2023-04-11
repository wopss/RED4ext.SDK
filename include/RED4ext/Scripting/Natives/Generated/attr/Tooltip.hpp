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
struct Tooltip : attr::Attribute
{
    static constexpr const char* NAME = "attrTooltip";
    static constexpr const char* ALIAS = NAME;

    CString xt; // 30
};
RED4EXT_ASSERT_SIZE(Tooltip, 0x50);
} // namespace attr
using attrTooltip = attr::Tooltip;
} // namespace RED4ext

// clang-format on
