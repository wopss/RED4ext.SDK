#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace world { struct Effect; }

namespace game
{
struct EffectExecutor_KatanaBulletBendingEffectEntry
{
    static constexpr const char* NAME = "gameEffectExecutor_KatanaBulletBendingEffectEntry";
    static constexpr const char* ALIAS = NAME;

    CName tag; // 00
    RaRef<world::Effect> effect; // 08
    bool attach; // 10
    uint8_t unk11[0x18 - 0x11]; // 11
};
RED4EXT_ASSERT_SIZE(EffectExecutor_KatanaBulletBendingEffectEntry, 0x18);
} // namespace game
using gameEffectExecutor_KatanaBulletBendingEffectEntry = game::EffectExecutor_KatanaBulletBendingEffectEntry;
} // namespace RED4ext

// clang-format on
