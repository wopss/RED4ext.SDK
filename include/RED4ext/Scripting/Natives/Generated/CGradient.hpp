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
struct CGradient : CResource
{
    static constexpr const char* NAME = "CGradient";
    static constexpr const char* ALIAS = NAME;

    DynArray<rend::GradientEntry> gradientEntries; // 40
    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(CGradient, 0x60);
} // namespace RED4ext

// clang-format on
