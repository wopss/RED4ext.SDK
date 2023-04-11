#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/MuteAnimEvents.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/events/PlayAnimEventExData.hpp>

namespace RED4ext
{
namespace scn
{
struct PlayAnimEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scnPlayAnimEvent";
    static constexpr const char* ALIAS = NAME;

    scn::PerformerId performer; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    CName actorComponent; // 60
    scn::events::PlayAnimEventExData animData; // 68
    bool convertToAdditive; // 90
    uint8_t unk91[0x94 - 0x91]; // 91
    float neckWeight; // 94
    bool upperFaceBlendAdditive; // 98
    bool lowerFaceBlendAdditive; // 99
    bool eyesBlendAdditive; // 9A
    uint8_t unk9B[0x9C - 0x9B]; // 9B
    anim::MuteAnimEvents muteAnimEvents; // 9C
};
RED4EXT_ASSERT_SIZE(PlayAnimEvent, 0xA0);
} // namespace scn
using scnPlayAnimEvent = scn::PlayAnimEvent;
} // namespace RED4ext

// clang-format on
