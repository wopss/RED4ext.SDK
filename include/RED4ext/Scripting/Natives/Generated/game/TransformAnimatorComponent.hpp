#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TransformAnimationDefinition.hpp>

namespace RED4ext
{
namespace game { 
struct TransformAnimatorComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gameTransformAnimatorComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk120[0x180 - 0x120]; // 120
    DynArray<game::TransformAnimationDefinition> animations; // 180
};
RED4EXT_ASSERT_SIZE(TransformAnimatorComponent, 0x190);
} // namespace game
} // namespace RED4ext
