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
struct IGameSystemReplicatedState : ISerializable
{
    static constexpr const char* NAME = "gameIGameSystemReplicatedState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x40 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(IGameSystemReplicatedState, 0x40);
} // namespace game
using gameIGameSystemReplicatedState = game::IGameSystemReplicatedState;
} // namespace RED4ext

// clang-format on
