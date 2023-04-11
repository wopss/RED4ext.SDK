#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/MultiplayerAIDirectorFunction.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/MultiplayerAIDirectorStatus.hpp>

namespace RED4ext
{
namespace quest
{
struct MultiplayerAIDirectorParams : ISerializable
{
    static constexpr const char* NAME = "questMultiplayerAIDirectorParams";
    static constexpr const char* ALIAS = NAME;

    quest::MultiplayerAIDirectorFunction function; // 30
    quest::MultiplayerAIDirectorStatus status; // 34
    NodeRef pathRef; // 38
    CString scheduleEntryName; // 40
    CString scheduleName; // 60
};
RED4EXT_ASSERT_SIZE(MultiplayerAIDirectorParams, 0x80);
} // namespace quest
using questMultiplayerAIDirectorParams = quest::MultiplayerAIDirectorParams;
} // namespace RED4ext

// clang-format on
