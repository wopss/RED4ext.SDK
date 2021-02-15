#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/IMuppetInputAction.hpp>

namespace RED4ext
{
namespace game { 
struct MuppetInputActionSelectWeapon : game::IMuppetInputAction
{
    static constexpr const char* NAME = "gameMuppetInputActionSelectWeapon";
    static constexpr const char* ALIAS = NAME;

    ItemID wantedWeapon; // 08
};
RED4EXT_ASSERT_SIZE(MuppetInputActionSelectWeapon, 0x18);
} // namespace game
} // namespace RED4ext
