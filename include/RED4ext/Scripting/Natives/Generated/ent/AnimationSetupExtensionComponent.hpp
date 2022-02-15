#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimSetup.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace ent { struct AnimationControlBinding; }

namespace ent { 
struct AnimationSetupExtensionComponent : ent::IComponent
{
    static constexpr const char* NAME = "entAnimationSetupExtensionComponent";
    static constexpr const char* ALIAS = NAME;

    anim::AnimSetup animations; // 90
    Handle<ent::AnimationControlBinding> controlBinding; // B8
};
RED4EXT_ASSERT_SIZE(AnimationSetupExtensionComponent, 0xC8);
} // namespace ent
} // namespace RED4ext
