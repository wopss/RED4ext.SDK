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

    ink::WidgetReference iconRef; // 78
    ink::WidgetReference nameRef; // 90
    ink::WidgetReference canvasRef; // A8
    ink::CompoundWidgetReference holdIndicatorContainerRef; // C0
    ink::WidgetLibraryReference gamepadHoldIndicatorLibraryRef; // D8
    ink::WidgetLibraryReference keyboardHoldIndicatorLibraryRef; // E8
    uint8_t unkF8[0x108 - 0xF8]; // F8
    float fixedIconHeight; // 108
    uint8_t unk10C[0x110 - 0x10C]; // 10C
    CName inputActionName; // 110
    uint8_t unk118[0x132 - 0x118]; // 118
    bool supportAnimatedHoldIndicator; // 132
    ink::InputHintHoldIndicationType holdIndicationType; // 133
    uint8_t unk134[0x138 - 0x134]; // 134
};
RED4EXT_ASSERT_SIZE(InputDisplayController, 0x138);
} // namespace ink
} // namespace RED4ext
