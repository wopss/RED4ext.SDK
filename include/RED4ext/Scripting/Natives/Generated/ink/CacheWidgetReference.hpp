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
struct CacheWidgetReference : ink::CompoundWidgetReference
{
    static constexpr const char* NAME = "inkCacheWidgetReference";
    static constexpr const char* ALIAS = "inkCacheRef";

};
RED4EXT_ASSERT_SIZE(CacheWidgetReference, 0x18);
} // namespace ink
using inkCacheWidgetReference = ink::CacheWidgetReference;
using inkCacheRef = ink::CacheWidgetReference;
} // namespace RED4ext

// clang-format on
