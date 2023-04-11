#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace AI
{
struct ISystem : game::IGameSystem
{
    static constexpr const char* NAME = "AIISystem";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ISystem, 0x48);
} // namespace AI
using AIISystem = AI::ISystem;
} // namespace RED4ext

// clang-format on
