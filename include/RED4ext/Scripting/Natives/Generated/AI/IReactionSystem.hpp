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
struct IReactionSystem : game::IGameSystem
{
    static constexpr const char* NAME = "AIIReactionSystem";
    static constexpr const char* ALIAS = "IReactionSystem";

};
RED4EXT_ASSERT_SIZE(IReactionSystem, 0x48);
} // namespace AI
using AIIReactionSystem = AI::IReactionSystem;
using IReactionSystem = AI::IReactionSystem;
} // namespace RED4ext

// clang-format on
