#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimSetupEntry.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimSetup
{
    static constexpr const char* NAME = "animAnimSetup";
    static constexpr const char* ALIAS = NAME;

    DynArray<anim::AnimSetupEntry> cinematics; // 00
    DynArray<anim::AnimSetupEntry> gameplay; // 10
    uint64_t hash; // 20
};
RED4EXT_ASSERT_SIZE(AnimSetup, 0x28);
} // namespace anim
using animAnimSetup = anim::AnimSetup;
} // namespace RED4ext

// clang-format on
