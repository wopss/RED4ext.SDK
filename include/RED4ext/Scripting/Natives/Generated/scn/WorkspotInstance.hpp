#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/Marker.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneWorkspotDataId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneWorkspotInstanceId.hpp>

namespace RED4ext
{
namespace scn
{
struct __declspec(align(0x10)) WorkspotInstance
{
    static constexpr const char* NAME = "scnWorkspotInstance";
    static constexpr const char* ALIAS = NAME;

    scn::SceneWorkspotDataId dataId; // 00
    bool playAtActorLocation; // 04
    uint8_t unk05[0x10 - 0x5]; // 5
    Transform localTransform; // 10
    scn::Marker originMarker; // 30
    scn::SceneWorkspotInstanceId workspotInstanceId; // 90
    uint8_t unk94[0xA0 - 0x94]; // 94
};
RED4EXT_ASSERT_SIZE(WorkspotInstance, 0xA0);
} // namespace scn
using scnWorkspotInstance = scn::WorkspotInstance;
} // namespace RED4ext

// clang-format on
