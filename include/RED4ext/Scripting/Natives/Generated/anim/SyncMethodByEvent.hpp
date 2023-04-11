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
struct SyncMethodByEvent : anim::ISyncMethod
{
    static constexpr const char* NAME = "animSyncMethodByEvent";
    static constexpr const char* ALIAS = NAME;

    CName eventName; // 30
};
RED4EXT_ASSERT_SIZE(SyncMethodByEvent, 0x38);
} // namespace anim
using animSyncMethodByEvent = anim::SyncMethodByEvent;
} // namespace RED4ext

// clang-format on
