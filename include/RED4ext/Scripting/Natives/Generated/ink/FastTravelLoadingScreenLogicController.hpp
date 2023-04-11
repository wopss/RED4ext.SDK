#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ILoadingLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/RichTextBoxWidgetReference.hpp>

namespace RED4ext
{
namespace ink
{
struct FastTravelLoadingScreenLogicController : ink::ILoadingLogicController
{
    static constexpr const char* NAME = "inkFastTravelLoadingScreenLogicController";
    static constexpr const char* ALIAS = "LoadingScreenLogicController";

    uint8_t unk190[0x1D8 - 0x190]; // 190
    ink::ImageWidgetReference mainBackgroundImage; // 1D8
    ink::ImageWidgetReference supportBackgroundImage; // 1F0
    uint8_t unk208[0x210 - 0x208]; // 208
    CName breathInAnimName; // 210
    CName breathOutAnimName; // 218
    uint8_t unk220[0x288 - 0x220]; // 220
    ink::RichTextBoxWidgetReference tooltipsWidget; // 288
    uint8_t unk2A0[0x2A8 - 0x2A0]; // 2A0
    CName tooltipAnimName; // 2A8
    uint8_t unk2B0[0x320 - 0x2B0]; // 2B0
    CName introAnimationName; // 320
    CName loopAnimationName; // 328
    uint8_t unk330[0x348 - 0x330]; // 330
};
RED4EXT_ASSERT_SIZE(FastTravelLoadingScreenLogicController, 0x348);
} // namespace ink
using inkFastTravelLoadingScreenLogicController = ink::FastTravelLoadingScreenLogicController;
using LoadingScreenLogicController = ink::FastTravelLoadingScreenLogicController;
} // namespace RED4ext

// clang-format on
