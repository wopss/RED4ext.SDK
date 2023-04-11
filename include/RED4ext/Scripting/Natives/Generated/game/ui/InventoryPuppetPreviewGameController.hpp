#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PuppetPreviewGameController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct InventoryPuppetPreviewGameController : game::ui::PuppetPreviewGameController
{
    static constexpr const char* NAME = "gameuiInventoryPuppetPreviewGameController";
    static constexpr const char* ALIAS = "inkInventoryPuppetPreviewGameController";

};
RED4EXT_ASSERT_SIZE(InventoryPuppetPreviewGameController, 0x1B8);
} // namespace game::ui
using gameuiInventoryPuppetPreviewGameController = game::ui::InventoryPuppetPreviewGameController;
using inkInventoryPuppetPreviewGameController = game::ui::InventoryPuppetPreviewGameController;
} // namespace RED4ext

// clang-format on
