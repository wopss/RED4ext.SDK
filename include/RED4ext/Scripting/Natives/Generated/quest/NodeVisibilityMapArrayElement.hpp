#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/GlobalNodeRef.hpp>

namespace RED4ext
{
namespace quest { 
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
} // namespace RED4ext
