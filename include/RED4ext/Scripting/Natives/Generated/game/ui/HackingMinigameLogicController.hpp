#pragma once

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
namespace game::ui { 
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
    CName introAnimName; // 210
    CName loopAnimName; // 218
    CName cursorAnimName; // 220
    CName higlightAnimName; // 228
    CName gameWonAnimName; // 230
    CName gameLostAnimName; // 238
    CName terminalShutdownAnimName; // 240
    CName trapActivatedAnimName; // 248
    CName programSucceedAnimName; // 250
    CName programFailedAnimName; // 258
    CName programResetFromFailedAnimName; // 260
    uint8_t unk268[0x270 - 0x268]; // 268
    CName gridCellHoverAnimName; // 270
    CName gridCellClickFlashAnimName; // 278
    CName bufferCellHoverAnimName; // 280
    CName bufferCellClickFlashAnimName; // 288
    CName programCellClickFlashAnimName; // 290
    CName cursorWidgetRelativePath; // 298
    CName activatedTrapIconLibraryName; // 2A0
    CName trapIconsContainerRelativePath; // 2A8
    uint8_t unk2B0[0x2C0 - 0x2B0]; // 2B0
    CName bufferCellLibraryName; // 2C0
    CName bufferCellTextWidgetRelativePath; // 2C8
    CName programCellLibraryName; // 2D0
    CName programCellTextWidgetRelativePath; // 2D8
    CName gridCellLibraryName; // 2E0
    CName gridCellTextWidgetRelativePath; // 2E8
    CName gridCellTrapIconWidgetRelativePath; // 2F0
    CName gridCellTrapIconContainerRelativePath; // 2F8
    CName gridCellProgramHighlightRelativePath; // 300
    CName gridCellDefaultStateName; // 308
    CName gridCellHoveredStateName; // 310
    CName gridCellSelectedStateName; // 318
    CName gridCellDisabledStateName; // 320
    CName mainHiglightBarStateName; // 328
    CName secondaryHiglightBarStateName; // 330
    CName inactiveHiglightBarStateName; // 338
    CString gridCellDisabledSymbol; // 340
    CName programSucceedStateName; // 360
    CName programCellReadyStateName; // 368
    CName programCellHighlightStateName; // 370
    CName programFailedStateName; // 378
    CName programEntryLibraryName; // 380
    CName programEntryTextWidgetRelativePath; // 388
    CName programEntryNoteWidgetRelativePath; // 390
    CName programEntryInstructionContainerRelativePath; // 398
    CName programEntryIconPath; // 3A0
    uint8_t unk3A8[0x450 - 0x3A8]; // 3A8
};
RED4EXT_ASSERT_SIZE(HackingMinigameLogicController, 0x450);
} // namespace game::ui
} // namespace RED4ext
