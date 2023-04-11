#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace game::ui
{
struct GarmentSwitchEffectController
{
    static constexpr const char* NAME = "gameuiGarmentSwitchEffectController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x48 - 0x0]; // 0
    CName sceneName; // 48
    CName effectName; // 50
    float switchTime; // 58
    float hideTime; // 5C
    uint8_t unk60[0x68 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(GarmentSwitchEffectController, 0x68);
} // namespace game::ui
using gameuiGarmentSwitchEffectController = game::ui::GarmentSwitchEffectController;
} // namespace RED4ext

// clang-format on
