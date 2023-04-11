#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseMenuGameControllerPuppetSceneInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct BaseMenuGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiBaseMenuGameController";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::ui::BaseMenuGameControllerPuppetSceneInfo> puppetSceneInfos; // E0
    uint8_t unkF0[0x140 - 0xF0]; // F0
};
RED4EXT_ASSERT_SIZE(BaseMenuGameController, 0x140);
} // namespace game::ui
using gameuiBaseMenuGameController = game::ui::BaseMenuGameController;
} // namespace RED4ext

// clang-format on
