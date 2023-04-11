#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/IRuntimeSystem.hpp>

namespace RED4ext
{
namespace world
{
struct RuntimeSystemEffectAttachments : world::IRuntimeSystem
{
    static constexpr const char* NAME = "worldRuntimeSystemEffectAttachments";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RuntimeSystemEffectAttachments, 0x60);
} // namespace world
using worldRuntimeSystemEffectAttachments = world::RuntimeSystemEffectAttachments;
} // namespace RED4ext

// clang-format on
