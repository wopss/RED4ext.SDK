#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectGroupFilter.hpp>

namespace RED4ext
{
namespace game
{
struct EffectObjectFilter_HitRepresentation : game::EffectObjectGroupFilter
{
    static constexpr const char* NAME = "gameEffectObjectFilter_HitRepresentation";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EffectObjectFilter_HitRepresentation, 0x40);
} // namespace game
using gameEffectObjectFilter_HitRepresentation = game::EffectObjectFilter_HitRepresentation;
} // namespace RED4ext

// clang-format on
