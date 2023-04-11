#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace anim
{
struct IKTargetRequest
{
    static constexpr const char* NAME = "animIKTargetRequest";
    static constexpr const char* ALIAS = "IKTargetRequest";

    float weightPosition; // 00
    float weightOrientation; // 04
    uint8_t unk08[0xC - 0x8]; // 8
    float transitionIn; // 0C
    float transitionOut; // 10
    int32_t priority; // 14
};
RED4EXT_ASSERT_SIZE(IKTargetRequest, 0x18);
} // namespace anim
using animIKTargetRequest = anim::IKTargetRequest;
using IKTargetRequest = anim::IKTargetRequest;
} // namespace RED4ext

// clang-format on
