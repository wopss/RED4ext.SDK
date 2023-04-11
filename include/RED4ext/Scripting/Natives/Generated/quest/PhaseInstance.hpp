#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace quest
{
struct PhaseInstance : ISerializable
{
    static constexpr const char* NAME = "questPhaseInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x110 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(PhaseInstance, 0x110);
} // namespace quest
using questPhaseInstance = quest::PhaseInstance;
} // namespace RED4ext

// clang-format on
