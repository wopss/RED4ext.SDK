#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace anim { struct AnimEvent; }

namespace anim
{
struct AnimSetEntryAudioData : ISerializable
{
    static constexpr const char* NAME = "animAnimSetEntryAudioData";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<anim::AnimEvent>> events; // 30
};
RED4EXT_ASSERT_SIZE(AnimSetEntryAudioData, 0x40);
} // namespace anim
using animAnimSetEntryAudioData = anim::AnimSetEntryAudioData;
} // namespace RED4ext

// clang-format on
