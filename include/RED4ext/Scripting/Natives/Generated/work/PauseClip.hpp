#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IEntry.hpp>

namespace RED4ext
{
namespace work
{
struct PauseClip : work::IEntry
{
    static constexpr const char* NAME = "workPauseClip";
    static constexpr const char* ALIAS = NAME;

    float timeMin; // 38
    float timeMax; // 3C
    float blendOutTime; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(PauseClip, 0x48);
} // namespace work
using workPauseClip = work::PauseClip;
} // namespace RED4ext

// clang-format on
