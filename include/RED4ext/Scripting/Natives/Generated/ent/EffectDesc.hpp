#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CompiledEffectInfo.hpp>

namespace RED4ext
{
namespace world { struct Effect; }

namespace ent
{
struct EffectDesc : ISerializable
{
    static constexpr const char* NAME = "entEffectDesc";
    static constexpr const char* ALIAS = NAME;

    CName effectName; // 30
    CRUID id; // 38
    RaRef<world::Effect> effect; // 40
    world::CompiledEffectInfo compiledEffectInfo; // 48
    CName autoSpawnTag; // B0
    bool isAutoSpawn; // B8
    uint8_t randomWeight; // B9
    uint8_t unkBA[0xC0 - 0xBA]; // BA
};
RED4EXT_ASSERT_SIZE(EffectDesc, 0xC0);
} // namespace ent
using entEffectDesc = ent::EffectDesc;
} // namespace RED4ext

// clang-format on
