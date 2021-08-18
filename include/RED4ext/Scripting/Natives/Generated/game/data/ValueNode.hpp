#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/DataNode.hpp>

namespace RED4ext
{
namespace game::data { struct GroupNode; }
namespace game::data { struct ValueDataNode; }

namespace game::data { 
struct ValueNode : game::data::DataNode
{
    static constexpr const char* NAME = "gamedataValueNode";
    static constexpr const char* ALIAS = NAME;

    Handle<game::data::ValueDataNode> data; // 98
    Handle<game::data::GroupNode> group; // A8
};
RED4EXT_ASSERT_SIZE(ValueNode, 0xB8);
} // namespace game::data
} // namespace RED4ext
