#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AdditionalFloatTrackEntry.hpp>

namespace RED4ext
{
namespace anim
{
struct AdditionalFloatTrackContainer
{
    static constexpr const char* NAME = "animAdditionalFloatTrackContainer";
    static constexpr const char* ALIAS = NAME;

    DynArray<anim::AdditionalFloatTrackEntry> entries; // 00
    bool overwriteExistingValues; // 10
    uint8_t unk11[0x18 - 0x11]; // 11
};
RED4EXT_ASSERT_SIZE(AdditionalFloatTrackContainer, 0x18);
} // namespace anim
using animAdditionalFloatTrackContainer = anim::AdditionalFloatTrackContainer;
} // namespace RED4ext

// clang-format on
