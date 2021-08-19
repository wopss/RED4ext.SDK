#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseMenuGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/InGameMenuGameControllerGarmentSwitchEffectController.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/InGameMenuGameControllerItemSceneInfo.hpp>

namespace RED4ext
{
namespace game::ui { 
struct InGameMenuGameController : game::ui::BaseMenuGameController
{
    static constexpr const char* NAME = "gameuiInGameMenuGameController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk130[0x140 - 0x130]; // 130
    DynArray<game::ui::InGameMenuGameControllerItemSceneInfo> itemSceneInfos; // 140
    DynArray<game::ui::InGameMenuGameControllerGarmentSwitchEffectController> garmentSwitchEffectControllers; // 150
};
RED4EXT_ASSERT_SIZE(InGameMenuGameController, 0x160);
} // namespace game::ui
} // namespace RED4ext
