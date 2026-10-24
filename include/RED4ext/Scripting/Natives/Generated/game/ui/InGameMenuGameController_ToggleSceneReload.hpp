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
struct InGameMenuGameController_ToggleSceneReload : red::Event
{
    static constexpr const char* NAME = "gameuiInGameMenuGameController_ToggleSceneReload";
    static constexpr const char* ALIAS = NAME;

    bool shouldAutoReloadPuppets; // 40
    bool shouldReloadNow; // 41
    uint8_t unk42[0x48 - 0x42]; // 42
};
RED4EXT_ASSERT_SIZE(InGameMenuGameController_ToggleSceneReload, 0x48);
} // namespace game::ui
using gameuiInGameMenuGameController_ToggleSceneReload = game::ui::InGameMenuGameController_ToggleSceneReload;
} // namespace RED4ext

// clang-format on
