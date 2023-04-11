#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/Time.hpp>

namespace RED4ext
{
namespace game
{
struct MuppetCompressedInputStates
{
    static constexpr const char* NAME = "gameMuppetCompressedInputStates";
    static constexpr const char* ALIAS = NAME;

    bool usesCompression; // 00
    uint8_t unk01[0x8 - 0x1]; // 1
    DynArray<uint8_t> compressedInputStates; // 08
    uint32_t firstFrameId; // 18
    uint8_t unk1C[0x20 - 0x1C]; // 1C
    net::Time replicationTime; // 20
};
RED4EXT_ASSERT_SIZE(MuppetCompressedInputStates, 0x28);
} // namespace game
using gameMuppetCompressedInputStates = game::MuppetCompressedInputStates;
} // namespace RED4ext

// clang-format on
