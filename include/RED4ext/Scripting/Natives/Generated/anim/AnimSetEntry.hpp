#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace anim { struct Animation; }
namespace anim { struct EventsContainer; }

namespace anim
{
struct AnimSetEntry : ISerializable
{
    static constexpr const char* NAME = "animAnimSetEntry";
    static constexpr const char* ALIAS = NAME;

    Handle<anim::Animation> animation; // 30
    Handle<anim::EventsContainer> events; // 40
    uint8_t unk50[0x78 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(AnimSetEntry, 0x78);
} // namespace anim
using animAnimSetEntry = anim::AnimSetEntry;
} // namespace RED4ext

// clang-format on
