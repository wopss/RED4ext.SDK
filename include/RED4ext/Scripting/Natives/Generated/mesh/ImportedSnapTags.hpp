#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace mesh
{
struct ImportedSnapTags
{
    static constexpr const char* NAME = "meshImportedSnapTags";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> includeTags; // 00
    DynArray<CName> excludeTags; // 10
};
RED4EXT_ASSERT_SIZE(ImportedSnapTags, 0x20);
} // namespace mesh
using meshImportedSnapTags = mesh::ImportedSnapTags;
} // namespace RED4ext

// clang-format on
