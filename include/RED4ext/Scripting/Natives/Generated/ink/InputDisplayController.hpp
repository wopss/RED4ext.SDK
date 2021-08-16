#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/InputHintHoldIndicationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLibraryReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace ink { 
struct InputDisplayController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkInputDisplayController";
    static constexpr const char* ALIAS = "inkInputDisplayController";

    ink::WidgetReference iconRef; // 68
    ink::WidgetReference nameRef; // 80
    ink::WidgetReference canvasRef; // 98
    ink::CompoundWidgetReference holdIndicatorContainerRef; // B0
    ink::WidgetLibraryReference gamepadHoldIndicatorLibraryRef; // C8
    ink::WidgetLibraryReference keyboardHoldIndicatorLibraryRef; // D8
    uint8_t unkE8[0xF8 - 0xE8]; // E8
    float fixedIconHeight; // F8
    uint8_t unkFC[0x100 - 0xFC]; // FC
    CName inputActionName; // 100
    uint8_t unk108[0x122 - 0x108]; // 108
    bool supportAnimatedHoldIndicator; // 122
    ink::InputHintHoldIndicationType holdIndicationType; // 123
    uint8_t unk124[0x128 - 0x124]; // 124
};
RED4EXT_ASSERT_SIZE(InputDisplayController, 0x128);
} // namespace ink
} // namespace RED4ext
