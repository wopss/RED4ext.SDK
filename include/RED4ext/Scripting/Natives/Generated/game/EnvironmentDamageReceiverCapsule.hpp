#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EnvironmentDamageReceiverShape.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) EnvironmentDamageReceiverCapsule : game::EnvironmentDamageReceiverShape
{
    static constexpr const char* NAME = "gameEnvironmentDamageReceiverCapsule";
    static constexpr const char* ALIAS = NAME;

    float radius; // 50
    float height; // 54
    uint8_t unk58[0x60 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(EnvironmentDamageReceiverCapsule, 0x60);
} // namespace game
using gameEnvironmentDamageReceiverCapsule = game::EnvironmentDamageReceiverCapsule;
} // namespace RED4ext

// clang-format on
