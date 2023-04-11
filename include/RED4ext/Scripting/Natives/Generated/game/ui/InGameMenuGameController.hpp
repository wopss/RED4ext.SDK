#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseMenuGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/GarmentSwitchEffectController.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/InGameMenuGameControllerItemSceneInfo.hpp>

namespace RED4ext
{
namespace game::ui
{
struct InGameMenuGameController : game::ui::BaseMenuGameController
{
    static constexpr const char* NAME = "gameuiInGameMenuGameController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk140[0x150 - 0x140]; // 140
    DynArray<game::ui::InGameMenuGameControllerItemSceneInfo> itemSceneInfos; // 150
    DynArray<game::ui::GarmentSwitchEffectController> garmentSwitchEffectControllers; // 160
    uint8_t unk170[0x190 - 0x170]; // 170
};
RED4EXT_ASSERT_SIZE(InGameMenuGameController, 0x190);
} // namespace game::ui
using gameuiInGameMenuGameController = game::ui::InGameMenuGameController;
} // namespace RED4ext

// clang-format on
