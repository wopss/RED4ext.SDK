#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/game/ui/BaseMenuGameControllerPuppetSceneInfo.hpp>
#include <RED4ext/Types/generated/game/ui/WidgetGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct BaseMenuGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiBaseMenuGameController";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::ui::BaseMenuGameControllerPuppetSceneInfo> puppetSceneInfos; // D0
    uint8_t unkE0[0x130 - 0xE0]; // E0
};
RED4EXT_ASSERT_SIZE(BaseMenuGameController, 0x130);
} // namespace game::ui
} // namespace RED4ext
