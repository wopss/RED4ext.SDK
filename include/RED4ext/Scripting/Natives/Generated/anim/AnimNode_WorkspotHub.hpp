#pragma once

// clang-format off

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
namespace anim
{
struct AnimNode_WorkspotHub : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_WorkspotHub";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x1C8 - 0x48]; // 48
    DynArray<work::WorkEntryId> additionalLinkIds; // 1C8
    DynArray<anim::PoseLink> additionalLinks; // 1D8
    CName animLoopEventName; // 1E8
    bool isCoverHubHack; // 1F0
    uint8_t unk1F1[0x1F8 - 0x1F1]; // 1F1
    CName mainEmotionalState; // 1F8
    CName emotionalExpression; // 200
    float facialKeyWeight; // 208
    uint8_t unk20C[0x210 - 0x20C]; // 20C
    CName facialIdleMaleAnimation; // 210
    CName facialIdleKey_MaleAnimation; // 218
    CName facialIdleFemaleAnimation; // 220
    CName facialIdleKey_FemaleAnimation; // 228
    anim::EventFilterType eventFilterType; // 230
    uint8_t unk234[0x238 - 0x234]; // 234
};
RED4EXT_ASSERT_SIZE(AnimNode_WorkspotHub, 0x238);
} // namespace anim
using animAnimNode_WorkspotHub = anim::AnimNode_WorkspotHub;
} // namespace RED4ext

// clang-format on
