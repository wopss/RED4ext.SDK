#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/InteractionMappinController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct __declspec(align(0x10)) StealthMappinController : game::ui::InteractionMappinController
{
    static constexpr const char* NAME = "gameuiStealthMappinController";
    static constexpr const char* ALIAS = "StealthMappinController";

};
RED4EXT_ASSERT_SIZE(StealthMappinController, 0x2C0);
} // namespace game::ui
using gameuiStealthMappinController = game::ui::StealthMappinController;
using StealthMappinController = game::ui::StealthMappinController;
} // namespace RED4ext

// clang-format on
