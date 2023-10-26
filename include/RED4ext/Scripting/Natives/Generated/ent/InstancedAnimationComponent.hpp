#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ISkinableComponent.hpp>

namespace RED4ext
{
namespace anim { struct AnimSet; }

namespace ent
{
struct __declspec(align(0x10)) InstancedAnimationComponent : ent::ISkinableComponent
{
    static constexpr const char* NAME = "entInstancedAnimationComponent";
    static constexpr const char* ALIAS = NAME;

    Ref<anim::AnimSet> animations; // 130
    CName animToSample; // 148
    CName variantAnimToSample; // 150
    CName variantTriggerTag; // 158
    uint8_t unk160[0x170 - 0x160]; // 160
};
RED4EXT_ASSERT_SIZE(InstancedAnimationComponent, 0x170);
} // namespace ent
using entInstancedAnimationComponent = ent::InstancedAnimationComponent;
} // namespace RED4ext

// clang-format on
