#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/vis/ListChoiceHubData.hpp>

namespace RED4ext
{
namespace game::interactions::vis
{
struct DialogChoiceHubs
{
    static constexpr const char* NAME = "gameinteractionsvisDialogChoiceHubs";
    static constexpr const char* ALIAS = "DialogChoiceHubs";

    DynArray<game::interactions::vis::ListChoiceHubData> choiceHubs; // 00
};
RED4EXT_ASSERT_SIZE(DialogChoiceHubs, 0x10);
} // namespace game::interactions::vis
using gameinteractionsvisDialogChoiceHubs = game::interactions::vis::DialogChoiceHubs;
using DialogChoiceHubs = game::interactions::vis::DialogChoiceHubs;
} // namespace RED4ext

// clang-format on
