#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ILoadingLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LocalizedBink.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/VideoWidgetReference.hpp>

namespace RED4ext
{
struct Bink;

namespace ink
{
struct SplashScreenLoadingScreenLogicController : ink::ILoadingLogicController
{
    static constexpr const char* NAME = "inkSplashScreenLoadingScreenLogicController";
    static constexpr const char* ALIAS = "SplashScreenLoadingScreenLogicController";

    RaRef<Bink> logoTrainWBBink; // 190
    RaRef<Bink> logoTrainNamcoBink; // 198
    RaRef<Bink> logoTrainStadiaBink; // 1A0
    RaRef<Bink> logoTrainNoRTXBink; // 1A8
    RaRef<Bink> logoTrainRTXBink; // 1B0
    ink::LocalizedBink introMessageBink; // 1B8
    RaRef<Bink> trailerBink; // 1D0
    ink::CompoundWidgetReference skipButtonPanel; // 1D8
    ink::VideoWidgetReference videoPlayer; // 1F0
    uint8_t unk208[0x228 - 0x208]; // 208
    CName logosTrainAnimation; // 228
    CName longLogosTrainAnimation; // 230
    CName localizedMessageAnimation; // 238
    CName gameIntroAnimation; // 240
    CName stopIntroAudioEventName; // 248
    CName afterSkipAnimation; // 250
    uint8_t unk258[0x298 - 0x258]; // 258
};
RED4EXT_ASSERT_SIZE(SplashScreenLoadingScreenLogicController, 0x298);
} // namespace ink
using inkSplashScreenLoadingScreenLogicController = ink::SplashScreenLoadingScreenLogicController;
using SplashScreenLoadingScreenLogicController = ink::SplashScreenLoadingScreenLogicController;
} // namespace RED4ext

// clang-format on
