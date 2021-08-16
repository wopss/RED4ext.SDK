#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TransformAnimationTrackItem.hpp>

namespace RED4ext
{
namespace game { 
struct TransformAnimationTimeline
{
    static constexpr const char* NAME = "gameTransformAnimationTimeline";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::TransformAnimationTrackItem> items; // 00
};
RED4EXT_ASSERT_SIZE(TransformAnimationTimeline, 0x10);
} // namespace game
} // namespace RED4ext
