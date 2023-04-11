#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TelemetryPostMortem.hpp>

namespace RED4ext
{
namespace game
{
struct TelemetryPostMortemContainer : ISerializable
{
    static constexpr const char* NAME = "gameTelemetryPostMortemContainer";
    static constexpr const char* ALIAS = NAME;

    game::TelemetryPostMortem postMortem; // 30
};
RED4EXT_ASSERT_SIZE(TelemetryPostMortemContainer, 0x1D0);
} // namespace game
using gameTelemetryPostMortemContainer = game::TelemetryPostMortemContainer;
} // namespace RED4ext

// clang-format on
