#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace anim { struct AnimSet; }

namespace anim
{
struct AnimSetupEntry
{
    static constexpr const char* NAME = "animAnimSetupEntry";
    static constexpr const char* ALIAS = NAME;

    RaRef<anim::AnimSet> animSet; // 00
    DynArray<CName> variableNames; // 08
    uint8_t priority; // 18
    uint8_t unk19[0x20 - 0x19]; // 19
};
RED4EXT_ASSERT_SIZE(AnimSetupEntry, 0x20);
} // namespace anim
using animAnimSetupEntry = anim::AnimSetupEntry;
} // namespace RED4ext

// clang-format on
