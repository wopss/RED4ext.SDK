#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IDebugVisualizerSystem.hpp>

namespace RED4ext
{
namespace game
{
struct DebugVisualizerSystem : game::IDebugVisualizerSystem
{
    static constexpr const char* NAME = "gameDebugVisualizerSystem";
    static constexpr const char* ALIAS = "DebugVisualizerSystem";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(DebugVisualizerSystem, 0x60);
} // namespace game
using gameDebugVisualizerSystem = game::DebugVisualizerSystem;
using DebugVisualizerSystem = game::DebugVisualizerSystem;
} // namespace RED4ext

// clang-format on
