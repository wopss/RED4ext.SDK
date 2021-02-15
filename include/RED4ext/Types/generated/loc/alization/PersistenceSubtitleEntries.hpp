#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Types/generated/loc/alization/PersistenceSubtitleEntry.hpp>

namespace RED4ext
{
namespace loc::alization { 
struct PersistenceSubtitleEntries : ISerializable
{
    static constexpr const char* NAME = "localizationPersistenceSubtitleEntries";
    static constexpr const char* ALIAS = NAME;

    DynArray<loc::alization::PersistenceSubtitleEntry> entries; // 30
};
RED4EXT_ASSERT_SIZE(PersistenceSubtitleEntries, 0x40);
} // namespace loc::alization
} // namespace RED4ext
