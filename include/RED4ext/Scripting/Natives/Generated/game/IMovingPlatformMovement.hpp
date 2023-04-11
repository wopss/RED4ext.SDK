#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IMovingPlatformMovementInitData.hpp>

namespace RED4ext
{
namespace game
{
struct IMovingPlatformMovement : IScriptable
{
    static constexpr const char* NAME = "gameIMovingPlatformMovement";
    static constexpr const char* ALIAS = "IMovingPlatformMovement";

    game::IMovingPlatformMovementInitData initData; // 40
    uint8_t unk48[0x50 - 0x48]; // 48
    NodeRef endNode; // 50
};
RED4EXT_ASSERT_SIZE(IMovingPlatformMovement, 0x58);
} // namespace game
using gameIMovingPlatformMovement = game::IMovingPlatformMovement;
using IMovingPlatformMovement = game::IMovingPlatformMovement;
} // namespace RED4ext

// clang-format on
