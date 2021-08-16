#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Types/generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Types/generated/ink/UniformGridWidgetReference.hpp>
#include <RED4ext/Types/generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Types/generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct HackingMinigameLogicController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiHackingMinigameLogicController";
    static constexpr const char* ALIAS = NAME;

    ink::WidgetReference resetButton; // 68
    ink::UniformGridWidgetReference grid; // 80
    ink::CompoundWidgetReference buffer; // 98
    ink::CompoundWidgetReference programs; // B0
    ink::CompoundWidgetReference activatedTraps; // C8
    ink::CompoundWidgetReference failScreenWidget; // E0
    ink::CompoundWidgetReference successScreenWidget; // F8
    ink::TextWidgetReference timer; // 110
    ink::TextWidgetReference accessInformationText; // 128
    ink::TextWidgetReference successExitTerminalText; // 140
    ink::TextWidgetReference failedExitTerminalText; // 158
    ink::WidgetReference gridVerticalHiglight; // 170
    ink::WidgetReference gridHorizontalHiglight; // 188
    ink::WidgetReference programsColumnHiglight; // 1A0
    ink::WidgetReference successExitButton; // 1B8
    ink::WidgetReference failureExitButton; // 1D0
    ink::WidgetReference timerProgressBar; // 1E8
    CName introAnimName; // 200
    CName loopAnimName; // 208
    CName cursorAnimName; // 210
    CName higlightAnimName; // 218
    CName gameWonAnimName; // 220
    CName gameLostAnimName; // 228
    CName terminalShutdownAnimName; // 230
    CName trapActivatedAnimName; // 238
    CName programSucceedAnimName; // 240
    CName programFailedAnimName; // 248
    CName programResetFromFailedAnimName; // 250
    uint8_t unk258[0x260 - 0x258]; // 258
    CName gridCellHoverAnimName; // 260
    CName gridCellClickFlashAnimName; // 268
    CName bufferCellHoverAnimName; // 270
    CName bufferCellClickFlashAnimName; // 278
    CName programCellClickFlashAnimName; // 280
    CName cursorWidgetRelativePath; // 288
    CName activatedTrapIconLibraryName; // 290
    CName trapIconsContainerRelativePath; // 298
    uint8_t unk2A0[0x2B0 - 0x2A0]; // 2A0
    CName bufferCellLibraryName; // 2B0
    CName bufferCellTextWidgetRelativePath; // 2B8
    CName programCellLibraryName; // 2C0
    CName programCellTextWidgetRelativePath; // 2C8
    CName gridCellLibraryName; // 2D0
    CName gridCellTextWidgetRelativePath; // 2D8
    CName gridCellTrapIconWidgetRelativePath; // 2E0
    CName gridCellTrapIconContainerRelativePath; // 2E8
    CName gridCellProgramHighlightRelativePath; // 2F0
    CName gridCellDefaultStateName; // 2F8
    CName gridCellHoveredStateName; // 300
    CName gridCellSelectedStateName; // 308
    CName gridCellDisabledStateName; // 310
    CName mainHiglightBarStateName; // 318
    CName secondaryHiglightBarStateName; // 320
    CName inactiveHiglightBarStateName; // 328
    CString gridCellDisabledSymbol; // 330
    CName programSucceedStateName; // 350
    CName programCellReadyStateName; // 358
    CName programCellHighlightStateName; // 360
    CName programFailedStateName; // 368
    CName programEntryLibraryName; // 370
    CName programEntryTextWidgetRelativePath; // 378
    CName programEntryNoteWidgetRelativePath; // 380
    CName programEntryInstructionContainerRelativePath; // 388
    CName programEntryIconPath; // 390
    uint8_t unk398[0x440 - 0x398]; // 398
};
RED4EXT_ASSERT_SIZE(HackingMinigameLogicController, 0x440);
} // namespace game::ui
} // namespace RED4ext
