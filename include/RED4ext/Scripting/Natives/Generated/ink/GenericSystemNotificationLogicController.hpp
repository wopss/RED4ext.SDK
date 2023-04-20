#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EmptyCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace ink
{
struct GenericSystemNotificationLogicController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkGenericSystemNotificationLogicController";
    static constexpr const char* ALIAS = NAME;

    ink::EmptyCallback DataSetByToken; // 78
    ink::TextWidgetReference titleTextWidget; // B0
    ink::TextWidgetReference descriptionTextWidget; // C8
    ink::TextWidgetReference additionalDataTextWidget; // E0
    ink::WidgetReference confirmButton; // F8
    ink::WidgetReference cancelButton; // 110
    CName introAnimationName; // 128
    CName outroAnimationName; // 130
    uint8_t unk138[0x1A0 - 0x138]; // 138
};
RED4EXT_ASSERT_SIZE(GenericSystemNotificationLogicController, 0x1A0);
} // namespace ink
using inkGenericSystemNotificationLogicController = ink::GenericSystemNotificationLogicController;
} // namespace RED4ext

// clang-format on
