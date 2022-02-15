#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MovingPlatformLoopType.hpp>

namespace RED4ext
{
namespace game { 
struct MovingPlatform : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gameMovingPlatform";
    static constexpr const char* ALIAS = "MovingPlatform";

    uint8_t unk120[0x1B8 - 0x120]; // 120
    game::MovingPlatformLoopType loopType; // 1B8
    uint8_t unk1BC[0x1BF - 0x1BC]; // 1BC
    bool supportLegacyUnalignedMarkers; // 1BF
};
RED4EXT_ASSERT_SIZE(MovingPlatform, 0x1C0);
} // namespace game
using MovingPlatform = game::MovingPlatform;
} // namespace RED4ext
