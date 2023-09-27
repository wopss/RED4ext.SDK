#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/VideoType.hpp>

namespace RED4ext
{
struct Bink;
namespace game { struct JournalEntryOverrideData; }

namespace game
{
struct PopupData
{
    static constexpr const char* NAME = "gamePopupData";
    static constexpr const char* ALIAS = "PopupData";

    CString title; // 00
    CString message; // 20
    DynArray<Handle<game::JournalEntryOverrideData>> messageOverrideDataList; // 40
    TweakDBID iconID; // 50
    bool isModal; // 58
    game::VideoType videoType; // 59
    uint8_t unk5A[0x60 - 0x5A]; // 5A
    RaRef<Bink> video; // 60
};
RED4EXT_ASSERT_SIZE(PopupData, 0x68);
} // namespace game
using gamePopupData = game::PopupData;
using PopupData = game::PopupData;
} // namespace RED4ext

// clang-format on
