#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/VideoType.hpp>

namespace RED4ext
{
struct Bink;

namespace game { 
struct PopupData
{
    static constexpr const char* NAME = "gamePopupData";
    static constexpr const char* ALIAS = "PopupData";

    CString title; // 00
    CString message; // 20
    TweakDBID iconID; // 40
    bool isModal; // 48
    game::VideoType videoType; // 49
    uint8_t unk4A[0x50 - 0x4A]; // 4A
    RaRef<Bink> video; // 50
};
RED4EXT_ASSERT_SIZE(PopupData, 0x58);
} // namespace game
using PopupData = game::PopupData;
} // namespace RED4ext
