#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace AI
{
struct SquadBase : ISerializable
{
    static constexpr const char* NAME = "AISquadBase";
    static constexpr const char* ALIAS = "SquadBase";

    uint8_t unk30[0x148 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(SquadBase, 0x148);
} // namespace AI
using AISquadBase = AI::SquadBase;
using SquadBase = AI::SquadBase;
} // namespace RED4ext

// clang-format on
