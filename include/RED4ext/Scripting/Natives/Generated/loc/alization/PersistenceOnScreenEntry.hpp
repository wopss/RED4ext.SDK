#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace loc::alization { 
struct PersistenceOnScreenEntry
{
    static constexpr const char* NAME = "localizationPersistenceOnScreenEntry";
    static constexpr const char* ALIAS = NAME;

    uint64_t primaryKey; // 00
    CString secondaryKey; // 08
    CString femaleVariant; // 28
    CString maleVariant; // 48
};
RED4EXT_ASSERT_SIZE(PersistenceOnScreenEntry, 0x68);
} // namespace loc::alization
} // namespace RED4ext
