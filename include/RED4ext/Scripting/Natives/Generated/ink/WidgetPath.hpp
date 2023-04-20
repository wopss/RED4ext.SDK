#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace ink
{
struct WidgetPath
{
    static constexpr const char* NAME = "inkWidgetPath";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> names; // 00
};
RED4EXT_ASSERT_SIZE(WidgetPath, 0x10);
} // namespace ink
using inkWidgetPath = ink::WidgetPath;
} // namespace RED4ext

// clang-format on
