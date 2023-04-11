#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ILayerSystemAccesor.hpp>

namespace RED4ext
{
namespace ink
{
struct HudSystemAccessor : ink::ILayerSystemAccesor
{
    static constexpr const char* NAME = "inkHudSystemAccessor";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x68 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(HudSystemAccessor, 0x68);
} // namespace ink
using inkHudSystemAccessor = ink::HudSystemAccessor;
} // namespace RED4ext

// clang-format on
