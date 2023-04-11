#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScriptStatPoolsListener.hpp>

namespace RED4ext
{
namespace game
{
struct CustomValueStatPoolsListener : game::ScriptStatPoolsListener
{
    static constexpr const char* NAME = "gameCustomValueStatPoolsListener";
    static constexpr const char* ALIAS = "CustomValueStatPoolsListener";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(CustomValueStatPoolsListener, 0x48);
} // namespace game
using gameCustomValueStatPoolsListener = game::CustomValueStatPoolsListener;
using CustomValueStatPoolsListener = game::CustomValueStatPoolsListener;
} // namespace RED4ext

// clang-format on
