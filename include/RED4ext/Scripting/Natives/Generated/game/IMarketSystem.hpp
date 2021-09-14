#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScriptableSystem.hpp>

namespace RED4ext
{
namespace game { 
struct IMarketSystem : game::ScriptableSystem
{
    static constexpr const char* NAME = "gameIMarketSystem";
    static constexpr const char* ALIAS = "IMarketSystem";

    uint8_t unk2D8[0x360 - 0x2D8]; // 2D8
};
RED4EXT_ASSERT_SIZE(IMarketSystem, 0x360);
} // namespace game
using IMarketSystem = game::IMarketSystem;
} // namespace RED4ext
