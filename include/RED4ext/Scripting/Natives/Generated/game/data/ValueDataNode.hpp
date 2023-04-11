#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/DataNode.hpp>

namespace RED4ext
{
namespace game::data
{
struct ValueDataNode : game::data::DataNode
{
    static constexpr const char* NAME = "gamedataValueDataNode";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ValueDataNode, 0x98);
} // namespace game::data
using gamedataValueDataNode = game::data::ValueDataNode;
} // namespace RED4ext

// clang-format on
