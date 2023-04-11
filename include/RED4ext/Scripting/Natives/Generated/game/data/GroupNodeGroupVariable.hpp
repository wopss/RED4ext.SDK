#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/GroupNodeGroupVariableDeriveInfo.hpp>

namespace RED4ext
{
namespace game::data { struct VariableNode; }

namespace game::data
{
struct GroupNodeGroupVariable
{
    static constexpr const char* NAME = "gamedataGroupNodeGroupVariable";
    static constexpr const char* ALIAS = NAME;

    Handle<game::data::VariableNode> node; // 00
    game::data::GroupNodeGroupVariableDeriveInfo deriveInfo; // 10
    bool flattened; // 11
    uint8_t unk12[0x14 - 0x12]; // 12
    TweakDBID flatId; // 14
    uint8_t unk1C[0x20 - 0x1C]; // 1C
};
RED4EXT_ASSERT_SIZE(GroupNodeGroupVariable, 0x20);
} // namespace game::data
using gamedataGroupNodeGroupVariable = game::data::GroupNodeGroupVariable;
} // namespace RED4ext

// clang-format on
