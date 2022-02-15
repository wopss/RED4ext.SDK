#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace game::ui { 
struct GarmentSwitchEffectController
{
    static constexpr const char* NAME = "gameuiGarmentSwitchEffectController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x28 - 0x0]; // 0
    CName sceneName; // 28
    CName effectName; // 30
    float switchTime; // 38
    float hideTime; // 3C
    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(GarmentSwitchEffectController, 0x48);
} // namespace game::ui
} // namespace RED4ext
