#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game
{
struct IRichPresenceSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIRichPresenceSystem";
    static constexpr const char* ALIAS = "IRichPresenceSystem";

};
RED4EXT_ASSERT_SIZE(IRichPresenceSystem, 0x48);
} // namespace game
using gameIRichPresenceSystem = game::IRichPresenceSystem;
using IRichPresenceSystem = game::IRichPresenceSystem;
} // namespace RED4ext

// clang-format on
