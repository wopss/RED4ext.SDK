#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IAttitudeManager.hpp>

namespace RED4ext
{
namespace game
{
struct CAttitudeManager : game::IAttitudeManager
{
    static constexpr const char* NAME = "gameCAttitudeManager";
    static constexpr const char* ALIAS = "AttitudeSystem";

    uint8_t unk48[0x78608 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(CAttitudeManager, 0x78608);
} // namespace game
using gameCAttitudeManager = game::CAttitudeManager;
using AttitudeSystem = game::CAttitudeManager;
} // namespace RED4ext

// clang-format on
