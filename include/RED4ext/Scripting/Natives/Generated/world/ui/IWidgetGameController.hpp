#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IWidgetController.hpp>

namespace RED4ext
{
namespace world::ui
{
struct IWidgetGameController : ink::IWidgetController
{
    static constexpr const char* NAME = "worlduiIWidgetGameController";
    static constexpr const char* ALIAS = "worlduiIGameController";

    uint8_t unkA8[0xB8 - 0xA8]; // A8
    TweakDBID elementRecordID; // B8
    uint8_t unkC0[0xD0 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(IWidgetGameController, 0xD0);
} // namespace world::ui
using worlduiIWidgetGameController = world::ui::IWidgetGameController;
using worlduiIGameController = world::ui::IWidgetGameController;
} // namespace RED4ext

// clang-format on
