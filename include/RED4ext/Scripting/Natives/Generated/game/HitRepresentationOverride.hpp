#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/HitShapeContainer.hpp>

namespace RED4ext
{
namespace game
{
struct HitRepresentationOverride : ISerializable
{
    static constexpr const char* NAME = "gameHitRepresentationOverride";
    static constexpr const char* ALIAS = "HitRepresentationOverride";

    game::HitShapeContainer represenationOverride; // 30
};
RED4EXT_ASSERT_SIZE(HitRepresentationOverride, 0x78);
} // namespace game
using gameHitRepresentationOverride = game::HitRepresentationOverride;
using HitRepresentationOverride = game::HitRepresentationOverride;
} // namespace RED4ext

// clang-format on
