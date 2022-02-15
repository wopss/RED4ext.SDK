#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IWardrobeSystem.hpp>

namespace RED4ext
{
namespace game { 
struct WardrobeSystem : game::IWardrobeSystem
{
    static constexpr const char* NAME = "gameWardrobeSystem";
    static constexpr const char* ALIAS = "WardrobeSystem";

    uint8_t unk48[0x78 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(WardrobeSystem, 0x78);
} // namespace game
using WardrobeSystem = game::WardrobeSystem;
} // namespace RED4ext
