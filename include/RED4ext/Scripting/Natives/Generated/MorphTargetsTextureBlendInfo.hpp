#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/MorphTargetsDiffTextureSize.hpp>

namespace RED4ext
{
struct MorphTargetsTextureBlendInfo
{
    static constexpr const char* NAME = "MorphTargetsTextureBlendInfo";
    static constexpr const char* ALIAS = NAME;

    bool blend; // 00
    MorphTargetsDiffTextureSize diffSize; // 01
    uint8_t unk02[0x8 - 0x2]; // 2
    CName name; // 08
};
RED4EXT_ASSERT_SIZE(MorphTargetsTextureBlendInfo, 0x10);
} // namespace RED4ext

// clang-format on
