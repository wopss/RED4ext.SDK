#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/WorkspotData.hpp>

namespace RED4ext
{
namespace work { struct WorkspotResource; }

namespace scn
{
struct WorkspotData_ExternalWorkspotResource : scn::WorkspotData
{
    static constexpr const char* NAME = "scnWorkspotData_ExternalWorkspotResource";
    static constexpr const char* ALIAS = NAME;

    Ref<work::WorkspotResource> workspotResource; // 38
};
RED4EXT_ASSERT_SIZE(WorkspotData_ExternalWorkspotResource, 0x50);
} // namespace scn
using scnWorkspotData_ExternalWorkspotResource = scn::WorkspotData_ExternalWorkspotResource;
} // namespace RED4ext

// clang-format on
