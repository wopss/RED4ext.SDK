#pragma once

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
namespace scn::events { 
struct PlayRidCameraAnimEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scneventsPlayRidCameraAnimEvent";
    static constexpr const char* ALIAS = NAME;

    NodeRef cameraRef; // 58
    scn::events::RidCameraPlacement cameraPlacement; // 60
    scn::events::PlayAnimEventData animData; // 64
    uint8_t unk7C[0x80 - 0x7C]; // 7C
    scn::RidCameraAnimationSRRefId animSRRefId; // 80
    scn::Marker animOriginMarker; // 90
    bool activateAsGameCamera; // F0
    bool controlRenderToTextureState; // F1
    uint8_t unkF2[0xF8 - 0xF2]; // F2
};
RED4EXT_ASSERT_SIZE(PlayRidCameraAnimEvent, 0xF8);
} // namespace scn::events
} // namespace RED4ext
