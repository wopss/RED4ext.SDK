#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game { struct TransformAnimationTrackItemImpl; }

namespace game
{
struct TransformAnimationTrackItem : ISerializable
{
    static constexpr const char* NAME = "gameTransformAnimationTrackItem";
    static constexpr const char* ALIAS = NAME;

    Handle<game::TransformAnimationTrackItemImpl> impl; // 30
    float startTime; // 40
    float duration; // 44
};
RED4EXT_ASSERT_SIZE(TransformAnimationTrackItem, 0x48);
} // namespace game
using gameTransformAnimationTrackItem = game::TransformAnimationTrackItem;
} // namespace RED4ext

// clang-format on
