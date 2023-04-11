#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/HitShapeContainer.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>

namespace RED4ext
{
namespace game
{
struct HitRepresentationVisualTaggedOverride : ISerializable
{
    static constexpr const char* NAME = "gameHitRepresentationVisualTaggedOverride";
    static constexpr const char* ALIAS = "HitRepresentationVisualTaggedOverride";

    game::HitShapeContainer represenationOverride; // 30
    red::TagList visualTags; // 78
};
RED4EXT_ASSERT_SIZE(HitRepresentationVisualTaggedOverride, 0x88);
} // namespace game
using gameHitRepresentationVisualTaggedOverride = game::HitRepresentationVisualTaggedOverride;
using HitRepresentationVisualTaggedOverride = game::HitRepresentationVisualTaggedOverride;
} // namespace RED4ext

// clang-format on
