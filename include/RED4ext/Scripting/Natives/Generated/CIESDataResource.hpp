#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
struct CIESDataResource : CResource
{
    static constexpr const char* NAME = "CIESDataResource";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x44 - 0x40]; // 40
    NativeArray<uint16_t, 128> samples; // 44
    uint8_t unk144[0x148 - 0x144]; // 144
};
RED4EXT_ASSERT_SIZE(CIESDataResource, 0x148);
} // namespace RED4ext

// clang-format on
