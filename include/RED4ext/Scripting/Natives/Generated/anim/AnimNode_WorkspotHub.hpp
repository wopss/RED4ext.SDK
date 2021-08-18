#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EventFilterType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/WorkEntryId.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_WorkspotHub : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_WorkspotHub";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x1D8 - 0x48]; // 48
    DynArray<work::WorkEntryId> additionalLinkIds; // 1D8
    DynArray<anim::PoseLink> additionalLinks; // 1E8
    CName animLoopEventName; // 1F8
    bool isCoverHubHack; // 200
    uint8_t unk201[0x208 - 0x201]; // 201
    CName mainEmotionalState; // 208
    CName emotionalExpression; // 210
    float facialKeyWeight; // 218
    uint8_t unk21C[0x220 - 0x21C]; // 21C
    CName facialIdleMaleAnimation; // 220
    CName facialIdleKey_MaleAnimation; // 228
    CName facialIdleFemaleAnimation; // 230
    CName facialIdleKey_FemaleAnimation; // 238
    anim::EventFilterType eventFilterType; // 240
    uint8_t unk244[0x248 - 0x244]; // 244
};
RED4EXT_ASSERT_SIZE(AnimNode_WorkspotHub, 0x248);
} // namespace anim
} // namespace RED4ext
