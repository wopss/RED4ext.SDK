#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace scn
{
struct RewindableSectionEvent : red::Event
{
    static constexpr const char* NAME = "scnRewindableSectionEvent";
    static constexpr const char* ALIAS = NAME;

    bool active; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(RewindableSectionEvent, 0x48);
} // namespace scn
using scnRewindableSectionEvent = scn::RewindableSectionEvent;
} // namespace RED4ext

// clang-format on
