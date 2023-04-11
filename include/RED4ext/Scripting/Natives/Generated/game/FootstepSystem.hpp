#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IFootstepSystem.hpp>

namespace RED4ext
{
namespace game
{
struct FootstepSystem : game::IFootstepSystem
{
    static constexpr const char* NAME = "gameFootstepSystem";
    static constexpr const char* ALIAS = "FootstepSystem";

    uint8_t unk48[0x78 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(FootstepSystem, 0x78);
} // namespace game
using gameFootstepSystem = game::FootstepSystem;
using FootstepSystem = game::FootstepSystem;
} // namespace RED4ext

// clang-format on
