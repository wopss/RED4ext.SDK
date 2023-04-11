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
struct QuadPositionStrategy : audio::ApplySoundPositionStrategy
{
    static constexpr const char* NAME = "audioQuadPositionStrategy";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0x30 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(QuadPositionStrategy, 0x30);
} // namespace audio
using audioQuadPositionStrategy = audio::QuadPositionStrategy;
} // namespace RED4ext

// clang-format on
