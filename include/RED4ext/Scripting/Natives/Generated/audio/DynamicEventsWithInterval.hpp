#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace audio
{
struct DynamicEventsWithInterval
{
    static constexpr const char* NAME = "audioDynamicEventsWithInterval";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> events; // 00
    float interval; // 10
    uint8_t unk14[0x18 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(DynamicEventsWithInterval, 0x18);
} // namespace audio
using audioDynamicEventsWithInterval = audio::DynamicEventsWithInterval;
} // namespace RED4ext

// clang-format on
