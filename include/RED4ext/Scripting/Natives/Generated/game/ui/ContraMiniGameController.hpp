#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerMiniGameControllerAdvanced.hpp>

namespace RED4ext
{
namespace game::ui { 
struct ContraMiniGameController : game::ui::SideScrollerMiniGameControllerAdvanced
{
    static constexpr const char* NAME = "gameuiContraMiniGameController";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ContraMiniGameController, 0x100);
} // namespace game::ui
} // namespace RED4ext
