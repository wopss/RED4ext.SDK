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
struct VFXDurationEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scneventsVFXDurationEvent";
    static constexpr const char* ALIAS = NAME;

    scn::EffectEntry effectEntry; // 58
    scn::events::VFXActionType startAction; // 68
    scn::events::VFXActionType endAction; // 6C
    uint32_t sequenceShift; // 70
    scn::PerformerId performerId; // 74
    NodeRef nodeRef; // 78
    bool muteSound; // 80
    uint8_t unk81[0x88 - 0x81]; // 81
};
RED4EXT_ASSERT_SIZE(VFXDurationEvent, 0x88);
} // namespace scn::events
using scneventsVFXDurationEvent = scn::events::VFXDurationEvent;
} // namespace RED4ext

// clang-format on
