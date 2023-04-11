#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IRichPresenceSystem.hpp>

namespace RED4ext
{
namespace game
{
struct RichPresenceSystem : game::IRichPresenceSystem
{
    static constexpr const char* NAME = "gameRichPresenceSystem";
    static constexpr const char* ALIAS = "RichPresenceSystem";

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RichPresenceSystem, 0x50);
} // namespace game
using gameRichPresenceSystem = game::RichPresenceSystem;
using RichPresenceSystem = game::RichPresenceSystem;
} // namespace RED4ext

// clang-format on
