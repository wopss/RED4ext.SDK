#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>

namespace RED4ext
{
namespace game
{
struct AttitudeAgent : game::Component
{
    static constexpr const char* NAME = "gameAttitudeAgent";
    static constexpr const char* ALIAS = "AttitudeAgent";

    uint8_t unkA8[0xC8 - 0xA8]; // A8
    CName baseAttitudeGroup; // C8
    uint8_t unkD0[0xD8 - 0xD0]; // D0
};
RED4EXT_ASSERT_SIZE(AttitudeAgent, 0xD8);
} // namespace game
using gameAttitudeAgent = game::AttitudeAgent;
using AttitudeAgent = game::AttitudeAgent;
} // namespace RED4ext

// clang-format on
