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
struct IPoliceRadioSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIPoliceRadioSystem";
    static constexpr const char* ALIAS = "IPoliceRadioSystem";

};
RED4EXT_ASSERT_SIZE(IPoliceRadioSystem, 0x48);
} // namespace game
using gameIPoliceRadioSystem = game::IPoliceRadioSystem;
using IPoliceRadioSystem = game::IPoliceRadioSystem;
} // namespace RED4ext

// clang-format on
