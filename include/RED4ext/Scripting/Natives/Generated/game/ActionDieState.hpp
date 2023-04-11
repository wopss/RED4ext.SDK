#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ActionReplicatedState.hpp>

namespace RED4ext
{
namespace ent { struct RagdollComponent; }
namespace ent { struct SlotComponent; }
namespace game { struct Object; }
namespace move { struct Component; }

namespace game
{
struct ActionDieState : game::ActionReplicatedState
{
    static constexpr const char* NAME = "gameActionDieState";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<game::Object> owner; // 28
    WeakHandle<move::Component> movingAgent; // 38
    WeakHandle<ent::RagdollComponent> ragdollComponent; // 48
    WeakHandle<ent::SlotComponent> slotComponent; // 58
};
RED4EXT_ASSERT_SIZE(ActionDieState, 0x68);
} // namespace game
using gameActionDieState = game::ActionDieState;
} // namespace RED4ext

// clang-format on
