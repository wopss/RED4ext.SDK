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
struct ISubtitleHandlerSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameISubtitleHandlerSystem";
    static constexpr const char* ALIAS = "ISubtitleHandlerSystem";

};
RED4EXT_ASSERT_SIZE(ISubtitleHandlerSystem, 0x48);
} // namespace game
using gameISubtitleHandlerSystem = game::ISubtitleHandlerSystem;
using ISubtitleHandlerSystem = game::ISubtitleHandlerSystem;
} // namespace RED4ext

// clang-format on
