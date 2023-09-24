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
struct EffectObjectFilter_NearestWeakspotIfAny : game::EffectObjectGroupFilter
{
    static constexpr const char* NAME = "gameEffectObjectFilter_NearestWeakspotIfAny";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EffectObjectFilter_NearestWeakspotIfAny, 0x40);
} // namespace game
using gameEffectObjectFilter_NearestWeakspotIfAny = game::EffectObjectFilter_NearestWeakspotIfAny;
} // namespace RED4ext

// clang-format on
