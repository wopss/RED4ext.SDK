#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/localization/PersistenceSubtitleMapEntry.hpp>

namespace RED4ext
{
namespace localization
{
struct PersistenceSubtitleMap : ISerializable
{
    static constexpr const char* NAME = "localizationPersistenceSubtitleMap";
    static constexpr const char* ALIAS = NAME;

    DynArray<localization::PersistenceSubtitleMapEntry> entries; // 30
};
RED4EXT_ASSERT_SIZE(PersistenceSubtitleMap, 0x40);
} // namespace localization
using localizationPersistenceSubtitleMap = localization::PersistenceSubtitleMap;
} // namespace RED4ext

// clang-format on
