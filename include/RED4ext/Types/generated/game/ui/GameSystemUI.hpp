#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/ui/IGameSystemUI.hpp>

namespace RED4ext
{
namespace game::ui { 
struct GameSystemUI : game::ui::IGameSystemUI
{
    static constexpr const char* NAME = "gameuiGameSystemUI";
    static constexpr const char* ALIAS = "UISystem";

    uint8_t unk48[0xD0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(GameSystemUI, 0xD0);
} // namespace game::ui
using UISystem = game::ui::GameSystemUI;
} // namespace RED4ext
