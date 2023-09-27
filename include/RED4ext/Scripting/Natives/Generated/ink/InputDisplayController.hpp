#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/InputHintHoldIndicationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLibraryReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace ink
{
struct InputDisplayController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkInputDisplayController";
    static constexpr const char* ALIAS = NAME;

    ink::WidgetReference iconRef; // 78
    ink::WidgetReference nameRef; // 90
    ink::WidgetReference canvasRef; // A8
    ink::TextWidgetReference iconAND; // C0
    ink::CompoundWidgetReference holdIndicatorContainerRef; // D8
    ink::WidgetLibraryReference gamepadHoldIndicatorLibraryRef; // F0
    ink::WidgetLibraryReference keyboardHoldIndicatorLibraryRef; // 100
    uint8_t unk110[0x120 - 0x110]; // 110
    float fixedIconHeight; // 120
    uint8_t unk124[0x128 - 0x124]; // 124
    CName inputActionName; // 128
    uint8_t unk130[0x14B - 0x130]; // 130
    ink::InputHintHoldIndicationType holdIndicationType; // 14B
    uint8_t unk14C[0x150 - 0x14C]; // 14C
};
RED4EXT_ASSERT_SIZE(InputDisplayController, 0x150);
} // namespace ink
using inkInputDisplayController = ink::InputDisplayController;
} // namespace RED4ext

// clang-format on
