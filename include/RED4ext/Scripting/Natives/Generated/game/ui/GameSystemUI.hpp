#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/IGameSystemUI.hpp>

namespace RED4ext
{
namespace game::ui { 
struct GameSystemUI : game::ui::IGameSystemUI
{
    static constexpr const char* NAME = "gameuiGameSystemUI";
    static constexpr const char* ALIAS = "UISystem";

    uint8_t unk48[0x140 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(GameSystemUI, 0x140);
} // namespace game::ui
using UISystem = game::ui::GameSystemUI;
} // namespace RED4ext
