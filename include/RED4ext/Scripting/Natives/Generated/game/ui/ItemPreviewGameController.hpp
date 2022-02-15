#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PreviewGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct ItemPreviewGameController : game::ui::PreviewGameController
{
    static constexpr const char* NAME = "gameuiItemPreviewGameController";
    static constexpr const char* ALIAS = "inkItemPreviewGameController";

    uint8_t unk118[0x140 - 0x118]; // 118
    ink::ImageWidgetReference image; // 140
    uint8_t unk158[0x190 - 0x158]; // 158
};
RED4EXT_ASSERT_SIZE(ItemPreviewGameController, 0x190);
} // namespace game::ui
using inkItemPreviewGameController = game::ui::ItemPreviewGameController;
} // namespace RED4ext
