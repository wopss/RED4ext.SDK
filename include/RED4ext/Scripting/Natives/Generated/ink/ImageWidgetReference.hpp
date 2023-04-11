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
struct ImageWidgetReference : ink::LeafWidgetReference
{
    static constexpr const char* NAME = "inkImageWidgetReference";
    static constexpr const char* ALIAS = "inkImageRef";

};
RED4EXT_ASSERT_SIZE(ImageWidgetReference, 0x18);
} // namespace ink
using inkImageWidgetReference = ink::ImageWidgetReference;
using inkImageRef = ink::ImageWidgetReference;
} // namespace RED4ext

// clang-format on
