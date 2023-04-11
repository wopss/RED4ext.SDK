#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace anim { struct AnimSet; }

namespace anim
{
struct LipsyncMappingSceneEntry
{
    static constexpr const char* NAME = "animLipsyncMappingSceneEntry";
    static constexpr const char* ALIAS = NAME;

    DynArray<CRUID> actorVoiceTags; // 00
    DynArray<RaRef<anim::AnimSet>> animSets; // 10
};
RED4EXT_ASSERT_SIZE(LipsyncMappingSceneEntry, 0x20);
} // namespace anim
using animLipsyncMappingSceneEntry = anim::LipsyncMappingSceneEntry;
} // namespace RED4ext

// clang-format on
