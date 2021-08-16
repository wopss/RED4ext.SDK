#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PlayFPPControlAnimEvent.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PlaySkAnimRootMotionData.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PlayerAnimData.hpp>

namespace RED4ext
{
namespace scn { struct AnimName; }
namespace scn { struct EventBlendWorkspotSetupParameters; }

namespace scn { 
struct PlaySkAnimEvent : scn::PlayFPPControlAnimEvent
{
    static constexpr const char* NAME = "scnPlaySkAnimEvent";
    static constexpr const char* ALIAS = NAME;

    Handle<scn::AnimName> animName; // F8
    Handle<scn::EventBlendWorkspotSetupParameters> poseBlendOutWorkspot; // 108
    uint8_t unk118[0x120 - 0x118]; // 118
    scn::PlaySkAnimRootMotionData rootMotionData; // 120
    scn::PlayerAnimData playerData; // 1D0
    uint8_t unk1E8[0x1F0 - 0x1E8]; // 1E8
};
RED4EXT_ASSERT_SIZE(PlaySkAnimEvent, 0x1F0);
} // namespace scn
} // namespace RED4ext
