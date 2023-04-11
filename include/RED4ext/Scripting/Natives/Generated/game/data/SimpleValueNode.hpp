#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/SimpleValueNodeValueType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ValueDataNode.hpp>

namespace RED4ext
{
namespace game::data
{
struct SimpleValueNode : game::data::ValueDataNode
{
    static constexpr const char* NAME = "gamedataSimpleValueNode";
    static constexpr const char* ALIAS = NAME;

    game::data::SimpleValueNodeValueType type; // 98
    uint8_t unk9C[0xA0 - 0x9C]; // 9C
    CString data; // A0
    uint8_t unkC0[0xD0 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(SimpleValueNode, 0xD0);
} // namespace game::data
using gamedataSimpleValueNode = game::data::SimpleValueNode;
} // namespace RED4ext

// clang-format on
