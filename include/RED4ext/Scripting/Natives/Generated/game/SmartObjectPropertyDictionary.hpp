#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SmartObjectPropertyDictionaryPropertyEntry.hpp>

namespace RED4ext
{
namespace game
{
struct SmartObjectPropertyDictionary : ISerializable
{
    static constexpr const char* NAME = "gameSmartObjectPropertyDictionary";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x50 - 0x30]; // 30
    DynArray<game::SmartObjectPropertyDictionaryPropertyEntry> properties; // 50
    uint8_t unk60[0xC0 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(SmartObjectPropertyDictionary, 0xC0);
} // namespace game
using gameSmartObjectPropertyDictionary = game::SmartObjectPropertyDictionary;
} // namespace RED4ext

// clang-format on
