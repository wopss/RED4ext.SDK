#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/IPoliciesSystem.hpp>

namespace RED4ext
{
namespace move
{
struct PoliciesSystem : move::IPoliciesSystem
{
    static constexpr const char* NAME = "movePoliciesSystem";
    static constexpr const char* ALIAS = "MovePoliciesSystem";

    uint8_t unk48[0x68 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(PoliciesSystem, 0x68);
} // namespace move
using movePoliciesSystem = move::PoliciesSystem;
using MovePoliciesSystem = move::PoliciesSystem;
} // namespace RED4ext

// clang-format on
