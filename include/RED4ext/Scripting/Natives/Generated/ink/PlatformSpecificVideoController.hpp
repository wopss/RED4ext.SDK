#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
struct Bink;

namespace ink
{
struct PlatformSpecificVideoController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkPlatformSpecificVideoController";
    static constexpr const char* ALIAS = "PlatformSpecificVideoController";

    RaRef<Bink> video; // 78
    RaRef<Bink> video_PS4; // 80
    RaRef<Bink> video_XB1; // 88
    bool isLooped; // 90
    uint8_t unk91[0x98 - 0x91]; // 91
};
RED4EXT_ASSERT_SIZE(PlatformSpecificVideoController, 0x98);
} // namespace ink
using inkPlatformSpecificVideoController = ink::PlatformSpecificVideoController;
using PlatformSpecificVideoController = ink::PlatformSpecificVideoController;
} // namespace RED4ext

// clang-format on
