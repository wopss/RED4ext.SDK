#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/EInputAction.hpp>
#include <RED4ext/Scripting/Natives/Generated/EInputKey.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CallbackSystemTarget.hpp>

namespace RED4ext
{
namespace game
{
struct InputTarget : game::CallbackSystemTarget
{
    static constexpr const char* NAME = "gameInputTarget";
    static constexpr const char* ALIAS = "InputTarget";

    EInputAction action; // 40
    EInputKey key; // 44
    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(InputTarget, 0x50);
} // namespace game
using gameInputTarget = game::InputTarget;
using InputTarget = game::InputTarget;
} // namespace RED4ext

// clang-format on
