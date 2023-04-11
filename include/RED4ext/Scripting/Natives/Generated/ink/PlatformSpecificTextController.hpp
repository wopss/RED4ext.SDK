#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink
{
struct PlatformSpecificTextController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkPlatformSpecificTextController";
    static constexpr const char* ALIAS = "PlatformSpecificTextController";

    CName textLocKey; // 78
    CName textLocKey_PS4; // 80
    CName textLocKey_Prospero; // 88
    CName textLocKey_XB1; // 90
    CName textLocKey_Scarlett; // 98
};
RED4EXT_ASSERT_SIZE(PlatformSpecificTextController, 0xA0);
} // namespace ink
using inkPlatformSpecificTextController = ink::PlatformSpecificTextController;
using PlatformSpecificTextController = ink::PlatformSpecificTextController;
} // namespace RED4ext

// clang-format on
