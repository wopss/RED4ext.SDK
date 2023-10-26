#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IMoverComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TransformAnimationDefinition.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) RootTransformAnimatorComponent : ent::IMoverComponent
{
    static constexpr const char* NAME = "gameRootTransformAnimatorComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0xF0 - 0x90]; // 90
    DynArray<game::TransformAnimationDefinition> animations; // F0
    uint8_t unk100[0x110 - 0x100]; // 100
};
RED4EXT_ASSERT_SIZE(RootTransformAnimatorComponent, 0x110);
} // namespace game
using gameRootTransformAnimatorComponent = game::RootTransformAnimatorComponent;
} // namespace RED4ext

// clang-format on
