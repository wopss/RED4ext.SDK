#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PanzerBonus.hpp>

namespace RED4ext
{
namespace game::ui { 
struct PanzerScoreBonus : game::ui::PanzerBonus
{
    static constexpr const char* NAME = "gameuiPanzerScoreBonus";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkD8[0xE0 - 0xD8]; // D8
};
RED4EXT_ASSERT_SIZE(PanzerScoreBonus, 0xE0);
} // namespace game::ui
} // namespace RED4ext
