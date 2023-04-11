#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/attr/Attribute.hpp>

namespace RED4ext
{
namespace attr
{
struct Choice : attr::Attribute
{
    static constexpr const char* NAME = "attrChoice";
    static constexpr const char* ALIAS = NAME;

    DynArray<CString> tions; // 30
};
RED4EXT_ASSERT_SIZE(Choice, 0x40);
} // namespace attr
using attrChoice = attr::Choice;
} // namespace RED4ext

// clang-format on
