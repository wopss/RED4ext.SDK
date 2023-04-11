#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/NodeId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneWorkspotInstanceId.hpp>

namespace RED4ext
{
namespace scn
{
struct WorkspotSymbol
{
    static constexpr const char* NAME = "scnWorkspotSymbol";
    static constexpr const char* ALIAS = NAME;

    scn::SceneWorkspotInstanceId wsInstance; // 00
    scn::NodeId wsNodeId; // 04
    uint64_t wsEditorEventId; // 08
};
RED4EXT_ASSERT_SIZE(WorkspotSymbol, 0x10);
} // namespace scn
using scnWorkspotSymbol = scn::WorkspotSymbol;
} // namespace RED4ext

// clang-format on
