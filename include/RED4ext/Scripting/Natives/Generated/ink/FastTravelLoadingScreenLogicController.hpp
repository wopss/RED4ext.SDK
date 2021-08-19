#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ILoadingLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/RichTextBoxWidgetReference.hpp>

namespace RED4ext
{
namespace ink { 
struct FastTravelLoadingScreenLogicController : ink::ILoadingLogicController
{
    static constexpr const char* NAME = "inkFastTravelLoadingScreenLogicController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk180[0x1C8 - 0x180]; // 180
    ink::ImageWidgetReference mainBackgroundImage; // 1C8
    ink::ImageWidgetReference supportBackgroundImage; // 1E0
    uint8_t unk1F8[0x200 - 0x1F8]; // 1F8
    CName breathInAnimName; // 200
    CName breathOutAnimName; // 208
    uint8_t unk210[0x278 - 0x210]; // 210
    ink::RichTextBoxWidgetReference tooltipsWidget; // 278
    uint8_t unk290[0x298 - 0x290]; // 290
    CName tooltipAnimName; // 298
    uint8_t unk2A0[0x310 - 0x2A0]; // 2A0
    CName introAnimationName; // 310
    CName loopAnimationName; // 318
    uint8_t unk320[0x338 - 0x320]; // 320
};
RED4EXT_ASSERT_SIZE(FastTravelLoadingScreenLogicController, 0x338);
} // namespace ink
} // namespace RED4ext
