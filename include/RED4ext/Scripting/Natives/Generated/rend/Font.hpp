#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
namespace rend
{
struct Font : CResource
{
    static constexpr const char* NAME = "rendFont";
    static constexpr const char* ALIAS = NAME;

    DataBuffer fontBuffer; // 40
    uint8_t unk68[0xA8 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(Font, 0xA8);
} // namespace rend
using rendFont = rend::Font;
} // namespace RED4ext

// clang-format on
