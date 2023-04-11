#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game
{
struct BinkVideoRecord : ISerializable
{
    static constexpr const char* NAME = "gameBinkVideoRecord";
    static constexpr const char* ALIAS = NAME;

    uint64_t resourceHash; // 30
    float binkDuration; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(BinkVideoRecord, 0x40);
} // namespace game
using gameBinkVideoRecord = game::BinkVideoRecord;
} // namespace RED4ext

// clang-format on
