#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ISyncMethod.hpp>

namespace RED4ext
{
namespace anim
{
struct SyncMethodByProgress : anim::ISyncMethod
{
    static constexpr const char* NAME = "animSyncMethodByProgress";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(SyncMethodByProgress, 0x30);
} // namespace anim
using animSyncMethodByProgress = anim::SyncMethodByProgress;
} // namespace RED4ext

// clang-format on
