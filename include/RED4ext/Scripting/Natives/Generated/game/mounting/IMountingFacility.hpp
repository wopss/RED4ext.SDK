#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game::mounting
{
struct IMountingFacility : game::IGameSystem
{
    static constexpr const char* NAME = "gamemountingIMountingFacility";
    static constexpr const char* ALIAS = "IMountingFacility";

};
RED4EXT_ASSERT_SIZE(IMountingFacility, 0x48);
} // namespace game::mounting
using gamemountingIMountingFacility = game::mounting::IMountingFacility;
using IMountingFacility = game::mounting::IMountingFacility;
} // namespace RED4ext

// clang-format on
