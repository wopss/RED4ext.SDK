#pragma once

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
    NativeArray<uint8_t, 128> samples; // 44
    uint8_t unkC4[0xC8 - 0xC4]; // C4
};
RED4EXT_ASSERT_SIZE(CIESDataResource, 0xC8);
} // namespace RED4ext
