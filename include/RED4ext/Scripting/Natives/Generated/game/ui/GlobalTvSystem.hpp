#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGlobalTvSystem.hpp>

namespace RED4ext
{
namespace game::ui
{
struct GlobalTvSystem : game::IGlobalTvSystem
{
    static constexpr const char* NAME = "gameuiGlobalTvSystem";
    static constexpr const char* ALIAS = "GlobalTvSystem";

    uint8_t unk48[0xE0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(GlobalTvSystem, 0xE0);
} // namespace game::ui
using gameuiGlobalTvSystem = game::ui::GlobalTvSystem;
using GlobalTvSystem = game::ui::GlobalTvSystem;
} // namespace RED4ext

// clang-format on
