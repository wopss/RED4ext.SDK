#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MinigameGenerationRule.hpp>

namespace RED4ext
{
namespace game::ui { 
struct ProgramsGridGenRule : game::ui::MinigameGenerationRule
{
    static constexpr const char* NAME = "gameuiProgramsGridGenRule";
    static constexpr const char* ALIAS = "ProgramsGridGenRule";

};
RED4EXT_ASSERT_SIZE(ProgramsGridGenRule, 0x50);
} // namespace game::ui
using ProgramsGridGenRule = game::ui::ProgramsGridGenRule;
} // namespace RED4ext
