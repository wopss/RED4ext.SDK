#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/GlobalNodeID.hpp>

namespace RED4ext
{
namespace work
{
struct WorkspotStartedEvent : red::Event
{
    static constexpr const char* NAME = "workWorkspotStartedEvent";
    static constexpr const char* ALIAS = "WorkspotStartedEvent";

    world::GlobalNodeID nodeId; // 40
    DynArray<CName> tags; // 48
    TweakDBID statusEffectID; // 58
};
RED4EXT_ASSERT_SIZE(WorkspotStartedEvent, 0x60);
} // namespace work
using workWorkspotStartedEvent = work::WorkspotStartedEvent;
using WorkspotStartedEvent = work::WorkspotStartedEvent;
} // namespace RED4ext

// clang-format on
