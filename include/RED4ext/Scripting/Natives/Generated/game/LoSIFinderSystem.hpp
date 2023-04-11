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
struct LoSIFinderSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameLoSIFinderSystem";
    static constexpr const char* ALIAS = "ILoSFinderSystem";

};
RED4EXT_ASSERT_SIZE(LoSIFinderSystem, 0x48);
} // namespace game
using gameLoSIFinderSystem = game::LoSIFinderSystem;
using ILoSFinderSystem = game::LoSIFinderSystem;
} // namespace RED4ext

// clang-format on
