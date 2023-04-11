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
struct IReplicatedGameSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIReplicatedGameSystem";
    static constexpr const char* ALIAS = "IReplicatedGameSystem";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(IReplicatedGameSystem, 0x58);
} // namespace game
using gameIReplicatedGameSystem = game::IReplicatedGameSystem;
using IReplicatedGameSystem = game::IReplicatedGameSystem;
} // namespace RED4ext

// clang-format on
