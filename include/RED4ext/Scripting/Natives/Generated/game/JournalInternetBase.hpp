#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>

namespace RED4ext
{
namespace game
{
struct JournalInternetBase : IScriptable
{
    static constexpr const char* NAME = "gameJournalInternetBase";
    static constexpr const char* ALIAS = "JournalInternetBase";

    CName name; // 40
    CString linkAddress; // 48
    Color tintColor; // 68
    Color hoverTintColor; // 6C
};
RED4EXT_ASSERT_SIZE(JournalInternetBase, 0x70);
} // namespace game
using gameJournalInternetBase = game::JournalInternetBase;
using JournalInternetBase = game::JournalInternetBase;
} // namespace RED4ext

// clang-format on
