#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) SmartObjectTransformDictionaryTransformEntry
{
    static constexpr const char* NAME = "gameSmartObjectTransformDictionaryTransformEntry";
    static constexpr const char* ALIAS = NAME;

    Transform transform; // 00
    uint32_t usage; // 20
    uint16_t id; // 24
    uint8_t unk26[0x30 - 0x26]; // 26
};
RED4EXT_ASSERT_SIZE(SmartObjectTransformDictionaryTransformEntry, 0x30);
} // namespace game
using gameSmartObjectTransformDictionaryTransformEntry = game::SmartObjectTransformDictionaryTransformEntry;
} // namespace RED4ext

// clang-format on
