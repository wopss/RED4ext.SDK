#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace AI
{
struct AdjustableStreamingRangeTarget : game::Object
{
    static constexpr const char* NAME = "AIAdjustableStreamingRangeTarget";
    static constexpr const char* ALIAS = "AdjustableStreamingRangeTarget";

    float minStreamingDistance; // 240
    uint8_t unk244[0x248 - 0x244]; // 244
};
RED4EXT_ASSERT_SIZE(AdjustableStreamingRangeTarget, 0x248);
} // namespace AI
using AIAdjustableStreamingRangeTarget = AI::AdjustableStreamingRangeTarget;
using AdjustableStreamingRangeTarget = AI::AdjustableStreamingRangeTarget;
} // namespace RED4ext

// clang-format on
