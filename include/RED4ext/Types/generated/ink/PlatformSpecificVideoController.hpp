#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
struct Bink;

namespace ink { 
struct PlatformSpecificVideoController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkPlatformSpecificVideoController";
    static constexpr const char* ALIAS = "PlatformSpecificVideoController";

    RaRef<Bink> video; // 68
    RaRef<Bink> video_PS4; // 70
    RaRef<Bink> video_XB1; // 78
    bool isLooped; // 80
    uint8_t unk81[0x88 - 0x81]; // 81
};
RED4EXT_ASSERT_SIZE(PlatformSpecificVideoController, 0x88);
} // namespace ink
using PlatformSpecificVideoController = ink::PlatformSpecificVideoController;
} // namespace RED4ext
