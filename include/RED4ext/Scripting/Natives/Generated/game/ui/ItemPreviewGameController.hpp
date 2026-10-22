#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PreviewGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct __declspec(align(0x10)) ItemPreviewGameController : game::ui::PreviewGameController
{
    static constexpr const char* NAME = "gameuiItemPreviewGameController";
    static constexpr const char* ALIAS = "inkItemPreviewGameController";

    uint8_t unk128[0x168 - 0x128]; // 128
    ink::WidgetReference root; // 168
    ink::ImageWidgetReference image; // 180
    uint8_t unk198[0x1D0 - 0x198]; // 198
};
RED4EXT_ASSERT_SIZE(ItemPreviewGameController, 0x1D0);
} // namespace game::ui
using gameuiItemPreviewGameController = game::ui::ItemPreviewGameController;
using inkItemPreviewGameController = game::ui::ItemPreviewGameController;
} // namespace RED4ext

// clang-format on
