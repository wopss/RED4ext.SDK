#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ITargetingSystem.hpp>

namespace RED4ext
{
namespace game::targeting
{
struct TargetingSystem : game::ITargetingSystem
{
    static constexpr const char* NAME = "gametargetingTargetingSystem";
    static constexpr const char* ALIAS = "TargetingSystem";

    uint8_t unk48[0x4B0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(TargetingSystem, 0x4B0);
} // namespace game::targeting
using gametargetingTargetingSystem = game::targeting::TargetingSystem;
using TargetingSystem = game::targeting::TargetingSystem;
} // namespace RED4ext

// clang-format on
