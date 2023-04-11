#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace AI::behavior::tweak
{
struct NPCCallbacks
{
    static constexpr const char* NAME = "AIbehaviortweakNPCCallbacks";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x60 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(NPCCallbacks, 0x60);
} // namespace AI::behavior::tweak
using AIbehaviortweakNPCCallbacks = AI::behavior::tweak::NPCCallbacks;
} // namespace RED4ext

// clang-format on
