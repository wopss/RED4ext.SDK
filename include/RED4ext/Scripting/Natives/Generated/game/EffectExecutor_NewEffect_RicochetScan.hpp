#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectExecutor_NewEffect.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) EffectExecutor_NewEffect_RicochetScan : game::EffectExecutor_NewEffect
{
    static constexpr const char* NAME = "gameEffectExecutor_NewEffect_RicochetScan";
    static constexpr const char* ALIAS = NAME;

    Vector4 box; // 60
    bool isPreview; // 70
    bool onlyForPlayer; // 71
    uint8_t unk72[0x80 - 0x72]; // 72
};
RED4EXT_ASSERT_SIZE(EffectExecutor_NewEffect_RicochetScan, 0x80);
} // namespace game
using gameEffectExecutor_NewEffect_RicochetScan = game::EffectExecutor_NewEffect_RicochetScan;
} // namespace RED4ext

// clang-format on
