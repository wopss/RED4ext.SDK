#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game
{
struct CallbackSystemHandler : IScriptable
{
    static constexpr const char* NAME = "gameCallbackSystemHandler";
    static constexpr const char* ALIAS = "CallbackSystemHandler";

    uint8_t unk40[0x98 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(CallbackSystemHandler, 0x98);
} // namespace game
using gameCallbackSystemHandler = game::CallbackSystemHandler;
using CallbackSystemHandler = game::CallbackSystemHandler;
} // namespace RED4ext

// clang-format on
