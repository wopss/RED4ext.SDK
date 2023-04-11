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
struct NullPositionStrategy : audio::ApplySoundPositionStrategy
{
    static constexpr const char* NAME = "audioNullPositionStrategy";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(NullPositionStrategy, 0x8);
} // namespace audio
using audioNullPositionStrategy = audio::NullPositionStrategy;
} // namespace RED4ext

// clang-format on
