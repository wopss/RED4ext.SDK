#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/GuardAreaSavedData.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>

namespace RED4ext
{
namespace AI
{
struct GuardAreasSavedState : ISerializable
{
    static constexpr const char* NAME = "AIGuardAreasSavedState";
    static constexpr const char* ALIAS = NAME;

    DynArray<AI::GuardAreaSavedData> data; // 30
    DynArray<ent::EntityID> cleared; // 40
};
RED4EXT_ASSERT_SIZE(GuardAreasSavedState, 0x50);
} // namespace AI
using AIGuardAreasSavedState = AI::GuardAreasSavedState;
} // namespace RED4ext

// clang-format on
