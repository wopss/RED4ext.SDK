#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>

namespace RED4ext
{
struct CResource;
namespace ink { struct CreditsResource; }

namespace game::ui { 
struct CreditsController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiCreditsController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkD0[0x120 - 0xD0]; // D0
    Ref<ink::CreditsResource> creditsResourcePS4; // 120
    Ref<ink::CreditsResource> creditsResourceXBOXPC; // 138
    ink::CompoundWidgetReference sectionsContainer; // 150
    ink::TextWidgetReference singleTextWidget; // 168
    ink::TextWidgetReference speakerNameTextWidget; // 180
    ink::CompoundWidgetReference exitTooltipContainer; // 198
    uint8_t unk1B0[0x1E8 - 0x1B0]; // 1B0
    CName openVideoScreenAnimName; // 1E8
    CName closeVideoScreenAnimName; // 1F0
    CName swapBackgroundVideoAnimName; // 1F8
    CName singleAnimName; // 200
    uint8_t unk208[0x234 - 0x208]; // 208
    float exitNotificationDisplayTime; // 234
    uint8_t unk238[0x23D - 0x238]; // 238
    bool shouldShowRewardPrompt; // 23D
    bool isInFinalBoardsMode; // 23E
    uint8_t unk23F[0x240 - 0x23F]; // 23F
    ink::CompoundWidgetReference subtitlesContainer; // 240
    RaRef<CResource> subtitlesLibraryPath; // 258
    float scrollingSpeed; // 260
    float fastforwardScrollingSpeed; // 264
    float topCreditsMargin; // 268
    float bottomCreditsMargin; // 26C
    float startPosition; // 270
    uint8_t unk274[0x278 - 0x274]; // 274
    CName headerLibraryID; // 278
    CName boldLibraryID; // 280
    CName basicLibraryID; // 288
    uint8_t unk290[0x2D8 - 0x290]; // 290
};
RED4EXT_ASSERT_SIZE(CreditsController, 0x2D8);
} // namespace game::ui
} // namespace RED4ext
