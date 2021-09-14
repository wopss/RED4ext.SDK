#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLibraryReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct InputHintManagerGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiInputHintManagerGameController";
    static constexpr const char* ALIAS = "InputHintManagerGameController";

    uint8_t unkD0[0x1D0 - 0xD0]; // D0
    ink::CompoundWidgetReference baseGroupContainer; // 1D0
    ink::CompoundWidgetReference groupsContainer; // 1E8
    ink::WidgetLibraryReference hintLibRef; // 200
    uint8_t unk210[0x218 - 0x210]; // 210
    ink::WidgetLibraryReference groupLibRef; // 218
    uint8_t unk228[0x230 - 0x228]; // 228
    CName hintContainerId; // 230
    uint8_t unk238[0x254 - 0x238]; // 238
    bool sortInputHints; // 254
    bool useHideOptim; // 255
    uint8_t unk256[0x258 - 0x256]; // 256
};
RED4EXT_ASSERT_SIZE(InputHintManagerGameController, 0x258);
} // namespace game::ui
using InputHintManagerGameController = game::ui::InputHintManagerGameController;
} // namespace RED4ext
