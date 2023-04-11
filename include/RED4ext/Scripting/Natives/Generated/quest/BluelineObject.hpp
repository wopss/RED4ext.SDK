#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace quest
{
struct BluelineObject : IScriptable
{
    static constexpr const char* NAME = "questBluelineObject";
    static constexpr const char* ALIAS = "BluelineObject";

    uint8_t unk40[0x58 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(BluelineObject, 0x58);
} // namespace quest
using questBluelineObject = quest::BluelineObject;
using BluelineObject = quest::BluelineObject;
} // namespace RED4ext

// clang-format on
