#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/VisualTagsGroup.hpp>

namespace RED4ext
{
namespace tools
{
struct VisualTagsSchema : ISerializable
{
    static constexpr const char* NAME = "toolsVisualTagsSchema";
    static constexpr const char* ALIAS = NAME;

    CName name; // 30
    DynArray<tools::VisualTagsGroup> categories; // 38
    DynArray<tools::VisualTagsGroup> presets; // 48
};
RED4EXT_ASSERT_SIZE(VisualTagsSchema, 0x58);
} // namespace tools
using toolsVisualTagsSchema = tools::VisualTagsSchema;
} // namespace RED4ext

// clang-format on
