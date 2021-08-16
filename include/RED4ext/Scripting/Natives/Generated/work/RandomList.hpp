#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IContainerEntry.hpp>

namespace RED4ext
{
namespace work { 
struct RandomList : work::IContainerEntry
{
    static constexpr const char* NAME = "workRandomList";
    static constexpr const char* ALIAS = NAME;

    int8_t minClips; // 50
    int8_t maxClips; // 51
    int8_t dontRepeatLastAnims; // 52
    uint8_t unk53[0x54 - 0x53]; // 53
    float pauseBetweenLength; // 54
    float pauseLengthDeviation; // 58
    float pauseBlendOutTime; // 5C
    DynArray<float> weights; // 60
};
RED4EXT_ASSERT_SIZE(RandomList, 0x70);
} // namespace work
} // namespace RED4ext
