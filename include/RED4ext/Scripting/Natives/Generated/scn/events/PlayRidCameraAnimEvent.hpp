#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/Marker.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidCameraAnimationSRRefId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/events/PlayAnimEventData.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/events/RidCameraPlacement.hpp>

namespace RED4ext
{
namespace scn::events
{
struct PlayRidCameraAnimEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scneventsPlayRidCameraAnimEvent";
    static constexpr const char* ALIAS = NAME;

    NodeRef cameraRef; // 58
    scn::events::RidCameraPlacement cameraPlacement; // 60
    scn::events::PlayAnimEventData animData; // 64
    scn::RidCameraAnimationSRRefId animSRRefId; // 7C
    scn::Marker animOriginMarker; // 80
    bool activateAsGameCamera; // E0
    bool controlRenderToTextureState; // E1
    bool markCamerCut; // E2
    uint8_t unkE3[0xE8 - 0xE3]; // E3
};
RED4EXT_ASSERT_SIZE(PlayRidCameraAnimEvent, 0xE8);
} // namespace scn::events
using scneventsPlayRidCameraAnimEvent = scn::events::PlayRidCameraAnimEvent;
} // namespace RED4ext

// clang-format on
