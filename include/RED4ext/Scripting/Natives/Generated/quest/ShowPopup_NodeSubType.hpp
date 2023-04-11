#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PopupPosition.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/VideoType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Margin.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ITutorial_NodeSubType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TutorialScreenMode.hpp>

namespace RED4ext
{
struct Bink;
namespace game { struct JournalPath; }

namespace quest
{
struct ShowPopup_NodeSubType : quest::ITutorial_NodeSubType
{
    static constexpr const char* NAME = "questShowPopup_NodeSubType";
    static constexpr const char* ALIAS = NAME;

    Handle<game::JournalPath> path; // 38
    bool open; // 48
    bool closeAtInput; // 49
    bool pauseGame; // 4A
    bool hideInMenu; // 4B
    ink::Margin margin; // 4C
    quest::TutorialScreenMode screenMode; // 5C
    uint8_t unk5D[0x60 - 0x5D]; // 5D
    game::PopupPosition position; // 60
    bool lockPlayerMovement; // 64
    bool closeCurrentPopup; // 65
    game::VideoType videoType; // 66
    uint8_t unk67[0x68 - 0x67]; // 67
    RaRef<Bink> video; // 68
    bool ignoreDisabledTutorials; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
};
RED4EXT_ASSERT_SIZE(ShowPopup_NodeSubType, 0x78);
} // namespace quest
using questShowPopup_NodeSubType = quest::ShowPopup_NodeSubType;
} // namespace RED4ext

// clang-format on
