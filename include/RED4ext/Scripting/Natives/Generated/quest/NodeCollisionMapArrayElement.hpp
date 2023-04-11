#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ComponentCollisionMapArrayElement.hpp>

namespace RED4ext
{
namespace quest
{
struct NodeCollisionMapArrayElement
{
    static constexpr const char* NAME = "questNodeCollisionMapArrayElement";
    static constexpr const char* ALIAS = NAME;

    NodeRef objectRef; // 00
    DynArray<quest::ComponentCollisionMapArrayElement> componentsCollisionMapArray; // 08
};
RED4EXT_ASSERT_SIZE(NodeCollisionMapArrayElement, 0x18);
} // namespace quest
using questNodeCollisionMapArrayElement = quest::NodeCollisionMapArrayElement;
} // namespace RED4ext

// clang-format on
