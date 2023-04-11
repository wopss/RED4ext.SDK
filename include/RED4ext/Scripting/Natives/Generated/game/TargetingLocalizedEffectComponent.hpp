#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game
{
struct TargetingLocalizedEffectComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameTargetingLocalizedEffectComponent";
    static constexpr const char* ALIAS = NAME;

    float streamingDistance; // 90
    float visibleTargetRange; // 94
};
RED4EXT_ASSERT_SIZE(TargetingLocalizedEffectComponent, 0x98);
} // namespace game
using gameTargetingLocalizedEffectComponent = game::TargetingLocalizedEffectComponent;
} // namespace RED4ext

// clang-format on
