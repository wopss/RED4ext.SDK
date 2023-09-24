#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IContainerEntry.hpp>

namespace RED4ext
{
namespace work
{
struct RandomList : work::IContainerEntry
{
    static constexpr const char* NAME = "workRandomList";
    static constexpr const char* ALIAS = NAME;

    int8_t minClips; // 58
    int8_t maxClips; // 59
    int8_t dontRepeatLastAnims; // 5A
    uint8_t unk5B[0x5C - 0x5B]; // 5B
    float pauseBetweenLength; // 5C
    float pauseLengthDeviation; // 60
    float pauseBlendOutTime; // 64
    DynArray<float> weights; // 68
};
RED4EXT_ASSERT_SIZE(RandomList, 0x78);
} // namespace work
using workRandomList = work::RandomList;
} // namespace RED4ext

// clang-format on
