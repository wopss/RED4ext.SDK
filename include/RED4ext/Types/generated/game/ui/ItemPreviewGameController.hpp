#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/ui/PreviewGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct ItemPreviewGameController : game::ui::PreviewGameController
{
    static constexpr const char* NAME = "gameuiItemPreviewGameController";
    static constexpr const char* ALIAS = "inkItemPreviewGameController";

    uint8_t unkF8[0x140 - 0xF8]; // F8
};
RED4EXT_ASSERT_SIZE(ItemPreviewGameController, 0x140);
} // namespace game::ui
using inkItemPreviewGameController = game::ui::ItemPreviewGameController;
} // namespace RED4ext
