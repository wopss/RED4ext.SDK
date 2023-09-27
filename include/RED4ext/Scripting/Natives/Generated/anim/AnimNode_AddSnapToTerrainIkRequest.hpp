#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/HipsIkRequest.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/SnapToTerrainIkRequest.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_AddSnapToTerrainIkRequest : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_AddSnapToTerrainIkRequest";
    static constexpr const char* ALIAS = NAME;

    anim::FloatLink animDeltaZ; // 60
    anim::SnapToTerrainIkRequest leftFootRequest; // 80
    anim::SnapToTerrainIkRequest rightFootRequest; // 1A0
    anim::HipsIkRequest hipsRequest; // 2C0
    uint8_t unk338[0x3E8 - 0x338]; // 338
};
RED4EXT_ASSERT_SIZE(AnimNode_AddSnapToTerrainIkRequest, 0x3E8);
} // namespace anim
using animAnimNode_AddSnapToTerrainIkRequest = anim::AnimNode_AddSnapToTerrainIkRequest;
} // namespace RED4ext

// clang-format on
