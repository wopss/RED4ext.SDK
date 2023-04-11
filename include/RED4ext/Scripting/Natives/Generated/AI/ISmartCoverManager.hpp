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
struct ISmartCoverManager : game::IGameSystem
{
    static constexpr const char* NAME = "AIISmartCoverManager";
    static constexpr const char* ALIAS = "ICoverManager";

};
RED4EXT_ASSERT_SIZE(ISmartCoverManager, 0x48);
} // namespace AI
using AIISmartCoverManager = AI::ISmartCoverManager;
using ICoverManager = AI::ISmartCoverManager;
} // namespace RED4ext

// clang-format on
