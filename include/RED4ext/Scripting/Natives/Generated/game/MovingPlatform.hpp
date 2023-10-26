#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MovingPlatformLoopType.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) MovingPlatform : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gameMovingPlatform";
    static constexpr const char* ALIAS = "MovingPlatform";

    uint8_t unk120[0x1A8 - 0x120]; // 120
    CName soundPositionName; // 1A8
    uint8_t unk1B0[0x1DC - 0x1B0]; // 1B0
    game::MovingPlatformLoopType loopType; // 1DC
    uint8_t unk1E0[0x1E8 - 0x1E0]; // 1E0
    bool supportLegacyUnalignedMarkers; // 1E8
    bool enableWaterInteractions; // 1E9
    uint8_t unk1EA[0x200 - 0x1EA]; // 1EA
};
RED4EXT_ASSERT_SIZE(MovingPlatform, 0x200);
} // namespace game
using gameMovingPlatform = game::MovingPlatform;
using MovingPlatform = game::MovingPlatform;
} // namespace RED4ext

// clang-format on
