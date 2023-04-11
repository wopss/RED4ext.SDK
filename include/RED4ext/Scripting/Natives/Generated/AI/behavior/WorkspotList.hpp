#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct WorkspotList : IScriptable
{
    static constexpr const char* NAME = "AIbehaviorWorkspotList";
    static constexpr const char* ALIAS = "WorkspotList";

    DynArray<NodeRef> spots; // 40
};
RED4EXT_ASSERT_SIZE(WorkspotList, 0x50);
} // namespace AI::behavior
using AIbehaviorWorkspotList = AI::behavior::WorkspotList;
using WorkspotList = AI::behavior::WorkspotList;
} // namespace RED4ext

// clang-format on
