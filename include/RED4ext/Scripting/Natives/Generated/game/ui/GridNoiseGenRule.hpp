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
struct GridNoiseGenRule : game::ui::MinigameGenerationRule
{
    static constexpr const char* NAME = "gameuiGridNoiseGenRule";
    static constexpr const char* ALIAS = "GridNoiseGenRule";

};
RED4EXT_ASSERT_SIZE(GridNoiseGenRule, 0x50);
} // namespace game::ui
using gameuiGridNoiseGenRule = game::ui::GridNoiseGenRule;
using GridNoiseGenRule = game::ui::GridNoiseGenRule;
} // namespace RED4ext

// clang-format on
