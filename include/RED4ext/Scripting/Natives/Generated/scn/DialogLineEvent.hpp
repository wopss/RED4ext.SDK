#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/AdditionalSpeakers.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/DialogLineVisualStyle.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/DialogLineVoParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/screenplay/ItemId.hpp>

namespace RED4ext
{
namespace scn
{
struct DialogLineEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scnDialogLineEvent";
    static constexpr const char* ALIAS = NAME;

    scn::screenplay::ItemId screenplayLineId; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    scn::DialogLineVoParams voParams; // 60
    scn::DialogLineVisualStyle visualStyle; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
    scn::AdditionalSpeakers additionalSpeakers; // 80
};
RED4EXT_ASSERT_SIZE(DialogLineEvent, 0x98);
} // namespace scn
using scnDialogLineEvent = scn::DialogLineEvent;
} // namespace RED4ext

// clang-format on
