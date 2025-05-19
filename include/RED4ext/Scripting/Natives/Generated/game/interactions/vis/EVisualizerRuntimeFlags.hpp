#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::interactions::vis {
enum class EVisualizerRuntimeFlags : int16_t
{
    None = 0,
    Locked = 1,
    Failsafe = 2,
    Dbg_Active = 4,
};
} // namespace game::interactions::vis
using gameinteractionsvisEVisualizerRuntimeFlags = game::interactions::vis::EVisualizerRuntimeFlags;
using EVisualizerRuntimeFlags = game::interactions::vis::EVisualizerRuntimeFlags;
} // namespace RED4ext

// clang-format on
