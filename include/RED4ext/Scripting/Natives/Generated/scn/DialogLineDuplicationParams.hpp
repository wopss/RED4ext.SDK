#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ActorId.hpp>

namespace RED4ext
{
namespace scn
{
struct DialogLineDuplicationParams
{
    static constexpr const char* NAME = "scnDialogLineDuplicationParams";
    static constexpr const char* ALIAS = NAME;

    uint8_t executionTag; // 00
    uint8_t unk01[0x4 - 0x1]; // 1
    scn::ActorId additionalSpeakerId; // 04
    bool isHolocallSpeaker; // 08
    uint8_t unk09[0xC - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(DialogLineDuplicationParams, 0xC);
} // namespace scn
using scnDialogLineDuplicationParams = scn::DialogLineDuplicationParams;
} // namespace RED4ext

// clang-format on
