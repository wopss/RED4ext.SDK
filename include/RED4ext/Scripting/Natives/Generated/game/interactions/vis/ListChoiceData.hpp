#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/ChoiceCaption.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/ChoiceTypeWrapper.hpp>

namespace RED4ext
{
namespace game::interactions::vis { struct IVisualizerTimeProvider; }

namespace game::interactions::vis
{
struct ListChoiceData
{
    static constexpr const char* NAME = "gameinteractionsvisListChoiceData";
    static constexpr const char* ALIAS = "ListChoiceData";

    CString localizedName; // 00
    game::interactions::ChoiceTypeWrapper type; // 20
    uint8_t unk24[0x28 - 0x24]; // 24
    CName inputActionName; // 28
    game::interactions::ChoiceCaption captionParts; // 30
    WeakHandle<game::interactions::vis::IVisualizerTimeProvider> timeProvider; // 40
    uint8_t unk50[0xF0 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(ListChoiceData, 0xF0);
} // namespace game::interactions::vis
using gameinteractionsvisListChoiceData = game::interactions::vis::ListChoiceData;
using ListChoiceData = game::interactions::vis::ListChoiceData;
} // namespace RED4ext

// clang-format on
