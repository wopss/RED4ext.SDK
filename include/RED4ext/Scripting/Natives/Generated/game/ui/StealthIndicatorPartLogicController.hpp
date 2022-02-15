#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseDirectionalIndicatorPartLogicController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct StealthIndicatorPartLogicController : game::ui::BaseDirectionalIndicatorPartLogicController
{
    static constexpr const char* NAME = "gameuiStealthIndicatorPartLogicController";
    static constexpr const char* ALIAS = "StealthIndicatorPartLogicController";

};
RED4EXT_ASSERT_SIZE(StealthIndicatorPartLogicController, 0xD0);
} // namespace game::ui
using StealthIndicatorPartLogicController = game::ui::StealthIndicatorPartLogicController;
} // namespace RED4ext
