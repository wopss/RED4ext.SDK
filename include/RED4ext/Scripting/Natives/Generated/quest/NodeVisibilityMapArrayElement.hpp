#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace quest
{
struct NodeVisibilityMapArrayElement
{
    static constexpr const char* NAME = "questNodeVisibilityMapArrayElement";
    static constexpr const char* ALIAS = NAME;

    world::GlobalNodeRef globalNodeRef; // 00
    bool visible; // 08
    uint8_t unk09[0x10 - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(NodeVisibilityMapArrayElement, 0x10);
} // namespace quest
using questNodeVisibilityMapArrayElement = quest::NodeVisibilityMapArrayElement;
} // namespace RED4ext

// clang-format on
