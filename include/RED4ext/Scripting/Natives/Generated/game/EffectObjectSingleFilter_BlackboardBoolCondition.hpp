#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectInputParameter_Bool.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectSingleFilter.hpp>

namespace RED4ext
{
namespace game { struct EffectObjectSingleFilter; }

namespace game
{
struct EffectObjectSingleFilter_BlackboardBoolCondition : game::EffectObjectSingleFilter
{
    static constexpr const char* NAME = "gameEffectObjectSingleFilter_BlackboardBoolCondition";
    static constexpr const char* ALIAS = NAME;

    game::EffectInputParameter_Bool parameter; // 40
    Handle<game::EffectObjectSingleFilter> filter; // 58
};
RED4EXT_ASSERT_SIZE(EffectObjectSingleFilter_BlackboardBoolCondition, 0x68);
} // namespace game
using gameEffectObjectSingleFilter_BlackboardBoolCondition = game::EffectObjectSingleFilter_BlackboardBoolCondition;
} // namespace RED4ext

// clang-format on
