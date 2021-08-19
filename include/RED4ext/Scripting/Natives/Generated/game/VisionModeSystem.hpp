#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IVisionModeSystem.hpp>

namespace RED4ext
{
namespace game { 
struct VisionModeSystem : game::IVisionModeSystem
{
    static constexpr const char* NAME = "gameVisionModeSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x3490 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VisionModeSystem, 0x3490);
} // namespace game
} // namespace RED4ext
