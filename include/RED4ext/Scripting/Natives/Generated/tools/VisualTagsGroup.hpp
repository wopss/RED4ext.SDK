#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/VisualTagsDefinition.hpp>

namespace RED4ext
{
namespace tools
{
struct VisualTagsGroup : ISerializable
{
    static constexpr const char* NAME = "toolsVisualTagsGroup";
    static constexpr const char* ALIAS = NAME;

    CName name; // 30
    DynArray<tools::VisualTagsDefinition> tags; // 38
};
RED4EXT_ASSERT_SIZE(VisualTagsGroup, 0x48);
} // namespace tools
using toolsVisualTagsGroup = tools::VisualTagsGroup;
} // namespace RED4ext

// clang-format on
