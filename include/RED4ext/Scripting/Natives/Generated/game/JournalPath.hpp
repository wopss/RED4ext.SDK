#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game
{
struct JournalPath : IScriptable
{
    static constexpr const char* NAME = "gameJournalPath";
    static constexpr const char* ALIAS = NAME;

    CString realPath; // 40
    uint8_t unk60[0x80 - 0x60]; // 60
    CName className; // 80
    int32_t fileEntryIndex; // 88
    uint8_t unk8C[0x90 - 0x8C]; // 8C
};
RED4EXT_ASSERT_SIZE(JournalPath, 0x90);
} // namespace game
using gameJournalPath = game::JournalPath;
} // namespace RED4ext

// clang-format on
