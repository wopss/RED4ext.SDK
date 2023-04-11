#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/UseWorkspotParamsV1.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneWorkspotInstanceId.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/WorkspotItemOverride.hpp>

namespace RED4ext
{
namespace scn
{
struct UseSceneWorkspotParamsV1 : quest::UseWorkspotParamsV1
{
    static constexpr const char* NAME = "scnUseSceneWorkspotParamsV1";
    static constexpr const char* ALIAS = NAME;

    scn::SceneWorkspotInstanceId workspotInstanceId; // D0
    uint8_t unkD4[0xD8 - 0xD4]; // D4
    work::WorkspotItemOverride itemOverride; // D8
    bool playAtActorLocation; // F8
    uint8_t unkF9[0x100 - 0xF9]; // F9
};
RED4EXT_ASSERT_SIZE(UseSceneWorkspotParamsV1, 0x100);
} // namespace scn
using scnUseSceneWorkspotParamsV1 = scn::UseSceneWorkspotParamsV1;
} // namespace RED4ext

// clang-format on
