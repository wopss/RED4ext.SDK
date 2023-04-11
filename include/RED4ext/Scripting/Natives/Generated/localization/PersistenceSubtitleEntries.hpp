#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/localization/PersistenceSubtitleEntry.hpp>

namespace RED4ext
{
namespace localization
{
struct PersistenceSubtitleEntries : ISerializable
{
    static constexpr const char* NAME = "localizationPersistenceSubtitleEntries";
    static constexpr const char* ALIAS = NAME;

    DynArray<localization::PersistenceSubtitleEntry> entries; // 30
};
RED4EXT_ASSERT_SIZE(PersistenceSubtitleEntries, 0x40);
} // namespace localization
using localizationPersistenceSubtitleEntries = localization::PersistenceSubtitleEntries;
} // namespace RED4ext

// clang-format on
