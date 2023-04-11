#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/VisualTagsSchema.hpp>

namespace RED4ext
{
namespace tools
{
struct VisualTagsRoot : ISerializable
{
    static constexpr const char* NAME = "toolsVisualTagsRoot";
    static constexpr const char* ALIAS = NAME;

    DynArray<tools::VisualTagsSchema> schemas; // 30
};
RED4EXT_ASSERT_SIZE(VisualTagsRoot, 0x40);
} // namespace tools
using toolsVisualTagsRoot = tools::VisualTagsRoot;
} // namespace RED4ext

// clang-format on
