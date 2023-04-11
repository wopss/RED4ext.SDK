#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetPath.hpp>

namespace RED4ext
{
namespace ink { struct Widget; }

namespace ink
{
struct WidgetClipboardData : ISerializable
{
    static constexpr const char* NAME = "inkWidgetClipboardData";
    static constexpr const char* ALIAS = NAME;

    Handle<ink::Widget> widget; // 30
    ink::WidgetPath widgetPath; // 40
};
RED4EXT_ASSERT_SIZE(WidgetClipboardData, 0x50);
} // namespace ink
using inkWidgetClipboardData = ink::WidgetClipboardData;
} // namespace RED4ext

// clang-format on
