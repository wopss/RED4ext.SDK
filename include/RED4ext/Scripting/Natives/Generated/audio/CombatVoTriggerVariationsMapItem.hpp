#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace audio
{
struct CombatVoTriggerVariationsMapItem
{
    static constexpr const char* NAME = "audioCombatVoTriggerVariationsMapItem";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    int32_t numberOfVariations; // 08
    bool shuffle; // 0C
    uint8_t unk0D[0x10 - 0xD]; // D
};
RED4EXT_ASSERT_SIZE(CombatVoTriggerVariationsMapItem, 0x10);
} // namespace audio
using audioCombatVoTriggerVariationsMapItem = audio::CombatVoTriggerVariationsMapItem;
} // namespace RED4ext

// clang-format on
