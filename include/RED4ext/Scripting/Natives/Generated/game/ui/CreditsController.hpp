#pragma once

// clang-format off

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

namespace game::ui
{
struct CreditsController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiCreditsController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkE0[0x130 - 0xE0]; // E0
    Ref<ink::CreditsResource> creditsResourceXBOX; // 130
    Ref<ink::CreditsResource> creditsResourcePC; // 148
    Ref<ink::CreditsResource> creditsResourceEmporium; // 160
    Ref<ink::CreditsResource> creditsResourceMac; // 178
    Ref<ink::CreditsResource> creditsResourcePS5; // 190
    ink::CompoundWidgetReference sectionsContainer; // 1A8
    ink::TextWidgetReference singleTextWidget; // 1C0
    ink::TextWidgetReference speakerNameTextWidget; // 1D8
    ink::CompoundWidgetReference exitTooltipContainer; // 1F0
    uint8_t unk208[0x240 - 0x208]; // 208
    CName openVideoScreenAnimName; // 240
    CName closeVideoScreenAnimName; // 248
    CName swapBackgroundVideoAnimName; // 250
    CName singleAnimName; // 258
    uint8_t unk260[0x289 - 0x260]; // 260
    bool isPreVideoFinished; // 289
    bool isEp1CreditsImplementation; // 28A
    uint8_t unk28B[0x28C - 0x28B]; // 28B
    float exitNotificationDisplayTime; // 28C
    uint8_t unk290[0x295 - 0x290]; // 290
    bool shouldShowRewardPrompt; // 295
    bool isInFinalBoardsMode; // 296
    uint8_t unk297[0x298 - 0x297]; // 297
    ink::CompoundWidgetReference subtitlesContainer; // 298
    RaRef<CResource> subtitlesLibraryPath; // 2B0
    float scrollingSpeed; // 2B8
    float fastforwardScrollingSpeed; // 2BC
    float topCreditsMargin; // 2C0
    float bottomCreditsMargin; // 2C4
    float startPosition; // 2C8
    uint8_t unk2CC[0x2D0 - 0x2CC]; // 2CC
    CName headerLibraryID; // 2D0
    CName boldLibraryID; // 2D8
    CName basicLibraryID; // 2E0
    CName basicTranslatableLibraryID; // 2E8
    uint8_t unk2F0[0x370 - 0x2F0]; // 2F0
};
RED4EXT_ASSERT_SIZE(CreditsController, 0x370);
} // namespace game::ui
using gameuiCreditsController = game::ui::CreditsController;
} // namespace RED4ext

// clang-format on
