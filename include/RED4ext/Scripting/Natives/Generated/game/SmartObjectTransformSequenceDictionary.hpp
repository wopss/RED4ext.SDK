#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SmartObjectTransformSequenceDictionaryEntry.hpp>

namespace RED4ext
{
namespace game { 
struct SmartObjectTransformSequenceDictionary : ISerializable
{
    static constexpr const char* NAME = "gameSmartObjectTransformSequenceDictionary";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x50 - 0x30]; // 30
    DynArray<game::SmartObjectTransformSequenceDictionaryEntry> sequences; // 50
    uint8_t unk60[0xC0 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(SmartObjectTransformSequenceDictionary, 0xC0);
} // namespace game
} // namespace RED4ext
