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

    float minStreamingDistance; // 228
    uint8_t unk22C[0x230 - 0x22C]; // 22C
};
RED4EXT_ASSERT_SIZE(AdjustableStreamingRangeTarget, 0x230);
} // namespace AI
using AdjustableStreamingRangeTarget = AI::AdjustableStreamingRangeTarget;
} // namespace RED4ext
