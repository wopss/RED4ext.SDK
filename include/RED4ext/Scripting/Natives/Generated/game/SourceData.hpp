#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game
{
struct SourceData : ISerializable
{
    static constexpr const char* NAME = "gameSourceData";
    static constexpr const char* ALIAS = NAME;

    CName name; // 30
    bool savable; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(SourceData, 0x40);
} // namespace game
using gameSourceData = game::SourceData;
} // namespace RED4ext

// clang-format on
