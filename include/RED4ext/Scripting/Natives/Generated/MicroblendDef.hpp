#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct CBitmapTexture;

struct MicroblendDef
{
    static constexpr const char* NAME = "MicroblendDef";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    Ref<CBitmapTexture> texture; // 08
};
RED4EXT_ASSERT_SIZE(MicroblendDef, 0x20);
} // namespace RED4ext

// clang-format on
