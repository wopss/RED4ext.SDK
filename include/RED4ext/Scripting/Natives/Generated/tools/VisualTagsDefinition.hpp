#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace tools
{
struct VisualTagsDefinition
{
    static constexpr const char* NAME = "toolsVisualTagsDefinition";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x30 - 0x0]; // 0
    CName name; // 30
};
RED4EXT_ASSERT_SIZE(VisualTagsDefinition, 0x38);
} // namespace tools
using toolsVisualTagsDefinition = tools::VisualTagsDefinition;
} // namespace RED4ext

// clang-format on
