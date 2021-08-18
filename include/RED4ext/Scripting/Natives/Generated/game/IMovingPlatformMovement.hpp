#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IMovingPlatformMovementInitData.hpp>

namespace RED4ext
{
namespace game { 
struct IMovingPlatformMovement : IScriptable
{
    static constexpr const char* NAME = "gameIMovingPlatformMovement";
    static constexpr const char* ALIAS = "IMovingPlatformMovement";

    game::IMovingPlatformMovementInitData initData; // 40
    uint8_t unk58[0x60 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(IMovingPlatformMovement, 0x60);
} // namespace game
using IMovingPlatformMovement = game::IMovingPlatformMovement;
} // namespace RED4ext
