#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct InGameMenuGameController_ToggleSceneReloadProcessed : red::Event
{
    static constexpr const char* NAME = "gameuiInGameMenuGameController_ToggleSceneReloadProcessed";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(InGameMenuGameController_ToggleSceneReloadProcessed, 0x40);
} // namespace game::ui
using gameuiInGameMenuGameController_ToggleSceneReloadProcessed = game::ui::InGameMenuGameController_ToggleSceneReloadProcessed;
} // namespace RED4ext

// clang-format on
