#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game
{
struct CallbackSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameCallbackSystem";
    static constexpr const char* ALIAS = "CallbackSystem";

    uint8_t unk48[0x110 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(CallbackSystem, 0x110);
} // namespace game
using gameCallbackSystem = game::CallbackSystem;
using CallbackSystem = game::CallbackSystem;
} // namespace RED4ext

// clang-format on
