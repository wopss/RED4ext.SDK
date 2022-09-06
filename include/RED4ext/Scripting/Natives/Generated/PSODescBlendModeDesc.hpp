#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/PSODescRenderTarget.hpp>

namespace RED4ext
{
struct PSODescBlendModeDesc
{
    static constexpr const char* NAME = "PSODescBlendModeDesc";
    static constexpr const char* ALIAS = NAME;

    uint8_t numTargets; // 00
    bool independent; // 01
    bool alphaToCoverage; // 02
    NativeArray<PSODescRenderTarget, 8> renderTarget; // 03
};
RED4EXT_ASSERT_SIZE(PSODescBlendModeDesc, 0x43);
} // namespace RED4ext

// clang-format on
