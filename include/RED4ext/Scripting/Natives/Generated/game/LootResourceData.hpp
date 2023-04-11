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
struct LootResourceData : ISerializable
{
    static constexpr const char* NAME = "gameLootResourceData";
    static constexpr const char* ALIAS = NAME;

    uint32_t version; // 30
    uint8_t unk34[0x60 - 0x34]; // 34
};
RED4EXT_ASSERT_SIZE(LootResourceData, 0x60);
} // namespace game
using gameLootResourceData = game::LootResourceData;
} // namespace RED4ext

// clang-format on
