#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/EffectEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>

namespace RED4ext
{
namespace scn::events
{
struct VFXBraindanceEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scneventsVFXBraindanceEvent";
    static constexpr const char* ALIAS = NAME;

    scn::PerformerId performerId; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    NodeRef nodeRef; // 60
    scn::EffectEntry effectEntry; // 68
    uint32_t sequenceShift; // 78
    uint8_t unk7C[0x80 - 0x7C]; // 7C
    scn::EffectEntry glitchEffectEntry; // 80
    uint32_t glitchSequenceShift; // 90
    bool fullyRewindable; // 94
    uint8_t unk95[0x98 - 0x95]; // 95
};
RED4EXT_ASSERT_SIZE(VFXBraindanceEvent, 0x98);
} // namespace scn::events
using scneventsVFXBraindanceEvent = scn::events::VFXBraindanceEvent;
} // namespace RED4ext

// clang-format on
