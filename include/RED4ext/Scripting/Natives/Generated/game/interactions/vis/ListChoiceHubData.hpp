#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/vis/EVisualizerActivityState.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/vis/EVisualizerDefinitionFlags.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/vis/ListChoiceData.hpp>

namespace RED4ext
{
namespace game::interactions::vis { struct IVisualizerTimeProvider; }

namespace game::interactions::vis
{
struct ListChoiceHubData
{
    static constexpr const char* NAME = "gameinteractionsvisListChoiceHubData";
    static constexpr const char* ALIAS = "ListChoiceHubData";

    int32_t id; // 00
    game::interactions::vis::EVisualizerActivityState activityState; // 04
    game::interactions::vis::EVisualizerDefinitionFlags flags; // 08
    bool isPhoneLockActive; // 0A
    uint8_t unk0B[0x10 - 0xB]; // B
    CString title; // 10
    DynArray<game::interactions::vis::ListChoiceData> choices; // 30
    WeakHandle<game::interactions::vis::IVisualizerTimeProvider> timeProvider; // 40
    uint8_t hubPriority; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
};
RED4EXT_ASSERT_SIZE(ListChoiceHubData, 0x58);
} // namespace game::interactions::vis
using gameinteractionsvisListChoiceHubData = game::interactions::vis::ListChoiceHubData;
using ListChoiceHubData = game::interactions::vis::ListChoiceHubData;
} // namespace RED4ext

// clang-format on
