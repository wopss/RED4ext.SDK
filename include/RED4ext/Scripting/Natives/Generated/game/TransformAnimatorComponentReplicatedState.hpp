#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/IComponentState.hpp>

namespace RED4ext
{
namespace game
{
struct TransformAnimatorComponentReplicatedState : net::IComponentState
{
    static constexpr const char* NAME = "gameTransformAnimatorComponentReplicatedState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk20[0x48 - 0x20]; // 20
};
RED4EXT_ASSERT_SIZE(TransformAnimatorComponentReplicatedState, 0x48);
} // namespace game
using gameTransformAnimatorComponentReplicatedState = game::TransformAnimatorComponentReplicatedState;
} // namespace RED4ext

// clang-format on
