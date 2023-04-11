#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MinigameGenerationRule.hpp>

namespace RED4ext
{
namespace game::ui
{
struct MainProgramGenRule : game::ui::MinigameGenerationRule
{
    static constexpr const char* NAME = "gameuiMainProgramGenRule";
    static constexpr const char* ALIAS = "MainProgramGenRule";

};
RED4EXT_ASSERT_SIZE(MainProgramGenRule, 0x50);
} // namespace game::ui
using gameuiMainProgramGenRule = game::ui::MainProgramGenRule;
using MainProgramGenRule = game::ui::MainProgramGenRule;
} // namespace RED4ext

// clang-format on
