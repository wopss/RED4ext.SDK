#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace loc::alization { 
struct PersistenceSubtitleEntry
{
    static constexpr const char* NAME = "localizationPersistenceSubtitleEntry";
    static constexpr const char* ALIAS = NAME;

    CRUID stringId; // 00
    CString femaleVariant; // 08
    CString maleVariant; // 28
};
RED4EXT_ASSERT_SIZE(PersistenceSubtitleEntry, 0x48);
} // namespace loc::alization
} // namespace RED4ext
