#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimEvent.hpp>

namespace RED4ext
{
namespace work { struct IWorkspotItemAction; }

namespace anim
{
struct AnimEvent_WorkspotItem : anim::AnimEvent
{
    static constexpr const char* NAME = "animAnimEvent_WorkspotItem";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<work::IWorkspotItemAction>> actions; // 40
};
RED4EXT_ASSERT_SIZE(AnimEvent_WorkspotItem, 0x50);
} // namespace anim
using animAnimEvent_WorkspotItem = anim::AnimEvent_WorkspotItem;
} // namespace RED4ext

// clang-format on
