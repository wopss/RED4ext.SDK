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
struct CanvasWidgetReference : ink::CompoundWidgetReference
{
    static constexpr const char* NAME = "inkCanvasWidgetReference";
    static constexpr const char* ALIAS = "inkCanvasRef";

};
RED4EXT_ASSERT_SIZE(CanvasWidgetReference, 0x18);
} // namespace ink
using inkCanvasWidgetReference = ink::CanvasWidgetReference;
using inkCanvasRef = ink::CanvasWidgetReference;
} // namespace RED4ext

// clang-format on
