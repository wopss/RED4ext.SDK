#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class CallbackRunMode : int32_t
{
    Default = 0,
    Once = 1,
    OncePerTarget = 2,
};
} // namespace game
using gameCallbackRunMode = game::CallbackRunMode;
} // namespace RED4ext

// clang-format on
