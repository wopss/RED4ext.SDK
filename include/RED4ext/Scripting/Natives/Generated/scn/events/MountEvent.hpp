#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PSMBodyCarryingStyle.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>

namespace RED4ext
{
namespace scn::events
{
struct MountEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scneventsMountEvent";
    static constexpr const char* ALIAS = NAME;

    scn::PerformerId parent; // 58
    scn::PerformerId child; // 5C
    CName slotName; // 60
    game::PSMBodyCarryingStyle carryStyle; // 68
    bool isInstant; // 6C
    bool removePitchRollRotationOnDismount; // 6D
    bool keepTransform; // 6E
    bool isCarrying; // 6F
    bool switchRenderPlane; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
};
RED4EXT_ASSERT_SIZE(MountEvent, 0x78);
} // namespace scn::events
using scneventsMountEvent = scn::events::MountEvent;
} // namespace RED4ext

// clang-format on
