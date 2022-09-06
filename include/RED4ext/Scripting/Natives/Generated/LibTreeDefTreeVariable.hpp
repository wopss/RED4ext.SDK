#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
struct LibTreeDefTreeVariable : ISerializable
{
    static constexpr const char* NAME = "LibTreeDefTreeVariable";
    static constexpr const char* ALIAS = NAME;

    bool exportAsProperty; // 30
    uint8_t unk31[0x32 - 0x31]; // 31
    uint16_t id; // 32
    uint8_t unk34[0x38 - 0x34]; // 34
    CName readableName; // 38
};
RED4EXT_ASSERT_SIZE(LibTreeDefTreeVariable, 0x40);
} // namespace RED4ext

// clang-format on
