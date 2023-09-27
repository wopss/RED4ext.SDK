#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/IManager.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct CManager : game::interactions::IManager
{
    static constexpr const char* NAME = "gameinteractionsCManager";
    static constexpr const char* ALIAS = "InteractionManager";

    uint8_t unk48[0x110 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(CManager, 0x110);
} // namespace game::interactions
using gameinteractionsCManager = game::interactions::CManager;
using InteractionManager = game::interactions::CManager;
} // namespace RED4ext

// clang-format on
