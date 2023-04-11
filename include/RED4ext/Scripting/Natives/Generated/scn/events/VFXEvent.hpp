#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/EffectEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/events/VFXActionType.hpp>

namespace RED4ext
{
namespace scn::events
{
struct VFXEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scneventsVFXEvent";
    static constexpr const char* ALIAS = NAME;

    scn::EffectEntry effectEntry; // 58
    scn::events::VFXActionType action; // 68
    uint32_t sequenceShift; // 6C
    scn::PerformerId performerId; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
    NodeRef nodeRef; // 78
    bool muteSound; // 80
    uint8_t unk81[0x88 - 0x81]; // 81
};
RED4EXT_ASSERT_SIZE(VFXEvent, 0x88);
} // namespace scn::events
using scneventsVFXEvent = scn::events::VFXEvent;
} // namespace RED4ext

// clang-format on
