#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game
{
struct IDeviceSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIDeviceSystem";
    static constexpr const char* ALIAS = "IDeviceSystem";

};
RED4EXT_ASSERT_SIZE(IDeviceSystem, 0x48);
} // namespace game
using gameIDeviceSystem = game::IDeviceSystem;
using IDeviceSystem = game::IDeviceSystem;
} // namespace RED4ext

// clang-format on
