#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/UniformGridWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct HackingMinigameLogicController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiHackingMinigameLogicController";
    static constexpr const char* ALIAS = NAME;

    ink::WidgetReference resetButton; // 78
    ink::UniformGridWidgetReference grid; // 90
    ink::CompoundWidgetReference buffer; // A8
    ink::CompoundWidgetReference programs; // C0
    ink::CompoundWidgetReference activatedTraps; // D8
    ink::CompoundWidgetReference failScreenWidget; // F0
    ink::CompoundWidgetReference successScreenWidget; // 108
    ink::TextWidgetReference timer; // 120
    ink::TextWidgetReference accessInformationText; // 138
    ink::TextWidgetReference successExitTerminalText; // 150
    ink::TextWidgetReference failedExitTerminalText; // 168
    ink::WidgetReference gridVerticalHiglight; // 180
    ink::WidgetReference gridHorizontalHiglight; // 198
    ink::WidgetReference programsColumnHiglight; // 1B0
    ink::WidgetReference successExitButton; // 1C8
    ink::WidgetReference failureExitButton; // 1E0
    ink::WidgetReference timerProgressBar; // 1F8
    ink::WidgetReference timerContainer; // 210
    ink::WidgetReference timerPlaceholder; // 228
    CName introAnimName; // 240
    CName loopAnimName; // 248
    CName cursorAnimName; // 250
    CName higlightAnimName; // 258
    CName gameWonAnimName; // 260
    CName gameLostAnimName; // 268
    CName terminalShutdownAnimName; // 270
    CName trapActivatedAnimName; // 278
    CName programSucceedAnimName; // 280
    CName programFailedAnimName; // 288
    CName programResetFromFailedAnimName; // 290
    uint8_t unk298[0x2A0 - 0x298]; // 298
    CName gridCellHoverAnimName; // 2A0
    CName gridCellClickFlashAnimName; // 2A8
    CName bufferCellHoverAnimName; // 2B0
    CName bufferCellClickFlashAnimName; // 2B8
    CName programCellClickFlashAnimName; // 2C0
    CName cursorWidgetRelativePath; // 2C8
    CName activatedTrapIconLibraryName; // 2D0
    CName trapIconsContainerRelativePath; // 2D8
    uint8_t unk2E0[0x2F0 - 0x2E0]; // 2E0
    CName bufferCellLibraryName; // 2F0
    CName bufferCellTextWidgetRelativePath; // 2F8
    CName programCellLibraryName; // 300
    CName programCellTextWidgetRelativePath; // 308
    CName gridCellLibraryName; // 310
    CName gridCellTextWidgetRelativePath; // 318
    CName gridCellTrapIconWidgetRelativePath; // 320
    CName gridCellTrapIconContainerRelativePath; // 328
    CName gridCellProgramHighlightRelativePath; // 330
    CName gridCellDefaultStateName; // 338
    CName gridCellHoveredStateName; // 340
    CName gridCellSelectedStateName; // 348
    CName gridCellDisabledStateName; // 350
    CName mainHiglightBarStateName; // 358
    CName secondaryHiglightBarStateName; // 360
    CName inactiveHiglightBarStateName; // 368
    CString gridCellDisabledSymbol; // 370
    CName programSucceedStateName; // 390
    CName programCellReadyStateName; // 398
    CName programCellHighlightStateName; // 3A0
    CName programFailedStateName; // 3A8
    CName programEntryLibraryName; // 3B0
    CName programEntryTextWidgetRelativePath; // 3B8
    CName programEntryNoteWidgetRelativePath; // 3C0
    CName programEntryInstructionContainerRelativePath; // 3C8
    CName programEntryIconPath; // 3D0
    uint8_t unk3D8[0x488 - 0x3D8]; // 3D8
};
RED4EXT_ASSERT_SIZE(HackingMinigameLogicController, 0x488);
} // namespace game::ui
using gameuiHackingMinigameLogicController = game::ui::HackingMinigameLogicController;
} // namespace RED4ext

// clang-format on
