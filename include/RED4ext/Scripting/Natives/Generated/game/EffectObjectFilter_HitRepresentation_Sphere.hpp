#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectFilter_HitRepresentation.hpp>

namespace RED4ext
{
namespace game
{
struct EffectObjectFilter_HitRepresentation_Sphere : game::EffectObjectFilter_HitRepresentation
{
    static constexpr const char* NAME = "gameEffectObjectFilter_HitRepresentation_Sphere";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EffectObjectFilter_HitRepresentation_Sphere, 0x40);
} // namespace game
using gameEffectObjectFilter_HitRepresentation_Sphere = game::EffectObjectFilter_HitRepresentation_Sphere;
} // namespace RED4ext

// clang-format on
