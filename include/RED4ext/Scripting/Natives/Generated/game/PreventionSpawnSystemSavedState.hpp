#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game
{
struct PreventionSpawnSystemSavedState : ISerializable
{
    static constexpr const char* NAME = "gamePreventionSpawnSystemSavedState";
    static constexpr const char* ALIAS = NAME;

    DynArray<uint64_t> areaIds; // 30
};
RED4EXT_ASSERT_SIZE(PreventionSpawnSystemSavedState, 0x40);
} // namespace game
using gamePreventionSpawnSystemSavedState = game::PreventionSpawnSystemSavedState;
} // namespace RED4ext

// clang-format on
