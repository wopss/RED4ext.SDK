#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MappinControllerCustomData.hpp>

namespace RED4ext
{
namespace game::ui { 
struct MinimapQuestAreaInitData : game::ui::MappinControllerCustomData
{
    static constexpr const char* NAME = "gameuiMinimapQuestAreaInitData";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MinimapQuestAreaInitData, 0x40);
} // namespace game::ui
} // namespace RED4ext
