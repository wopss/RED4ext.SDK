#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace move
{
struct EnteredSplineEvent : red::Event
{
    static constexpr const char* NAME = "moveEnteredSplineEvent";
    static constexpr const char* ALIAS = "EnteredSplineEvent";

    bool useDoors; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(EnteredSplineEvent, 0x48);
} // namespace move
using moveEnteredSplineEvent = move::EnteredSplineEvent;
using EnteredSplineEvent = move::EnteredSplineEvent;
} // namespace RED4ext

// clang-format on
