#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/loc/VoLanguageDataEntry.hpp>

namespace RED4ext
{
namespace loc
{
struct VoLanguageDataMap : ISerializable
{
    static constexpr const char* NAME = "locVoLanguageDataMap";
    static constexpr const char* ALIAS = NAME;

    DynArray<loc::VoLanguageDataEntry> entries; // 30
};
RED4EXT_ASSERT_SIZE(VoLanguageDataMap, 0x40);
} // namespace loc
using locVoLanguageDataMap = loc::VoLanguageDataMap;
} // namespace RED4ext

// clang-format on
