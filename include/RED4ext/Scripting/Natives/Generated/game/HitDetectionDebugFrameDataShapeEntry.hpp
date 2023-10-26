#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldTransform.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) HitDetectionDebugFrameDataShapeEntry
{
    static constexpr const char* NAME = "gameHitDetectionDebugFrameDataShapeEntry";
    static constexpr const char* ALIAS = NAME;

    WorldTransform ansformWS; // 00
};
RED4EXT_ASSERT_SIZE(HitDetectionDebugFrameDataShapeEntry, 0x20);
} // namespace game
using gameHitDetectionDebugFrameDataShapeEntry = game::HitDetectionDebugFrameDataShapeEntry;
} // namespace RED4ext

// clang-format on
