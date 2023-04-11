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
struct VideoWidgetReference : ink::LeafWidgetReference
{
    static constexpr const char* NAME = "inkVideoWidgetReference";
    static constexpr const char* ALIAS = "inkVideoRef";

};
RED4EXT_ASSERT_SIZE(VideoWidgetReference, 0x18);
} // namespace ink
using inkVideoWidgetReference = ink::VideoWidgetReference;
using inkVideoRef = ink::VideoWidgetReference;
} // namespace RED4ext

// clang-format on
