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
struct SimpleSpecificStatListener : ISerializable
{
    static constexpr const char* NAME = "gameSimpleSpecificStatListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x40 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(SimpleSpecificStatListener, 0x40);
} // namespace game
using gameSimpleSpecificStatListener = game::SimpleSpecificStatListener;
} // namespace RED4ext

// clang-format on
