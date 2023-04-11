#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IWaitingSignSystem.hpp>

namespace RED4ext
{
namespace ink
{
struct WaitingSignSystem : ink::IWaitingSignSystem
{
    static constexpr const char* NAME = "inkWaitingSignSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x178 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(WaitingSignSystem, 0x178);
} // namespace ink
using inkWaitingSignSystem = ink::WaitingSignSystem;
} // namespace RED4ext

// clang-format on
