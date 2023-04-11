#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TutorialBracketType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EAnchor.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ELayerType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ITutorial_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct ShowBracket_NodeSubType : quest::ITutorial_NodeSubType
{
    static constexpr const char* NAME = "questShowBracket_NodeSubType";
    static constexpr const char* ALIAS = NAME;

    CName bracketID; // 38
    bool visible; // 40
    uint8_t unk41[0x44 - 0x41]; // 41
    game::TutorialBracketType bracketType; // 44
    ink::EAnchor anchor; // 48
    ink::ELayerType visibleOnUILayer; // 49
    uint8_t unk4A[0x4C - 0x4A]; // 4A
    Vector2 offset; // 4C
    Vector2 size; // 54
    bool ignoreDisabledTutorials; // 5C
    uint8_t unk5D[0x60 - 0x5D]; // 5D
};
RED4EXT_ASSERT_SIZE(ShowBracket_NodeSubType, 0x60);
} // namespace quest
using questShowBracket_NodeSubType = quest::ShowBracket_NodeSubType;
} // namespace RED4ext

// clang-format on
