#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }

namespace game
{
struct __declspec(align(0x10)) EffectNearlyHitAgentData
{
    static constexpr const char* NAME = "gameEffectNearlyHitAgentData";
    static constexpr const char* ALIAS = NAME;

    Vector4 hitPosition; // 00
    Vector4 hitDirection; // 10
    WeakHandle<ent::Entity> entity; // 20
    bool isPlayer; // 30
    bool wasHit; // 31
    uint8_t unk32[0x40 - 0x32]; // 32
};
RED4EXT_ASSERT_SIZE(EffectNearlyHitAgentData, 0x40);
} // namespace game
using gameEffectNearlyHitAgentData = game::EffectNearlyHitAgentData;
} // namespace RED4ext

// clang-format on
