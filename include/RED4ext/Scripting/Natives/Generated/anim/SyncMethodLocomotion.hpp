#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ISyncMethod.hpp>

namespace RED4ext
{
namespace anim
{
struct SyncMethodLocomotion : anim::ISyncMethod
{
    static constexpr const char* NAME = "animSyncMethodLocomotion";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x40 - 0x30]; // 30
    CName locomotionFeatureName; // 40
    CName accelStopTimeEvent; // 48
};
RED4EXT_ASSERT_SIZE(SyncMethodLocomotion, 0x50);
} // namespace anim
using animSyncMethodLocomotion = anim::SyncMethodLocomotion;
} // namespace RED4ext

// clang-format on
