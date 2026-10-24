#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class CallbackLifetime : int32_t
{
    Session = 0,
    Forever = 1,
};
} // namespace game
using gameCallbackLifetime = game::CallbackLifetime;
} // namespace RED4ext

// clang-format on
