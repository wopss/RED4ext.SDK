#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace effect
{
struct TrackItemPlayData : ISerializable
{
    static constexpr const char* NAME = "effectTrackItemPlayData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(TrackItemPlayData, 0x38);
} // namespace effect
using effectTrackItemPlayData = effect::TrackItemPlayData;
} // namespace RED4ext

// clang-format on
