#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/anim/AnimSetup.hpp>
#include <RED4ext/Types/generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace ent { struct AnimationControlBinding; }

namespace ent { 
struct AnimationSetupExtensionComponent : ent::IComponent
{
    static constexpr const char* NAME = "entAnimationSetupExtensionComponent";
    static constexpr const char* ALIAS = NAME;

    anim::AnimSetup animations; // 90
    uint8_t unkB0[0xB8 - 0xB0]; // B0
    Handle<ent::AnimationControlBinding> controlBinding; // B8
};
RED4EXT_ASSERT_SIZE(AnimationSetupExtensionComponent, 0xC8);
} // namespace ent
} // namespace RED4ext
