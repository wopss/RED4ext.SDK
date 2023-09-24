#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/DataNode.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/VariableNodeVariableValue.hpp>

namespace RED4ext
{
namespace game::data
{
struct VariableNode : game::data::DataNode
{
    static constexpr const char* NAME = "gamedataVariableNode";
    static constexpr const char* ALIAS = NAME;

    CName hashedName; // 98
    CString type; // A0
    CString name; // C0
    bool isForeignKey; // E0
    bool isArray; // E1
    bool hasArrayValues; // E2
    bool isAddition; // E3
    game::data::TweakDBType typeEnum; // E4
    DynArray<game::data::VariableNodeVariableValue> values; // E8
    uint8_t unkF8[0x218 - 0xF8]; // F8
};
RED4EXT_ASSERT_SIZE(VariableNode, 0x218);
} // namespace game::data
using gamedataVariableNode = game::data::VariableNode;
} // namespace RED4ext

// clang-format on
