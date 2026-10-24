#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace ink
{
struct WidgetHelper : IScriptable
{
    static constexpr const char* NAME = "inkWidgetHelper";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(WidgetHelper, 0x40);
} // namespace ink
using inkWidgetHelper = ink::WidgetHelper;
} // namespace RED4ext

// clang-format on
