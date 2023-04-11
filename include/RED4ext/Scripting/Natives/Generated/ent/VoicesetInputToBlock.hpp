#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace ent
{
struct VoicesetInputToBlock
{
    static constexpr const char* NAME = "entVoicesetInputToBlock";
    static constexpr const char* ALIAS = NAME;

    CName input; // 00
    uint32_t variationNumber; // 08
    bool blockSpecificVariation; // 0C
    uint8_t unk0D[0x10 - 0xD]; // D
};
RED4EXT_ASSERT_SIZE(VoicesetInputToBlock, 0x10);
} // namespace ent
using entVoicesetInputToBlock = ent::VoicesetInputToBlock;
} // namespace RED4ext

// clang-format on
