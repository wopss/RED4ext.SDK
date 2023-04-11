#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MappinControllerCustomData.hpp>

namespace RED4ext
{
namespace game::ui
{
struct MinimapQuestAreaInitData : game::ui::MappinControllerCustomData
{
    static constexpr const char* NAME = "gameuiMinimapQuestAreaInitData";
    static constexpr const char* ALIAS = "MinimapQuestAreaInitData";

};
RED4EXT_ASSERT_SIZE(MinimapQuestAreaInitData, 0x40);
} // namespace game::ui
using gameuiMinimapQuestAreaInitData = game::ui::MinimapQuestAreaInitData;
using MinimapQuestAreaInitData = game::ui::MinimapQuestAreaInitData;
} // namespace RED4ext

// clang-format on
