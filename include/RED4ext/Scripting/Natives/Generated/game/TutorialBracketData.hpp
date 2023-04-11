#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TutorialBracketType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EAnchor.hpp>

namespace RED4ext
{
namespace game
{
struct TutorialBracketData
{
    static constexpr const char* NAME = "gameTutorialBracketData";
    static constexpr const char* ALIAS = "TutorialBracketData";

    CName bracketID; // 00
    game::TutorialBracketType bracketType; // 08
    ink::EAnchor anchor; // 0C
    uint8_t unk0D[0x10 - 0xD]; // D
    Vector2 offset; // 10
    Vector2 size; // 18
};
RED4EXT_ASSERT_SIZE(TutorialBracketData, 0x20);
} // namespace game
using gameTutorialBracketData = game::TutorialBracketData;
using TutorialBracketData = game::TutorialBracketData;
} // namespace RED4ext

// clang-format on
