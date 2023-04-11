#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game::gps
{
struct IGPSSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gamegpsIGPSSystem";
    static constexpr const char* ALIAS = "IGPSSystem";

};
RED4EXT_ASSERT_SIZE(IGPSSystem, 0x48);
} // namespace game::gps
using gamegpsIGPSSystem = game::gps::IGPSSystem;
using IGPSSystem = game::gps::IGPSSystem;
} // namespace RED4ext

// clang-format on
