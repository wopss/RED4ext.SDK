#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AreaShapeNode.hpp>

namespace RED4ext
{
namespace quest { struct IBaseCondition; }

namespace game
{
struct DynamicEventNode : world::AreaShapeNode
{
    static constexpr const char* NAME = "gameDynamicEventNode";
    static constexpr const char* ALIAS = NAME;

    NodeRef mappinRef; // 60
    Handle<quest::IBaseCondition> condition; // 68
};
RED4EXT_ASSERT_SIZE(DynamicEventNode, 0x78);
} // namespace game
using gameDynamicEventNode = game::DynamicEventNode;
} // namespace RED4ext

// clang-format on
