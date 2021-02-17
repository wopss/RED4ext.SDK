#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/anim/AnimDatabaseCollection.hpp>
#include <RED4ext/Types/generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace anim { struct ActionAnimDatabase; }
namespace ent { struct AnimationControlBinding; }

namespace ent { 
struct AnimationControllerComponent : ent::IComponent
{
    static constexpr const char* NAME = "entAnimationControllerComponent";
    static constexpr const char* ALIAS = "AnimationControllerComponent";

    uint8_t unk90[0xF8 - 0x90]; // 90
    Ref<anim::ActionAnimDatabase> actionAnimDatabaseRef; // F8
    anim::AnimDatabaseCollection animDatabaseCollection; // 110
    uint8_t unk120[0x1C8 - 0x120]; // 120
    Handle<ent::AnimationControlBinding> controlBinding; // 1C8
};
RED4EXT_ASSERT_SIZE(AnimationControllerComponent, 0x1D8);
} // namespace ent
using AnimationControllerComponent = ent::AnimationControllerComponent;
} // namespace RED4ext
