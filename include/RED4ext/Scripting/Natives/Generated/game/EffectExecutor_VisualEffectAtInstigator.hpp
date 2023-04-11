#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectExecutor.hpp>

namespace RED4ext
{
namespace world { struct Effect; }

namespace game
{
struct EffectExecutor_VisualEffectAtInstigator : game::EffectExecutor
{
    static constexpr const char* NAME = "gameEffectExecutor_VisualEffectAtInstigator";
    static constexpr const char* ALIAS = NAME;

    RaRef<world::Effect> effect; // 48
};
RED4EXT_ASSERT_SIZE(EffectExecutor_VisualEffectAtInstigator, 0x50);
} // namespace game
using gameEffectExecutor_VisualEffectAtInstigator = game::EffectExecutor_VisualEffectAtInstigator;
} // namespace RED4ext

// clang-format on
