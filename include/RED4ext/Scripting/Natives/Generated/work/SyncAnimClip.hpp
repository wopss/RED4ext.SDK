#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/AnimClip.hpp>

namespace RED4ext
{
namespace work
{
struct __declspec(align(0x10)) SyncAnimClip : work::AnimClip
{
    static constexpr const char* NAME = "workSyncAnimClip";
    static constexpr const char* ALIAS = NAME;

    CName slotName; // 48
    Transform syncOffset; // 50
};
RED4EXT_ASSERT_SIZE(SyncAnimClip, 0x70);
} // namespace work
using workSyncAnimClip = work::SyncAnimClip;
} // namespace RED4ext

// clang-format on
