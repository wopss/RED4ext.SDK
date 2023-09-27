#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace ink
{
struct InputActionValidityController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkInputActionValidityController";
    static constexpr const char* ALIAS = NAME;

    bool invertVisibility; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
    CName inputActionName; // 80
    DynArray<ink::WidgetReference> inputValidityDependentWidgets; // 88
    uint8_t unk98[0xA8 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(InputActionValidityController, 0xA8);
} // namespace ink
using inkInputActionValidityController = ink::InputActionValidityController;
} // namespace RED4ext

// clang-format on
