#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNodeDebugState : ISerializable
{
    static constexpr const char* NAME = "animAnimNodeDebugState";
    static constexpr const char* ALIAS = NAME;

    uint32_t nodeId; // 30
    bool active; // 34
    uint8_t unk35[0x38 - 0x35]; // 35
};
RED4EXT_ASSERT_SIZE(AnimNodeDebugState, 0x38);
} // namespace anim
using animAnimNodeDebugState = anim::AnimNodeDebugState;
} // namespace RED4ext

// clang-format on
