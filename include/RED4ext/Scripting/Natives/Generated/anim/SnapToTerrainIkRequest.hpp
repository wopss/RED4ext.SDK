#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct SnapToTerrainIkRequest
{
    static constexpr const char* NAME = "animSnapToTerrainIkRequest";
    static constexpr const char* ALIAS = NAME;

    CName ikChain; // 00
    anim::TransformIndex footTransformIndex; // 08
    anim::TransformIndex poleVectorRefTransformIndex; // 20
    anim::NamedTrackIndex enableFootLockFloatTrack; // 38
    uint8_t unk50[0x120 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(SnapToTerrainIkRequest, 0x120);
} // namespace anim
using animSnapToTerrainIkRequest = anim::SnapToTerrainIkRequest;
} // namespace RED4ext

// clang-format on
