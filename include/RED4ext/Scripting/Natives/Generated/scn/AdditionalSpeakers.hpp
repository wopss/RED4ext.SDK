#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/AdditionalSpeaker.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/AdditionalSpeakerRole.hpp>

namespace RED4ext
{
namespace scn
{
struct AdditionalSpeakers
{
    static constexpr const char* NAME = "scnAdditionalSpeakers";
    static constexpr const char* ALIAS = NAME;

    uint8_t executionTag; // 00
    uint8_t unk01[0x4 - 0x1]; // 1
    scn::AdditionalSpeakerRole role; // 04
    DynArray<scn::AdditionalSpeaker> speakers; // 08
};
RED4EXT_ASSERT_SIZE(AdditionalSpeakers, 0x18);
} // namespace scn
using scnAdditionalSpeakers = scn::AdditionalSpeakers;
} // namespace RED4ext

// clang-format on
