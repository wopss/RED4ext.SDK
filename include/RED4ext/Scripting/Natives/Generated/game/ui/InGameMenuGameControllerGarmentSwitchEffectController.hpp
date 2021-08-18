#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace game::ui { 
struct InGameMenuGameControllerGarmentSwitchEffectController
{
    static constexpr const char* NAME = "gameuiInGameMenuGameControllerGarmentSwitchEffectController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x28 - 0x0]; // 0
    CName sceneName; // 28
    CName effectName; // 30
    uint8_t unk38[0x40 - 0x38]; // 38
};
RED4EXT_ASSERT_SIZE(InGameMenuGameControllerGarmentSwitchEffectController, 0x40);
} // namespace game::ui
} // namespace RED4ext
