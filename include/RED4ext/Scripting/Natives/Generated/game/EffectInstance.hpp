#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IEffect.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) EffectInstance : game::IEffect
{
    static constexpr const char* NAME = "gameEffectInstance";
    static constexpr const char* ALIAS = "EffectInstance";

    uint8_t unk40[0x5AB0 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(EffectInstance, 0x5AB0);
} // namespace game
using gameEffectInstance = game::EffectInstance;
using EffectInstance = game::EffectInstance;
} // namespace RED4ext

// clang-format on
