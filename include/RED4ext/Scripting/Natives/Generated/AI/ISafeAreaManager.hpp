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
struct ISafeAreaManager : game::IGameSystem
{
    static constexpr const char* NAME = "AIISafeAreaManager";
    static constexpr const char* ALIAS = "ISafeAreaManager";

};
RED4EXT_ASSERT_SIZE(ISafeAreaManager, 0x48);
} // namespace AI
using AIISafeAreaManager = AI::ISafeAreaManager;
using ISafeAreaManager = AI::ISafeAreaManager;
} // namespace RED4ext

// clang-format on
