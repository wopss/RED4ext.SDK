#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::ui { 
enum class HackingMinigameState : uint32_t
{
    Unknown = 0,
    InProgress = 1,
    Succeeded = 2,
    Failed = 3,
};
} // namespace game::ui
using HackingMinigameState = game::ui::HackingMinigameState;
} // namespace RED4ext
