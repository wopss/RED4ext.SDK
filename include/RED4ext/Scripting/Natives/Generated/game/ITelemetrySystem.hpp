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
struct ITelemetrySystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameITelemetrySystem";
    static constexpr const char* ALIAS = "ITelemetrySystem";

};
RED4EXT_ASSERT_SIZE(ITelemetrySystem, 0x48);
} // namespace game
using gameITelemetrySystem = game::ITelemetrySystem;
using ITelemetrySystem = game::ITelemetrySystem;
} // namespace RED4ext

// clang-format on
