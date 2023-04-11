#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseGarmentItemPreviewGameController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct WardrobeSetPreviewGameController : game::ui::BaseGarmentItemPreviewGameController
{
    static constexpr const char* NAME = "gameuiWardrobeSetPreviewGameController";
    static constexpr const char* ALIAS = "WardrobeSetPreviewGameController";

    uint8_t unk1B8[0x208 - 0x1B8]; // 1B8
};
RED4EXT_ASSERT_SIZE(WardrobeSetPreviewGameController, 0x208);
} // namespace game::ui
using gameuiWardrobeSetPreviewGameController = game::ui::WardrobeSetPreviewGameController;
using WardrobeSetPreviewGameController = game::ui::WardrobeSetPreviewGameController;
} // namespace RED4ext

// clang-format on
