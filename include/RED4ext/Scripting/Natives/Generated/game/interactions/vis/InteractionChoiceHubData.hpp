#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/vis/EVisualizerDefinitionFlags.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/vis/InteractionChoiceData.hpp>

namespace RED4ext
{
namespace game::interactions::vis { struct IVisualizerTimeProvider; }

namespace game::interactions::vis
{
struct InteractionChoiceHubData
{
    static constexpr const char* NAME = "gameinteractionsvisInteractionChoiceHubData";
    static constexpr const char* ALIAS = "InteractionChoiceHubData";

    int32_t id; // 00
    game::interactions::vis::EVisualizerDefinitionFlags flags; // 04
    bool active; // 06
    uint8_t unk07[0x8 - 0x7]; // 7
    CString title; // 08
    DynArray<game::interactions::vis::InteractionChoiceData> choices; // 28
    WeakHandle<game::interactions::vis::IVisualizerTimeProvider> timeProvider; // 38
};
RED4EXT_ASSERT_SIZE(InteractionChoiceHubData, 0x48);
} // namespace game::interactions::vis
using gameinteractionsvisInteractionChoiceHubData = game::interactions::vis::InteractionChoiceHubData;
using InteractionChoiceHubData = game::interactions::vis::InteractionChoiceHubData;
} // namespace RED4ext

// clang-format on
