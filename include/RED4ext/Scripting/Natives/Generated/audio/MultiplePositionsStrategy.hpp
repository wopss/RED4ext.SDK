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
struct MultiplePositionsStrategy : audio::ApplySoundPositionStrategy
{
    static constexpr const char* NAME = "audioMultiplePositionsStrategy";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0x18 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(MultiplePositionsStrategy, 0x18);
} // namespace audio
using audioMultiplePositionsStrategy = audio::MultiplePositionsStrategy;
} // namespace RED4ext

// clang-format on
