#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/InteractionMappinController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct StealthMappinController : game::ui::InteractionMappinController
{
    static constexpr const char* NAME = "gameuiStealthMappinController";
    static constexpr const char* ALIAS = "StealthMappinController";

};
RED4EXT_ASSERT_SIZE(StealthMappinController, 0x2B0);
} // namespace game::ui
using StealthMappinController = game::ui::StealthMappinController;
} // namespace RED4ext
