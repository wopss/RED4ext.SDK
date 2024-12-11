#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/GalleryData.hpp>

namespace RED4ext
{
namespace ink
{
struct GalleryDataContainer : ISerializable
{
    static constexpr const char* NAME = "inkGalleryDataContainer";
    static constexpr const char* ALIAS = NAME;

    ink::GalleryData data; // 30
};
RED4EXT_ASSERT_SIZE(GalleryDataContainer, 0x40);
} // namespace ink
using inkGalleryDataContainer = ink::GalleryDataContainer;
} // namespace RED4ext

// clang-format on
