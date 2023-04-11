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
struct ISmartObjectManager : game::IGameSystem
{
    static constexpr const char* NAME = "AIISmartObjectManager";
    static constexpr const char* ALIAS = "ISmartObjectManager";

};
RED4EXT_ASSERT_SIZE(ISmartObjectManager, 0x48);
} // namespace AI
using AIISmartObjectManager = AI::ISmartObjectManager;
using ISmartObjectManager = AI::ISmartObjectManager;
} // namespace RED4ext

// clang-format on
