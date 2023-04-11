#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct GearSweetener : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioGearSweetener";
    static constexpr const char* ALIAS = NAME;

    uint32_t gear; // 38
    float rpmThreshold; // 3C
    float cooldown; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    CName soundEvent; // 48
    float burnoutFactor; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(GearSweetener, 0x58);
} // namespace audio
using audioGearSweetener = audio::GearSweetener;
} // namespace RED4ext

// clang-format on
