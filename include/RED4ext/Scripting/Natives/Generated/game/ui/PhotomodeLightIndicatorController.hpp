#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PhotomodeLightIndicatorController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiPhotomodeLightIndicatorController";
    static constexpr const char* ALIAS = "PhotomodeLightIndicatorController";

    uint8_t unk78[0x90 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(PhotomodeLightIndicatorController, 0x90);
} // namespace game::ui
using gameuiPhotomodeLightIndicatorController = game::ui::PhotomodeLightIndicatorController;
using PhotomodeLightIndicatorController = game::ui::PhotomodeLightIndicatorController;
} // namespace RED4ext

// clang-format on
