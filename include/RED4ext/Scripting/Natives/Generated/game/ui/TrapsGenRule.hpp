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
struct TrapsGenRule : game::ui::MinigameGenerationRule
{
    static constexpr const char* NAME = "gameuiTrapsGenRule";
    static constexpr const char* ALIAS = "TrapsGenRule";

};
RED4EXT_ASSERT_SIZE(TrapsGenRule, 0x50);
} // namespace game::ui
using gameuiTrapsGenRule = game::ui::TrapsGenRule;
using TrapsGenRule = game::ui::TrapsGenRule;
} // namespace RED4ext

// clang-format on
