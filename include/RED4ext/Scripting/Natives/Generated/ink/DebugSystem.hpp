#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IDebugSystem.hpp>

namespace RED4ext
{
namespace ink
{
struct DebugSystem : ink::IDebugSystem
{
    static constexpr const char* NAME = "inkDebugSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x70 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(DebugSystem, 0x70);
} // namespace ink
using inkDebugSystem = ink::DebugSystem;
} // namespace RED4ext

// clang-format on
