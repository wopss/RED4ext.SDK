#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace sense
{
struct OnVisibilityBlockerAffectedTBHEvent : red::Event
{
    static constexpr const char* NAME = "senseOnVisibilityBlockerAffectedTBHEvent";
    static constexpr const char* ALIAS = "OnVisibilityBlockerAffectedTBHEvent";

    uint8_t unk40[0x50 - 0x40]; // 40
    float newTBHModifier; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(OnVisibilityBlockerAffectedTBHEvent, 0x58);
} // namespace sense
using senseOnVisibilityBlockerAffectedTBHEvent = sense::OnVisibilityBlockerAffectedTBHEvent;
using OnVisibilityBlockerAffectedTBHEvent = sense::OnVisibilityBlockerAffectedTBHEvent;
} // namespace RED4ext

// clang-format on
