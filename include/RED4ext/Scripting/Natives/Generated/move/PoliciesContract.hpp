#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace move
{
struct PoliciesContract : ISerializable
{
    static constexpr const char* NAME = "movePoliciesContract";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x58 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(PoliciesContract, 0x58);
} // namespace move
using movePoliciesContract = move::PoliciesContract;
} // namespace RED4ext

// clang-format on
