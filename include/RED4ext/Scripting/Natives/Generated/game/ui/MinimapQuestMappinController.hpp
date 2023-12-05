#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseMinimapMappinController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct MinimapQuestMappinController : game::ui::BaseMinimapMappinController
{
    static constexpr const char* NAME = "gameuiMinimapQuestMappinController";
    static constexpr const char* ALIAS = "MinimapQuestMappinController";

};
RED4EXT_ASSERT_SIZE(MinimapQuestMappinController, 0x228);
} // namespace game::ui
using gameuiMinimapQuestMappinController = game::ui::MinimapQuestMappinController;
using MinimapQuestMappinController = game::ui::MinimapQuestMappinController;
} // namespace RED4ext

// clang-format on
