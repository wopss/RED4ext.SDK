#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/WorkspotData.hpp>

namespace RED4ext
{
namespace work { struct WorkspotTree; }

namespace scn
{
struct WorkspotData_EmbeddedWorkspotTree : scn::WorkspotData
{
    static constexpr const char* NAME = "scnWorkspotData_EmbeddedWorkspotTree";
    static constexpr const char* ALIAS = NAME;

    Handle<work::WorkspotTree> workspotTree; // 38
};
RED4EXT_ASSERT_SIZE(WorkspotData_EmbeddedWorkspotTree, 0x48);
} // namespace scn
using scnWorkspotData_EmbeddedWorkspotTree = scn::WorkspotData_EmbeddedWorkspotTree;
} // namespace RED4ext

// clang-format on
