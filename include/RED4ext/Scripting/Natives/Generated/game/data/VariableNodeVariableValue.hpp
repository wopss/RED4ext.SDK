#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/VariableNodeVariableValueDeriveInfo.hpp>

namespace RED4ext
{
namespace game::data { struct ValueNode; }

namespace game::data
{
struct VariableNodeVariableValue
{
    static constexpr const char* NAME = "gamedataVariableNodeVariableValue";
    static constexpr const char* ALIAS = NAME;

    Handle<game::data::ValueNode> node; // 00
    game::data::VariableNodeVariableValueDeriveInfo deriveInfo; // 10
    uint8_t unk11[0x18 - 0x11]; // 11
};
RED4EXT_ASSERT_SIZE(VariableNodeVariableValue, 0x18);
} // namespace game::data
using gamedataVariableNodeVariableValue = game::data::VariableNodeVariableValue;
} // namespace RED4ext

// clang-format on
