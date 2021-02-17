#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Types/generated/ink/ILoadingLogicController.hpp>
#include <RED4ext/Types/generated/ink/LocalizedBink.hpp>
#include <RED4ext/Types/generated/ink/VideoWidgetReference.hpp>

namespace RED4ext
{
struct Bink;

namespace ink { 
struct SplashScreenLoadingScreenLogicController : ink::ILoadingLogicController
{
    static constexpr const char* NAME = "inkSplashScreenLoadingScreenLogicController";
    static constexpr const char* ALIAS = "SplashScreenLoadingScreenLogicController";

    RaRef<Bink> unk180; // 180 -- 
    RaRef<Bink> unk188; // 188 -- 
    RaRef<Bink> unk190; // 190 -- 
    RaRef<Bink> unk198; // 198 -- 
    RaRef<Bink> unk1A0; // 1A0 -- 
    ink::LocalizedBink unk1A8; // 1A8 -- 
    RaRef<Bink> trailerBink; // 1C0
    ink::CompoundWidgetReference skipButtonPanel; // 1C8
    ink::VideoWidgetReference videoPlayer; // 1E0
    uint8_t unk1F8[0x218 - 0x1F8]; // 1F8
    CName logosTrainAnimation; // 218
    CName longLogosTrainAnimation; // 220
    CName localizedMessageAnimation; // 228
    CName gameIntroAnimation; // 230
    CName stopIntroAudioEventName; // 238
    CName afterSkipAnimation; // 240
    uint8_t unk248[0x288 - 0x248]; // 248
};
RED4EXT_ASSERT_SIZE(SplashScreenLoadingScreenLogicController, 0x288);
} // namespace ink
using SplashScreenLoadingScreenLogicController = ink::SplashScreenLoadingScreenLogicController;
} // namespace RED4ext
