#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game { 
struct GameFeatureManager : IScriptable
{
    static constexpr const char* NAME = "gameGameFeatureManager";
    static constexpr const char* ALIAS = "GameFeatureManager";

    uint8_t unk40[0x60 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(GameFeatureManager, 0x60);
} // namespace game
using GameFeatureManager = game::GameFeatureManager;
} // namespace RED4ext
