#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Types/generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Types/generated/ink/TextWidgetReference.hpp>

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
    uint8_t unk1B0[0x1C8 - 0x1B0]; // 1B0
    CName openVideoScreenAnimName; // 1C8
    CName closeVideoScreenAnimName; // 1D0
    CName swapBackgroundVideoAnimName; // 1D8
    CName singleAnimName; // 1E0
    uint8_t unk1E8[0x214 - 0x1E8]; // 1E8
    float exitNotificationDisplayTime; // 214
    uint8_t unk218[0x21D - 0x218]; // 218
    bool shouldShowRewardPrompt; // 21D
    bool isInFinalBoardsMode; // 21E
    uint8_t unk21F[0x220 - 0x21F]; // 21F
    ink::CompoundWidgetReference subtitlesContainer; // 220
    RaRef<CResource> subtitlesLibraryPath; // 238
    float scrollingSpeed; // 240
    float fastforwardScrollingSpeed; // 244
    float topCreditsMargin; // 248
    float bottomCreditsMargin; // 24C
    float startPosition; // 250
    uint8_t unk254[0x258 - 0x254]; // 254
    CName headerLibraryID; // 258
    CName boldLibraryID; // 260
    CName basicLibraryID; // 268
    uint8_t unk270[0x2B8 - 0x270]; // 270
};
RED4EXT_ASSERT_SIZE(CreditsController, 0x2B8);
} // namespace game::ui
} // namespace RED4ext
