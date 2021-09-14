#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/IManager.hpp>

namespace RED4ext
{
namespace game::interactions { 
struct CManager : game::interactions::IManager
{
    static constexpr const char* NAME = "gameinteractionsCManager";
    static constexpr const char* ALIAS = "InteractionManager";

    uint8_t unk48[0x108 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(CManager, 0x108);
} // namespace game::interactions
using InteractionManager = game::interactions::CManager;
} // namespace RED4ext
