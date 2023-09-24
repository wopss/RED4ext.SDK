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
    Ref<ink::CreditsResource> creditsResourcePS4; // 130
    Ref<ink::CreditsResource> creditsResourceXBOXPC; // 148
    ink::CompoundWidgetReference sectionsContainer; // 160
    ink::TextWidgetReference singleTextWidget; // 178
    ink::TextWidgetReference speakerNameTextWidget; // 190
    ink::CompoundWidgetReference exitTooltipContainer; // 1A8
    uint8_t unk1C0[0x1F8 - 0x1C0]; // 1C0
    CName openVideoScreenAnimName; // 1F8
    CName closeVideoScreenAnimName; // 200
    CName swapBackgroundVideoAnimName; // 208
    CName singleAnimName; // 210
    uint8_t unk218[0x241 - 0x218]; // 218
    bool isPreVideoFinished; // 241
    bool isEp1CreditsImplementation; // 242
    uint8_t unk243[0x244 - 0x243]; // 243
    float exitNotificationDisplayTime; // 244
    uint8_t unk248[0x24D - 0x248]; // 248
    bool shouldShowRewardPrompt; // 24D
    bool isInFinalBoardsMode; // 24E
    uint8_t unk24F[0x250 - 0x24F]; // 24F
    ink::CompoundWidgetReference subtitlesContainer; // 250
    RaRef<CResource> subtitlesLibraryPath; // 268
    float scrollingSpeed; // 270
    float fastforwardScrollingSpeed; // 274
    float topCreditsMargin; // 278
    float bottomCreditsMargin; // 27C
    float startPosition; // 280
    uint8_t unk284[0x288 - 0x284]; // 284
    CName headerLibraryID; // 288
    CName boldLibraryID; // 290
    CName basicLibraryID; // 298
    CName basicTranslatableLibraryID; // 2A0
    uint8_t unk2A8[0x328 - 0x2A8]; // 2A8
};
RED4EXT_ASSERT_SIZE(CreditsController, 0x328);
} // namespace game::ui
using gameuiCreditsController = game::ui::CreditsController;
} // namespace RED4ext

// clang-format on
