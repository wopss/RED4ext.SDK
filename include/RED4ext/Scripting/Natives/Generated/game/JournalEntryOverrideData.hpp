#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/input/EInputScheme.hpp>
#include <RED4ext/Scripting/Natives/Generated/input/ESimplifiedInputDevice.hpp>

namespace RED4ext
{
namespace game
{
struct JournalEntryOverrideData : IScriptable
{
    static constexpr const char* NAME = "gameJournalEntryOverrideData";
    static constexpr const char* ALIAS = "JournalEntryOverrideData";

    input::ESimplifiedInputDevice inputDevice; // 40
    input::EInputScheme inputScheme; // 41
    uint8_t unk42[0x48 - 0x42]; // 42
    LocalizationString overriddenLocalizationString; // 48
};
RED4EXT_ASSERT_SIZE(JournalEntryOverrideData, 0x70);
} // namespace game
using gameJournalEntryOverrideData = game::JournalEntryOverrideData;
using JournalEntryOverrideData = game::JournalEntryOverrideData;
} // namespace RED4ext

// clang-format on
