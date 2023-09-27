#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ArcadeSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameuiarcadeArcadeSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ArcadeSystem, 0x58);
} // namespace game::ui::arcade
using gameuiarcadeArcadeSystem = game::ui::arcade::ArcadeSystem;
} // namespace RED4ext

// clang-format on
