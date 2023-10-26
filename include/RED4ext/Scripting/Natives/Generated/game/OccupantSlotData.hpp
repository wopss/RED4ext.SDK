#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MountingSlotRole.hpp>

namespace RED4ext
{
namespace work { struct WorkspotResource; }

namespace game
{
struct __declspec(align(0x10)) OccupantSlotData
{
    static constexpr const char* NAME = "gameOccupantSlotData";
    static constexpr const char* ALIAS = NAME;

    CName slotName; // 00
    CName syncAnimationTag; // 08
    Ref<work::WorkspotResource> workSpotResource; // 10
    uint8_t unk28[0x30 - 0x28]; // 28
    Vector4 exitOffsetFromSlot; // 30
    game::MountingSlotRole role; // 40
    uint8_t unk44[0x50 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(OccupantSlotData, 0x50);
} // namespace game
using gameOccupantSlotData = game::OccupantSlotData;
} // namespace RED4ext

// clang-format on
