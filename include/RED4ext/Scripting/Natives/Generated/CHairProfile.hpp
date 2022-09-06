#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/GradientEntry.hpp>

namespace RED4ext
{
struct CHairProfile : CResource
{
    static constexpr const char* NAME = "CHairProfile";
    static constexpr const char* ALIAS = NAME;

    uint16_t sampleCount; // 40
    uint8_t unk42[0x48 - 0x42]; // 42
    DynArray<rend::GradientEntry> gradientEntriesID; // 48
    DynArray<rend::GradientEntry> gradientEntriesRootToTip; // 58
    uint8_t unk68[0x78 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(CHairProfile, 0x78);
} // namespace RED4ext

// clang-format on
