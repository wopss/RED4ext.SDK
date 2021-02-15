#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Types/generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Types/generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace ink { 
struct GenericSystemNotificationLogicController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkGenericSystemNotificationLogicController";
    static constexpr const char* ALIAS = NAME;

    ink::TextWidgetReference titleTextWidget; // 68
    ink::TextWidgetReference descriptionTextWidget; // 80
    ink::TextWidgetReference additionalDataTextWidget; // 98
    ink::WidgetReference confirmButton; // B0
    ink::WidgetReference cancelButton; // C8
    CName introAnimationName; // E0
    CName outroAnimationName; // E8
    uint8_t unkF0[0x138 - 0xF0]; // F0
};
RED4EXT_ASSERT_SIZE(GenericSystemNotificationLogicController, 0x138);
} // namespace ink
} // namespace RED4ext
