#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LeafWidgetReference.hpp>

namespace RED4ext
{
namespace ink
{
struct MaskWidgetReference : ink::LeafWidgetReference
{
    static constexpr const char* NAME = "inkMaskWidgetReference";
    static constexpr const char* ALIAS = "inkMaskRef";

};
RED4EXT_ASSERT_SIZE(MaskWidgetReference, 0x18);
} // namespace ink
using inkMaskWidgetReference = ink::MaskWidgetReference;
using inkMaskRef = ink::MaskWidgetReference;
} // namespace RED4ext

// clang-format on
