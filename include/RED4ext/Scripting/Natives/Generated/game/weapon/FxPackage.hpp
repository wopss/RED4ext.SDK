#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/weapon/IFxPackage.hpp>

namespace RED4ext
{
namespace game::weapon { 
struct FxPackage : game::weapon::IFxPackage
{
    static constexpr const char* NAME = "gameweaponFxPackage";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x2C80 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(FxPackage, 0x2C80);
} // namespace game::weapon
} // namespace RED4ext
