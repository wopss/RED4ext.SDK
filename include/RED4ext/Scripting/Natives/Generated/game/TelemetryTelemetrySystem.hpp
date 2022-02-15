#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ITelemetrySystem.hpp>

namespace RED4ext
{
namespace game { 
struct TelemetryTelemetrySystem : game::ITelemetrySystem
{
    static constexpr const char* NAME = "gameTelemetryTelemetrySystem";
    static constexpr const char* ALIAS = "TelemetrySystem";

    uint8_t unk48[0x210 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(TelemetryTelemetrySystem, 0x210);
} // namespace game
using TelemetrySystem = game::TelemetryTelemetrySystem;
} // namespace RED4ext
