#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimGraph.hpp>

namespace RED4ext
{
namespace work { struct WorkspotTree; }

namespace work
{
struct WorkspotResource : anim::AnimGraph
{
    static constexpr const char* NAME = "workWorkspotResource";
    static constexpr const char* ALIAS = NAME;

    Handle<work::WorkspotTree> workspotTree; // 120
};
RED4EXT_ASSERT_SIZE(WorkspotResource, 0x130);
} // namespace work
using workWorkspotResource = work::WorkspotResource;
} // namespace RED4ext

// clang-format on
