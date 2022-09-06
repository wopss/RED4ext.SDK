#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct CBitmapTexture;

struct CTextureArrayEntry
{
    static constexpr const char* NAME = "CTextureArrayEntry";
    static constexpr const char* ALIAS = NAME;

    Ref<CBitmapTexture> texture; // 00
};
RED4EXT_ASSERT_SIZE(CTextureArrayEntry, 0x18);
} // namespace RED4ext

// clang-format on
