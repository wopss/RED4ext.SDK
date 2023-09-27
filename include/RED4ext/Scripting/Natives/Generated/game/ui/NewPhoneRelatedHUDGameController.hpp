#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HUDGameController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct NewPhoneRelatedHUDGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiNewPhoneRelatedHUDGameController";
    static constexpr const char* ALIAS = NAME;

    bool isNewPhoneEnabled; // F8
    uint8_t unkF9[0x100 - 0xF9]; // F9
};
RED4EXT_ASSERT_SIZE(NewPhoneRelatedHUDGameController, 0x100);
} // namespace game::ui
using gameuiNewPhoneRelatedHUDGameController = game::ui::NewPhoneRelatedHUDGameController;
} // namespace RED4ext

// clang-format on
