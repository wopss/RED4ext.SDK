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

    uint8_t unkE0[0x1E0 - 0xE0]; // E0
    ink::CompoundWidgetReference baseGroupContainer; // 1E0
    ink::CompoundWidgetReference groupsContainer; // 1F8
    ink::WidgetLibraryReference hintLibRef; // 210
    uint8_t unk220[0x228 - 0x220]; // 220
    ink::WidgetLibraryReference groupLibRef; // 228
    uint8_t unk238[0x240 - 0x238]; // 238
    CName hintContainerId; // 240
    uint8_t unk248[0x264 - 0x248]; // 248
    bool sortInputHints; // 264
    bool useHideOptim; // 265
    uint8_t unk266[0x268 - 0x266]; // 266
};
RED4EXT_ASSERT_SIZE(InputHintManagerGameController, 0x268);
} // namespace game::ui
using InputHintManagerGameController = game::ui::InputHintManagerGameController;
} // namespace RED4ext
