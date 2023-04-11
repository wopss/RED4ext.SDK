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
struct IFxSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIFxSystem";
    static constexpr const char* ALIAS = "IFxSystem";

};
RED4EXT_ASSERT_SIZE(IFxSystem, 0x48);
} // namespace game
using gameIFxSystem = game::IFxSystem;
using IFxSystem = game::IFxSystem;
} // namespace RED4ext

// clang-format on
