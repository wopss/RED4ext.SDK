#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IMinimapSystem.hpp>

namespace RED4ext
{
namespace game { 
struct MinimapSystem : game::IMinimapSystem
{
    static constexpr const char* NAME = "gameMinimapSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x288 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(MinimapSystem, 0x288);
} // namespace game
} // namespace RED4ext
