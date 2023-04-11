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
struct IndexedSinglePositionStrategy : audio::ApplySoundPositionStrategy
{
    static constexpr const char* NAME = "audioIndexedSinglePositionStrategy";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IndexedSinglePositionStrategy, 0x8);
} // namespace audio
using audioIndexedSinglePositionStrategy = audio::IndexedSinglePositionStrategy;
} // namespace RED4ext

// clang-format on
