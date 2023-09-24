#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/DataNode.hpp>

namespace RED4ext
{
namespace game::data { struct GroupNode; }
namespace game::data { struct ValueDataNode; }

namespace game::data
{
struct ValueNode : game::data::DataNode
{
    static constexpr const char* NAME = "gamedataValueNode";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk98[0x118 - 0x98]; // 98
    Handle<game::data::ValueDataNode> data; // 118
    Handle<game::data::GroupNode> group; // 128
};
RED4EXT_ASSERT_SIZE(ValueNode, 0x138);
} // namespace game::data
using gamedataValueNode = game::data::ValueNode;
} // namespace RED4ext

// clang-format on
