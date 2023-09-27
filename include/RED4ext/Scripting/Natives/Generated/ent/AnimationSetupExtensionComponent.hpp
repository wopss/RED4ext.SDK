#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimSetup.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace ent { struct AnimationControlBinding; }

namespace ent
{
struct AnimationSetupExtensionComponent : ent::IComponent
{
    static constexpr const char* NAME = "entAnimationSetupExtensionComponent";
    static constexpr const char* ALIAS = NAME;

    bool isOverrideContainer; // 90
    uint8_t unk91[0x98 - 0x91]; // 91
    anim::AnimSetup animations; // 98
    Handle<ent::AnimationControlBinding> controlBinding; // C0
};
RED4EXT_ASSERT_SIZE(AnimationSetupExtensionComponent, 0xD0);
} // namespace ent
using entAnimationSetupExtensionComponent = ent::AnimationSetupExtensionComponent;
} // namespace RED4ext

// clang-format on
