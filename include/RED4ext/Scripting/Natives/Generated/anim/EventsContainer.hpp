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
struct EventsContainer : ISerializable
{
    static constexpr const char* NAME = "animEventsContainer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x40 - 0x30]; // 30
    DynArray<Handle<anim::AnimEvent>> events; // 40
};
RED4EXT_ASSERT_SIZE(EventsContainer, 0x50);
} // namespace anim
using animEventsContainer = anim::EventsContainer;
} // namespace RED4ext

// clang-format on
