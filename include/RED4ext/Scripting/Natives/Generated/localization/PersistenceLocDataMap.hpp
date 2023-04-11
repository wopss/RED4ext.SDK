#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/localization/PersistenceLocDataMapEntry.hpp>

namespace RED4ext
{
namespace localization
{
struct PersistenceLocDataMap : ISerializable
{
    static constexpr const char* NAME = "localizationPersistenceLocDataMap";
    static constexpr const char* ALIAS = NAME;

    DynArray<localization::PersistenceLocDataMapEntry> entries; // 30
};
RED4EXT_ASSERT_SIZE(PersistenceLocDataMap, 0x40);
} // namespace localization
using localizationPersistenceLocDataMap = localization::PersistenceLocDataMap;
} // namespace RED4ext

// clang-format on
