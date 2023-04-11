#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::ui { struct HackingMinigameGameController; }

namespace game::ui
{
struct MinigameGenerationRule : IScriptable
{
    static constexpr const char* NAME = "gameuiMinigameGenerationRule";
    static constexpr const char* ALIAS = "MinigameGenerationRule";

    WeakHandle<game::ui::HackingMinigameGameController> minigameController; // 40
};
RED4EXT_ASSERT_SIZE(MinigameGenerationRule, 0x50);
} // namespace game::ui
using gameuiMinigameGenerationRule = game::ui::MinigameGenerationRule;
using MinigameGenerationRule = game::ui::MinigameGenerationRule;
} // namespace RED4ext

// clang-format on
