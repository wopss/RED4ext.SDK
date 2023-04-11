#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ActionReplicatedState.hpp>

namespace RED4ext
{
namespace anim { struct AnimFeature_HitReactionsData; }

namespace game
{
struct ActionHitReactionState : game::ActionReplicatedState
{
    static constexpr const char* NAME = "gameActionHitReactionState";
    static constexpr const char* ALIAS = NAME;

    Handle<anim::AnimFeature_HitReactionsData> animFeature; // 28
};
RED4EXT_ASSERT_SIZE(ActionHitReactionState, 0x38);
} // namespace game
using gameActionHitReactionState = game::ActionHitReactionState;
} // namespace RED4ext

// clang-format on
