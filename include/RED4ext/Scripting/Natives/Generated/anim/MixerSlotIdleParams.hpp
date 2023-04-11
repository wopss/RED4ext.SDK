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
struct MixerSlotIdleParams : ISerializable
{
    static constexpr const char* NAME = "animMixerSlotIdleParams";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0xA8 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(MixerSlotIdleParams, 0xA8);
} // namespace anim
using animMixerSlotIdleParams = anim::MixerSlotIdleParams;
} // namespace RED4ext

// clang-format on
