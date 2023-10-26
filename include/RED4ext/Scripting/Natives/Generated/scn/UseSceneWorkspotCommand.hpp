#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/BaseUseWorkspotCommand.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/NodeId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneInstanceId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneWorkspotInstanceId.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/WorkspotItemOverride.hpp>

namespace RED4ext
{
namespace scn
{
struct __declspec(align(0x10)) UseSceneWorkspotCommand : AI::BaseUseWorkspotCommand
{
    static constexpr const char* NAME = "scnUseSceneWorkspotCommand";
    static constexpr const char* ALIAS = NAME;

    scn::SceneInstanceId sceneInstanceId; // 130
    scn::SceneWorkspotInstanceId workspotInstanceId; // 150
    uint8_t unk154[0x158 - 0x154]; // 154
    work::WorkspotItemOverride itemOverride; // 158
    scn::NodeId nodeId; // 178
    uint8_t unk17C[0x180 - 0x17C]; // 17C
};
RED4EXT_ASSERT_SIZE(UseSceneWorkspotCommand, 0x180);
} // namespace scn
using scnUseSceneWorkspotCommand = scn::UseSceneWorkspotCommand;
} // namespace RED4ext

// clang-format on
