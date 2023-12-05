#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct MappinBaseController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiMappinBaseController";
    static constexpr const char* ALIAS = "BaseMappinBaseController";

    uint8_t unk78[0x198 - 0x78]; // 78
    ink::ImageWidgetReference iconWidget; // 198
    ink::WidgetReference playerTrackedWidget; // 1B0
    ink::WidgetReference scaleWidget; // 1C8
};
RED4EXT_ASSERT_SIZE(MappinBaseController, 0x1E0);
} // namespace game::ui
using gameuiMappinBaseController = game::ui::MappinBaseController;
using BaseMappinBaseController = game::ui::MappinBaseController;
} // namespace RED4ext

// clang-format on
