#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/StyleOverrideType.hpp>

namespace RED4ext
{
namespace ink { struct StyleResource; }

namespace ink
{
struct StyleOverride
{
    static constexpr const char* NAME = "inkStyleOverride";
    static constexpr const char* ALIAS = NAME;

    Ref<ink::StyleResource> styleResource; // 00
    ink::StyleOverrideType overrideType; // 18
    uint8_t unk19[0x20 - 0x19]; // 19
};
RED4EXT_ASSERT_SIZE(StyleOverride, 0x20);
} // namespace ink
using inkStyleOverride = ink::StyleOverride;
} // namespace RED4ext

// clang-format on
