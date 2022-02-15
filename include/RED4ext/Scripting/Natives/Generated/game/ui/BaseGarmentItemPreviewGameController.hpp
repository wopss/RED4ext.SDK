#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/GarmentSwitchEffectController.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/InventoryPuppetPreviewGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct BaseGarmentItemPreviewGameController : game::ui::InventoryPuppetPreviewGameController
{
    static constexpr const char* NAME = "gameuiBaseGarmentItemPreviewGameController";
    static constexpr const char* ALIAS = "BaseGarmentItemPreviewGameController";

    DynArray<game::ui::GarmentSwitchEffectController> garmentSwitchEffectControllers; // 1B8
};
RED4EXT_ASSERT_SIZE(BaseGarmentItemPreviewGameController, 0x1C8);
} // namespace game::ui
using BaseGarmentItemPreviewGameController = game::ui::BaseGarmentItemPreviewGameController;
} // namespace RED4ext
