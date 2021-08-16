#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::interactions::vis { 
enum class EVisualizerDefinitionFlags : uint16_t
{
    None = 0,
    Fading = 1,
    HeadlineSelection = 2,
    QuestImportant = 8,
    CPO_Mode = 16,
};
} // namespace game::interactions::vis
using EVisualizerDefinitionFlags = game::interactions::vis::EVisualizerDefinitionFlags;
} // namespace RED4ext
