#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IPrereqManager.hpp>

namespace RED4ext
{
namespace game
{
struct PrereqManager : game::IPrereqManager
{
    static constexpr const char* NAME = "gamePrereqManager";
    static constexpr const char* ALIAS = "PrereqManager";

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(PrereqManager, 0x50);
} // namespace game
using gamePrereqManager = game::PrereqManager;
using PrereqManager = game::PrereqManager;
} // namespace RED4ext

// clang-format on
