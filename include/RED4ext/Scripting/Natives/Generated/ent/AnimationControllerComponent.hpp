#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <RED4ext/Scripting/Natives/entAnimationControllerComponent.hpp>

namespace RED4ext
{
RED4EXT_ASSERT_SIZE(ent::AnimationControllerComponent, 0x1F0);
using entAnimationControllerComponent = ent::AnimationControllerComponent;
using AnimationControllerComponent = ent::AnimationControllerComponent;
} // namespace RED4ext

/*
#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimDatabaseCollection.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace anim { struct ActionAnimDatabase; }
namespace ent { struct AnimationControlBinding; }

namespace ent
{
struct AnimationControllerComponent : ent::IComponent
{
    static constexpr const char* NAME = "entAnimationControllerComponent";
    static constexpr const char* ALIAS = "AnimationControllerComponent";

    uint8_t unk90[0xF8 - 0x90]; // 90
    Ref<anim::ActionAnimDatabase> actionAnimDatabaseRef; // F8
    anim::AnimDatabaseCollection animDatabaseCollection; // 110
    uint8_t unk120[0x1E0 - 0x120]; // 120
    Handle<ent::AnimationControlBinding> controlBinding; // 1E0
};
RED4EXT_ASSERT_SIZE(AnimationControllerComponent, 0x1F0);
} // namespace ent
using entAnimationControllerComponent = ent::AnimationControllerComponent;
using AnimationControllerComponent = ent::AnimationControllerComponent;
} // namespace RED4ext
*/

// clang-format on
