#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>

namespace RED4ext
{
namespace ink
{
struct UniformGridWidgetReference : ink::CompoundWidgetReference
{
    static constexpr const char* NAME = "inkUniformGridWidgetReference";
    static constexpr const char* ALIAS = "inkUniformGridRef";

};
RED4EXT_ASSERT_SIZE(UniformGridWidgetReference, 0x18);
} // namespace ink
using inkUniformGridWidgetReference = ink::UniformGridWidgetReference;
using inkUniformGridRef = ink::UniformGridWidgetReference;
} // namespace RED4ext

// clang-format on
