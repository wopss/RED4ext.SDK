#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink { 
struct PlatformSpecificTextController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkPlatformSpecificTextController";
    static constexpr const char* ALIAS = "PlatformSpecificTextController";

    CName textLocKey; // 68
    CName textLocKey_PS4; // 70
    CName textLocKey_XB1; // 78
};
RED4EXT_ASSERT_SIZE(PlatformSpecificTextController, 0x80);
} // namespace ink
using PlatformSpecificTextController = ink::PlatformSpecificTextController;
} // namespace RED4ext
