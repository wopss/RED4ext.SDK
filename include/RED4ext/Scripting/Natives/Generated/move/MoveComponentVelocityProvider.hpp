#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IVelocityProvider.hpp>

namespace RED4ext
{
namespace move
{
struct MoveComponentVelocityProvider : ent::IVelocityProvider
{
    static constexpr const char* NAME = "moveMoveComponentVelocityProvider";
    static constexpr const char* ALIAS = "MoveComponentVelocityProvider";

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(MoveComponentVelocityProvider, 0x50);
} // namespace move
using moveMoveComponentVelocityProvider = move::MoveComponentVelocityProvider;
using MoveComponentVelocityProvider = move::MoveComponentVelocityProvider;
} // namespace RED4ext

// clang-format on
