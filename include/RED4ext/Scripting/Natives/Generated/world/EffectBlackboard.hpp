#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace world
{
struct EffectBlackboard : IScriptable
{
    static constexpr const char* NAME = "worldEffectBlackboard";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x70 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(EffectBlackboard, 0x70);
} // namespace world
using worldEffectBlackboard = world::EffectBlackboard;
} // namespace RED4ext

// clang-format on
