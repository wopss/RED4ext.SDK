#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/DataNodeType.hpp>

namespace RED4ext
{

namespace game::data
{
struct DataNode : ISerializable
{
    static constexpr const char* NAME = "gamedataDataNode";
    static constexpr const char* ALIAS = NAME;

    game::data::DataNodeType nodeType; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
    CString fileName; // 38
    WeakHandle<game::data::DataNode> parent; // 58
    uint8_t unk68[0x98 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(DataNode, 0x98);
} // namespace game::data
using gamedataDataNode = game::data::DataNode;
} // namespace RED4ext

// clang-format on
