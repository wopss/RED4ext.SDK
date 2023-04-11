#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::input
{
struct ScriptListenerAction
{
    static constexpr const char* NAME = "gameinputScriptListenerAction";
    static constexpr const char* ALIAS = "ListenerAction";

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(ScriptListenerAction, 0x8);
} // namespace game::input
using gameinputScriptListenerAction = game::input::ScriptListenerAction;
using ListenerAction = game::input::ScriptListenerAction;
} // namespace RED4ext

// clang-format on
