#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace ink
{
struct GalleryData
{
    static constexpr const char* NAME = "inkGalleryData";
    static constexpr const char* ALIAS = NAME;

    DynArray<uint32_t> favorites; // 00
};
RED4EXT_ASSERT_SIZE(GalleryData, 0x10);
} // namespace ink
using inkGalleryData = ink::GalleryData;
} // namespace RED4ext

// clang-format on
