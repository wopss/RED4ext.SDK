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
struct WorkspotFinishedEvent : red::Event
{
    static constexpr const char* NAME = "workWorkspotFinishedEvent";
    static constexpr const char* ALIAS = "WorkspotFinishedEvent";

    world::GlobalNodeID nodeId; // 40
    DynArray<CName> tags; // 48
    TweakDBID statusEffectID; // 58
};
RED4EXT_ASSERT_SIZE(WorkspotFinishedEvent, 0x60);
} // namespace work
using workWorkspotFinishedEvent = work::WorkspotFinishedEvent;
using WorkspotFinishedEvent = work::WorkspotFinishedEvent;
} // namespace RED4ext

// clang-format on
