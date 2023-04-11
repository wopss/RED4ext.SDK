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
struct ProgramFromDataGenRule : game::ui::MinigameGenerationRule
{
    static constexpr const char* NAME = "gameuiProgramFromDataGenRule";
    static constexpr const char* ALIAS = "ProgramFromDataGenRule";

};
RED4EXT_ASSERT_SIZE(ProgramFromDataGenRule, 0x50);
} // namespace game::ui
using gameuiProgramFromDataGenRule = game::ui::ProgramFromDataGenRule;
using ProgramFromDataGenRule = game::ui::ProgramFromDataGenRule;
} // namespace RED4ext

// clang-format on
