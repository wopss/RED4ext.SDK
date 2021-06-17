#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>

namespace RED4ext
{
namespace AI { 
struct AdjustableStreamingRangeTarget : game::Object
{
    static constexpr const char* NAME = "AIAdjustableStreamingRangeTarget";
    static constexpr const char* ALIAS = "AdjustableStreamingRangeTarget";

    float minStreamingDistance; // 230
    uint8_t unk234[0x238 - 0x234]; // 234
};
RED4EXT_ASSERT_SIZE(AdjustableStreamingRangeTarget, 0x238);
} // namespace AI
using AdjustableStreamingRangeTarget = AI::AdjustableStreamingRangeTarget;
} // namespace RED4ext
