#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IVisionModeSystem.hpp>

namespace RED4ext
{
namespace game
{
struct VisionModeSystem : game::IVisionModeSystem
{
    static constexpr const char* NAME = "gameVisionModeSystem";
    static constexpr const char* ALIAS = "VisionModeSystem";

    uint8_t unk48[0x2430 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VisionModeSystem, 0x2430);
} // namespace game
using gameVisionModeSystem = game::VisionModeSystem;
using VisionModeSystem = game::VisionModeSystem;
} // namespace RED4ext

// clang-format on
