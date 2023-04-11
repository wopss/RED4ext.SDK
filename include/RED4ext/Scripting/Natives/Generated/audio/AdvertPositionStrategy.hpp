#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/ApplySoundPositionStrategy.hpp>

namespace RED4ext
{
namespace audio
{
struct AdvertPositionStrategy : audio::ApplySoundPositionStrategy
{
    static constexpr const char* NAME = "audioAdvertPositionStrategy";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0x78 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(AdvertPositionStrategy, 0x78);
} // namespace audio
using audioAdvertPositionStrategy = audio::AdvertPositionStrategy;
} // namespace RED4ext

// clang-format on
