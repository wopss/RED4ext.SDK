#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ValueDataNode.hpp>

namespace RED4ext
{
namespace game::data
{
struct ComplexValueNode : game::data::ValueDataNode
{
    static constexpr const char* NAME = "gamedataComplexValueNode";
    static constexpr const char* ALIAS = NAME;

    DynArray<CString> data; // 98
};
RED4EXT_ASSERT_SIZE(ComplexValueNode, 0xA8);
} // namespace game::data
using gamedataComplexValueNode = game::data::ComplexValueNode;
} // namespace RED4ext

// clang-format on
