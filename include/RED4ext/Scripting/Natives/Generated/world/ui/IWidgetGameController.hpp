#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IWidgetController.hpp>

namespace RED4ext
{
namespace world::ui { 
struct IWidgetGameController : ink::IWidgetController
{
    static constexpr const char* NAME = "worlduiIWidgetGameController";
    static constexpr const char* ALIAS = "worlduiIGameController";

    uint8_t unk98[0xA8 - 0x98]; // 98
    TweakDBID elementRecordID; // A8
    uint8_t unkB0[0xC0 - 0xB0]; // B0
};
RED4EXT_ASSERT_SIZE(IWidgetGameController, 0xC0);
} // namespace world::ui
using worlduiIGameController = world::ui::IWidgetGameController;
} // namespace RED4ext
